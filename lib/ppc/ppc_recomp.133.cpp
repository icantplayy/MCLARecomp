#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82654AC8"))) PPC_WEAK_FUNC(sub_82654AC8);
PPC_FUNC_IMPL(__imp__sub_82654AC8) {
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
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82654AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654b40
	if (ctx.cr6.eq) goto loc_82654B40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,6512
	ctx.r31.s64 = ctx.r11.s64 + 6512;
	// lwz r9,784(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82654B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82654B10:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82654b34
	if (ctx.cr6.eq) goto loc_82654B34;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82654b10
	if (ctx.cr6.eq) goto loc_82654B10;
loc_82654B34:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82654b44
	if (ctx.cr6.eq) goto loc_82654B44;
loc_82654B40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82654B44:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82654B5C"))) PPC_WEAK_FUNC(sub_82654B5C);
PPC_FUNC_IMPL(__imp__sub_82654B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654B60"))) PPC_WEAK_FUNC(sub_82654B60);
PPC_FUNC_IMPL(__imp__sub_82654B60) {
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
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82654B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654bd8
	if (ctx.cr6.eq) goto loc_82654BD8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,8860
	ctx.r31.s64 = ctx.r11.s64 + 8860;
	// lwz r9,784(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82654BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82654BA8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82654bcc
	if (ctx.cr6.eq) goto loc_82654BCC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82654ba8
	if (ctx.cr6.eq) goto loc_82654BA8;
loc_82654BCC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82654bdc
	if (ctx.cr6.eq) goto loc_82654BDC;
loc_82654BD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82654BDC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82654BF4"))) PPC_WEAK_FUNC(sub_82654BF4);
PPC_FUNC_IMPL(__imp__sub_82654BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654BF8"))) PPC_WEAK_FUNC(sub_82654BF8);
PPC_FUNC_IMPL(__imp__sub_82654BF8) {
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
	// bl 0x82654ac8
	ctx.lr = 0x82654C10;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82654c40
	if (!ctx.cr6.eq) goto loc_82654C40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82654b60
	ctx.lr = 0x82654C24;
	sub_82654B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82654c40
	if (!ctx.cr6.eq) goto loc_82654C40;
	// lbz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82654c44
	if (ctx.cr6.eq) goto loc_82654C44;
loc_82654C40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82654C44:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82654C5C"))) PPC_WEAK_FUNC(sub_82654C5C);
PPC_FUNC_IMPL(__imp__sub_82654C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654C60"))) PPC_WEAK_FUNC(sub_82654C60);
PPC_FUNC_IMPL(__imp__sub_82654C60) {
	PPC_FUNC_PROLOGUE();
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654C68"))) PPC_WEAK_FUNC(sub_82654C68);
PPC_FUNC_IMPL(__imp__sub_82654C68) {
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
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r11,r31,928
	ctx.r11.s64 = ctx.r31.s64 + 928;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r10,28572
	ctx.r4.s64 = ctx.r10.s64 + 28572;
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8262ffe0
	ctx.lr = 0x82654C98;
	sub_8262FFE0(ctx, base);
	// addi r9,r31,1376
	ctx.r9.s64 = ctx.r31.s64 + 1376;
	// stw r9,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82654CB4"))) PPC_WEAK_FUNC(sub_82654CB4);
PPC_FUNC_IMPL(__imp__sub_82654CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654CB8"))) PPC_WEAK_FUNC(sub_82654CB8);
PPC_FUNC_IMPL(__imp__sub_82654CB8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r31,952
	ctx.r11.s64 = ctx.r31.s64 + 952;
	// addi r3,r10,-5016
	ctx.r3.s64 = ctx.r10.s64 + -5016;
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// bl 0x821fa230
	ctx.lr = 0x82654CE0;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82654CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82654d10
	if (ctx.cr6.eq) goto loc_82654D10;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,28860
	ctx.r4.s64 = ctx.r11.s64 + 28860;
	// b 0x82654d1c
	goto loc_82654D1C;
loc_82654D10:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,28500
	ctx.r4.s64 = ctx.r11.s64 + 28500;
loc_82654D1C:
	// bl 0x8262ffe0
	ctx.lr = 0x82654D20;
	sub_8262FFE0(ctx, base);
	// addi r10,r31,1376
	ctx.r10.s64 = ctx.r31.s64 + 1376;
	// stw r10,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82654D3C"))) PPC_WEAK_FUNC(sub_82654D3C);
PPC_FUNC_IMPL(__imp__sub_82654D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654D40"))) PPC_WEAK_FUNC(sub_82654D40);
PPC_FUNC_IMPL(__imp__sub_82654D40) {
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
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r11,r31,976
	ctx.r11.s64 = ctx.r31.s64 + 976;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,28500
	ctx.r4.s64 = ctx.r10.s64 + 28500;
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8262ffe0
	ctx.lr = 0x82654D70;
	sub_8262FFE0(ctx, base);
	// addi r9,r31,1360
	ctx.r9.s64 = ctx.r31.s64 + 1360;
	// stw r9,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82654D8C"))) PPC_WEAK_FUNC(sub_82654D8C);
PPC_FUNC_IMPL(__imp__sub_82654D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654D90"))) PPC_WEAK_FUNC(sub_82654D90);
PPC_FUNC_IMPL(__imp__sub_82654D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 864);
	// addi r10,r3,976
	ctx.r10.s64 = ctx.r3.s64 + 976;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654DA8"))) PPC_WEAK_FUNC(sub_82654DA8);
PPC_FUNC_IMPL(__imp__sub_82654DA8) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82654DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82654dec
	if (ctx.cr6.eq) goto loc_82654DEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82130000
	ctx.lr = 0x82654DEC;
	sub_82130000(ctx, base);
loc_82654DEC:
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

__attribute__((alias("__imp__sub_82654E04"))) PPC_WEAK_FUNC(sub_82654E04);
PPC_FUNC_IMPL(__imp__sub_82654E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654E08"))) PPC_WEAK_FUNC(sub_82654E08);
PPC_FUNC_IMPL(__imp__sub_82654E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1056(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
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

__attribute__((alias("__imp__sub_82654E1C"))) PPC_WEAK_FUNC(sub_82654E1C);
PPC_FUNC_IMPL(__imp__sub_82654E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654E20"))) PPC_WEAK_FUNC(sub_82654E20);
PPC_FUNC_IMPL(__imp__sub_82654E20) {
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
	// lwz r3,1056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82654E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// lwz r9,1056(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	// twllei r3,0
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// divw r7,r8,r3
	ctx.r7.s32 = ctx.r8.s32 / ctx.r3.s32;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r6,r7,r3
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// subf r4,r6,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r6.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r4,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r4.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// andc r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// twlgei r11,-1
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82654E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,1060(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82654ec4
	if (!ctx.cr6.lt) goto loc_82654EC4;
	// lwz r3,1056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82654EB0;
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
loc_82654EC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,3998
	ctx.r3.s64 = ctx.r11.s64 + 3998;
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

__attribute__((alias("__imp__sub_82654EE0"))) PPC_WEAK_FUNC(sub_82654EE0);
PPC_FUNC_IMPL(__imp__sub_82654EE0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82654F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82654F24;
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

__attribute__((alias("__imp__sub_82654F38"))) PPC_WEAK_FUNC(sub_82654F38);
PPC_FUNC_IMPL(__imp__sub_82654F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82654F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,56
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 56, ctx.xer);
	// beq cr6,0x82655078
	if (ctx.cr6.eq) goto loc_82655078;
	// cmpwi cr6,r4,59
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 59, ctx.xer);
	// beq cr6,0x82654f64
	if (ctx.cr6.eq) goto loc_82654F64;
	// bl 0x826537d0
	ctx.lr = 0x82654F5C;
	sub_826537D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82654F64:
	// bl 0x82654b60
	ctx.lr = 0x82654F68;
	sub_82654B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82655060
	if (!ctx.cr6.eq) goto loc_82655060;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x82654F80;
	sub_821E6800(ctx, base);
	// addi r31,r29,672
	ctx.r31.s64 = ctx.r29.s64 + 672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,672(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 672);
	// bl 0x82203240
	ctx.lr = 0x82654F90;
	sub_82203240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,656(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82654FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r9,6328
	ctx.r11.s64 = ctx.r9.s64 + 6328;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82654FC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82654fc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82654FC0;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,106
	ctx.r3.s64 = ctx.r1.s64 + 106;
	// bl 0x823d9890
	ctx.lr = 0x82654FE4;
	sub_823D9890(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82654FEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82654fec
	if (!ctx.cr6.eq) goto loc_82654FEC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82655000:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82655000
	if (!ctx.cr6.eq) goto loc_82655000;
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,23088
	ctx.r9.s64 = ctx.r11.s64 + 23088;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r10,-4992
	ctx.r6.s64 = ctx.r10.s64 + -4992;
	// ld r8,23088(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23088);
	// li r7,5
	ctx.r7.s64 = 5;
	// stb r4,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r4.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r29,1200
	ctx.r3.s64 = ctx.r29.s64 + 1200;
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x82655054;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82655060:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24612);
	// bl 0x821e6800
	ctx.lr = 0x8265506C;
	sub_821E6800(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82655078:
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,-3624(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3624);
	// lwz r8,700(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stb r10,796(r7)
	PPC_STORE_U8(ctx.r7.u32 + 796, ctx.r10.u8);
	// lwz r11,-3624(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3624);
	// lwz r6,700(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stb r10,797(r11)
	PPC_STORE_U8(ctx.r11.u32 + 797, ctx.r10.u8);
	// bl 0x826537d0
	ctx.lr = 0x826550A8;
	sub_826537D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826550B4"))) PPC_WEAK_FUNC(sub_826550B4);
PPC_FUNC_IMPL(__imp__sub_826550B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826550B8"))) PPC_WEAK_FUNC(sub_826550B8);
PPC_FUNC_IMPL(__imp__sub_826550B8) {
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
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x826550D4;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826550E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826550e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826550E4;
	// addi r10,r31,6068
	ctx.r10.s64 = ctx.r31.s64 + 6068;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655108:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655108;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x82655124;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655134:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655134;
	// addi r10,r31,6308
	ctx.r10.s64 = ctx.r31.s64 + 6308;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655158:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655158;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x82655174;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655184:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655184;
	// addi r10,r31,6548
	ctx.r10.s64 = ctx.r31.s64 + 6548;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826551A8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826551a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826551A8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x826551C4;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826551D4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826551d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826551D4;
	// addi r10,r31,6788
	ctx.r10.s64 = ctx.r31.s64 + 6788;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826551F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826551f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826551F8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x82655214;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655224:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655224;
	// addi r10,r31,7028
	ctx.r10.s64 = ctx.r31.s64 + 7028;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655248:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x82655264;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655274:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655274
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655274;
	// addi r10,r31,7268
	ctx.r10.s64 = ctx.r31.s64 + 7268;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655298:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655298;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x826552B4;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826552C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826552c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826552C4;
	// addi r10,r31,7508
	ctx.r10.s64 = ctx.r31.s64 + 7508;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826552E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826552e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826552E8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x82655304;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655314:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655314;
	// addi r10,r31,7748
	ctx.r10.s64 = ctx.r31.s64 + 7748;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655338:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655338;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x82655354;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655364:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655364;
	// addi r10,r31,7988
	ctx.r10.s64 = ctx.r31.s64 + 7988;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655388:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655388;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x826553A4;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826553B4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826553b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826553B4;
	// addi r10,r31,8228
	ctx.r10.s64 = ctx.r31.s64 + 8228;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826553D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826553d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826553D8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x826553F4;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655404:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655404;
	// addi r10,r31,8468
	ctx.r10.s64 = ctx.r31.s64 + 8468;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655428:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82655428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82655428;
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

__attribute__((alias("__imp__sub_82655450"))) PPC_WEAK_FUNC(sub_82655450);
PPC_FUNC_IMPL(__imp__sub_82655450) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265547C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82630318
	ctx.lr = 0x82655488;
	sub_82630318(ctx, base);
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

__attribute__((alias("__imp__sub_826554A0"))) PPC_WEAK_FUNC(sub_826554A0);
PPC_FUNC_IMPL(__imp__sub_826554A0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,5856
	ctx.r3.s64 = ctx.r31.s64 + 5856;
	// bl 0x8262fff0
	ctx.lr = 0x826554C0;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,6096
	ctx.r3.s64 = ctx.r31.s64 + 6096;
	// bl 0x8262fff0
	ctx.lr = 0x826554CC;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,6336
	ctx.r3.s64 = ctx.r31.s64 + 6336;
	// bl 0x8262fff0
	ctx.lr = 0x826554D8;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,6576
	ctx.r3.s64 = ctx.r31.s64 + 6576;
	// bl 0x8262fff0
	ctx.lr = 0x826554E4;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,6816
	ctx.r3.s64 = ctx.r31.s64 + 6816;
	// bl 0x8262fff0
	ctx.lr = 0x826554F0;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,7056
	ctx.r3.s64 = ctx.r31.s64 + 7056;
	// bl 0x8262fff0
	ctx.lr = 0x826554FC;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,7296
	ctx.r3.s64 = ctx.r31.s64 + 7296;
	// bl 0x8262fff0
	ctx.lr = 0x82655508;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,7536
	ctx.r3.s64 = ctx.r31.s64 + 7536;
	// bl 0x8262fff0
	ctx.lr = 0x82655514;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,7776
	ctx.r3.s64 = ctx.r31.s64 + 7776;
	// bl 0x8262fff0
	ctx.lr = 0x82655520;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8016
	ctx.r3.s64 = ctx.r31.s64 + 8016;
	// bl 0x8262fff0
	ctx.lr = 0x8265552C;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8256
	ctx.r3.s64 = ctx.r31.s64 + 8256;
	// bl 0x8262fff0
	ctx.lr = 0x82655538;
	sub_8262FFF0(ctx, base);
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

__attribute__((alias("__imp__sub_8265554C"))) PPC_WEAK_FUNC(sub_8265554C);
PPC_FUNC_IMPL(__imp__sub_8265554C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655550"))) PPC_WEAK_FUNC(sub_82655550);
PPC_FUNC_IMPL(__imp__sub_82655550) {
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
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826555a4
	if (ctx.cr6.eq) goto loc_826555A4;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82655584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// addi r11,r31,1392
	ctx.r11.s64 = ctx.r31.s64 + 1392;
	// stw r3,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r3.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x826555a4
	if (ctx.cr6.eq) goto loc_826555A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,228
	ctx.r3.s64 = ctx.r11.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x826555A4;
	sub_821C3048(ctx, base);
loc_826555A4:
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

__attribute__((alias("__imp__sub_826555B8"))) PPC_WEAK_FUNC(sub_826555B8);
PPC_FUNC_IMPL(__imp__sub_826555B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826555C8"))) PPC_WEAK_FUNC(sub_826555C8);
PPC_FUNC_IMPL(__imp__sub_826555C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4496);
	// stw r11,8520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826555D4"))) PPC_WEAK_FUNC(sub_826555D4);
PPC_FUNC_IMPL(__imp__sub_826555D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826555D8"))) PPC_WEAK_FUNC(sub_826555D8);
PPC_FUNC_IMPL(__imp__sub_826555D8) {
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
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82655630
	if (ctx.cr6.eq) goto loc_82655630;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82655610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// addi r11,r31,1392
	ctx.r11.s64 = ctx.r31.s64 + 1392;
	// stw r3,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r3.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82655630
	if (ctx.cr6.eq) goto loc_82655630;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,228
	ctx.r3.s64 = ctx.r11.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x82655630;
	sub_821C3048(ctx, base);
loc_82655630:
	// lwz r11,3056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3056);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82655768
	if (!ctx.cr6.eq) goto loc_82655768;
	// lwz r10,6064(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6064);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82655650
	if (ctx.cr6.eq) goto loc_82655650;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82655650:
	// lwz r10,6304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82655660
	if (ctx.cr6.eq) goto loc_82655660;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82655660:
	// lwz r10,6544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6544);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82655670
	if (ctx.cr6.eq) goto loc_82655670;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82655670:
	// lwz r10,6784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82655680
	if (ctx.cr6.eq) goto loc_82655680;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82655680:
	// lwz r10,7024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7024);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82655690
	if (ctx.cr6.eq) goto loc_82655690;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82655690:
	// lwz r10,7264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7264);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826556a0
	if (ctx.cr6.eq) goto loc_826556A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826556A0:
	// lwz r10,7504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826556b0
	if (ctx.cr6.eq) goto loc_826556B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826556B0:
	// lwz r10,7744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7744);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826556c0
	if (ctx.cr6.eq) goto loc_826556C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826556C0:
	// lwz r10,7984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7984);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826556d0
	if (ctx.cr6.eq) goto loc_826556D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826556D0:
	// lwz r10,8224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826556e0
	if (ctx.cr6.eq) goto loc_826556E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826556E0:
	// addi r30,r31,8256
	ctx.r30.s64 = ctx.r31.s64 + 8256;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge cr6,0x82655724
	if (!ctx.cr6.lt) goto loc_82655724;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8262fff0
	ctx.lr = 0x826556F8;
	sub_8262FFF0(ctx, base);
	// lwz r11,8256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8256);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265570C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82655768
	if (ctx.cr6.eq) goto loc_82655768;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82655748
	goto loc_82655748;
loc_82655724:
	// lwz r11,8256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8256);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82655734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82655768
	if (!ctx.cr6.eq) goto loc_82655768;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_82655748:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82655754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82655768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82655768:
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

__attribute__((alias("__imp__sub_82655780"))) PPC_WEAK_FUNC(sub_82655780);
PPC_FUNC_IMPL(__imp__sub_82655780) {
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
	// bl 0x8263a5f8
	ctx.lr = 0x82655798;
	sub_8263A5F8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// addi r8,r10,-4964
	ctx.r8.s64 = ctx.r10.s64 + -4964;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,27964(r9)
	PPC_STORE_U8(ctx.r9.u32 + 27964, ctx.r11.u8);
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826557D0"))) PPC_WEAK_FUNC(sub_826557D0);
PPC_FUNC_IMPL(__imp__sub_826557D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-4408
	ctx.r10.s64 = ctx.r10.s64 + -4408;
loc_826557DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82655800
	if (ctx.cr6.eq) goto loc_82655800;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826557dc
	if (ctx.cr6.eq) goto loc_826557DC;
loc_82655800:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8265581c
	if (!ctx.cr6.eq) goto loc_8265581C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8265581c
	if (ctx.cr6.eq) goto loc_8265581C;
	// lbz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// blr 
	return;
loc_8265581C:
	// b 0x8268e578
	sub_8268E578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82655820"))) PPC_WEAK_FUNC(sub_82655820);
PPC_FUNC_IMPL(__imp__sub_82655820) {
	PPC_FUNC_PROLOGUE();
	// b 0x82630530
	sub_82630530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82655824"))) PPC_WEAK_FUNC(sub_82655824);
PPC_FUNC_IMPL(__imp__sub_82655824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655828"))) PPC_WEAK_FUNC(sub_82655828);
PPC_FUNC_IMPL(__imp__sub_82655828) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,800(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 800);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82655838"))) PPC_WEAK_FUNC(sub_82655838);
PPC_FUNC_IMPL(__imp__sub_82655838) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82655884
	if (ctx.cr6.eq) goto loc_82655884;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x82655860
	if (!ctx.cr6.gt) goto loc_82655860;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// ble cr6,0x82655884
	if (!ctx.cr6.gt) goto loc_82655884;
loc_82655860:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82655870;
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
loc_82655884:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lwz r31,-10244(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10244);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265589C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218310
	ctx.lr = 0x826558A8;
	sub_82218310(ctx, base);
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

__attribute__((alias("__imp__sub_826558BC"))) PPC_WEAK_FUNC(sub_826558BC);
PPC_FUNC_IMPL(__imp__sub_826558BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826558C0"))) PPC_WEAK_FUNC(sub_826558C0);
PPC_FUNC_IMPL(__imp__sub_826558C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x826558C8;
	__savegprlr_21(ctx, base);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826558E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826558e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826558E8;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// li r29,32
	ctx.r29.s64 = 32;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// li r30,64
	ctx.r30.s64 = 64;
	// stw r10,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r10.u32);
	// li r31,96
	ctx.r31.s64 = 96;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,128
	ctx.r5.s64 = 128;
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r9,64(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 64);
	// stb r9,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r9.u8);
	// li r6,160
	ctx.r6.s64 = 160;
	// lbz r8,65(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 65);
	// li r7,192
	ctx.r7.s64 = 192;
	// stb r8,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r8.u8);
	// lvx128 v62,r11,r29
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r9,96(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// stb r9,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r9.u8);
	// li r8,224
	ctx.r8.s64 = 224;
	// lbz r29,97(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 97);
	// li r9,256
	ctx.r9.s64 = 256;
	// stb r29,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r29.u8);
	// lvx128 v61,r11,r30
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r30,128(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 128);
	// stb r30,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r30.u8);
	// li r28,288
	ctx.r28.s64 = 288;
	// lbz r30,129(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 129);
	// li r29,320
	ctx.r29.s64 = 320;
	// stb r30,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, ctx.r30.u8);
	// lvx128 v60,r11,r31
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r31,160(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 160);
	// stb r31,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r31.u8);
	// li r30,352
	ctx.r30.s64 = 352;
	// lbz r27,161(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 161);
	// li r31,384
	ctx.r31.s64 = 384;
	// stb r27,161(r3)
	PPC_STORE_U8(ctx.r3.u32 + 161, ctx.r27.u8);
	// lvx128 v59,r11,r5
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r5,192(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 192);
	// stb r5,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r5.u8);
	// li r5,416
	ctx.r5.s64 = 416;
	// lbz r27,193(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 193);
	// li r25,576
	ctx.r25.s64 = 576;
	// stb r27,193(r3)
	PPC_STORE_U8(ctx.r3.u32 + 193, ctx.r27.u8);
	// lvx128 v58,r11,r6
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r6,224(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 224);
	// stb r6,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r6.u8);
	// li r6,448
	ctx.r6.s64 = 448;
	// lbz r27,225(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 225);
	// li r26,608
	ctx.r26.s64 = 608;
	// stb r27,225(r3)
	PPC_STORE_U8(ctx.r3.u32 + 225, ctx.r27.u8);
	// lvx128 v57,r11,r7
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r7,256(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 256);
	// stb r7,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r7.u8);
	// li r7,480
	ctx.r7.s64 = 480;
	// lbz r27,257(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 257);
	// stb r27,257(r3)
	PPC_STORE_U8(ctx.r3.u32 + 257, ctx.r27.u8);
	// lvx128 v56,r11,r8
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r8,288(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 288);
	// stb r8,288(r3)
	PPC_STORE_U8(ctx.r3.u32 + 288, ctx.r8.u8);
	// li r8,512
	ctx.r8.s64 = 512;
	// lbz r27,289(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 289);
	// stb r27,289(r3)
	PPC_STORE_U8(ctx.r3.u32 + 289, ctx.r27.u8);
	// lvx128 v55,r11,r9
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r9,320(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 320);
	// stb r9,320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 320, ctx.r9.u8);
	// li r9,544
	ctx.r9.s64 = 544;
	// lbz r27,321(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 321);
	// stb r27,321(r3)
	PPC_STORE_U8(ctx.r3.u32 + 321, ctx.r27.u8);
	// lvx128 v54,r11,r28
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r10,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r24,352(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 352);
	// li r27,640
	ctx.r27.s64 = 640;
	// stb r24,352(r3)
	PPC_STORE_U8(ctx.r3.u32 + 352, ctx.r24.u8);
	// rotlwi r23,r10,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r24,353(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 353);
	// li r28,672
	ctx.r28.s64 = 672;
	// stb r24,353(r3)
	PPC_STORE_U8(ctx.r3.u32 + 353, ctx.r24.u8);
	// lvx128 v53,r11,r29
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r22,28(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// stvx128 v53,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r29,384(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 384);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// stb r29,384(r3)
	PPC_STORE_U8(ctx.r3.u32 + 384, ctx.r29.u8);
	// li r29,704
	ctx.r29.s64 = 704;
	// lbz r24,385(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 385);
	// stb r24,385(r3)
	PPC_STORE_U8(ctx.r3.u32 + 385, ctx.r24.u8);
	// lvx128 v52,r11,r30
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r24,416(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 416);
	// stb r24,416(r3)
	PPC_STORE_U8(ctx.r3.u32 + 416, ctx.r24.u8);
	// li r30,736
	ctx.r30.s64 = 736;
	// lbz r24,417(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 417);
	// stb r24,417(r3)
	PPC_STORE_U8(ctx.r3.u32 + 417, ctx.r24.u8);
	// lvx128 v51,r11,r31
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r31,768
	ctx.r31.s64 = 768;
	// lbz r24,448(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 448);
	// stb r24,448(r3)
	PPC_STORE_U8(ctx.r3.u32 + 448, ctx.r24.u8);
	// lbz r24,449(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 449);
	// stb r24,449(r3)
	PPC_STORE_U8(ctx.r3.u32 + 449, ctx.r24.u8);
	// lvx128 v50,r11,r5
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,832
	ctx.r5.s64 = 832;
	// lbz r24,480(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 480);
	// stb r24,480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 480, ctx.r24.u8);
	// lbz r24,481(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 481);
	// stb r24,481(r3)
	PPC_STORE_U8(ctx.r3.u32 + 481, ctx.r24.u8);
	// lvx128 v49,r11,r6
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r6,512(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 512);
	// stb r6,512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 512, ctx.r6.u8);
	// li r6,864
	ctx.r6.s64 = 864;
	// lbz r24,513(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 513);
	// stb r24,513(r3)
	PPC_STORE_U8(ctx.r3.u32 + 513, ctx.r24.u8);
	// lvx128 v48,r11,r7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,896
	ctx.r7.s64 = 896;
	// lbz r24,544(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 544);
	// stb r24,544(r3)
	PPC_STORE_U8(ctx.r3.u32 + 544, ctx.r24.u8);
	// lbz r24,545(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 545);
	// stb r24,545(r3)
	PPC_STORE_U8(ctx.r3.u32 + 545, ctx.r24.u8);
	// lvx128 v47,r11,r8
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v47,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r24,576(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 576);
	// li r8,928
	ctx.r8.s64 = 928;
	// stb r24,576(r3)
	PPC_STORE_U8(ctx.r3.u32 + 576, ctx.r24.u8);
	// lbz r24,577(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 577);
	// li r4,800
	ctx.r4.s64 = 800;
	// stb r24,577(r3)
	PPC_STORE_U8(ctx.r3.u32 + 577, ctx.r24.u8);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lvx128 v46,r11,r9
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r23,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r11,608(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 608);
	// stb r11,608(r3)
	PPC_STORE_U8(ctx.r3.u32 + 608, ctx.r11.u8);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lbz r9,609(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 609);
	// stb r9,609(r3)
	PPC_STORE_U8(ctx.r3.u32 + 609, ctx.r9.u8);
	// lvx128 v45,r10,r25
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,-112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// stvx128 v45,r9,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r25,640(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 640);
	// stb r25,640(r3)
	PPC_STORE_U8(ctx.r3.u32 + 640, ctx.r25.u8);
	// lbz r25,641(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 641);
	// stb r25,641(r3)
	PPC_STORE_U8(ctx.r3.u32 + 641, ctx.r25.u8);
	// lvx128 v44,r10,r26
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v44,r9,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r26,672(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 672);
	// stb r26,672(r3)
	PPC_STORE_U8(ctx.r3.u32 + 672, ctx.r26.u8);
	// lbz r26,673(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 673);
	// stb r26,673(r3)
	PPC_STORE_U8(ctx.r3.u32 + 673, ctx.r26.u8);
	// lvx128 v43,r10,r27
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r9,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r27,704(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 704);
	// stb r27,704(r3)
	PPC_STORE_U8(ctx.r3.u32 + 704, ctx.r27.u8);
	// lbz r27,705(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 705);
	// stb r27,705(r3)
	PPC_STORE_U8(ctx.r3.u32 + 705, ctx.r27.u8);
	// lvx128 v42,r10,r28
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r9,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r28,736(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 736);
	// stb r28,736(r3)
	PPC_STORE_U8(ctx.r3.u32 + 736, ctx.r28.u8);
	// lbz r28,737(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 737);
	// stb r28,737(r3)
	PPC_STORE_U8(ctx.r3.u32 + 737, ctx.r28.u8);
	// lvx128 v41,r10,r29
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r9,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r29,768(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 768);
	// stb r29,768(r3)
	PPC_STORE_U8(ctx.r3.u32 + 768, ctx.r29.u8);
	// lbz r29,769(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 769);
	// stb r29,769(r3)
	PPC_STORE_U8(ctx.r3.u32 + 769, ctx.r29.u8);
	// lvx128 v40,r10,r30
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r9,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r30,800(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 800);
	// stb r30,800(r3)
	PPC_STORE_U8(ctx.r3.u32 + 800, ctx.r30.u8);
	// lbz r30,801(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 801);
	// stb r30,801(r3)
	PPC_STORE_U8(ctx.r3.u32 + 801, ctx.r30.u8);
	// lvx128 v39,r10,r31
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r9,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r31,832(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 832);
	// stb r31,832(r3)
	PPC_STORE_U8(ctx.r3.u32 + 832, ctx.r31.u8);
	// lbz r31,833(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 833);
	// stb r31,833(r3)
	PPC_STORE_U8(ctx.r3.u32 + 833, ctx.r31.u8);
	// lvx128 v38,r10,r4
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r9,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r4,864(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 864);
	// stb r4,864(r3)
	PPC_STORE_U8(ctx.r3.u32 + 864, ctx.r4.u8);
	// lbz r4,865(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 865);
	// stb r4,865(r3)
	PPC_STORE_U8(ctx.r3.u32 + 865, ctx.r4.u8);
	// lvx128 v37,r10,r5
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r9,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r5,896(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 896);
	// stb r5,896(r3)
	PPC_STORE_U8(ctx.r3.u32 + 896, ctx.r5.u8);
	// lbz r4,897(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 897);
	// stb r4,897(r3)
	PPC_STORE_U8(ctx.r3.u32 + 897, ctx.r4.u8);
	// lvx128 v36,r10,r6
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r9,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r6,928(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 928);
	// stb r6,928(r3)
	PPC_STORE_U8(ctx.r3.u32 + 928, ctx.r6.u8);
	// lbz r5,929(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 929);
	// stb r5,929(r3)
	PPC_STORE_U8(ctx.r3.u32 + 929, ctx.r5.u8);
	// lvx128 v35,r10,r7
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v35,r9,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r4,960(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 960);
	// stb r4,960(r3)
	PPC_STORE_U8(ctx.r3.u32 + 960, ctx.r4.u8);
	// lbz r7,961(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 961);
	// stb r7,961(r3)
	PPC_STORE_U8(ctx.r3.u32 + 961, ctx.r7.u8);
	// lvx128 v34,r10,r8
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v34,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,960
	ctx.r8.s64 = 960;
	// lbz r6,992(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 992);
	// stb r6,992(r3)
	PPC_STORE_U8(ctx.r3.u32 + 992, ctx.r6.u8);
	// lbz r5,993(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 993);
	// stb r5,993(r3)
	PPC_STORE_U8(ctx.r3.u32 + 993, ctx.r5.u8);
	// lvx128 v33,r10,r8
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v33,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r4,1024(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1024);
	// stb r4,1024(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1024, ctx.r4.u8);
	// lbz r10,1025(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1025);
	// stb r10,1025(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1025, ctx.r10.u8);
	// lbz r9,1040(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1040);
	// stb r9,1040(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1040, ctx.r9.u8);
	// lbz r8,1041(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1041);
	// stb r8,1041(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1041, ctx.r8.u8);
	// lbz r7,1042(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1042);
	// stb r7,1042(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1042, ctx.r7.u8);
	// lbz r6,1043(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1043);
	// stb r6,1043(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1043, ctx.r6.u8);
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82655CAC"))) PPC_WEAK_FUNC(sub_82655CAC);
PPC_FUNC_IMPL(__imp__sub_82655CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655CB0"))) PPC_WEAK_FUNC(sub_82655CB0);
PPC_FUNC_IMPL(__imp__sub_82655CB0) {
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
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x82655d04
	if (!ctx.cr6.eq) goto loc_82655D04;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lbz r4,18(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82204310
	ctx.lr = 0x82655CF0;
	sub_82204310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82655d04
	if (ctx.cr6.eq) goto loc_82655D04;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4384
	ctx.r3.s64 = ctx.r11.s64 + -4384;
	// b 0x82655d58
	goto loc_82655D58;
loc_82655D04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82655d20
	if (!ctx.cr6.eq) goto loc_82655D20;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4396
	ctx.r3.s64 = ctx.r11.s64 + -4396;
	// b 0x82655d58
	goto loc_82655D58;
loc_82655D20:
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x82655d34
	if (!ctx.cr6.eq) goto loc_82655D34;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,6512
	ctx.r3.s64 = ctx.r11.s64 + 6512;
	// b 0x82655d58
	goto loc_82655D58;
loc_82655D34:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82655d48
	if (!ctx.cr6.eq) goto loc_82655D48;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,8860
	ctx.r3.s64 = ctx.r11.s64 + 8860;
	// b 0x82655d58
	goto loc_82655D58;
loc_82655D48:
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-27892
	ctx.r8.s64 = ctx.r10.s64 + -27892;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82655D58:
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

__attribute__((alias("__imp__sub_82655D70"))) PPC_WEAK_FUNC(sub_82655D70);
PPC_FUNC_IMPL(__imp__sub_82655D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,-6148(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6148);
	// mulli r10,r8,1056
	ctx.r10.s64 = ctx.r8.s64 * 1056;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,11988
	ctx.r3.s64 = ctx.r11.s64 + 11988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655D94"))) PPC_WEAK_FUNC(sub_82655D94);
PPC_FUNC_IMPL(__imp__sub_82655D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655D98"))) PPC_WEAK_FUNC(sub_82655D98);
PPC_FUNC_IMPL(__imp__sub_82655D98) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lwz r31,-10244(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10244);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82655DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218310
	ctx.lr = 0x82655DCC;
	sub_82218310(ctx, base);
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

__attribute__((alias("__imp__sub_82655DE0"))) PPC_WEAK_FUNC(sub_82655DE0);
PPC_FUNC_IMPL(__imp__sub_82655DE0) {
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
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r7,-32121
	ctx.r7.s64 = -2105081856;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,44(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,36(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-10028(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10028);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r31,r11,30
	ctx.r31.s64 = ctx.r11.s64 + 30;
	// bl 0x822042b0
	ctx.lr = 0x82655E34;
	sub_822042B0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 10;
	// bne cr6,0x82655e44
	if (!ctx.cr6.eq) goto loc_82655E44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82655E44:
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

__attribute__((alias("__imp__sub_82655E58"))) PPC_WEAK_FUNC(sub_82655E58);
PPC_FUNC_IMPL(__imp__sub_82655E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82655E60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// bgt cr6,0x82655fe8
	if (ctx.cr6.gt) goto loc_82655FE8;
	// lis r12,-32155
	ctx.r12.s64 = -2107310080;
	// addi r12,r12,24200
	ctx.r12.s64 = ctx.r12.s64 + 24200;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_82655EA0;
	case 1:
		goto loc_82655EC4;
	case 2:
		goto loc_82655FA8;
	case 3:
		goto loc_82655FB8;
	case 4:
		goto loc_82655FC8;
	case 5:
		goto loc_82655FD8;
	default:
		__builtin_unreachable();
	}
	// lwz r19,24224(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24224);
	// lwz r19,24260(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24260);
	// lwz r19,24488(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24488);
	// lwz r19,24504(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24504);
	// lwz r19,24520(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24520);
	// lwz r19,24536(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24536);
loc_82655EA0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,36(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82655EC4:
	// lis r30,-32115
	ctx.r30.s64 = -2104688640;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r4,r10,-18740
	ctx.r4.s64 = ctx.r10.s64 + -18740;
	// lwz r3,-12440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12440);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82655EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82655f00
	if (ctx.cr6.eq) goto loc_82655F00;
	// li r28,8
	ctx.r28.s64 = 8;
loc_82655F00:
	// lwz r3,-12440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12440);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r10,-18748
	ctx.r4.s64 = ctx.r10.s64 + -18748;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82655F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82655f30
	if (ctx.cr6.eq) goto loc_82655F30;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82655F30:
	// lwz r3,-12440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12440);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r10,-18732
	ctx.r4.s64 = ctx.r10.s64 + -18732;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82655F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82655f60
	if (ctx.cr6.eq) goto loc_82655F60;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
loc_82655F60:
	// lwz r3,-12440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12440);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r10,-18756
	ctx.r4.s64 = ctx.r10.s64 + -18756;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82655F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82655f90
	if (ctx.cr6.eq) goto loc_82655F90;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82655F90:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28128
	ctx.r9.s64 = ctx.r11.s64 + 28128;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82655FA8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4308
	ctx.r3.s64 = ctx.r11.s64 + -4308;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82655FB8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4328
	ctx.r3.s64 = ctx.r11.s64 + -4328;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82655FC8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4340
	ctx.r3.s64 = ctx.r11.s64 + -4340;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82655FD8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4360
	ctx.r3.s64 = ctx.r11.s64 + -4360;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82655FE8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4368
	ctx.r3.s64 = ctx.r11.s64 + -4368;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82655FF8"))) PPC_WEAK_FUNC(sub_82655FF8);
PPC_FUNC_IMPL(__imp__sub_82655FF8) {
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
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x82631f88
	ctx.lr = 0x82656014;
	sub_82631F88(ctx, base);
	// lwz r11,856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82656024
	if (ctx.cr6.lt) goto loc_82656024;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_82656024:
	// lwz r10,980(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82656044"))) PPC_WEAK_FUNC(sub_82656044);
PPC_FUNC_IMPL(__imp__sub_82656044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656048"))) PPC_WEAK_FUNC(sub_82656048);
PPC_FUNC_IMPL(__imp__sub_82656048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82656050;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-5016
	ctx.r3.s64 = ctx.r11.s64 + -5016;
	// bl 0x821fa230
	ctx.lr = 0x82656064;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82656074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826561b4
	if (ctx.cr6.eq) goto loc_826561B4;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-27856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x8265608C;
	sub_8238EC00(ctx, base);
	// addi r11,r29,672
	ctx.r11.s64 = ctx.r29.s64 + 672;
	// lwz r30,864(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 864);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82631f88
	ctx.lr = 0x826560A0;
	sub_82631F88(ctx, base);
	// lwz r11,856(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x826560b0
	if (ctx.cr6.lt) goto loc_826560B0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_826560B0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826560CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823895f8
	ctx.lr = 0x826560DC;
	sub_823895F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,136(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// bl 0x8223de50
	ctx.lr = 0x82656100;
	sub_8223DE50(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r6,-4276
	ctx.r3.s64 = ctx.r6.s64 + -4276;
	// bl 0x82130000
	ctx.lr = 0x82656110;
	sub_82130000(ctx, base);
	// lis r3,-32121
	ctx.r3.s64 = -2105081856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4292
	ctx.r4.s64 = ctx.r11.s64 + -4292;
	// lwz r3,-10244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10244);
	// bl 0x822183b0
	ctx.lr = 0x82656128;
	sub_822183B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x82656130;
	sub_82388580(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,-10240(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10240);
	// bl 0x82270170
	ctx.lr = 0x82656144;
	sub_82270170(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x824e70f0
	ctx.lr = 0x8265614C;
	sub_824E70F0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,864(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 864);
	// addi r10,r29,928
	ctx.r10.s64 = ctx.r29.s64 + 928;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r29,256
	ctx.r3.s64 = ctx.r29.s64 + 256;
	// beq cr6,0x8265618c
	if (ctx.cr6.eq) goto loc_8265618C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8265617c
	if (ctx.cr6.eq) goto loc_8265617C;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,28860
	ctx.r4.s64 = ctx.r11.s64 + 28860;
	// b 0x826561b0
	goto loc_826561B0;
loc_8265617C:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,28900
	ctx.r4.s64 = ctx.r11.s64 + 28900;
	// b 0x826561b0
	goto loc_826561B0;
loc_8265618C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826561a4
	if (ctx.cr6.eq) goto loc_826561A4;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,28500
	ctx.r4.s64 = ctx.r11.s64 + 28500;
	// b 0x826561b0
	goto loc_826561B0;
loc_826561A4:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,28572
	ctx.r4.s64 = ctx.r11.s64 + 28572;
loc_826561B0:
	// bl 0x8262ffe0
	ctx.lr = 0x826561B4;
	sub_8262FFE0(ctx, base);
loc_826561B4:
	// lwz r11,672(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 672);
	// addi r3,r29,672
	ctx.r3.s64 = ctx.r29.s64 + 672;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826561C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826561D0"))) PPC_WEAK_FUNC(sub_826561D0);
PPC_FUNC_IMPL(__imp__sub_826561D0) {
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
	// bl 0x82630748
	ctx.lr = 0x826561F0;
	sub_82630748(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,8044
	ctx.r5.s64 = ctx.r11.s64 + 8044;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,860
	ctx.r6.s64 = ctx.r31.s64 + 860;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x824df200
	ctx.lr = 0x82656210;
	sub_824DF200(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,-4192
	ctx.r5.s64 = ctx.r10.s64 + -4192;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,1220
	ctx.r6.s64 = ctx.r31.s64 + 1220;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x824df200
	ctx.lr = 0x82656230;
	sub_824DF200(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,-4208
	ctx.r5.s64 = ctx.r9.s64 + -4208;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,1224
	ctx.r6.s64 = ctx.r31.s64 + 1224;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x824df200
	ctx.lr = 0x82656250;
	sub_824DF200(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,-4224
	ctx.r5.s64 = ctx.r8.s64 + -4224;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,1228
	ctx.r6.s64 = ctx.r31.s64 + 1228;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x824df200
	ctx.lr = 0x82656270;
	sub_824DF200(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,-4232
	ctx.r5.s64 = ctx.r7.s64 + -4232;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,1408
	ctx.r6.s64 = ctx.r31.s64 + 1408;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x824df200
	ctx.lr = 0x82656290;
	sub_824DF200(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r6,-4248
	ctx.r5.s64 = ctx.r6.s64 + -4248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,1412
	ctx.r6.s64 = ctx.r31.s64 + 1412;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824df200
	ctx.lr = 0x826562B0;
	sub_824DF200(ctx, base);
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

__attribute__((alias("__imp__sub_826562C8"))) PPC_WEAK_FUNC(sub_826562C8);
PPC_FUNC_IMPL(__imp__sub_826562C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x826562D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826562EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826563e0
	if (!ctx.cr6.eq) goto loc_826563E0;
	// lwz r30,864(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r29,r31,952
	ctx.r29.s64 = ctx.r31.s64 + 952;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82656350
	if (!ctx.cr6.eq) goto loc_82656350;
	// lis r26,-32121
	ctx.r26.s64 = -2105081856;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// lwz r28,-10028(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10028);
	// bl 0x82203240
	ctx.lr = 0x82656318;
	sub_82203240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82656330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822042b0
	ctx.lr = 0x8265633C;
	sub_822042B0(ctx, base);
	// lwz r11,-10028(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10028);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82211138
	ctx.lr = 0x8265634C;
	sub_82211138(ctx, base);
	// b 0x82656380
	goto loc_82656380;
loc_82656350:
	// addi r29,r31,976
	ctx.r29.s64 = ctx.r31.s64 + 976;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8265639c
	if (!ctx.cr6.eq) goto loc_8265639C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82655ff8
	ctx.lr = 0x82656364;
	sub_82655FF8(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mulli r10,r3,1056
	ctx.r10.s64 = ctx.r3.s64 * 1056;
	// lwz r11,-6148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6148);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,11984
	ctx.r3.s64 = ctx.r11.s64 + 11984;
	// bl 0x82250f20
	ctx.lr = 0x82656380;
	sub_82250F20(ctx, base);
loc_82656380:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265639C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265639C:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826563B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826563C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826563e0
	if (!ctx.cr6.eq) goto loc_826563E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826563E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826563E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826563E8"))) PPC_WEAK_FUNC(sub_826563E8);
PPC_FUNC_IMPL(__imp__sub_826563E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x826563F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82656408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32130
	ctx.r7.s64 = -2105671680;
	// lis r6,-32130
	ctx.r6.s64 = -2105671680;
	// addi r4,r8,-12776
	ctx.r4.s64 = ctx.r8.s64 + -12776;
	// lwz r11,-10236(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10236);
	// addi r30,r7,-7660
	ctx.r30.s64 = ctx.r7.s64 + -7660;
	// addi r29,r6,-22108
	ctx.r29.s64 = ctx.r6.s64 + -22108;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82656434;
	sub_82691650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x82656448;
	sub_823DEDD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265646c
	if (ctx.cr6.eq) goto loc_8265646C;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lbz r10,27964(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27964);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265646c
	if (ctx.cr6.eq) goto loc_8265646C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8265646C:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32120
	ctx.r9.s64 = -2105016320;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,-10220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10220);
	// lfs f2,27640(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27640);
	ctx.f2.f64 = double(temp.f32);
	// stb r10,1529(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1529, ctx.r10.u8);
	// lfs f1,1184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-7572(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7572);
	// bl 0x822f1518
	ctx.lr = 0x82656494;
	sub_822F1518(ctx, base);
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// lis r7,-32120
	ctx.r7.s64 = -2105016320;
	// stw r11,-7884(r7)
	PPC_STORE_U32(ctx.r7.u32 + -7884, ctx.r11.u32);
	// bl 0x822e8a78
	ctx.lr = 0x826564A4;
	sub_822E8A78(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82216138
	ctx.lr = 0x826564AC;
	sub_82216138(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826564B8"))) PPC_WEAK_FUNC(sub_826564B8);
PPC_FUNC_IMPL(__imp__sub_826564B8) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x826564E0;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826564F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826564f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826564F0;
	// addi r10,r31,6068
	ctx.r10.s64 = ctx.r31.s64 + 6068;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656514:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656514;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265653C;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265654C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265654c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265654C;
	// addi r10,r31,6308
	ctx.r10.s64 = ctx.r31.s64 + 6308;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656570:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656570
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656570;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x82656598;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826565A8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826565a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826565A8;
	// addi r10,r31,6548
	ctx.r10.s64 = ctx.r31.s64 + 6548;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826565CC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826565cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826565CC;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x826565F4;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656604:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656604;
	// addi r10,r31,6788
	ctx.r10.s64 = ctx.r31.s64 + 6788;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656628:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656628;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x82656650;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656660:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656660;
	// addi r10,r31,7028
	ctx.r10.s64 = ctx.r31.s64 + 7028;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656684:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656684;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x826566AC;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826566BC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826566bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826566BC;
	// addi r10,r31,7268
	ctx.r10.s64 = ctx.r31.s64 + 7268;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826566E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826566e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826566E0;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x82656708;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656718:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656718;
	// addi r10,r31,7508
	ctx.r10.s64 = ctx.r31.s64 + 7508;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265673C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265673c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265673C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x82656764;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656774:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656774
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656774;
	// addi r10,r31,7748
	ctx.r10.s64 = ctx.r31.s64 + 7748;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656798:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656798;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x826567C0;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826567D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826567d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826567D0;
	// addi r10,r31,7988
	ctx.r10.s64 = ctx.r31.s64 + 7988;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826567F4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826567f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826567F4;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265681C;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265682C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265682c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265682C;
	// addi r10,r31,8228
	ctx.r10.s64 = ctx.r31.s64 + 8228;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656850:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656850;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x82656878;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82656888:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82656888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656888;
	// addi r10,r31,8468
	ctx.r10.s64 = ctx.r31.s64 + 8468;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826568AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826568ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826568AC;
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

__attribute__((alias("__imp__sub_826568D4"))) PPC_WEAK_FUNC(sub_826568D4);
PPC_FUNC_IMPL(__imp__sub_826568D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826568D8"))) PPC_WEAK_FUNC(sub_826568D8);
PPC_FUNC_IMPL(__imp__sub_826568D8) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r9,r10,55136
	ctx.r9.u64 = ctx.r10.u64 | 55136;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lbzx r30,r7,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82656924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-5396
	ctx.r10.s64 = ctx.r10.s64 + -5396;
loc_82656930:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82656954
	if (ctx.cr6.eq) goto loc_82656954;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82656930
	if (ctx.cr6.eq) goto loc_82656930;
loc_82656954:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82656964
	if (!ctx.cr6.eq) goto loc_82656964;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82656980
	goto loc_82656980;
loc_82656964:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265697c
	if (ctx.cr6.eq) goto loc_8265697C;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x82656980
	goto loc_82656980;
loc_8265697C:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
loc_82656980:
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

__attribute__((alias("__imp__sub_82656998"))) PPC_WEAK_FUNC(sub_82656998);
PPC_FUNC_IMPL(__imp__sub_82656998) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// lwz r4,2096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826569C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-5396
	ctx.r10.s64 = ctx.r10.s64 + -5396;
loc_826569D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x826569f8
	if (ctx.cr6.eq) goto loc_826569F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826569d4
	if (ctx.cr6.eq) goto loc_826569D4;
loc_826569F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82656a4c
	if (ctx.cr6.eq) goto loc_82656A4C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-4372
	ctx.r10.s64 = ctx.r10.s64 + -4372;
loc_82656A0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82656a30
	if (ctx.cr6.eq) goto loc_82656A30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82656a0c
	if (ctx.cr6.eq) goto loc_82656A0C;
loc_82656A30:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82656a4c
	if (ctx.cr6.eq) goto loc_82656A4C;
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r9,r10,28200
	ctx.r9.s64 = ctx.r10.s64 + 28200;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82656a60
	goto loc_82656A60;
loc_82656A4C:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,55364
	ctx.r9.u64 = ctx.r10.u64 | 55364;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
loc_82656A60:
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// stw r11,-7884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7884, ctx.r11.u32);
	// bl 0x822e8a78
	ctx.lr = 0x82656A70;
	sub_822E8A78(ctx, base);
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

__attribute__((alias("__imp__sub_82656A84"))) PPC_WEAK_FUNC(sub_82656A84);
PPC_FUNC_IMPL(__imp__sub_82656A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656A88"))) PPC_WEAK_FUNC(sub_82656A88);
PPC_FUNC_IMPL(__imp__sub_82656A88) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r4,r11,27920
	ctx.r4.s64 = ctx.r11.s64 + 27920;
	// lwz r10,3776(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3776);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82656ae4
	if (ctx.cr6.lt) goto loc_82656AE4;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,28076
	ctx.r10.s64 = ctx.r10.s64 + 28076;
loc_82656AC4:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,3776(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3776);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82656ac4
	if (!ctx.cr6.gt) goto loc_82656AC4;
loc_82656AE4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,-4164
	ctx.r11.s64 = ctx.r11.s64 + -4164;
	// addi r8,r9,-4180
	ctx.r8.s64 = ctx.r9.s64 + -4180;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r3,r30,1072
	ctx.r3.s64 = ctx.r30.s64 + 1072;
	// stwx r8,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,1072(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1072);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82656B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82387a18
	ctx.lr = 0x82656B20;
	sub_82387A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82656b5c
	if (ctx.cr6.eq) goto loc_82656B5C;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-3624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3624);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82656b5c
	if (ctx.cr6.eq) goto loc_82656B5C;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10240);
	// lwz r10,4304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4304);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,680(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 680);
	// b 0x82656b60
	goto loc_82656B60;
loc_82656B5C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_82656B60:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lwz r11,2368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2368);
	// addi r3,r30,2368
	ctx.r3.s64 = ctx.r30.s64 + 2368;
	// ble cr6,0x82656b78
	if (!ctx.cr6.gt) goto loc_82656B78;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82656b7c
	goto loc_82656B7C;
loc_82656B78:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_82656B7C:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82656B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3536);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x82656b9c
	if (!ctx.cr6.gt) goto loc_82656B9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,3328
	ctx.r3.s64 = ctx.r30.s64 + 3328;
	// bl 0x8262fff0
	ctx.lr = 0x82656B9C;
	sub_8262FFF0(ctx, base);
loc_82656B9C:
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

__attribute__((alias("__imp__sub_82656BB4"))) PPC_WEAK_FUNC(sub_82656BB4);
PPC_FUNC_IMPL(__imp__sub_82656BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656BB8"))) PPC_WEAK_FUNC(sub_82656BB8);
PPC_FUNC_IMPL(__imp__sub_82656BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stb r10,1258(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1258, ctx.r10.u8);
	// stb r9,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656BD8"))) PPC_WEAK_FUNC(sub_82656BD8);
PPC_FUNC_IMPL(__imp__sub_82656BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-10220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10220);
	// stb r10,1529(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1529, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656BEC"))) PPC_WEAK_FUNC(sub_82656BEC);
PPC_FUNC_IMPL(__imp__sub_82656BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656BF0"))) PPC_WEAK_FUNC(sub_82656BF0);
PPC_FUNC_IMPL(__imp__sub_82656BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656BF8"))) PPC_WEAK_FUNC(sub_82656BF8);
PPC_FUNC_IMPL(__imp__sub_82656BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656C00"))) PPC_WEAK_FUNC(sub_82656C00);
PPC_FUNC_IMPL(__imp__sub_82656C00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lvx128 v63,r8,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656C20"))) PPC_WEAK_FUNC(sub_82656C20);
PPC_FUNC_IMPL(__imp__sub_82656C20) {
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
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82656c6c
	if (ctx.cr6.eq) goto loc_82656C6C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_82656C54:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lhz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82656c54
	if (!ctx.cr6.eq) goto loc_82656C54;
loc_82656C6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82656C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82656cc4
	if (!ctx.cr6.gt) goto loc_82656CC4;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82656C94:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r3,r5,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r4,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r4.u16);
	// stwx r3,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r3.u32);
	// bne 0x82656c94
	if (!ctx.cr0.eq) goto loc_82656C94;
loc_82656CC4:
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

__attribute__((alias("__imp__sub_82656CDC"))) PPC_WEAK_FUNC(sub_82656CDC);
PPC_FUNC_IMPL(__imp__sub_82656CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82656CE0"))) PPC_WEAK_FUNC(sub_82656CE0);
PPC_FUNC_IMPL(__imp__sub_82656CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x82656CE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82656d20
	if (ctx.cr6.eq) goto loc_82656D20;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_82656D08:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lhz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82656d08
	if (!ctx.cr6.eq) goto loc_82656D08;
loc_82656D20:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-27856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x82656D2C;
	sub_8238EC00(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r31,r11,6256
	ctx.r31.u64 = ctx.r11.u64 | 6256;
	// lis r25,-32121
	ctx.r25.s64 = -2105081856;
loc_82656D48:
	// lwz r11,-10236(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82656db0
	if (ctx.cr6.eq) goto loc_82656DB0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821c9790
	ctx.lr = 0x82656D74;
	sub_821C9790(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82389668
	ctx.lr = 0x82656D88;
	sub_82389668(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82656db0
	if (ctx.cr6.eq) goto loc_82656DB0;
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r8.u16);
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r28.u32);
loc_82656DB0:
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,6400
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6400, ctx.xer);
	// blt cr6,0x82656d48
	if (ctx.cr6.lt) goto loc_82656D48;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656DC8"))) PPC_WEAK_FUNC(sub_82656DC8);
PPC_FUNC_IMPL(__imp__sub_82656DC8) {
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
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// bgt cr6,0x82656f88
	if (ctx.cr6.gt) goto loc_82656F88;
	// lis r12,-32155
	ctx.r12.s64 = -2107310080;
	// addi r12,r12,28164
	ctx.r12.s64 = ctx.r12.s64 + 28164;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_82656E1C;
	case 1:
		goto loc_82656E48;
	case 2:
		goto loc_82656F58;
	case 3:
		goto loc_82656F64;
	case 4:
		goto loc_82656F70;
	case 5:
		goto loc_82656F7C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,28188(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28188);
	// lwz r19,28232(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28232);
	// lwz r19,28504(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28504);
	// lwz r19,28516(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28516);
	// lwz r19,28528(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28528);
	// lwz r19,28540(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28540);
loc_82656E1C:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 65536;
	// addi r3,r3,6256
	ctx.r3.s64 = ctx.r3.s64 + 6256;
	// b 0x82656f90
	goto loc_82656F90;
loc_82656E48:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,-27856(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x82656E5C;
	sub_8238EC00(ctx, base);
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,-10236(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10236);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r10,r6,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 65536;
	// addi r4,r4,6256
	ctx.r4.s64 = ctx.r4.s64 + 6256;
	// bl 0x823895f8
	ctx.lr = 0x82656E8C;
	sub_823895F8(ctx, base);
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r3,-18740
	ctx.r4.s64 = ctx.r3.s64 + -18740;
	// lwz r3,-12440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12440);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82656EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82656ec0
	if (ctx.cr6.eq) goto loc_82656EC0;
	// li r30,8
	ctx.r30.s64 = 8;
loc_82656EC0:
	// lwz r3,-12440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12440);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-18748
	ctx.r4.s64 = ctx.r11.s64 + -18748;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82656EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82656eec
	if (ctx.cr6.eq) goto loc_82656EEC;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82656EEC:
	// lwz r3,-12440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12440);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-18732
	ctx.r4.s64 = ctx.r11.s64 + -18732;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82656F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82656f18
	if (ctx.cr6.eq) goto loc_82656F18;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_82656F18:
	// lwz r3,-12440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12440);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-18756
	ctx.r4.s64 = ctx.r11.s64 + -18756;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82656F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82656f44
	if (ctx.cr6.eq) goto loc_82656F44;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82656F44:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28128
	ctx.r9.s64 = ctx.r11.s64 + 28128;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82656f90
	goto loc_82656F90;
loc_82656F58:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4308
	ctx.r3.s64 = ctx.r11.s64 + -4308;
	// b 0x82656f90
	goto loc_82656F90;
loc_82656F64:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4328
	ctx.r3.s64 = ctx.r11.s64 + -4328;
	// b 0x82656f90
	goto loc_82656F90;
loc_82656F70:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4340
	ctx.r3.s64 = ctx.r11.s64 + -4340;
	// b 0x82656f90
	goto loc_82656F90;
loc_82656F7C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4360
	ctx.r3.s64 = ctx.r11.s64 + -4360;
	// b 0x82656f90
	goto loc_82656F90;
loc_82656F88:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-4368
	ctx.r3.s64 = ctx.r11.s64 + -4368;
loc_82656F90:
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

__attribute__((alias("__imp__sub_82656FA8"))) PPC_WEAK_FUNC(sub_82656FA8);
PPC_FUNC_IMPL(__imp__sub_82656FA8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82656fd8
	if (ctx.cr6.eq) goto loc_82656FD8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_82656FC0:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lhz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82656fc0
	if (!ctx.cr6.eq) goto loc_82656FC0;
loc_82656FD8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// lis r5,-32121
	ctx.r5.s64 = -2105081856;
loc_82656FE4:
	// lwz r11,-6148(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6148);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r10,13027(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13027);
	// cmplwi cr6,r10,205
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 205, ctx.xer);
	// bne cr6,0x82657000
	if (!ctx.cr6.eq) goto loc_82657000;
	// lwz r11,11984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11984);
	// b 0x82657004
	goto loc_82657004;
loc_82657000:
	// lbz r11,13026(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13026);
loc_82657004:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82657030
	if (!ctx.cr6.gt) goto loc_82657030;
	// lhz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r4,r7,-2
	ctx.r4.s64 = ctx.r7.s64 + -2;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r10.u16);
	// stwx r4,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
loc_82657030:
	// lwz r11,-6148(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6148);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r10,14083(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14083);
	// cmplwi cr6,r10,205
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 205, ctx.xer);
	// bne cr6,0x8265704c
	if (!ctx.cr6.eq) goto loc_8265704C;
	// lwz r11,13040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13040);
	// b 0x82657050
	goto loc_82657050;
loc_8265704C:
	// lbz r11,14082(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14082);
loc_82657050:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265707c
	if (!ctx.cr6.gt) goto loc_8265707C;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r8,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r8.u16);
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
loc_8265707C:
	// lwz r11,-6148(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6148);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r10,15139(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15139);
	// cmplwi cr6,r10,205
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 205, ctx.xer);
	// bne cr6,0x82657098
	if (!ctx.cr6.eq) goto loc_82657098;
	// lwz r11,14096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	// b 0x8265709c
	goto loc_8265709C;
loc_82657098:
	// lbz r11,15138(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15138);
loc_8265709C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826570c4
	if (!ctx.cr6.gt) goto loc_826570C4;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r8,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r8.u16);
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
loc_826570C4:
	// lwz r11,-6148(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6148);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r10,16195(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16195);
	// cmplwi cr6,r10,205
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 205, ctx.xer);
	// bne cr6,0x826570e0
	if (!ctx.cr6.eq) goto loc_826570E0;
	// lwz r11,15152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15152);
	// b 0x826570e4
	goto loc_826570E4;
loc_826570E0:
	// lbz r11,16194(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16194);
loc_826570E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82657110
	if (!ctx.cr6.gt) goto loc_82657110;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r8,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r8.u16);
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
loc_82657110:
	// lwz r11,-6148(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6148);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r10,17251(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17251);
	// cmplwi cr6,r10,205
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 205, ctx.xer);
	// bne cr6,0x8265712c
	if (!ctx.cr6.eq) goto loc_8265712C;
	// lwz r11,16208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16208);
	// b 0x82657130
	goto loc_82657130;
loc_8265712C:
	// lbz r11,17250(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17250);
loc_82657130:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265715c
	if (!ctx.cr6.gt) goto loc_8265715C;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r8,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r8.u16);
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
loc_8265715C:
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// addi r6,r6,5280
	ctx.r6.s64 = ctx.r6.s64 + 5280;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x82656fe4
	if (ctx.cr6.lt) goto loc_82656FE4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657174"))) PPC_WEAK_FUNC(sub_82657174);
PPC_FUNC_IMPL(__imp__sub_82657174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82657178"))) PPC_WEAK_FUNC(sub_82657178);
PPC_FUNC_IMPL(__imp__sub_82657178) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-10020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826571b8
	if (ctx.cr6.eq) goto loc_826571B8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826bf4b0
	ctx.lr = 0x826571A8;
	sub_826BF4B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826571b8
	if (!ctx.cr6.eq) goto loc_826571B8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_826571B8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_826571D8"))) PPC_WEAK_FUNC(sub_826571D8);
PPC_FUNC_IMPL(__imp__sub_826571D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d4
	ctx.lr = 0x826571E0;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265721c
	if (ctx.cr6.eq) goto loc_8265721C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_82657204:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lhz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82657204
	if (!ctx.cr6.eq) goto loc_82657204;
loc_8265721C:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,17232
	ctx.r10.s64 = ctx.r10.s64 + 17232;
	// lwz r19,32(r9)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
loc_82657230:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82657254
	if (ctx.cr6.eq) goto loc_82657254;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82657230
	if (ctx.cr6.eq) goto loc_82657230;
loc_82657254:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82657344
	if (!ctx.cr6.eq) goto loc_82657344;
	// bl 0x8238e748
	ctx.lr = 0x82657260;
	sub_8238E748(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x826575b0
	if (!ctx.cr6.gt) goto loc_826575B0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-32121
	ctx.r27.s64 = -2105081856;
	// addi r25,r11,-28304
	ctx.r25.s64 = ctx.r11.s64 + -28304;
loc_82657284:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,-10020(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -10020);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwzx r4,r9,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// beq cr6,0x826572b8
	if (ctx.cr6.eq) goto loc_826572B8;
	// bl 0x826bf4b0
	ctx.lr = 0x826572A8;
	sub_826BF4B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826572b8
	if (!ctx.cr6.eq) goto loc_826572B8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_826572B8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657328
	if (!ctx.cr6.eq) goto loc_82657328;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r9,144(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82657328
	if (ctx.cr6.eq) goto loc_82657328;
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657300
	if (ctx.cr6.eq) goto loc_82657300;
	// bl 0x82387e18
	ctx.lr = 0x826572F4;
	sub_82387E18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657328
	if (ctx.cr6.eq) goto loc_82657328;
loc_82657300:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x82657328
	if (!ctx.cr6.eq) goto loc_82657328;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
loc_82657328:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r26,r26,160
	ctx.r26.s64 = ctx.r26.s64 + 160;
	// cmpw cr6,r29,r19
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x82657284
	if (ctx.cr6.lt) goto loc_82657284;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9224
	__restgprlr_19(ctx, base);
	return;
loc_82657344:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-7972
	ctx.r10.s64 = ctx.r10.s64 + -7972;
loc_82657350:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82657374
	if (ctx.cr6.eq) goto loc_82657374;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82657350
	if (ctx.cr6.eq) goto loc_82657350;
loc_82657374:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82657464
	if (!ctx.cr6.eq) goto loc_82657464;
	// bl 0x8238e6d8
	ctx.lr = 0x82657380;
	sub_8238E6D8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x826575b0
	if (!ctx.cr6.gt) goto loc_826575B0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-32121
	ctx.r27.s64 = -2105081856;
	// addi r25,r11,-28304
	ctx.r25.s64 = ctx.r11.s64 + -28304;
loc_826573A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,-10020(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -10020);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwzx r4,r9,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// beq cr6,0x826573d8
	if (ctx.cr6.eq) goto loc_826573D8;
	// bl 0x826bf4b0
	ctx.lr = 0x826573C8;
	sub_826BF4B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826573d8
	if (!ctx.cr6.eq) goto loc_826573D8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_826573D8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657448
	if (!ctx.cr6.eq) goto loc_82657448;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r9,144(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82657448
	if (ctx.cr6.eq) goto loc_82657448;
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657420
	if (ctx.cr6.eq) goto loc_82657420;
	// bl 0x82387e18
	ctx.lr = 0x82657414;
	sub_82387E18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657448
	if (ctx.cr6.eq) goto loc_82657448;
loc_82657420:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x82657448
	if (!ctx.cr6.eq) goto loc_82657448;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
loc_82657448:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r26,r26,160
	ctx.r26.s64 = ctx.r26.s64 + 160;
	// cmpw cr6,r29,r19
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x826573a4
	if (ctx.cr6.lt) goto loc_826573A4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9224
	__restgprlr_19(ctx, base);
	return;
loc_82657464:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,18072
	ctx.r10.s64 = ctx.r10.s64 + 18072;
loc_82657470:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82657494
	if (ctx.cr6.eq) goto loc_82657494;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82657470
	if (ctx.cr6.eq) goto loc_82657470;
loc_82657494:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826575b0
	if (!ctx.cr6.eq) goto loc_826575B0;
	// bl 0x8238e748
	ctx.lr = 0x826574A0;
	sub_8238E748(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x826575b0
	if (!ctx.cr6.gt) goto loc_826575B0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r22,114
	ctx.r22.s64 = 114;
	// lis r23,-32115
	ctx.r23.s64 = -2104688640;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// addi r21,r9,-19152
	ctx.r21.s64 = ctx.r9.s64 + -19152;
	// addi r25,r10,5392
	ctx.r25.s64 = ctx.r10.s64 + 5392;
	// addi r24,r11,-28304
	ctx.r24.s64 = ctx.r11.s64 + -28304;
loc_826574DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,-10020(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10020);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwzx r4,r9,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// beq cr6,0x82657510
	if (ctx.cr6.eq) goto loc_82657510;
	// bl 0x826bf4b0
	ctx.lr = 0x82657500;
	sub_826BF4B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657510
	if (!ctx.cr6.eq) goto loc_82657510;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82657510:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265759c
	if (!ctx.cr6.eq) goto loc_8265759C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8265759c
	if (ctx.cr6.eq) goto loc_8265759C;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265759c
	if (!ctx.cr6.eq) goto loc_8265759C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x8265759c
	if (!ctx.cr6.eq) goto loc_8265759C;
	// lhz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stb r22,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r22.u8);
	// lwz r3,-12440(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12440);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x8238dd80
	ctx.lr = 0x82657570;
	sub_8238DD80(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82657598
	if (ctx.cr6.eq) goto loc_82657598;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r28.u32);
loc_82657598:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
loc_8265759C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,160
	ctx.r26.s64 = ctx.r26.s64 + 160;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x826574dc
	if (ctx.cr6.lt) goto loc_826574DC;
loc_826575B0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9224
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826575B8"))) PPC_WEAK_FUNC(sub_826575B8);
PPC_FUNC_IMPL(__imp__sub_826575B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x826575C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,40
	ctx.r29.s64 = 40;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r27,r11,3
	ctx.r27.s64 = ctx.r11.s64 + 196608;
	// addis r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 65536;
	// addi r27,r27,-11360
	ctx.r27.s64 = ctx.r27.s64 + -11360;
	// addi r4,r4,6256
	ctx.r4.s64 = ctx.r4.s64 + 6256;
	// bl 0x82389800
	ctx.lr = 0x8265760C;
	sub_82389800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82657620
	if (ctx.cr6.eq) goto loc_82657620;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r29,r11,40
	ctx.xer.ca = ctx.r11.u32 > 4294967255;
	ctx.r29.s64 = ctx.r11.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8265766c
	if (ctx.cr0.eq) goto loc_8265766C;
loc_82657620:
	// lbz r11,962(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 962);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265766c
	if (!ctx.cr6.eq) goto loc_8265766C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82657648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x82657650;
	sub_821C9790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x823896c0
	ctx.lr = 0x8265765C;
	sub_823896C0(ctx, base);
	// bl 0x8238eb20
	ctx.lr = 0x82657660;
	sub_8238EB20(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82657670
	if (ctx.cr6.eq) goto loc_82657670;
loc_8265766C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82657670:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657678"))) PPC_WEAK_FUNC(sub_82657678);
PPC_FUNC_IMPL(__imp__sub_82657678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x82657680;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r31,976
	ctx.r10.s64 = ctx.r31.s64 + 976;
	// addi r26,r31,1392
	ctx.r26.s64 = ctx.r31.s64 + 1392;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stfs f0,1392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1392, temp.u32);
	// stfs f0,1396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1396, temp.u32);
	// stfs f0,1400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1400, temp.u32);
	// lwz r9,864(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82657758
	if (!ctx.cr6.eq) goto loc_82657758;
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82631f88
	ctx.lr = 0x826576C4;
	sub_82631F88(ctx, base);
	// lwz r11,856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x826576d4
	if (ctx.cr6.lt) goto loc_826576D4;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_826576D4:
	// lwz r10,980(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,-6148(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6148);
	// mulli r10,r7,1056
	ctx.r10.s64 = ctx.r7.s64 * 1056;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,11984
	ctx.r30.s64 = ctx.r11.s64 + 11984;
	// lbz r6,13027(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13027);
	// cmplwi cr6,r6,205
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 205, ctx.xer);
	// bne cr6,0x82657708
	if (!ctx.cr6.eq) goto loc_82657708;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8265770c
	goto loc_8265770C;
loc_82657708:
	// lbz r5,1042(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1042);
loc_8265770C:
	// lwz r11,1360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// addi r3,r31,1360
	ctx.r3.s64 = ctx.r31.s64 + 1360;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265772C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,1043(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1043);
	// cmplwi cr6,r9,205
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 205, ctx.xer);
	// bne cr6,0x82657740
	if (!ctx.cr6.eq) goto loc_82657740;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82657744
	goto loc_82657744;
loc_82657740:
	// lbz r11,1042(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1042);
loc_82657744:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826578a0
	if (!ctx.cr6.gt) goto loc_826578A0;
	// lvx128 v63,r0,r29
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x826578a0
	goto loc_826578A0;
loc_82657758:
	// addi r30,r31,672
	ctx.r30.s64 = ctx.r31.s64 + 672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82631f88
	ctx.lr = 0x82657764;
	sub_82631F88(ctx, base);
	// lwz r11,856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82657774
	if (ctx.cr6.lt) goto loc_82657774;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_82657774:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826578a0
	if (ctx.cr6.lt) goto loc_826578A0;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-27856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x82657788;
	sub_8238EC00(ctx, base);
	// lwz r29,864(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82203240
	ctx.lr = 0x8265779C;
	sub_82203240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826577B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823895f8
	ctx.lr = 0x826577C4;
	sub_823895F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,44(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r30,84
	ctx.r4.s64 = ctx.r30.s64 + 84;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// rlwinm r27,r3,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// xori r28,r10,1
	ctx.r28.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82657830
	if (ctx.cr6.lt) goto loc_82657830;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x82657830
	if (ctx.cr6.gt) goto loc_82657830;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 248, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_82657830:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657864
	if (ctx.cr6.eq) goto loc_82657864;
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,1376(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82657874
	goto loc_82657874;
loc_82657864:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82657874:
	// bctrl 
	ctx.lr = 0x82657878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826578a0
	if (ctx.cr6.eq) goto loc_826578A0;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
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
	// stfs f12,0(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f13,4(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f0,8(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
loc_826578A0:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r10,1388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stb r27,252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 252, ctx.r27.u8);
	// stb r28,732(r11)
	PPC_STORE_U8(ctx.r11.u32 + 732, ctx.r28.u8);
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// bl 0x82387a18
	ctx.lr = 0x826578C0;
	sub_82387A18(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82657918
	if (ctx.cr6.eq) goto loc_82657918;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a5948
	ctx.lr = 0x826578D4;
	sub_822A5948(ctx, base);
	// bl 0x822a8108
	ctx.lr = 0x826578D8;
	sub_822A8108(ctx, base);
	// addi r4,r31,1232
	ctx.r4.s64 = ctx.r31.s64 + 1232;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,48
	ctx.r11.s64 = 48;
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// stvx128 v62,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v61,r3,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r3,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r3,r11
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-10028(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10028);
	// b 0x82657a04
	goto loc_82657A04;
loc_82657918:
	// lwz r3,1388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265792C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x826579b4
	if (ctx.cr6.lt) goto loc_826579B4;
	// lwz r4,1388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82657954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,1388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82657978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,1232
	ctx.r30.s64 = ctx.r31.s64 + 1232;
	// lvx128 v58,r0,r3
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// vor128 v57,v58,v58
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// lis r6,-32130
	ctx.r6.s64 = -2105671680;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r6,-31616
	ctx.r5.s64 = ctx.r6.s64 + -31616;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v58,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r29
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v55,v57,v56
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// stvx128 v55,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82202ec0
	ctx.lr = 0x826579B0;
	sub_82202EC0(ctx, base);
	// b 0x826579f4
	goto loc_826579F4;
loc_826579B4:
	// vspltisw128 v54,0
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_set1_epi32(int(0x0)));
	// addi r30,r31,1232
	ctx.r30.s64 = ctx.r31.s64 + 1232;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// vupkd3d128 v53,v54,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v54.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v54.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v53 = vTemp;
	// li r8,1280
	ctx.r8.s64 = 1280;
	// vpermwi128 v52,v53,234
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), 0x15));
	// vpermwi128 v51,v53,186
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), 0x45));
	// vpermwi128 v50,v53,174
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), 0x51));
	// stvx128 v52,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r30,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r30,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v49,r0,r26
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_826579F4:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,-10028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
loc_82657A04:
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,3408
	ctx.r3.s64 = ctx.r3.s64 + 3408;
	// bl 0x822249b8
	ctx.lr = 0x82657A14;
	sub_822249B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657A20"))) PPC_WEAK_FUNC(sub_82657A20);
PPC_FUNC_IMPL(__imp__sub_82657A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x82657A28;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32121
	ctx.r26.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r9,-4116
	ctx.r4.s64 = ctx.r9.s64 + -4116;
	// lwz r11,-10236(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10236);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,340(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// addis r27,r7,3
	ctx.r27.s64 = ctx.r7.s64 + 196608;
	// addi r27,r27,-11360
	ctx.r27.s64 = ctx.r27.s64 + -11360;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82657A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,672(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r30,r31,672
	ctx.r30.s64 = ctx.r31.s64 + 672;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,648(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 648);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82657A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,-5016
	ctx.r3.s64 = ctx.r4.s64 + -5016;
	// bl 0x821fa230
	ctx.lr = 0x82657A84;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82657A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82657c1c
	if (ctx.cr6.eq) goto loc_82657C1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x82657AAC;
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
	ctx.lr = 0x82657AC0;
	sub_82270170(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x824e70f0
	ctx.lr = 0x82657AC8;
	sub_824E70F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// beq cr6,0x82657af8
	if (ctx.cr6.eq) goto loc_82657AF8;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r25,r11,28900
	ctx.r25.s64 = ctx.r11.s64 + 28900;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8262ffe0
	ctx.lr = 0x82657AF0;
	sub_8262FFE0(ctx, base);
	// stb r28,5008(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5008, ctx.r28.u8);
	// b 0x82657b10
	goto loc_82657B10;
loc_82657AF8:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r25,r11,28572
	ctx.r25.s64 = ctx.r11.s64 + 28572;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8262ffe0
	ctx.lr = 0x82657B0C;
	sub_8262FFE0(ctx, base);
	// stb r29,5008(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5008, ctx.r29.u8);
loc_82657B10:
	// stw r25,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r25.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,28004
	ctx.r4.s64 = ctx.r11.s64 + 28004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826347f0
	ctx.lr = 0x82657B28;
	sub_826347F0(ctx, base);
	// stb r28,940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 940, ctx.r28.u8);
	// stb r28,964(r31)
	PPC_STORE_U8(ctx.r31.u32 + 964, ctx.r28.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r3,-10236(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10236);
	// addi r4,r10,-18768
	ctx.r4.s64 = ctx.r10.s64 + -18768;
	// bl 0x821f9fb8
	ctx.lr = 0x82657B40;
	sub_821F9FB8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r25,r9,2612
	ctx.r25.s64 = ctx.r9.s64 + 2612;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r24,56(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x821c9790
	ctx.lr = 0x82657B5C;
	sub_821C9790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x825ed480
	ctx.lr = 0x82657B6C;
	sub_825ED480(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r8,-13268
	ctx.r3.s64 = ctx.r8.s64 + -13268;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x82657B84;
	sub_821C9790(ctx, base);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x825ef9f0
	ctx.lr = 0x82657BA0;
	sub_825EF9F0(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x825ef9f0
	ctx.lr = 0x82657BD0;
	sub_825EF9F0(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82657BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r4,r6,1072
	ctx.r4.s64 = ctx.r6.s64 + 1072;
	// bl 0x825ee0e0
	ctx.lr = 0x82657BFC;
	sub_825EE0E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,-13284
	ctx.r4.s64 = ctx.r4.s64 + -13284;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82722678
	ctx.lr = 0x82657C18;
	sub_82722678(ctx, base);
	// b 0x82657c3c
	goto loc_82657C3C;
loc_82657C1C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,28004
	ctx.r4.s64 = ctx.r11.s64 + 28004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826347f0
	ctx.lr = 0x82657C30;
	sub_826347F0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r29,940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 940, ctx.r29.u8);
	// stb r29,964(r31)
	PPC_STORE_U8(ctx.r31.u32 + 964, ctx.r29.u8);
loc_82657C3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82656048
	ctx.lr = 0x82657C44;
	sub_82656048(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82654ac8
	ctx.lr = 0x82657C4C;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657c7c
	if (!ctx.cr6.eq) goto loc_82657C7C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82654b60
	ctx.lr = 0x82657C60;
	sub_82654B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657c7c
	if (!ctx.cr6.eq) goto loc_82657C7C;
	// lbz r11,960(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657c7c
	if (!ctx.cr6.eq) goto loc_82657C7C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82657C7C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657cb8
	if (ctx.cr6.eq) goto loc_82657CB8;
	// addi r3,r27,672
	ctx.r3.s64 = ctx.r27.s64 + 672;
	// bl 0x82631f88
	ctx.lr = 0x82657C90;
	sub_82631F88(ctx, base);
	// lwz r11,856(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82657ca0
	if (ctx.cr6.lt) goto loc_82657CA0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_82657CA0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82657ccc
	if (!ctx.cr6.gt) goto loc_82657CCC;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r10,r31,976
	ctx.r10.s64 = ctx.r31.s64 + 976;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82657ccc
	if (ctx.cr6.eq) goto loc_82657CCC;
loc_82657CB8:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,27988
	ctx.r4.s64 = ctx.r11.s64 + 27988;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8262ffe0
	ctx.lr = 0x82657CCC;
	sub_8262FFE0(ctx, base);
loc_82657CCC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,-10236(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10236);
	// addi r4,r11,-10256
	ctx.r4.s64 = ctx.r11.s64 + -10256;
	// bl 0x821f9fb8
	ctx.lr = 0x82657CDC;
	sub_821F9FB8(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// lwz r8,196(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lwz r4,56(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82657CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657D00"))) PPC_WEAK_FUNC(sub_82657D00);
PPC_FUNC_IMPL(__imp__sub_82657D00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-10236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10236);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r11,248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 248, ctx.r11.u32);
	// stb r11,1216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1216, ctx.r11.u8);
	// stb r11,5008(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5008, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657D20"))) PPC_WEAK_FUNC(sub_82657D20);
PPC_FUNC_IMPL(__imp__sub_82657D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82657D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82657D40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82657e70
	if (ctx.cr6.eq) goto loc_82657E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82632f78
	ctx.lr = 0x82657D54;
	sub_82632F78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-5016
	ctx.r3.s64 = ctx.r11.s64 + -5016;
	// bl 0x821fa230
	ctx.lr = 0x82657D60;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82657D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82657e70
	if (ctx.cr6.eq) goto loc_82657E70;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-18768
	ctx.r4.s64 = ctx.r10.s64 + -18768;
	// lwz r3,-10236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// bl 0x821f9fb8
	ctx.lr = 0x82657D90;
	sub_821F9FB8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r9,2612
	ctx.r30.s64 = ctx.r9.s64 + 2612;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,56(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x821c9790
	ctx.lr = 0x82657DAC;
	sub_821C9790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825ed480
	ctx.lr = 0x82657DBC;
	sub_825ED480(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r8,-13268
	ctx.r3.s64 = ctx.r8.s64 + -13268;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// bl 0x821c9790
	ctx.lr = 0x82657DD4;
	sub_821C9790(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x825ef9f0
	ctx.lr = 0x82657DF8;
	sub_825EF9F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82657E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x825ef9f0
	ctx.lr = 0x82657E28;
	sub_825EF9F0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82657E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r4,1072
	ctx.r4.s64 = ctx.r4.s64 + 1072;
	// bl 0x825ee0e0
	ctx.lr = 0x82657E54;
	sub_825EE0E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13284
	ctx.r4.s64 = ctx.r11.s64 + -13284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x82657E70;
	sub_82722678(ctx, base);
loc_82657E70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657E78"))) PPC_WEAK_FUNC(sub_82657E78);
PPC_FUNC_IMPL(__imp__sub_82657E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e8
	ctx.lr = 0x82657E80;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r11,-12776
	ctx.r4.s64 = ctx.r11.s64 + -12776;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lwz r11,-10236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// lis r9,-32130
	ctx.r9.s64 = -2105671680;
	// addi r30,r10,-7660
	ctx.r30.s64 = ctx.r10.s64 + -7660;
	// addi r29,r9,-22108
	ctx.r29.s64 = ctx.r9.s64 + -22108;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82657EB4;
	sub_82691650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x82657EC8;
	sub_823DEDD8(ctx, base);
	// lwz r11,-10236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r25,r8,1
	ctx.r25.s64 = ctx.r8.s64 + 65536;
	// addi r25,r25,16256
	ctx.r25.s64 = ctx.r25.s64 + 16256;
	// beq cr6,0x82657efc
	if (ctx.cr6.eq) goto loc_82657EFC;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lbz r10,27964(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27964);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82657efc
	if (ctx.cr6.eq) goto loc_82657EFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
loc_82657EFC:
	// lwz r11,944(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 944);
	// addi r30,r27,944
	ctx.r30.s64 = ctx.r27.s64 + 944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82657F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8265820c
	if (ctx.cr6.eq) goto loc_8265820C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,-10236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// addi r4,r11,-18768
	ctx.r4.s64 = ctx.r11.s64 + -18768;
	// bl 0x821f9fb8
	ctx.lr = 0x82657F2C;
	sub_821F9FB8(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r27,672
	ctx.r3.s64 = ctx.r27.s64 + 672;
	// lwz r11,-10240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10240);
	// lwz r24,56(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r28,4304(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4304);
	// bl 0x82631f88
	ctx.lr = 0x82657F48;
	sub_82631F88(ctx, base);
	// lwz r11,856(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82657f58
	if (ctx.cr6.lt) goto loc_82657F58;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_82657F58:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82657F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,961(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 961);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82658040
	if (ctx.cr6.eq) goto loc_82658040;
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657fa0
	if (ctx.cr6.eq) goto loc_82657FA0;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82657fa4
	if (ctx.cr6.eq) goto loc_82657FA4;
loc_82657FA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82657FA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657fc8
	if (ctx.cr6.eq) goto loc_82657FC8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82654ac8
	ctx.lr = 0x82657FB8;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657fcc
	if (!ctx.cr6.eq) goto loc_82657FCC;
loc_82657FC8:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82657FCC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8238e748
	ctx.lr = 0x82657FD4;
	sub_8238E748(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82654ac8
	ctx.lr = 0x82657FE4;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// beq cr6,0x82658014
	if (ctx.cr6.eq) goto loc_82658014;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x82658010
	if (ctx.cr6.lt) goto loc_82658010;
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// li r30,2
	ctx.r30.s64 = 2;
	// ble cr6,0x82658014
	if (!ctx.cr6.gt) goto loc_82658014;
loc_82658010:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82658014:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r29,984(r9)
	PPC_STORE_U32(ctx.r9.u32 + 984, ctx.r29.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r30,528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 528, ctx.r30.u32);
	// bne cr6,0x82658038
	if (!ctx.cr6.eq) goto loc_82658038;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82658038:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,1136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1136, ctx.r31.u32);
loc_82658040:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r10,-4384
	ctx.r10.s64 = ctx.r10.s64 + -4384;
loc_8265804C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82658070
	if (ctx.cr6.eq) goto loc_82658070;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8265804c
	if (ctx.cr6.eq) goto loc_8265804C;
loc_82658070:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826580ac
	if (!ctx.cr6.eq) goto loc_826580AC;
	// addis r31,r25,2
	ctx.r31.s64 = ctx.r25.s64 + 131072;
	// addi r31,r31,-32640
	ctx.r31.s64 = ctx.r31.s64 + -32640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82654cb8
	ctx.lr = 0x82658088;
	sub_82654CB8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,33760
	ctx.r10.u64 = ctx.r11.u64 | 33760;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r25,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x8265816c
	goto loc_8265816C;
loc_826580AC:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r10,-4396
	ctx.r10.s64 = ctx.r10.s64 + -4396;
loc_826580B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x826580dc
	if (ctx.cr6.eq) goto loc_826580DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826580b8
	if (ctx.cr6.eq) goto loc_826580B8;
loc_826580DC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82658118
	if (!ctx.cr6.eq) goto loc_82658118;
	// addis r31,r25,2
	ctx.r31.s64 = ctx.r25.s64 + 131072;
	// addi r31,r31,-32640
	ctx.r31.s64 = ctx.r31.s64 + -32640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82654d40
	ctx.lr = 0x826580F4;
	sub_82654D40(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,33760
	ctx.r10.u64 = ctx.r11.u64 | 33760;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r25,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x8265816c
	goto loc_8265816C;
loc_82658118:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82654ac8
	ctx.lr = 0x82658120;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826581d4
	if (!ctx.cr6.eq) goto loc_826581D4;
	// lbz r11,960(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826581d4
	if (!ctx.cr6.eq) goto loc_826581D4;
	// addis r31,r25,2
	ctx.r31.s64 = ctx.r25.s64 + 131072;
	// addi r31,r31,-32640
	ctx.r31.s64 = ctx.r31.s64 + -32640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82654c68
	ctx.lr = 0x82658148;
	sub_82654C68(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// ori r9,r11,33760
	ctx.r9.u64 = ctx.r11.u64 | 33760;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r10,17232
	ctx.r4.s64 = ctx.r10.s64 + 17232;
	// lwzx r3,r25,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8265816C:
	// bctrl 
	ctx.lr = 0x82658170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82658188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r9,20192
	ctx.r4.s64 = ctx.r9.s64 + 20192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821c2f90
	ctx.lr = 0x826581A0;
	sub_821C2F90(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826581C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
loc_826581D4:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r31,r31,19760
	ctx.r31.s64 = ctx.r31.s64 + 19760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826581F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,704(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265820C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265820C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9238
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82658218"))) PPC_WEAK_FUNC(sub_82658218);
PPC_FUNC_IMPL(__imp__sub_82658218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x82658220;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,3056(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3056);
	// addi r11,r3,848
	ctx.r11.s64 = ctx.r3.s64 + 848;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82658394
	if (ctx.cr6.lt) goto loc_82658394;
	// bne cr6,0x826583b4
	if (!ctx.cr6.eq) goto loc_826583B4;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r7,r3,2848
	ctx.r7.s64 = ctx.r3.s64 + 2848;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r3,5856
	ctx.r6.s64 = ctx.r3.s64 + 5856;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r5,r3,6096
	ctx.r5.s64 = ctx.r3.s64 + 6096;
	// sth r4,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r4.u16);
	// addi r4,r3,6336
	ctx.r4.s64 = ctx.r3.s64 + 6336;
	// addi r31,r3,6576
	ctx.r31.s64 = ctx.r3.s64 + 6576;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r7,r3,6816
	ctx.r7.s64 = ctx.r3.s64 + 6816;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r3,7056
	ctx.r30.s64 = ctx.r3.s64 + 7056;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r29,r3,7296
	ctx.r29.s64 = ctx.r3.s64 + 7296;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// addi r28,r3,7536
	ctx.r28.s64 = ctx.r3.s64 + 7536;
	// addi r27,r3,7776
	ctx.r27.s64 = ctx.r3.s64 + 7776;
	// stwx r6,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r6,r3,8016
	ctx.r6.s64 = ctx.r3.s64 + 8016;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r3,8256
	ctx.r3.s64 = ctx.r3.s64 + 8256;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// sth r26,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r26.u16);
	// stwx r5,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// stwx r4,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// stwx r31,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// stwx r30,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r30.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// sth r4,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r4.u16);
	// stwx r29,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r28.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// stwx r27,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r27.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// sth r4,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r4.u16);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_82658394:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r7,r3,2848
	ctx.r7.s64 = ctx.r3.s64 + 2848;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// bl 0x826554a0
	ctx.lr = 0x826583B4;
	sub_826554A0(ctx, base);
loc_826583B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826583BC"))) PPC_WEAK_FUNC(sub_826583BC);
PPC_FUNC_IMPL(__imp__sub_826583BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826583C0"))) PPC_WEAK_FUNC(sub_826583C0);
PPC_FUNC_IMPL(__imp__sub_826583C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x826583C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-10236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 196608;
	// addi r3,r3,-16384
	ctx.r3.s64 = ctx.r3.s64 + -16384;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,784(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826583F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32120
	ctx.r8.s64 = -2105016320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-27856(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x82658404;
	sub_8238EC00(ctx, base);
	// lwz r11,-10236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// lis r27,-32121
	ctx.r27.s64 = -2105081856;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r6,r7,38880
	ctx.r6.u64 = ctx.r7.u64 | 38880;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,-3624(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3624);
	// addis r28,r5,1
	ctx.r28.s64 = ctx.r5.s64 + 65536;
	// addi r28,r28,16256
	ctx.r28.s64 = ctx.r28.s64 + 16256;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lbzx r3,r28,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r6.u32);
	// lwz r26,28(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82658458
	if (!ctx.cr6.eq) goto loc_82658458;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82658464
	if (!ctx.cr6.eq) goto loc_82658464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// bl 0x82388c60
	ctx.lr = 0x82658450;
	sub_82388C60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8265845c
	goto loc_8265845C;
loc_82658458:
	// li r26,16
	ctx.r26.s64 = 16;
loc_8265845C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82658478
	if (ctx.cr6.eq) goto loc_82658478;
loc_82658464:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82389800
	ctx.lr = 0x82658470;
	sub_82389800(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8265847c
	goto loc_8265847C;
loc_82658478:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8265847C:
	// addis r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 131072;
	// addi r11,r11,-32640
	ctx.r11.s64 = ctx.r11.s64 + -32640;
	// addi r10,r11,976
	ctx.r10.s64 = ctx.r11.s64 + 976;
	// lwz r9,864(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826584e8
	if (!ctx.cr6.eq) goto loc_826584E8;
	// lwz r10,1608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r31,1392
	ctx.r11.s64 = ctx.r31.s64 + 1392;
	// stw r9,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r9.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x826584b8
	if (ctx.cr6.eq) goto loc_826584B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,228
	ctx.r3.s64 = ctx.r11.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x826584B8;
	sub_821C3048(ctx, base);
loc_826584B8:
	// lwz r10,1352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1352);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r31,1136
	ctx.r11.s64 = ctx.r31.s64 + 1136;
	// stw r9,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r9.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x826584dc
	if (ctx.cr6.eq) goto loc_826584DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,228
	ctx.r3.s64 = ctx.r11.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x826584DC;
	sub_821C3048(ctx, base);
loc_826584DC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r11.u32);
	// b 0x82658594
	goto loc_82658594;
loc_826584E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826584fc
	if (ctx.cr6.eq) goto loc_826584FC;
	// lbz r11,19(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 19);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82658500
	goto loc_82658500;
loc_826584FC:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82658500:
	// lwz r10,1608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// addi r30,r31,1392
	ctx.r30.s64 = ctx.r31.s64 + 1392;
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82658520
	if (ctx.cr6.eq) goto loc_82658520;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,228
	ctx.r3.s64 = ctx.r30.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x82658520;
	sub_821C3048(ctx, base);
loc_82658520:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8265853c
	if (ctx.cr6.eq) goto loc_8265853C;
	// lbz r11,19(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 19);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82658540
	if (ctx.cr6.gt) goto loc_82658540;
loc_8265853C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82658540:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82658554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82658594
	if (ctx.cr6.eq) goto loc_82658594;
	// lbz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 18);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82658574
	if (!ctx.cr6.gt) goto loc_82658574;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82658574:
	// lwz r9,1352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1352);
	// addi r10,r31,1136
	ctx.r10.s64 = ctx.r31.s64 + 1136;
	// stw r11,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r11.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82658594
	if (ctx.cr6.eq) goto loc_82658594;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,228
	ctx.r3.s64 = ctx.r10.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x82658594;
	sub_821C3048(ctx, base);
loc_82658594:
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// addi r30,r31,1648
	ctx.r30.s64 = ctx.r31.s64 + 1648;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826585B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826585C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262fff0
	ctx.lr = 0x826585D4;
	sub_8262FFF0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,2128
	ctx.r3.s64 = ctx.r31.s64 + 2128;
	// bl 0x8262fff0
	ctx.lr = 0x826585E0;
	sub_8262FFF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2608
	ctx.r3.s64 = ctx.r31.s64 + 2608;
	// bl 0x8262fff0
	ctx.lr = 0x826585EC;
	sub_8262FFF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1888
	ctx.r3.s64 = ctx.r31.s64 + 1888;
	// bl 0x8262fff0
	ctx.lr = 0x826585F8;
	sub_8262FFF0(ctx, base);
	// addi r30,r31,2368
	ctx.r30.s64 = ctx.r31.s64 + 2368;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262fff0
	ctx.lr = 0x82658608;
	sub_8262FFF0(ctx, base);
	// bl 0x82387a18
	ctx.lr = 0x8265860C;
	sub_82387A18(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82658644
	if (ctx.cr6.eq) goto loc_82658644;
	// lwz r11,-3624(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3624);
	// lwz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82658644
	if (ctx.cr6.eq) goto loc_82658644;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10240);
	// lwz r10,4304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4304);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,680(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 680);
	// b 0x82658650
	goto loc_82658650;
loc_82658644:
	// lwz r11,3776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82658650:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ble cr6,0x82658668
	if (!ctx.cr6.gt) goto loc_82658668;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8265866c
	goto loc_8265866C;
loc_82658668:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8265866C:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82658674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82658694
	if (ctx.cr6.eq) goto loc_82658694;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82658694
	if (ctx.cr6.lt) goto loc_82658694;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// ble cr6,0x82658698
	if (!ctx.cr6.gt) goto loc_82658698;
loc_82658694:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82658698:
	// addi r3,r31,2848
	ctx.r3.s64 = ctx.r31.s64 + 2848;
	// bl 0x8262fff0
	ctx.lr = 0x826586A0;
	sub_8262FFF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3088
	ctx.r3.s64 = ctx.r31.s64 + 3088;
	// bl 0x8262fff0
	ctx.lr = 0x826586AC;
	sub_8262FFF0(ctx, base);
	// lwz r11,4840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4840);
	// li r28,10
	ctx.r28.s64 = 10;
	// addi r29,r31,4624
	ctx.r29.s64 = ctx.r31.s64 + 4624;
	// stw r28,4840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4840, ctx.r28.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x826586d0
	if (ctx.cr6.eq) goto loc_826586D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,228
	ctx.r3.s64 = ctx.r29.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x826586D0;
	sub_821C3048(ctx, base);
loc_826586D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3808
	ctx.r3.s64 = ctx.r31.s64 + 3808;
	// bl 0x8262fff0
	ctx.lr = 0x826586DC;
	sub_8262FFF0(ctx, base);
	// bl 0x8227d3b0
	ctx.lr = 0x826586E0;
	sub_8227D3B0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x826586f0
	if (!ctx.cr6.lt) goto loc_826586F0;
	// bl 0x8227d3b0
	ctx.lr = 0x826586EC;
	sub_8227D3B0(ctx, base);
	// b 0x826586f4
	goto loc_826586F4;
loc_826586F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_826586F4:
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r31,3568
	ctx.r3.s64 = ctx.r31.s64 + 3568;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8262fff0
	ctx.lr = 0x82658704;
	sub_8262FFF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4048
	ctx.r3.s64 = ctx.r31.s64 + 4048;
	// bl 0x8262fff0
	ctx.lr = 0x82658710;
	sub_8262FFF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4288
	ctx.r3.s64 = ctx.r31.s64 + 4288;
	// bl 0x8262fff0
	ctx.lr = 0x8265871C;
	sub_8262FFF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3328
	ctx.r3.s64 = ctx.r31.s64 + 3328;
	// bl 0x8262fff0
	ctx.lr = 0x82658728;
	sub_8262FFF0(ctx, base);
	// lwz r11,5096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5096);
	// addi r30,r31,4880
	ctx.r30.s64 = ctx.r31.s64 + 4880;
	// stw r28,5096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5096, ctx.r28.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82658748
	if (ctx.cr6.eq) goto loc_82658748;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,228
	ctx.r3.s64 = ctx.r30.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x82658748;
	sub_821C3048(ctx, base);
loc_82658748:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,5136
	ctx.r3.s64 = ctx.r31.s64 + 5136;
	// bl 0x8262fff0
	ctx.lr = 0x82658754;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,5376
	ctx.r3.s64 = ctx.r31.s64 + 5376;
	// bl 0x8262fff0
	ctx.lr = 0x82658760;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,5616
	ctx.r3.s64 = ctx.r31.s64 + 5616;
	// bl 0x8262fff0
	ctx.lr = 0x8265876C;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,5856
	ctx.r3.s64 = ctx.r31.s64 + 5856;
	// bl 0x8262fff0
	ctx.lr = 0x82658778;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,6096
	ctx.r3.s64 = ctx.r31.s64 + 6096;
	// bl 0x8262fff0
	ctx.lr = 0x82658784;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,6336
	ctx.r3.s64 = ctx.r31.s64 + 6336;
	// bl 0x8262fff0
	ctx.lr = 0x82658790;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,6576
	ctx.r3.s64 = ctx.r31.s64 + 6576;
	// bl 0x8262fff0
	ctx.lr = 0x8265879C;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,6816
	ctx.r3.s64 = ctx.r31.s64 + 6816;
	// bl 0x8262fff0
	ctx.lr = 0x826587A8;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,7056
	ctx.r3.s64 = ctx.r31.s64 + 7056;
	// bl 0x8262fff0
	ctx.lr = 0x826587B4;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,7296
	ctx.r3.s64 = ctx.r31.s64 + 7296;
	// bl 0x8262fff0
	ctx.lr = 0x826587C0;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,7536
	ctx.r3.s64 = ctx.r31.s64 + 7536;
	// bl 0x8262fff0
	ctx.lr = 0x826587CC;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,7776
	ctx.r3.s64 = ctx.r31.s64 + 7776;
	// bl 0x8262fff0
	ctx.lr = 0x826587D8;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8016
	ctx.r3.s64 = ctx.r31.s64 + 8016;
	// bl 0x8262fff0
	ctx.lr = 0x826587E4;
	sub_8262FFF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8256
	ctx.r3.s64 = ctx.r31.s64 + 8256;
	// bl 0x8262fff0
	ctx.lr = 0x826587F0;
	sub_8262FFF0(ctx, base);
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lwz r10,3056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3056);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,4496(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4496);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 ^ 1;
	// xori r10,r4,1
	ctx.r10.u64 = ctx.r4.u64 ^ 1;
	// stw r8,8520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8520, ctx.r8.u32);
	// lwz r9,336(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 336);
	// stb r11,8516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8516, ctx.r11.u8);
	// stb r10,8517(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8517, ctx.r10.u8);
	// lwz r28,5584(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5584);
	// lwz r27,5824(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5824);
	// lwz r26,5344(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5344);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82658840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r30,r31,8500
	ctx.r30.s64 = ctx.r31.s64 + 8500;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,336(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8265885C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r6,r26
	ctx.r6.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lbz r4,8500(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8500);
	// rlwinm r11,r6,2,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x80;
	// stb r3,8501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8501, ctx.r3.u8);
	// ori r10,r5,60000
	ctx.r10.u64 = ctx.r5.u64 | 60000;
	// clrlwi r9,r4,25
	ctx.r9.u64 = ctx.r4.u32 & 0x7F;
	// xori r8,r11,128
	ctx.r8.u64 = ctx.r11.u64 ^ 128;
	// mullw r6,r25,r10
	ctx.r6.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r10.s32);
	// stw r6,8504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8504, ctx.r6.u32);
	// or r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cntlzw r4,r27
	ctx.r4.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// lbz r3,8502(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8502);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r10,r4,2,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x80;
	// stb r5,8500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8500, ctx.r5.u8);
	// clrlwi r9,r3,26
	ctx.r9.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 ^ 128;
	// xori r5,r7,1
	ctx.r5.u64 = ctx.r7.u64 ^ 1;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r31,8496
	ctx.r11.s64 = ctx.r31.s64 + 8496;
	// rlwimi r6,r5,6,25,25
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 6) & 0x40) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r6,8502(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8502, ctx.r6.u8);
	// lwz r28,6064(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6064);
	// lwz r11,6544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6544);
	// lwz r10,6784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// lwz r9,7024(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7024);
	// lwz r8,7264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7264);
	// lwz r7,7504(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
	// lwz r5,8224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8224);
	// lwz r4,7984(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7984);
	// lwz r6,8464(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// lwz r3,6304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lbz r29,8497(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8497);
	// cntlzw r28,r28
	ctx.r28.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// lwz r30,7744(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7744);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r28,r28,28,30,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0x2;
	// xori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 ^ 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// xori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 ^ 2;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r3,r28,r3
	ctx.r3.u64 = ctx.r28.u64 | ctx.r3.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r3,r3,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r3,r10,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r3,r9,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r7,r4
	ctx.r7.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// or r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 | ctx.r11.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r4,r9,28,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x2;
	// rlwinm r11,r7,2,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x80;
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r9,r5,1
	ctx.r9.u64 = ctx.r5.u64 ^ 1;
	// rlwinm r10,r6,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFE;
	// xori r7,r4,2
	ctx.r7.u64 = ctx.r4.u64 ^ 2;
	// xori r4,r11,128
	ctx.r4.u64 = ctx.r11.u64 ^ 128;
	// xori r6,r3,1
	ctx.r6.u64 = ctx.r3.u64 ^ 1;
	// or r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r5,r29,27
	ctx.r5.u64 = ctx.r29.u32 & 0x1F;
	// cntlzw r8,r30
	ctx.r8.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// or r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 | ctx.r6.u64;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r3,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// xori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r6,r10,5,24,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xE0;
	// rlwinm r5,r5,0,27,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r4,8496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8496, ctx.r4.u8);
	// stb r3,8497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8497, ctx.r3.u8);
	// stw r11,8536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8536, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826589D8"))) PPC_WEAK_FUNC(sub_826589D8);
PPC_FUNC_IMPL(__imp__sub_826589D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x826589E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r6,r9,55138
	ctx.r6.u64 = ctx.r9.u64 | 55138;
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lwz r8,4496(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4496);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r11,-10236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10236);
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r8,8520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8520, ctx.r8.u32);
	// stb r4,8516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8516, ctx.r4.u8);
	// lbzx r11,r3,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658a2c
	if (ctx.cr6.eq) goto loc_82658A2C;
	// lwz r11,2576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2576);
	// b 0x82658a30
	goto loc_82658A30;
loc_82658A2C:
	// lwz r11,2336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2336);
loc_82658A30:
	// stw r11,8508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8508, ctx.r11.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r11,-10236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10236);
	// ori r8,r9,55136
	ctx.r8.u64 = ctx.r9.u64 | 55136;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,2816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2816);
	// lbzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82658a58
	if (ctx.cr6.eq) goto loc_82658A58;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82658A58:
	// lwz r10,3056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3056);
	// addi r3,r31,4880
	ctx.r3.s64 = ctx.r31.s64 + 4880;
	// lwz r9,4880(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r29,5584(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5584);
	// lwz r28,5824(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5824);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r27,5344(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5344);
	// stw r11,8512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8512, ctx.r11.u32);
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// lwz r5,336(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// stb r6,8517(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8517, ctx.r6.u8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82658A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,4624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	// addi r11,r31,4624
	ctx.r11.s64 = ctx.r31.s64 + 4624;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r30,r31,8500
	ctx.r30.s64 = ctx.r31.s64 + 8500;
	// lwz r11,336(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82658AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,8501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8501, ctx.r3.u8);
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// lbz r9,8502(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8502);
	// cntlzw r8,r29
	ctx.r8.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// lbz r6,8500(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8500);
	// rlwinm r7,r10,2,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x80;
	// cntlzw r5,r27
	ctx.r5.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// xori r4,r7,128
	ctx.r4.u64 = ctx.r7.u64 ^ 128;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r9,r5,2,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x80;
	// lis r5,0
	ctx.r5.s64 = 0;
	// or r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 | ctx.r11.u64;
	// xori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 ^ 1;
	// clrlwi r4,r6,25
	ctx.r4.u64 = ctx.r6.u32 & 0x7F;
	// xori r10,r9,128
	ctx.r10.u64 = ctx.r9.u64 ^ 128;
	// ori r11,r5,60000
	ctx.r11.u64 = ctx.r5.u64 | 60000;
	// rlwimi r8,r7,6,25,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0x40) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFBF);
	// or r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 | ctx.r10.u64;
	// mullw r7,r26,r11
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r11.s32);
	// stb r8,8502(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8502, ctx.r8.u8);
	// stb r6,8500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8500, ctx.r6.u8);
	// stw r7,8504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8504, ctx.r7.u32);
	// lwz r4,6304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// lwz r3,6544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6544);
	// lwz r10,6784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// lwz r9,7024(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7024);
	// lwz r28,7264(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7264);
	// lwz r8,6064(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6064);
	// lwz r5,8464(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r8,8224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8224);
	// cntlzw r6,r4
	ctx.r6.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r30,7744(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7744);
	// rlwinm r4,r7,28,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// lwz r29,7504(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
	// rlwinm r7,r6,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r6,7984(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7984);
	// xori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 ^ 2;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r3,r7,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFE;
	// xori r7,r4,1
	ctx.r7.u64 = ctx.r4.u64 ^ 1;
	// cntlzw r4,r10
	ctx.r4.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// or r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r7,r3,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// cntlzw r3,r9
	ctx.r3.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// or r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// lbz r3,8497(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8497);
	// rlwinm r7,r10,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r31,8496
	ctx.r11.s64 = ctx.r31.s64 + 8496;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// or r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r7,r10,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r5,r10,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x2;
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r11,r8,2,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x80;
	// rlwinm r10,r7,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFE;
	// xori r9,r6,1
	ctx.r9.u64 = ctx.r6.u64 ^ 1;
	// xori r7,r5,2
	ctx.r7.u64 = ctx.r5.u64 ^ 2;
	// xori r6,r4,1
	ctx.r6.u64 = ctx.r4.u64 ^ 1;
	// clrlwi r5,r3,27
	ctx.r5.u64 = ctx.r3.u32 & 0x1F;
	// xori r4,r11,128
	ctx.r4.u64 = ctx.r11.u64 ^ 128;
	// or r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// cntlzw r8,r30
	ctx.r8.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// or r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r3,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// xori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r6,r10,5,24,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xE0;
	// rlwinm r5,r5,0,27,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r4,8496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8496, ctx.r4.u8);
	// stb r3,8497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8497, ctx.r3.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82658C24"))) PPC_WEAK_FUNC(sub_82658C24);
PPC_FUNC_IMPL(__imp__sub_82658C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658C28"))) PPC_WEAK_FUNC(sub_82658C28);
PPC_FUNC_IMPL(__imp__sub_82658C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82658C30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,3296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3296);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82658c98
	if (ctx.cr6.lt) goto loc_82658C98;
	// bne cr6,0x82658db0
	if (!ctx.cr6.eq) goto loc_82658DB0;
	// lwz r11,1136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1136);
	// addi r3,r29,1136
	ctx.r3.s64 = ctx.r29.s64 + 1136;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82658C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1608(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// addi r31,r29,1392
	ctx.r31.s64 = ctx.r29.s64 + 1392;
	// stw r3,1608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1608, ctx.r3.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82658c7c
	if (ctx.cr6.eq) goto loc_82658C7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x82658C7C;
	sub_821C3048(ctx, base);
loc_82658C7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82658C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82658C98:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,16256
	ctx.r9.s64 = ctx.r9.s64 + 16256;
	// addis r31,r9,2
	ctx.r31.s64 = ctx.r9.s64 + 131072;
	// addi r31,r31,-32640
	ctx.r31.s64 = ctx.r31.s64 + -32640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,784(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 784);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82658CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,864(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r5,r31,976
	ctx.r5.s64 = ctx.r31.s64 + 976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82658d20
	if (!ctx.cr6.eq) goto loc_82658D20;
	// lwz r11,1392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1392);
	// addi r31,r29,1392
	ctx.r31.s64 = ctx.r29.s64 + 1392;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82658CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,1608(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r9,1608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1608, ctx.r9.u32);
	// beq cr6,0x82658db0
	if (ctx.cr6.eq) goto loc_82658DB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x82658D18;
	sub_821C3048(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82658D20:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-27856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x82658D2C;
	sub_8238EC00(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82658d54
	if (ctx.cr6.eq) goto loc_82658D54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82389800
	ctx.lr = 0x82658D3C;
	sub_82389800(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82658d58
	if (ctx.cr6.eq) goto loc_82658D58;
	// lbz r11,19(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82658d5c
	goto loc_82658D5C;
loc_82658D54:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82658D58:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82658D5C:
	// lwz r10,1608(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// addi r31,r29,1392
	ctx.r31.s64 = ctx.r29.s64 + 1392;
	// stw r11,1608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1608, ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82658d7c
	if (ctx.cr6.eq) goto loc_82658D7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x821c3048
	ctx.lr = 0x82658D7C;
	sub_821C3048(ctx, base);
loc_82658D7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82658d98
	if (ctx.cr6.eq) goto loc_82658D98;
	// lbz r11,19(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82658d9c
	if (ctx.cr6.gt) goto loc_82658D9C;
loc_82658D98:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82658D9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82658DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82658DB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82658DB8"))) PPC_WEAK_FUNC(sub_82658DB8);
PPC_FUNC_IMPL(__imp__sub_82658DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82658DC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,-18768
	ctx.r4.s64 = ctx.r10.s64 + -18768;
	// lwz r3,-10236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// bl 0x821f9fb8
	ctx.lr = 0x82658DDC;
	sub_821F9FB8(ctx, base);
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// lbz r8,164(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 164);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,-10028(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10028);
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,16256
	ctx.r31.s64 = ctx.r31.s64 + 16256;
	// beq cr6,0x82658e40
	if (ctx.cr6.eq) goto loc_82658E40;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,19760
	ctx.r29.s64 = ctx.r29.s64 + 19760;
	// stb r11,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82658E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,704(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 704);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82658E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82658E40:
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,-27616
	ctx.r30.s64 = ctx.r30.s64 + -27616;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82658E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,704(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82658E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82658E7C"))) PPC_WEAK_FUNC(sub_82658E7C);
PPC_FUNC_IMPL(__imp__sub_82658E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658E80"))) PPC_WEAK_FUNC(sub_82658E80);
PPC_FUNC_IMPL(__imp__sub_82658E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82658E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-18768
	ctx.r4.s64 = ctx.r11.s64 + -18768;
	// lwz r3,-10236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// bl 0x821f9fb8
	ctx.lr = 0x82658EA4;
	sub_821F9FB8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r29,r10,2612
	ctx.r29.s64 = ctx.r10.s64 + 2612;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r28,56(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// bl 0x821c9790
	ctx.lr = 0x82658EC0;
	sub_821C9790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825ed480
	ctx.lr = 0x82658ED0;
	sub_825ED480(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,-13268
	ctx.r4.s64 = ctx.r7.s64 + -13268;
	// bl 0x82722678
	ctx.lr = 0x82658EE8;
	sub_82722678(ctx, base);
	// lis r6,-32112
	ctx.r6.s64 = -2104492032;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,-32121
	ctx.r5.s64 = -2105081856;
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,-10236(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// stb r11,27964(r6)
	PPC_STORE_U8(ctx.r6.u32 + 27964, ctx.r11.u8);
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stb r11,1258(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1258, ctx.r11.u8);
	// lwz r10,-10220(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10220);
	// stb r11,1120(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1120, ctx.r11.u8);
	// lwz r10,-10220(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10220);
	// stb r11,372(r10)
	PPC_STORE_U8(ctx.r10.u32 + 372, ctx.r11.u8);
	// lwz r10,-10220(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10220);
	// stb r11,1427(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1427, ctx.r11.u8);
	// lwz r10,-10220(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10220);
	// stb r11,1401(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1401, ctx.r11.u8);
	// lwz r10,-10220(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10220);
	// stb r11,375(r10)
	PPC_STORE_U8(ctx.r10.u32 + 375, ctx.r11.u8);
	// lwz r10,-10220(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10220);
	// stb r11,374(r10)
	PPC_STORE_U8(ctx.r10.u32 + 374, ctx.r11.u8);
	// lwz r10,-10220(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10220);
	// stb r11,377(r10)
	PPC_STORE_U8(ctx.r10.u32 + 377, ctx.r11.u8);
	// lwz r11,-10220(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10220);
	// stb r4,1529(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1529, ctx.r4.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82658F54"))) PPC_WEAK_FUNC(sub_82658F54);
PPC_FUNC_IMPL(__imp__sub_82658F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658F58"))) PPC_WEAK_FUNC(sub_82658F58);
PPC_FUNC_IMPL(__imp__sub_82658F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d0
	ctx.lr = 0x82658F60;
	__savegprlr_18(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r3,-10236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// lis r25,-32112
	ctx.r25.s64 = -2104492032;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 262144;
	// addi r10,r10,976
	ctx.r10.s64 = ctx.r10.s64 + 976;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8265937c
	if (!ctx.cr6.eq) goto loc_8265937C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x82658fb8
	if (ctx.cr6.eq) goto loc_82658FB8;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bne cr6,0x8265937c
	if (!ctx.cr6.eq) goto loc_8265937C;
loc_82658FB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r11,-18768
	ctx.r26.s64 = ctx.r11.s64 + -18768;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821f9fb8
	ctx.lr = 0x82658FC8;
	sub_821F9FB8(ctx, base);
	// lbz r11,27964(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 27964);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659218
	if (ctx.cr6.eq) goto loc_82659218;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// bl 0x825ee0e0
	ctx.lr = 0x82658FEC;
	sub_825EE0E0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r11,27964(r25)
	PPC_STORE_U8(ctx.r25.u32 + 27964, ctx.r11.u8);
	// lis r9,-32130
	ctx.r9.s64 = -2105671680;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r4,r10,6136
	ctx.r4.s64 = ctx.r10.s64 + 6136;
	// addi r31,r9,-19728
	ctx.r31.s64 = ctx.r9.s64 + -19728;
	// addi r28,r8,-22108
	ctx.r28.s64 = ctx.r8.s64 + -22108;
	// lwz r11,-10236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x8265901C;
	sub_82691650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x82659030;
	sub_823DEDD8(ctx, base);
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-10220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// bl 0x826209d8
	ctx.lr = 0x82659040;
	sub_826209D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-10220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826590e4
	if (ctx.cr6.eq) goto loc_826590E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82659060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r3,-10220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lvx128 v62,r9,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stvx128 v62,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r9,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r0,r28
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8261fc88
	ctx.lr = 0x826590B8;
	sub_8261FC88(ctx, base);
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,-10220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82625ac0
	ctx.lr = 0x826590E0;
	sub_82625AC0(ctx, base);
	// b 0x82659114
	goto loc_82659114;
loc_826590E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82625f50
	ctx.lr = 0x82659114;
	sub_82625F50(ctx, base);
loc_82659114:
	// lwz r11,-10220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,6124
	ctx.r3.s64 = ctx.r10.s64 + 6124;
	// stb r30,1120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1120, ctx.r30.u8);
	// lwz r11,-10220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r30,372(r11)
	PPC_STORE_U8(ctx.r11.u32 + 372, ctx.r30.u8);
	// lwz r11,-10220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r30,1427(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1427, ctx.r30.u8);
	// lwz r11,-10220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r30,1401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1401, ctx.r30.u8);
	// lwz r11,-10220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r30,375(r11)
	PPC_STORE_U8(ctx.r11.u32 + 375, ctx.r30.u8);
	// lwz r11,-10220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r30,374(r11)
	PPC_STORE_U8(ctx.r11.u32 + 374, ctx.r30.u8);
	// lwz r11,-10220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r30,377(r11)
	PPC_STORE_U8(ctx.r11.u32 + 377, ctx.r30.u8);
	// bl 0x821fa230
	ctx.lr = 0x82659158;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82659168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-10236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r30,248(r7)
	PPC_STORE_U32(ctx.r7.u32 + 248, ctx.r30.u32);
	// lwz r3,-10236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// bl 0x821f9fb8
	ctx.lr = 0x82659180;
	sub_821F9FB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826591a8
	if (ctx.cr6.eq) goto loc_826591A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82720e28
	ctx.lr = 0x82659194;
	sub_82720E28(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827205a8
	ctx.lr = 0x826591A8;
	sub_827205A8(ctx, base);
loc_826591A8:
	// lwz r11,-10236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// addi r30,r30,16256
	ctx.r30.s64 = ctx.r30.s64 + 16256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x826591C4;
	sub_82641CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826591D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826591f0
	if (ctx.cr6.eq) goto loc_826591F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82659200
	goto loc_82659200;
loc_826591F0:
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x826591FC;
	sub_82641CB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82659200:
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265920C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24592);
	// b 0x82659378
	goto loc_82659378;
loc_82659218:
	// lwz r11,-10236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82659230;
	sub_82641CB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82659244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8265937c
	if (ctx.cr6.eq) goto loc_8265937C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// bl 0x825ee0e0
	ctx.lr = 0x82659264;
	sub_825EE0E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82657678
	ctx.lr = 0x8265926C;
	sub_82657678(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82659370
	if (ctx.cr6.eq) goto loc_82659370;
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lwz r10,-10236(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// li r9,352
	ctx.r9.s64 = 352;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r3,-32130
	ctx.r3.s64 = -2105671680;
	// lwz r11,-10220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32130
	ctx.r5.s64 = -2105671680;
	// addi r27,r3,-22108
	ctx.r27.s64 = ctx.r3.s64 + -22108;
	// lfs f0,6076(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6076);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r6,6060
	ctx.r4.s64 = ctx.r6.s64 + 6060;
	// addi r28,r5,-19728
	ctx.r28.s64 = ctx.r5.s64 + -19728;
	// lvx128 v58,r11,r9
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x826592C4;
	sub_82691650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x826592D8;
	sub_823DEDD8(ctx, base);
	// lwz r11,-10220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82625f50
	ctx.lr = 0x826592FC;
	sub_82625F50(ctx, base);
	// lwz r10,-10220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r11,27964(r25)
	PPC_STORE_U8(ctx.r25.u32 + 27964, ctx.r11.u8);
	// stb r11,1120(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1120, ctx.r11.u8);
	// lwz r10,-10220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r11,372(r10)
	PPC_STORE_U8(ctx.r10.u32 + 372, ctx.r11.u8);
	// lwz r10,-10220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r11,1427(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1427, ctx.r11.u8);
	// lwz r10,-10220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r11,1401(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1401, ctx.r11.u8);
	// lwz r10,-10220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r30,375(r10)
	PPC_STORE_U8(ctx.r10.u32 + 375, ctx.r30.u8);
	// lwz r10,-10220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r30,374(r10)
	PPC_STORE_U8(ctx.r10.u32 + 374, ctx.r30.u8);
	// lwz r10,-10220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10220);
	// stb r11,377(r10)
	PPC_STORE_U8(ctx.r10.u32 + 377, ctx.r11.u8);
	// lwz r3,-10236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// bl 0x821f9fb8
	ctx.lr = 0x82659348;
	sub_821F9FB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82659354
	if (ctx.cr6.eq) goto loc_82659354;
	// bl 0x82720560
	ctx.lr = 0x82659354;
	sub_82720560(ctx, base);
loc_82659354:
	// lwz r11,-10236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8220f040
	ctx.lr = 0x82659364;
	sub_8220F040(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// b 0x82659378
	goto loc_82659378;
loc_82659370:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24612);
loc_82659378:
	// bl 0x821e6800
	ctx.lr = 0x8265937C;
	sub_821E6800(ctx, base);
loc_8265937C:
	// lbz r11,27964(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 27964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826593ac
	if (!ctx.cr6.eq) goto loc_826593AC;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82635be0
	ctx.lr = 0x826593A4;
	sub_82635BE0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823d9220
	__restgprlr_18(ctx, base);
	return;
loc_826593AC:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823d9220
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826593B8"))) PPC_WEAK_FUNC(sub_826593B8);
PPC_FUNC_IMPL(__imp__sub_826593B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x826593C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,55
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 55, ctx.xer);
	// beq cr6,0x826593dc
	if (ctx.cr6.eq) goto loc_826593DC;
	// bl 0x826537d0
	ctx.lr = 0x826593D4;
	sub_826537D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_826593DC:
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x82631f88
	ctx.lr = 0x826593E4;
	sub_82631F88(ctx, base);
	// lwz r11,856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x826593f4
	if (ctx.cr6.lt) goto loc_826593F4;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_826593F4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265941c
	if (ctx.cr6.eq) goto loc_8265941C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82659410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8265941C:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r31,r10,3
	ctx.r31.s64 = ctx.r10.s64 + 196608;
	// addi r31,r31,-16384
	ctx.r31.s64 = ctx.r31.s64 + -16384;
	// addi r30,r31,976
	ctx.r30.s64 = ctx.r31.s64 + 976;
	// lwz r9,864(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82659450
	if (!ctx.cr6.eq) goto loc_82659450;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82655ff8
	ctx.lr = 0x82659448;
	sub_82655FF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82659454
	goto loc_82659454;
loc_82659450:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82659454:
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8265946c
	if (!ctx.cr6.eq) goto loc_8265946C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-8672
	ctx.r3.s64 = ctx.r11.s64 + -8672;
	// b 0x82659480
	goto loc_82659480;
loc_8265946C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82659480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82659480:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x82659488;
	sub_821C9790(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,-3624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3624);
	// lwz r3,700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// bl 0x82282580
	ctx.lr = 0x826594A0;
	sub_82282580(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82216138
	ctx.lr = 0x826594A8;
	sub_82216138(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826594B4"))) PPC_WEAK_FUNC(sub_826594B4);
PPC_FUNC_IMPL(__imp__sub_826594B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826594B8"))) PPC_WEAK_FUNC(sub_826594B8);
PPC_FUNC_IMPL(__imp__sub_826594B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x826594C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,27960
	ctx.r31.s64 = ctx.r11.s64 + 27960;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826594EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x823dd7f0
	ctx.lr = 0x826594F0;
	sub_823DD7F0(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82659514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x823dd7f0
	ctx.lr = 0x82659518;
	sub_823DD7F0(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8265952c
	if (!ctx.cr6.gt) goto loc_8265952C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8265952C:
	// bge cr6,0x82659540
	if (!ctx.cr6.lt) goto loc_82659540;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82659540:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265954C"))) PPC_WEAK_FUNC(sub_8265954C);
PPC_FUNC_IMPL(__imp__sub_8265954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659550"))) PPC_WEAK_FUNC(sub_82659550);
PPC_FUNC_IMPL(__imp__sub_82659550) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,27960
	ctx.r31.s64 = ctx.r11.s64 + 27960;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82659590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x823de058
	ctx.lr = 0x82659594;
	sub_823DE058(ctx, base);
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826595B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x823de058
	ctx.lr = 0x826595B8;
	sub_823DE058(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x826595cc
	if (!ctx.cr6.gt) goto loc_826595CC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x826595e4
	goto loc_826595E4;
loc_826595CC:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x826595e0
	if (!ctx.cr6.lt) goto loc_826595E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// b 0x826595e4
	goto loc_826595E4;
loc_826595E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826595E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82659600"))) PPC_WEAK_FUNC(sub_82659600);
PPC_FUNC_IMPL(__imp__sub_82659600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82659608;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32112
	ctx.r29.s64 = -2104492032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r27,r29,27960
	ctx.r27.s64 = ctx.r29.s64 + 27960;
	// lis r28,-32121
	ctx.r28.s64 = -2105081856;
	// lwz r3,-8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// lwz r31,-10244(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10244);
	// lwz r5,-4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265963C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218310
	ctx.lr = 0x82659648;
	sub_82218310(ctx, base);
	// lwz r11,-8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// lwz r5,-4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r31,-10244(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10244);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82659670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218310
	ctx.lr = 0x8265967C;
	sub_82218310(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823db730
	ctx.lr = 0x82659688;
	sub_823DB730(ctx, base);
	// lwz r11,27960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27960);
	// mullw r3,r3,r11
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82659698"))) PPC_WEAK_FUNC(sub_82659698);
PPC_FUNC_IMPL(__imp__sub_82659698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// lis r7,-32112
	ctx.r7.s64 = -2104492032;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r7,27956
	ctx.r8.s64 = ctx.r7.s64 + 27956;
	// rlwinm r9,r6,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r6,-32154
	ctx.r6.s64 = -2107244544;
	// lhz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,27956(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27956, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r6,r6,-27136
	ctx.r6.s64 = ctx.r6.s64 + -27136;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// b 0x823dcf08
	sub_823DCF08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826596E0"))) PPC_WEAK_FUNC(sub_826596E0);
PPC_FUNC_IMPL(__imp__sub_826596E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// lis r7,-32112
	ctx.r7.s64 = -2104492032;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r7,27956
	ctx.r8.s64 = ctx.r7.s64 + 27956;
	// rlwinm r9,r6,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r6,-32154
	ctx.r6.s64 = -2107244544;
	// lhz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,27956(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27956, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r6,r6,-27464
	ctx.r6.s64 = ctx.r6.s64 + -27464;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// b 0x823dcf08
	sub_823DCF08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82659728"))) PPC_WEAK_FUNC(sub_82659728);
PPC_FUNC_IMPL(__imp__sub_82659728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// lis r7,-32112
	ctx.r7.s64 = -2104492032;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r7,27956
	ctx.r8.s64 = ctx.r7.s64 + 27956;
	// rlwinm r9,r6,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r6,-32154
	ctx.r6.s64 = -2107244544;
	// lhz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,27956(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27956, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r6,r6,-27312
	ctx.r6.s64 = ctx.r6.s64 + -27312;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// b 0x823dcf08
	sub_823DCF08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82659770"))) PPC_WEAK_FUNC(sub_82659770);
PPC_FUNC_IMPL(__imp__sub_82659770) {
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
	// bl 0x82656c20
	ctx.lr = 0x82659788;
	sub_82656C20(ctx, base);
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

__attribute__((alias("__imp__sub_826597A0"))) PPC_WEAK_FUNC(sub_826597A0);
PPC_FUNC_IMPL(__imp__sub_826597A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826597B4"))) PPC_WEAK_FUNC(sub_826597B4);
PPC_FUNC_IMPL(__imp__sub_826597B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826597B8"))) PPC_WEAK_FUNC(sub_826597B8);
PPC_FUNC_IMPL(__imp__sub_826597B8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r9,100
	ctx.r9.s64 = 100;
	// addi r10,r11,-4092
	ctx.r10.s64 = ctx.r11.s64 + -4092;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r3,400
	ctx.r3.s64 = 400;
	// sth r31,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r31.u16);
	// sth r9,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r9.u16);
	// bl 0x82130528
	ctx.lr = 0x826597F4;
	sub_82130528(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r7,-32120
	ctx.r7.s64 = -2105016320;
	// addi r6,r8,-2596
	ctx.r6.s64 = ctx.r8.s64 + -2596;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r3,-27856(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x82659810;
	sub_8238EC00(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// stb r31,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r31.u8);
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

__attribute__((alias("__imp__sub_82659834"))) PPC_WEAK_FUNC(sub_82659834);
PPC_FUNC_IMPL(__imp__sub_82659834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659838"))) PPC_WEAK_FUNC(sub_82659838);
PPC_FUNC_IMPL(__imp__sub_82659838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82659850"))) PPC_WEAK_FUNC(sub_82659850);
PPC_FUNC_IMPL(__imp__sub_82659850) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r9,18
	ctx.r9.s64 = 18;
	// addi r10,r11,-4092
	ctx.r10.s64 = ctx.r11.s64 + -4092;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r3,72
	ctx.r3.s64 = 72;
	// sth r31,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r31.u16);
	// sth r9,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r9.u16);
	// bl 0x82130528
	ctx.lr = 0x8265988C;
	sub_82130528(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r7,-32120
	ctx.r7.s64 = -2105016320;
	// addi r6,r8,-2544
	ctx.r6.s64 = ctx.r8.s64 + -2544;
	// stb r31,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r31.u8);
	// stb r31,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r31.u8);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stb r31,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r31.u8);
	// lwz r3,-27856(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x826598B4;
	sub_8238EC00(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_826598D4"))) PPC_WEAK_FUNC(sub_826598D4);
PPC_FUNC_IMPL(__imp__sub_826598D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826598D8"))) PPC_WEAK_FUNC(sub_826598D8);
PPC_FUNC_IMPL(__imp__sub_826598D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x826598E0;
	__savegprlr_20(ctx, base);
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659918
	if (ctx.cr6.eq) goto loc_82659918;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_82659900:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lhz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82659900
	if (!ctx.cr6.eq) goto loc_82659900;
loc_82659918:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82130528
	ctx.lr = 0x82659920;
	sub_82130528(ctx, base);
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r11,-10240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10240);
	// lwz r11,4304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4304);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r11,2356
	ctx.r30.s64 = ctx.r11.s64 + 2356;
	// lwz r10,2352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82659950
	if (ctx.cr6.gt) goto loc_82659950;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82659950:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r10,6104
	ctx.r3.s64 = ctx.r10.s64 + 6104;
	// li r22,-1
	ctx.r22.s64 = -1;
	// bl 0x821fa230
	ctx.lr = 0x82659964;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82659974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r3.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826599b0
	if (!ctx.cr6.eq) goto loc_826599B0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-2500
	ctx.r3.s64 = ctx.r11.s64 + -2500;
	// bl 0x821fa230
	ctx.lr = 0x82659990;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826599A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826599b4
	if (ctx.cr6.eq) goto loc_826599B4;
loc_826599B0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_826599B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// bne cr6,0x826599d8
	if (!ctx.cr6.eq) goto loc_826599D8;
	// bl 0x82387a18
	ctx.lr = 0x826599C8;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x826599dc
	if (ctx.cr6.eq) goto loc_826599DC;
loc_826599D8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_826599DC:
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,72(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r4,r10,-2524
	ctx.r4.s64 = ctx.r10.s64 + -2524;
	// bl 0x82294ef8
	ctx.lr = 0x826599F4;
	sub_82294EF8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82659a0c
	if (!ctx.cr6.eq) goto loc_82659A0C;
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659a10
	if (!ctx.cr6.eq) goto loc_82659A10;
loc_82659A0C:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82659A10:
	// bl 0x82387a18
	ctx.lr = 0x82659A14;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659a88
	if (ctx.cr6.eq) goto loc_82659A88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x82659A28;
	sub_82388580(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-10240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10240);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82270170
	ctx.lr = 0x82659A38;
	sub_82270170(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82272a30
	ctx.lr = 0x82659A40;
	sub_82272A30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82659a88
	if (ctx.cr6.eq) goto loc_82659A88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x82659A50;
	sub_82388580(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-10240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10240);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82270170
	ctx.lr = 0x82659A60;
	sub_82270170(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82272a30
	ctx.lr = 0x82659A68;
	sub_82272A30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824818a0
	ctx.lr = 0x82659A74;
	sub_824818A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824818a0
	ctx.lr = 0x82659A84;
	sub_824818A0(ctx, base);
	// add r22,r29,r3
	ctx.r22.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_82659A88:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,14
	ctx.r10.s64 = 14;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82659A98:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82659a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82659A98;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82659b8c
	if (!ctx.cr6.gt) goto loc_82659B8C;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-32121
	ctx.r28.s64 = -2105081856;
	// addi r25,r11,-28304
	ctx.r25.s64 = ctx.r11.s64 + -28304;
loc_82659ACC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,-10020(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10020);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwzx r4,r9,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// beq cr6,0x82659b00
	if (ctx.cr6.eq) goto loc_82659B00;
	// bl 0x826bf4b0
	ctx.lr = 0x82659AF0;
	sub_826BF4B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659b00
	if (!ctx.cr6.eq) goto loc_82659B00;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82659B00:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659b7c
	if (!ctx.cr6.eq) goto loc_82659B7C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82659b7c
	if (ctx.cr6.eq) goto loc_82659B7C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82659b68
	if (ctx.cr6.eq) goto loc_82659B68;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82659b68
	if (ctx.cr6.eq) goto loc_82659B68;
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659b5c
	if (!ctx.cr6.eq) goto loc_82659B5C;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x82659b5c
	if (ctx.cr6.lt) goto loc_82659B5C;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// ble cr6,0x82659b60
	if (!ctx.cr6.gt) goto loc_82659B60;
loc_82659B5C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82659B60:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82659b6c
	goto loc_82659B6C;
loc_82659B68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82659B6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659b7c
	if (ctx.cr6.eq) goto loc_82659B7C;
	// stbx r24,r10,r20
	PPC_STORE_U8(ctx.r10.u32 + ctx.r20.u32, ctx.r24.u8);
loc_82659B7C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,160
	ctx.r27.s64 = ctx.r27.s64 + 160;
	// bne 0x82659acc
	if (!ctx.cr0.eq) goto loc_82659ACC;
loc_82659B8C:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659bc8
	if (ctx.cr6.eq) goto loc_82659BC8;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659bc8
	if (!ctx.cr6.eq) goto loc_82659BC8;
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,17
	ctx.r8.s64 = 17;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_82659BC8:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659bf8
	if (ctx.cr6.eq) goto loc_82659BF8;
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,18
	ctx.r8.s64 = 18;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_82659BF8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659c10
	if (ctx.cr6.eq) goto loc_82659C10;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659da8
	if (!ctx.cr6.eq) goto loc_82659DA8;
loc_82659C10:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r20,1
	ctx.r6.s64 = ctx.r20.s64 + 1;
loc_82659C18:
	// lbz r11,-1(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659c44
	if (ctx.cr6.eq) goto loc_82659C44;
	// lhz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// sth r5,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r5.u16);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
loc_82659C44:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659c74
	if (ctx.cr6.eq) goto loc_82659C74;
	// lhz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// sth r4,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r4.u16);
	// stwx r5,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u32);
loc_82659C74:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// blt cr6,0x82659c18
	if (ctx.cr6.lt) goto loc_82659C18;
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659d5c
	if (ctx.cr6.eq) goto loc_82659D5C;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659d5c
	if (!ctx.cr6.eq) goto loc_82659D5C;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659d5c
	if (!ctx.cr6.eq) goto loc_82659D5C;
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 8, ctx.xer);
	// bgt cr6,0x82659d5c
	if (ctx.cr6.gt) goto loc_82659D5C;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-27856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x82659CBC;
	sub_8238EC00(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-32121
	ctx.r28.s64 = -2105081856;
	// lwz r11,-12648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12648);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = ctx.r8.s32 / ctx.r9.s32;
	// clrlwi r29,r7,24
	ctx.r29.u64 = ctx.r7.u32 & 0xFF;
loc_82659CDC:
	// lwz r11,-6148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6148);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,11984
	ctx.r4.s64 = ctx.r11.s64 + 11984;
	// bl 0x826558c0
	ctx.lr = 0x82659CF0;
	sub_826558C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82250ed8
	ctx.lr = 0x82659CFC;
	sub_82250ED8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659d28
	if (ctx.cr6.eq) goto loc_82659D28;
	// lbz r10,1123(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1123);
	// cmplwi cr6,r10,205
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 205, ctx.xer);
	// bne cr6,0x82659d1c
	if (!ctx.cr6.eq) goto loc_82659D1C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82659d20
	goto loc_82659D20;
loc_82659D1C:
	// lbz r11,1122(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1122);
loc_82659D20:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82659d38
	if (ctx.cr6.gt) goto loc_82659D38;
loc_82659D28:
	// addi r30,r30,1056
	ctx.r30.s64 = ctx.r30.s64 + 1056;
	// cmpwi cr6,r30,21120
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 21120, ctx.xer);
	// blt cr6,0x82659cdc
	if (ctx.cr6.lt) goto loc_82659CDC;
	// b 0x82659d5c
	goto loc_82659D5C;
loc_82659D38:
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_82659D5C:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lbz r4,18(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82204310
	ctx.lr = 0x82659D70;
	sub_82204310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82659da8
	if (ctx.cr6.eq) goto loc_82659DA8;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659da8
	if (!ctx.cr6.eq) goto loc_82659DA8;
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,15
	ctx.r8.s64 = 15;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_82659DA8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82130588
	ctx.lr = 0x82659DB0;
	sub_82130588(ctx, base);
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82659DB8"))) PPC_WEAK_FUNC(sub_82659DB8);
PPC_FUNC_IMPL(__imp__sub_82659DB8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-4092
	ctx.r9.s64 = ctx.r11.s64 + -4092;
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// bl 0x82130528
	ctx.lr = 0x82659DF0;
	sub_82130528(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r6,-32120
	ctx.r6.s64 = -2105016320;
	// addi r5,r7,-2480
	ctx.r5.s64 = ctx.r7.s64 + -2480;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwz r3,-27856(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x82659E0C;
	sub_8238EC00(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82659E28"))) PPC_WEAK_FUNC(sub_82659E28);
PPC_FUNC_IMPL(__imp__sub_82659E28) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r11,-4092
	ctx.r10.s64 = ctx.r11.s64 + -4092;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// sth r31,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r31.u16);
	// sth r9,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r9.u16);
	// bl 0x82130528
	ctx.lr = 0x82659E64;
	sub_82130528(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r7,-32120
	ctx.r7.s64 = -2105016320;
	// addi r6,r8,-2428
	ctx.r6.s64 = ctx.r8.s64 + -2428;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r3,-27856(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x82659E80;
	sub_8238EC00(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// stb r31,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r31.u8);
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

__attribute__((alias("__imp__sub_82659EA4"))) PPC_WEAK_FUNC(sub_82659EA4);
PPC_FUNC_IMPL(__imp__sub_82659EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659EA8"))) PPC_WEAK_FUNC(sub_82659EA8);
PPC_FUNC_IMPL(__imp__sub_82659EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82659EC4"))) PPC_WEAK_FUNC(sub_82659EC4);
PPC_FUNC_IMPL(__imp__sub_82659EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659EC8"))) PPC_WEAK_FUNC(sub_82659EC8);
PPC_FUNC_IMPL(__imp__sub_82659EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x82659ED0;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32121
	ctx.r25.s64 = -2105081856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-12776
	ctx.r4.s64 = ctx.r11.s64 + -12776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-10236(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10236);
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lis r9,-32130
	ctx.r9.s64 = -2105671680;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r10,-7660
	ctx.r30.s64 = ctx.r10.s64 + -7660;
	// addi r27,r9,-22108
	ctx.r27.s64 = ctx.r9.s64 + -22108;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82659F0C;
	sub_82691650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x82659F20;
	sub_823DEDD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82659f38
	if (ctx.cr6.eq) goto loc_82659F38;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lbz r10,27964(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27964);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82659fc8
	if (!ctx.cr6.eq) goto loc_82659FC8;
loc_82659F38:
	// addi r11,r29,-56
	ctx.r11.s64 = ctx.r29.s64 + -56;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8265a088
	if (ctx.cr6.gt) goto loc_8265A088;
	// lis r12,-32154
	ctx.r12.s64 = -2107244544;
	// addi r12,r12,-24740
	ctx.r12.s64 = ctx.r12.s64 + -24740;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82659F7C;
	case 1:
		goto loc_8265A088;
	case 2:
		goto loc_8265A400;
	case 3:
		goto loc_8265A088;
	case 4:
		goto loc_8265A088;
	case 5:
		goto loc_8265A088;
	case 6:
		goto loc_82659FD4;
	case 7:
		goto loc_82659FC8;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-24708(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24708);
	// lwz r19,-24440(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24440);
	// lwz r19,-23552(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -23552);
	// lwz r19,-24440(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24440);
	// lwz r19,-24440(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24440);
	// lwz r19,-24440(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24440);
	// lwz r19,-24620(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24620);
	// lwz r19,-24632(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24632);
loc_82659F7C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826537d0
	ctx.lr = 0x82659F8C;
	sub_826537D0(ctx, base);
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r30,r11,3408
	ctx.r30.u64 = ctx.r11.u64 | 3408;
	// lwz r11,-10028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10028);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82224a08
	ctx.lr = 0x82659FA8;
	sub_82224A08(ctx, base);
	// lwz r11,-10028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10028);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82224a18
	ctx.lr = 0x82659FB4;
	sub_82224A18(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,1216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1216, ctx.r10.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_82659FC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_82659FD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x82659FDC;
	sub_82388580(ctx, base);
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,-10240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10240);
	// bl 0x82270170
	ctx.lr = 0x82659FEC;
	sub_82270170(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x824e70e0
	ctx.lr = 0x82659FF4;
	sub_824E70E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a02c
	if (ctx.cr6.eq) goto loc_8265A02C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x8265A008;
	sub_82388580(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-10240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10240);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82270170
	ctx.lr = 0x8265A018;
	sub_82270170(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x824e70f0
	ctx.lr = 0x8265A020;
	sub_824E70F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265a0a0
	if (!ctx.cr6.eq) goto loc_8265A0A0;
loc_8265A02C:
	// lbz r11,5008(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5008);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a0a0
	if (ctx.cr6.eq) goto loc_8265A0A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,6612
	ctx.r3.s64 = ctx.r11.s64 + 6612;
	// bl 0x821fa230
	ctx.lr = 0x8265A044;
	sub_821FA230(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265A058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8265A070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,64(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8265A088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265A088:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826537d0
	ctx.lr = 0x8265A098;
	sub_826537D0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_8265A0A0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-5016
	ctx.r3.s64 = ctx.r11.s64 + -5016;
	// bl 0x821fa230
	ctx.lr = 0x8265A0AC;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265A0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8265a314
	if (ctx.cr6.eq) goto loc_8265A314;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x8265A0D0;
	sub_82388580(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-10240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10240);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82270170
	ctx.lr = 0x8265A0E0;
	sub_82270170(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x824e70f0
	ctx.lr = 0x8265A0E8;
	sub_824E70F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265a314
	if (ctx.cr6.eq) goto loc_8265A314;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x8265A100;
	sub_821E6800(ctx, base);
	// lis r27,-32120
	ctx.r27.s64 = -2105016320;
	// lwz r3,-27856(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x8265A10C;
	sub_8238EC00(ctx, base);
	// lwz r28,864(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r30,r31,672
	ctx.r30.s64 = ctx.r31.s64 + 672;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82203240
	ctx.lr = 0x8265A124;
	sub_82203240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265A13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823895f8
	ctx.lr = 0x8265A14C;
	sub_823895F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,-10236(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10236);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,44(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// ori r29,r7,16256
	ctx.r29.u64 = ctx.r7.u64 | 16256;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r5,r29
	ctx.r3.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r23,864(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// bl 0x82641cb0
	ctx.lr = 0x8265A184;
	sub_82641CB0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r26,0(r22)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82203240
	ctx.lr = 0x8265A198;
	sub_82203240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,788(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 788);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265A1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 16);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,110
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 110, ctx.xer);
	// bgt cr6,0x82659fc8
	if (ctx.cr6.gt) goto loc_82659FC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,-10236(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10236);
	// addi r4,r11,-18768
	ctx.r4.s64 = ctx.r11.s64 + -18768;
	// bl 0x821f9fb8
	ctx.lr = 0x8265A1E4;
	sub_821F9FB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r26,56(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// sth r28,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r28.u16);
	// sth r28,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// bl 0x82631f88
	ctx.lr = 0x8265A204;
	sub_82631F88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265a278
	if (!ctx.cr6.gt) goto loc_8265A278;
loc_8265A20C:
	// lwz r3,-27856(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x8265A214;
	sub_8238EC00(ctx, base);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265A238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82389800
	ctx.lr = 0x8265A244;
	sub_82389800(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 16);
	// extsh r23,r7
	ctx.r23.s64 = ctx.r7.s16;
	// bl 0x8262e420
	ctx.lr = 0x8265A25C;
	sub_8262E420(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r23,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r23.u32);
	// bl 0x82631f88
	ctx.lr = 0x8265A270;
	sub_82631F88(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265a20c
	if (ctx.cr6.lt) goto loc_8265A20C;
loc_8265A278:
	// lwz r11,-10236(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10236);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8265A28C;
	sub_82641CB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265A2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-10236(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10236);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r8,r29
	ctx.r3.u64 = ctx.r8.u64 + ctx.r29.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8265A2B4;
	sub_82641CB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82203240
	ctx.lr = 0x8265A2C8;
	sub_82203240(ctx, base);
	// lhz r7,16(r24)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r24.u32 + 16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,688(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265A2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r7,94(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8265a308
	if (ctx.cr6.eq) goto loc_8265A308;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82130588
	ctx.lr = 0x8265A308;
	sub_82130588(ctx, base);
loc_8265A308:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_8265A314:
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r10,r31,952
	ctx.r10.s64 = ctx.r31.s64 + 952;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8265a38c
	if (!ctx.cr6.eq) goto loc_8265A38C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x8265A330;
	sub_821E6800(ctx, base);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,25288
	ctx.r4.s64 = ctx.r10.s64 + 25288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c2fb0
	ctx.lr = 0x8265A34C;
	sub_821C2FB0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r3,r31,3216
	ctx.r3.s64 = ctx.r31.s64 + 3216;
	// lwz r6,28000(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28000);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r5,27996(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27996);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// bl 0x826350b8
	ctx.lr = 0x8265A380;
	sub_826350B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_8265A38C:
	// addi r10,r31,976
	ctx.r10.s64 = ctx.r31.s64 + 976;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8265a088
	if (!ctx.cr6.eq) goto loc_8265A088;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x8265A3A4;
	sub_821E6800(ctx, base);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,25288
	ctx.r4.s64 = ctx.r10.s64 + 25288;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821c2fb0
	ctx.lr = 0x8265A3C0;
	sub_821C2FB0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r3,r31,3216
	ctx.r3.s64 = ctx.r31.s64 + 3216;
	// lwz r6,28000(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28000);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r5,27996(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27996);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// bl 0x826350b8
	ctx.lr = 0x8265A3F4;
	sub_826350B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
loc_8265A400:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-5016
	ctx.r3.s64 = ctx.r11.s64 + -5016;
	// bl 0x821fa230
	ctx.lr = 0x8265A40C;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265A41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8265a088
	if (ctx.cr6.eq) goto loc_8265A088;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r10,r31,952
	ctx.r10.s64 = ctx.r31.s64 + 952;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8265a088
	if (!ctx.cr6.eq) goto loc_8265A088;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x8265A444;
	sub_821E6800(ctx, base);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,25288
	ctx.r4.s64 = ctx.r10.s64 + 25288;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821c2fb0
	ctx.lr = 0x8265A460;
	sub_821C2FB0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r3,r31,3216
	ctx.r3.s64 = ctx.r31.s64 + 3216;
	// lwz r6,28000(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28000);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r5,27996(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27996);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// bl 0x826350b8
	ctx.lr = 0x8265A494;
	sub_826350B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265A4A0"))) PPC_WEAK_FUNC(sub_8265A4A0);
PPC_FUNC_IMPL(__imp__sub_8265A4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c4
	ctx.lr = 0x8265A4A8;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-27856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x8265A4BC;
	sub_8238EC00(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r11,-10236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10236);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r22,r9,1
	ctx.r22.s64 = ctx.r9.s64 + 65536;
	// addi r22,r22,16256
	ctx.r22.s64 = ctx.r22.s64 + 16256;
	// addis r17,r22,2
	ctx.r17.s64 = ctx.r22.s64 + 131072;
	// addi r17,r17,-27616
	ctx.r17.s64 = ctx.r17.s64 + -27616;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82654ac8
	ctx.lr = 0x8265A4E4;
	sub_82654AC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8265a518
	if (!ctx.cr6.eq) goto loc_8265A518;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82654b60
	ctx.lr = 0x8265A4FC;
	sub_82654B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a518
	if (!ctx.cr6.eq) goto loc_8265A518;
	// lbz r11,960(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8265a51c
	if (ctx.cr6.eq) goto loc_8265A51C;
loc_8265A518:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8265A51C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r23,r10,32896
	ctx.r23.u64 = ctx.r10.u64 | 32896;
	// beq cr6,0x8265a54c
	if (ctx.cr6.eq) goto loc_8265A54C;
	// lwzx r11,r22,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// add r3,r22,r23
	ctx.r3.u64 = ctx.r22.u64 + ctx.r23.u64;
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265A544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x8265a550
	goto loc_8265A550;
loc_8265A54C:
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
loc_8265A550:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r31,r30,848
	ctx.r31.s64 = ctx.r30.s64 + 848;
	// lwz r11,-10240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10240);
	// lwz r10,4304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4304);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r11,2356
	ctx.r3.s64 = ctx.r11.s64 + 2356;
	// lwz r9,2352(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// lwz r29,680(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 680);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8265a580
	if (ctx.cr6.gt) goto loc_8265A580;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8265A580:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r27,72(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r10,-2524
	ctx.r4.s64 = ctx.r10.s64 + -2524;
	// bl 0x82294ef8
	ctx.lr = 0x8265A594;
	sub_82294EF8(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8265a5ac
	if (!ctx.cr6.eq) goto loc_8265A5AC;
	// lbz r11,962(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 962);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8265a5b0
	if (!ctx.cr6.eq) goto loc_8265A5B0;
loc_8265A5AC:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8265A5B0:
	// clrlwi r19,r11,24
	ctx.r19.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bge cr6,0x8265a5c0
	if (!ctx.cr6.lt) goto loc_8265A5C0;
	// bl 0x8227d3b0
	ctx.lr = 0x8265A5C0;
	sub_8227D3B0(ctx, base);
loc_8265A5C0:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265a5f4
	if (ctx.cr6.eq) goto loc_8265A5F4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_8265A5E0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265a5e0
	if (!ctx.cr6.eq) goto loc_8265A5E0;
loc_8265A5F4:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// lbz r6,962(r17)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r17.u32 + 962);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8265aba4
	if (ctx.cr6.eq) goto loc_8265ABA4;
	// lbz r11,961(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 961);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a810
	if (ctx.cr6.eq) goto loc_8265A810;
	// clrlwi r25,r19,24
	ctx.r25.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8265a6b4
	if (!ctx.cr6.eq) goto loc_8265A6B4;
	// bl 0x8227d3b0
	ctx.lr = 0x8265A634;
	sub_8227D3B0(ctx, base);
	// add r11,r22,r23
	ctx.r11.u64 = ctx.r22.u64 + ctx.r23.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,976
	ctx.r10.s64 = ctx.r11.s64 + 976;
	// lwz r9,864(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8265a66c
	if (!ctx.cr6.eq) goto loc_8265A66C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82654ac8
	ctx.lr = 0x8265A654;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a66c
	if (!ctx.cr6.eq) goto loc_8265A66C;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// ble cr6,0x8265a66c
	if (!ctx.cr6.gt) goto loc_8265A66C;
	// li r29,8
	ctx.r29.s64 = 8;
loc_8265A66C:
	// lwz r11,1088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1088);
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r3,r30,1088
	ctx.r3.s64 = ctx.r30.s64 + 1088;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r9,28076
	ctx.r4.s64 = ctx.r9.s64 + 28076;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265A694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r7,r30,3568
	ctx.r7.s64 = ctx.r30.s64 + 3568;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rotlwi r9,r6,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r5.u16);
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
loc_8265A6B4:
	// lbz r11,961(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 961);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a6d0
	if (ctx.cr6.eq) goto loc_8265A6D0;
	// lbz r11,960(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8265a6d4
	if (ctx.cr6.eq) goto loc_8265A6D4;
loc_8265A6D0:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8265A6D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a71c
	if (ctx.cr6.eq) goto loc_8265A71C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8265a71c
	if (!ctx.cr6.eq) goto loc_8265A71C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a71c
	if (!ctx.cr6.eq) goto loc_8265A71C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82656a88
	ctx.lr = 0x8265A6FC;
	sub_82656A88(ctx, base);
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r30,3328
	ctx.r8.s64 = ctx.r30.s64 + 3328;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rotlwi r9,r7,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r6.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265A71C:
	// addi r29,r30,3996
	ctx.r29.s64 = ctx.r30.s64 + 3996;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826b6228
	ctx.lr = 0x8265A728;
	sub_826B6228(ctx, base);
	// lbz r11,960(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a754
	if (ctx.cr6.eq) goto loc_8265A754;
	// lhz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r8,r30,4528
	ctx.r8.s64 = ctx.r30.s64 + 4528;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265A754:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8265a77c
	if (!ctx.cr6.eq) goto loc_8265A77C;
	// lhz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r8,r30,4536
	ctx.r8.s64 = ctx.r30.s64 + 4536;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265A77C:
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r27,r30,4600
	ctx.r27.s64 = ctx.r30.s64 + 4600;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_8265A788:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8265a798
	if (ctx.cr6.eq) goto loc_8265A798;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// beq cr6,0x8265a7f0
	if (ctx.cr6.eq) goto loc_8265A7F0;
loc_8265A798:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r16,r1,88
	ctx.r16.s64 = ctx.r1.s64 + 88;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// addi r15,r28,-2
	ctx.r15.s64 = ctx.r28.s64 + -2;
	// bl 0x82387b90
	ctx.lr = 0x8265A7AC;
	sub_82387B90(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x8238aec0
	ctx.lr = 0x8265A7B8;
	sub_8238AEC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8265a7e0
	if (ctx.cr6.lt) goto loc_8265A7E0;
	// lhz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r8.u16);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
loc_8265A7E0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bne cr6,0x8265a788
	if (!ctx.cr6.eq) goto loc_8265A788;
loc_8265A7F0:
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,3808
	ctx.r8.s64 = ctx.r30.s64 + 3808;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265A810:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82654ac8
	ctx.lr = 0x8265A818;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a848
	if (!ctx.cr6.eq) goto loc_8265A848;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82654b60
	ctx.lr = 0x8265A82C;
	sub_82654B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a848
	if (!ctx.cr6.eq) goto loc_8265A848;
	// lbz r11,960(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8265a84c
	if (ctx.cr6.eq) goto loc_8265A84C;
loc_8265A848:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8265A84C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265aa04
	if (ctx.cr6.eq) goto loc_8265AA04;
	// add r29,r22,r23
	ctx.r29.u64 = ctx.r22.u64 + ctx.r23.u64;
	// addi r11,r29,976
	ctx.r11.s64 = ctx.r29.s64 + 976;
	// lwz r10,864(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 864);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265a874
	if (!ctx.cr6.eq) goto loc_8265A874;
	// li r24,2
	ctx.r24.s64 = 2;
	// b 0x8265a8a8
	goto loc_8265A8A8;
loc_8265A874:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823895f8
	ctx.lr = 0x8265A88C;
	sub_823895F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265a8a8
	if (ctx.cr6.eq) goto loc_8265A8A8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388c48
	ctx.lr = 0x8265A8A4;
	sub_82388C48(ctx, base);
	// lwz r24,4(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8265A8A8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8238eb20
	ctx.lr = 0x8265A8B0;
	sub_8238EB20(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8265a968
	if (!ctx.cr6.eq) goto loc_8265A968;
	// cmpwi cr6,r24,13
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 13, ctx.xer);
	// beq cr6,0x8265a8e0
	if (ctx.cr6.eq) goto loc_8265A8E0;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,4624
	ctx.r8.s64 = ctx.r30.s64 + 4624;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265A8E0:
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,4880
	ctx.r8.s64 = ctx.r30.s64 + 4880;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r30,5136
	ctx.r7.s64 = ctx.r30.s64 + 5136;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sth r6,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r6.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rotlwi r9,r4,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// bl 0x8238eab8
	ctx.lr = 0x8265A924;
	sub_8238EAB8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8265a950
	if (ctx.cr6.eq) goto loc_8265A950;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,5376
	ctx.r8.s64 = ctx.r30.s64 + 5376;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265A950:
	// cmpwi cr6,r24,11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 11, ctx.xer);
	// beq cr6,0x8265a9fc
	if (ctx.cr6.eq) goto loc_8265A9FC;
	// cmpwi cr6,r24,12
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 12, ctx.xer);
	// beq cr6,0x8265a9fc
	if (ctx.cr6.eq) goto loc_8265A9FC;
	// addi r8,r30,5616
	ctx.r8.s64 = ctx.r30.s64 + 5616;
	// b 0x8265a9e0
	goto loc_8265A9E0;
loc_8265A968:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x8265a9b8
	if (!ctx.cr6.eq) goto loc_8265A9B8;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,1392
	ctx.r8.s64 = ctx.r30.s64 + 1392;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r30,3088
	ctx.r7.s64 = ctx.r30.s64 + 3088;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r19,24
	ctx.r5.u64 = ctx.r19.u32 & 0xFF;
	// sth r6,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r6.u16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rotlwi r9,r3,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// b 0x8265a9c8
	goto loc_8265A9C8;
loc_8265A9B8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8265a9fc
	if (!ctx.cr6.eq) goto loc_8265A9FC;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_8265A9C8:
	// bne cr6,0x8265a9fc
	if (!ctx.cr6.eq) goto loc_8265A9FC;
	// lwz r11,864(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 864);
	// addi r10,r29,976
	ctx.r10.s64 = ctx.r29.s64 + 976;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8265a9fc
	if (ctx.cr6.eq) goto loc_8265A9FC;
	// addi r8,r30,4288
	ctx.r8.s64 = ctx.r30.s64 + 4288;
loc_8265A9E0:
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265A9FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82658218
	ctx.lr = 0x8265AA04;
	sub_82658218(ctx, base);
loc_8265AA04:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82654ac8
	ctx.lr = 0x8265AA0C;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265aa44
	if (ctx.cr6.eq) goto loc_8265AA44;
	// lbz r11,961(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 961);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265aa34
	if (ctx.cr6.eq) goto loc_8265AA34;
	// lbz r11,960(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8265aa38
	if (ctx.cr6.eq) goto loc_8265AA38;
loc_8265AA34:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8265AA38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ab9c
	if (ctx.cr6.eq) goto loc_8265AB9C;
loc_8265AA44:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82654ac8
	ctx.lr = 0x8265AA4C;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265aa7c
	if (!ctx.cr6.eq) goto loc_8265AA7C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82654b60
	ctx.lr = 0x8265AA60;
	sub_82654B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265aa7c
	if (!ctx.cr6.eq) goto loc_8265AA7C;
	// lbz r11,960(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8265aa80
	if (ctx.cr6.eq) goto loc_8265AA80;
loc_8265AA7C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8265AA80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ab5c
	if (!ctx.cr6.eq) goto loc_8265AB5C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82654b60
	ctx.lr = 0x8265AA94;
	sub_82654B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ab5c
	if (!ctx.cr6.eq) goto loc_8265AB5C;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ab5c
	if (!ctx.cr6.eq) goto loc_8265AB5C;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r29,r11,-4744
	ctx.r29.s64 = ctx.r11.s64 + -4744;
	// lwz r9,784(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265AAC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265AAC8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x8265aaec
	if (ctx.cr6.eq) goto loc_8265AAEC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265aac8
	if (ctx.cr6.eq) goto loc_8265AAC8;
loc_8265AAEC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265ab3c
	if (ctx.cr6.eq) goto loc_8265AB3C;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r29,r11,-4680
	ctx.r29.s64 = ctx.r11.s64 + -4680;
	// lwz r9,784(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265AB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265AB10:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x8265ab34
	if (ctx.cr6.eq) goto loc_8265AB34;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265ab10
	if (ctx.cr6.eq) goto loc_8265AB10;
loc_8265AB34:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265ab5c
	if (!ctx.cr6.eq) goto loc_8265AB5C;
loc_8265AB3C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,4048
	ctx.r8.s64 = ctx.r30.s64 + 4048;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265AB5C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,1888
	ctx.r8.s64 = ctx.r30.s64 + 1888;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r30,2608
	ctx.r7.s64 = ctx.r30.s64 + 2608;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// sth r6,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r6.u16);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_8265AB9C:
	// addi r8,r30,2368
	ctx.r8.s64 = ctx.r30.s64 + 2368;
	// b 0x8265ad14
	goto loc_8265AD14;
loc_8265ABA4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r11,-2380
	ctx.r3.s64 = ctx.r11.s64 + -2380;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82130000
	ctx.lr = 0x8265ABBC;
	sub_82130000(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823895f8
	ctx.lr = 0x8265ABCC;
	sub_823895F8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388c48
	ctx.lr = 0x8265ABD8;
	sub_82388C48(ctx, base);
	// lbz r9,8532(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8532);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265ac34
	if (ctx.cr6.eq) goto loc_8265AC34;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8265ac10
	if (!ctx.cr6.eq) goto loc_8265AC10;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,1392
	ctx.r8.s64 = ctx.r30.s64 + 1392;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265AC10:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,1648
	ctx.r8.s64 = ctx.r30.s64 + 1648;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x8265ad10
	goto loc_8265AD10;
loc_8265AC34:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,1136
	ctx.r8.s64 = ctx.r30.s64 + 1136;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8265ac80
	if (!ctx.cr6.eq) goto loc_8265AC80;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,3088
	ctx.r8.s64 = ctx.r30.s64 + 3088;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265AC80:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,1648
	ctx.r8.s64 = ctx.r30.s64 + 1648;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8265accc
	if (!ctx.cr6.eq) goto loc_8265ACCC;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r30,1392
	ctx.r8.s64 = ctx.r30.s64 + 1392;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8265ACCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82658218
	ctx.lr = 0x8265ACD4;
	sub_82658218(ctx, base);
	// lhz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r30,2128
	ctx.r8.s64 = ctx.r30.s64 + 2128;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rotlwi r11,r6,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r7,r30,1888
	ctx.r7.s64 = ctx.r30.s64 + 1888;
	// sth r5,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r5.u16);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_8265AD10:
	// addi r8,r30,2608
	ctx.r8.s64 = ctx.r30.s64 + 2608;
loc_8265AD14:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r3,r30,928
	ctx.r3.s64 = ctx.r30.s64 + 928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lbz r11,960(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// beq cr6,0x8265ad94
	if (ctx.cr6.eq) goto loc_8265AD94;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r10,28244
	ctx.r4.s64 = ctx.r10.s64 + 28244;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265AD60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,992(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// addi r3,r30,992
	ctx.r3.s64 = ctx.r30.s64 + 992;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r8,28220
	ctx.r4.s64 = ctx.r8.s64 + 28220;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// li r5,6
	ctx.r5.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265AD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r10,28268
	ctx.r4.s64 = ctx.r10.s64 + 28268;
	// b 0x8265add8
	goto loc_8265ADD8;
loc_8265AD94:
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r10,-28096
	ctx.r4.s64 = ctx.r10.s64 + -28096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265ADA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,992(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r3,r30,992
	ctx.r3.s64 = ctx.r30.s64 + 992;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r8,-28076
	ctx.r4.s64 = ctx.r8.s64 + -28076;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// li r5,5
	ctx.r5.s64 = 5;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265ADCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r10,28024
	ctx.r4.s64 = ctx.r10.s64 + 28024;
loc_8265ADD8:
	// lwz r9,976(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 976);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r30,976
	ctx.r3.s64 = ctx.r30.s64 + 976;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265ADF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265AE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823d9214
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265AE0C"))) PPC_WEAK_FUNC(sub_8265AE0C);
PPC_FUNC_IMPL(__imp__sub_8265AE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265AE10"))) PPC_WEAK_FUNC(sub_8265AE10);
PPC_FUNC_IMPL(__imp__sub_8265AE10) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265AE3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8265ae50
	if (!ctx.cr6.eq) goto loc_8265AE50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265a4a0
	ctx.lr = 0x8265AE4C;
	sub_8265A4A0(ctx, base);
	// b 0x8265aea8
	goto loc_8265AEA8;
loc_8265AE50:
	// addi r30,r31,3060
	ctx.r30.s64 = ctx.r31.s64 + 3060;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265AE64:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265ae64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265AE64;
	// addi r3,r31,2848
	ctx.r3.s64 = ctx.r31.s64 + 2848;
	// lwz r4,8544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8544);
	// bl 0x8262fff0
	ctx.lr = 0x8265AE84;
	sub_8262FFF0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265AE94:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265ae94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265AE94;
loc_8265AEA8:
	// lwz r11,3056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3056);
	// stw r11,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8265AEC8"))) PPC_WEAK_FUNC(sub_8265AEC8);
PPC_FUNC_IMPL(__imp__sub_8265AEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265af64
	if (ctx.cr6.eq) goto loc_8265AF64;
	// lbz r10,8540(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8540);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265af64
	if (!ctx.cr6.eq) goto loc_8265AF64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// stb r11,8540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8540, ctx.r11.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-20976
	ctx.r4.s64 = ctx.r10.s64 + -20976;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c2fb0
	ctx.lr = 0x8265AF18;
	sub_821C2FB0(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r9,-2344
	ctx.r6.s64 = ctx.r9.s64 + -2344;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r5,r8,-2364
	ctx.r5.s64 = ctx.r8.s64 + -2364;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,8560
	ctx.r3.s64 = ctx.r31.s64 + 8560;
	// bl 0x82634ec8
	ctx.lr = 0x8265AF50;
	sub_82634EC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8265AF64:
	// stw r11,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265a4a0
	ctx.lr = 0x8265AF70;
	sub_8265A4A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265AF84"))) PPC_WEAK_FUNC(sub_8265AF84);
PPC_FUNC_IMPL(__imp__sub_8265AF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265AF88"))) PPC_WEAK_FUNC(sub_8265AF88);
PPC_FUNC_IMPL(__imp__sub_8265AF88) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265AFB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8265aff0
	if (!ctx.cr6.eq) goto loc_8265AFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826583c0
	ctx.lr = 0x8265AFC0;
	sub_826583C0(ctx, base);
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265AFD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82658c28
	ctx.lr = 0x8265AFDC;
	sub_82658C28(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265AFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265AFF0:
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

__attribute__((alias("__imp__sub_8265B004"))) PPC_WEAK_FUNC(sub_8265B004);
PPC_FUNC_IMPL(__imp__sub_8265B004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B008"))) PPC_WEAK_FUNC(sub_8265B008);
PPC_FUNC_IMPL(__imp__sub_8265B008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8265B010;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82653be8
	ctx.lr = 0x8265B030;
	sub_82653BE8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r31,496
	ctx.r30.s64 = ctx.r31.s64 + 496;
	// addi r10,r11,-2316
	ctx.r10.s64 = ctx.r11.s64 + -2316;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82633a10
	ctx.lr = 0x8265B050;
	sub_82633A10(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r29,r31,672
	ctx.r29.s64 = ctx.r31.s64 + 672;
	// addi r8,r9,4916
	ctx.r8.s64 = ctx.r9.s64 + 4916;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r8,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82634738
	ctx.lr = 0x8265B070;
	sub_82634738(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// addi r5,r7,-4044
	ctx.r5.s64 = ctx.r7.s64 + -4044;
	// addi r4,r6,-26040
	ctx.r4.s64 = ctx.r6.s64 + -26040;
	// stw r5,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r5.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r28.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821c2f90
	ctx.lr = 0x8265B094;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265B0A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265b0a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265B0A4;
	// addi r10,r31,908
	ctx.r10.s64 = ctx.r31.s64 + 908;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265B0C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265b0c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265B0C8;
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r8.u16);
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r6.u16);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265B11C"))) PPC_WEAK_FUNC(sub_8265B11C);
PPC_FUNC_IMPL(__imp__sub_8265B11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B120"))) PPC_WEAK_FUNC(sub_8265B120);
PPC_FUNC_IMPL(__imp__sub_8265B120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// addi r3,r3,496
	ctx.r3.s64 = ctx.r3.s64 + 496;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8265B134"))) PPC_WEAK_FUNC(sub_8265B134);
PPC_FUNC_IMPL(__imp__sub_8265B134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B138"))) PPC_WEAK_FUNC(sub_8265B138);
PPC_FUNC_IMPL(__imp__sub_8265B138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// addi r3,r3,496
	ctx.r3.s64 = ctx.r3.s64 + 496;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8265B14C"))) PPC_WEAK_FUNC(sub_8265B14C);
PPC_FUNC_IMPL(__imp__sub_8265B14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B150"))) PPC_WEAK_FUNC(sub_8265B150);
PPC_FUNC_IMPL(__imp__sub_8265B150) {
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
	// addi r31,r30,672
	ctx.r31.s64 = ctx.r30.s64 + 672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82631f88
	ctx.lr = 0x8265B174;
	sub_82631F88(ctx, base);
	// lwz r11,856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265b184
	if (ctx.cr6.lt) goto loc_8265B184;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8265B184:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8265b1c8
	if (ctx.cr6.lt) goto loc_8265B1C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,864(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// bl 0x82631f88
	ctx.lr = 0x8265B198;
	sub_82631F88(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265b1a8
	if (ctx.cr6.lt) goto loc_8265B1A8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8265B1A8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265B1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265b1cc
	goto loc_8265B1CC;
loc_8265B1C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B1CC:
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

__attribute__((alias("__imp__sub_8265B1E4"))) PPC_WEAK_FUNC(sub_8265B1E4);
PPC_FUNC_IMPL(__imp__sub_8265B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B1E8"))) PPC_WEAK_FUNC(sub_8265B1E8);
PPC_FUNC_IMPL(__imp__sub_8265B1E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r31,928
	ctx.r30.s64 = ctx.r31.s64 + 928;
	// addi r4,r9,-684
	ctx.r4.s64 = ctx.r9.s64 + -684;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r8,r11,28572
	ctx.r8.s64 = ctx.r11.s64 + 28572;
	// addi r5,r10,-704
	ctx.r5.s64 = ctx.r10.s64 + -704;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x8265b008
	ctx.lr = 0x8265B22C;
	sub_8265B008(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r8,-1508
	ctx.r7.s64 = ctx.r8.s64 + -1508;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82659e28
	ctx.lr = 0x8265B240;
	sub_82659E28(ctx, base);
	// addi r3,r31,952
	ctx.r3.s64 = ctx.r31.s64 + 952;
	// bl 0x826597b8
	ctx.lr = 0x8265B248;
	sub_826597B8(ctx, base);
	// addi r3,r31,976
	ctx.r3.s64 = ctx.r31.s64 + 976;
	// bl 0x82659db8
	ctx.lr = 0x8265B250;
	sub_82659DB8(ctx, base);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// bl 0x82659e28
	ctx.lr = 0x8265B258;
	sub_82659E28(ctx, base);
	// addi r3,r31,1016
	ctx.r3.s64 = ctx.r31.s64 + 1016;
	// bl 0x826597b8
	ctx.lr = 0x8265B260;
	sub_826597B8(ctx, base);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// bl 0x82659db8
	ctx.lr = 0x8265B268;
	sub_82659DB8(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,7444(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r4,-4144
	ctx.r10.s64 = ctx.r4.s64 + -4144;
	// lfs f13,-28964(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -28964);
	ctx.f13.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f13,1228(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1228, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f0,1220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// addi r7,r3,18928
	ctx.r7.s64 = ctx.r3.s64 + 18928;
	// stfs f0,1224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
	// stw r30,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r30.u32);
	// lfs f13,21528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21528);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r30.u32);
	// addi r3,r31,1424
	ctx.r3.s64 = ctx.r31.s64 + 1424;
	// stb r30,1216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1216, ctx.r30.u8);
	// stw r30,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r30.u32);
	// stw r9,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r9.u32);
	// stw r8,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r8.u32);
	// stw r10,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r10.u32);
	// stw r30,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r30.u32);
	// stw r7,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r7.u32);
	// stfs f13,1408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stfs f0,1412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// bl 0x82634b60
	ctx.lr = 0x8265B2DC;
	sub_82634B60(ctx, base);
	// addi r3,r31,3216
	ctx.r3.s64 = ctx.r31.s64 + 3216;
	// bl 0x82634b60
	ctx.lr = 0x8265B2E4;
	sub_82634B60(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lis r5,-32155
	ctx.r5.s64 = -2107310080;
	// addi r4,r6,-3372
	ctx.r4.s64 = ctx.r6.s64 + -3372;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r4,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r4.u32);
	// addi r4,r5,22568
	ctx.r4.s64 = ctx.r5.s64 + 22568;
	// stb r30,5008(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5008, ctx.r30.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821c2f90
	ctx.lr = 0x8265B308;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265B318:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265b318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265B318;
	// addi r10,r31,888
	ctx.r10.s64 = ctx.r31.s64 + 888;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265B33C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265b33c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265B33C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8265B36C"))) PPC_WEAK_FUNC(sub_8265B36C);
PPC_FUNC_IMPL(__imp__sub_8265B36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B370"))) PPC_WEAK_FUNC(sub_8265B370);
PPC_FUNC_IMPL(__imp__sub_8265B370) {
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
	// bl 0x826440a8
	ctx.lr = 0x8265B390;
	sub_826440A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b3a8
	if (ctx.cr6.eq) goto loc_8265B3A8;
	// bl 0x82130588
	ctx.lr = 0x8265B3A4;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265B3A8:
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

__attribute__((alias("__imp__sub_8265B3C0"))) PPC_WEAK_FUNC(sub_8265B3C0);
PPC_FUNC_IMPL(__imp__sub_8265B3C0) {
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
	// bl 0x82656c20
	ctx.lr = 0x8265B3E0;
	sub_82656C20(ctx, base);
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// lbz r10,13(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// lbz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// stb r9,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r9.u8);
	// lbz r8,15(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// stb r8,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r8.u8);
	// lbz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stb r7,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r7.u8);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8265B42C"))) PPC_WEAK_FUNC(sub_8265B42C);
PPC_FUNC_IMPL(__imp__sub_8265B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B430"))) PPC_WEAK_FUNC(sub_8265B430);
PPC_FUNC_IMPL(__imp__sub_8265B430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8265B438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r31,952
	ctx.r4.s64 = ctx.r31.s64 + 952;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8265b484
	if (!ctx.cr6.eq) goto loc_8265B484;
	// addi r30,r31,1016
	ctx.r30.s64 = ctx.r31.s64 + 1016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265b3c0
	ctx.lr = 0x8265B45C;
	sub_8265B3C0(ctx, base);
	// stw r30,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r30.u32);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x82631f88
	ctx.lr = 0x8265B468;
	sub_82631F88(ctx, base);
	// lwz r11,856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265b478
	if (ctx.cr6.lt) goto loc_8265B478;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8265B478:
	// stw r11,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8265B484:
	// addi r29,r31,976
	ctx.r29.s64 = ctx.r31.s64 + 976;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8265b4ac
	if (!ctx.cr6.eq) goto loc_8265B4AC;
	// addi r30,r31,1040
	ctx.r30.s64 = ctx.r31.s64 + 1040;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82656c20
	ctx.lr = 0x8265B4A0;
	sub_82656C20(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// b 0x8265b4bc
	goto loc_8265B4BC;
loc_8265B4AC:
	// addi r30,r31,992
	ctx.r30.s64 = ctx.r31.s64 + 992;
	// addi r4,r31,928
	ctx.r4.s64 = ctx.r31.s64 + 928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265b3c0
	ctx.lr = 0x8265B4BC;
	sub_8265B3C0(ctx, base);
loc_8265B4BC:
	// stw r30,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r30.u32);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x82203240
	ctx.lr = 0x8265B4C8;
	sub_82203240(ctx, base);
	// stw r3,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265B4D4"))) PPC_WEAK_FUNC(sub_8265B4D4);
PPC_FUNC_IMPL(__imp__sub_8265B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B4D8"))) PPC_WEAK_FUNC(sub_8265B4D8);
PPC_FUNC_IMPL(__imp__sub_8265B4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c0
	ctx.lr = 0x8265B4E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r9,548
	ctx.r4.s64 = ctx.r9.s64 + 548;
	// addi r7,r11,28124
	ctx.r7.s64 = ctx.r11.s64 + 28124;
	// addi r5,r10,528
	ctx.r5.s64 = ctx.r10.s64 + 528;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r6,30
	ctx.r6.s64 = 30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826540c0
	ctx.lr = 0x8265B510;
	sub_826540C0(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32129
	ctx.r6.s64 = -2105606144;
	// addi r4,r8,-268
	ctx.r4.s64 = ctx.r8.s64 + -268;
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// addi r8,r7,7428
	ctx.r8.s64 = ctx.r7.s64 + 7428;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r7,r6,-28096
	ctx.r7.s64 = ctx.r6.s64 + -28096;
	// stw r8,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r8.u32);
	// li r27,5
	ctx.r27.s64 = 5;
	// stw r30,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r30.u32);
	// addi r5,r5,27980
	ctx.r5.s64 = ctx.r5.s64 + 27980;
	// stw r7,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r7.u32);
	// lis r3,-32129
	ctx.r3.s64 = -2105606144;
	// stw r27,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r27.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r5,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r5.u32);
	// lis r6,-32126
	ctx.r6.s64 = -2105409536;
	// stw r8,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r8.u32);
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// stw r4,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r4.u32);
	// addi r7,r3,-28056
	ctx.r7.s64 = ctx.r3.s64 + -28056;
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r8,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r8.u32);
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// stw r7,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r7.u32);
	// addi r4,r6,28024
	ctx.r4.s64 = ctx.r6.s64 + 28024;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// addi r3,r9,-28076
	ctx.r3.s64 = ctx.r9.s64 + -28076;
	// stw r30,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r4.u32);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// stw r8,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r8.u32);
	// addi r7,r5,28012
	ctx.r7.s64 = ctx.r5.s64 + 28012;
	// stw r10,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r10.u32);
	// stw r30,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r30.u32);
	// addi r6,r9,28036
	ctx.r6.s64 = ctx.r9.s64 + 28036;
	// stw r3,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r3.u32);
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// stw r8,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r8.u32);
	// lis r3,-32112
	ctx.r3.s64 = -2104492032;
	// stw r27,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r27.u32);
	// addi r24,r31,928
	ctx.r24.s64 = ctx.r31.s64 + 928;
	// stw r30,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r30.u32);
	// addi r23,r31,944
	ctx.r23.s64 = ctx.r31.s64 + 944;
	// stw r7,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r7.u32);
	// addi r22,r31,960
	ctx.r22.s64 = ctx.r31.s64 + 960;
	// stw r8,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r8.u32);
	// addi r21,r31,976
	ctx.r21.s64 = ctx.r31.s64 + 976;
	// stw r11,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r11.u32);
	// addi r20,r31,992
	ctx.r20.s64 = ctx.r31.s64 + 992;
	// stw r30,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r30.u32);
	// addi r19,r31,1008
	ctx.r19.s64 = ctx.r31.s64 + 1008;
	// stw r4,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r4.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r8,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r8.u32);
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// stw r10,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r10.u32);
	// addi r4,r3,27920
	ctx.r4.s64 = ctx.r3.s64 + 27920;
	// stw r30,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r30.u32);
	// stw r6,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r6.u32);
	// addi r6,r5,28056
	ctx.r6.s64 = ctx.r5.s64 + 28056;
	// stw r8,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r8.u32);
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// stw r27,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r27.u32);
	// stw r30,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r30.u32);
	// stw r8,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r8.u32);
	// lis r3,-32126
	ctx.r3.s64 = -2105409536;
	// stw r6,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r6.u32);
	// addi r7,r7,28076
	ctx.r7.s64 = ctx.r7.s64 + 28076;
	// stw r27,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r27.u32);
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// addi r6,r5,28108
	ctx.r6.s64 = ctx.r5.s64 + 28108;
	// stw r4,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r4.u32);
	// addi r28,r3,28120
	ctx.r28.s64 = ctx.r3.s64 + 28120;
	// stw r8,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r8.u32);
	// addi r26,r31,1136
	ctx.r26.s64 = ctx.r31.s64 + 1136;
	// stw r9,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r9.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r30,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r8.u32);
	// addi r4,r4,-296
	ctx.r4.s64 = ctx.r4.s64 + -296;
	// stw r7,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r7.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r9.u32);
	// addi r29,r31,1024
	ctx.r29.s64 = ctx.r31.s64 + 1024;
	// stw r30,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r30.u32);
	// addi r18,r31,1072
	ctx.r18.s64 = ctx.r31.s64 + 1072;
	// stw r11,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r11.u32);
	// addi r11,r31,1104
	ctx.r11.s64 = ctx.r31.s64 + 1104;
	// stw r8,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r8.u32);
	// addi r11,r31,1120
	ctx.r11.s64 = ctx.r31.s64 + 1120;
	// stw r6,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r6.u32);
	// addi r17,r31,1088
	ctx.r17.s64 = ctx.r31.s64 + 1088;
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// stw r8,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r8.u32);
	// stw r28,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r28.u32);
	// stw r10,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r10.u32);
	// stw r30,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r30.u32);
	// bl 0x82633d40
	ctx.lr = 0x8265B6B0;
	sub_82633D40(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r30,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r30.u32);
	// addi r3,r26,228
	ctx.r3.s64 = ctx.r26.s64 + 228;
	// addi r16,r11,-29700
	ctx.r16.s64 = ctx.r11.s64 + -29700;
	// stw r30,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r30.u32);
	// stw r30,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r30.u32);
	// stw r16,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r16.u32);
	// stw r30,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r30.u32);
	// stb r30,1360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1360, ctx.r30.u8);
	// bl 0x821c2f70
	ctx.lr = 0x8265B6D8;
	sub_821C2F70(ctx, base);
	// lis r15,-32126
	ctx.r15.s64 = -2105409536;
	// lis r14,-32126
	ctx.r14.s64 = -2105409536;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r25,r31,1392
	ctx.r25.s64 = ctx.r31.s64 + 1392;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24600(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24600);
	// addi r4,r10,-312
	ctx.r4.s64 = ctx.r10.s64 + -312;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// lwz r11,24596(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24596);
	// stw r11,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r11.u32);
	// bl 0x82633d40
	ctx.lr = 0x8265B708;
	sub_82633D40(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r16,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r16.u32);
	// addi r3,r25,228
	ctx.r3.s64 = ctx.r25.s64 + 228;
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// stw r27,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r27.u32);
	// stw r28,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r28.u32);
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// stb r30,1616(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1616, ctx.r30.u8);
	// bl 0x821c2f70
	ctx.lr = 0x8265B72C;
	sub_821C2F70(ctx, base);
	// lwz r11,24600(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24600);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r9,-328
	ctx.r4.s64 = ctx.r9.s64 + -328;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r11,24596(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24596);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// bl 0x826349f0
	ctx.lr = 0x8265B754;
	sub_826349F0(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r31,1888
	ctx.r3.s64 = ctx.r31.s64 + 1888;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r8,6484
	ctx.r4.s64 = ctx.r8.s64 + 6484;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x826349f0
	ctx.lr = 0x8265B76C;
	sub_826349F0(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r31,2128
	ctx.r3.s64 = ctx.r31.s64 + 2128;
	// addi r24,r7,6472
	ctx.r24.s64 = ctx.r7.s64 + 6472;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x826349f0
	ctx.lr = 0x8265B788;
	sub_826349F0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r3,r31,2368
	ctx.r3.s64 = ctx.r31.s64 + 2368;
	// bl 0x826349f0
	ctx.lr = 0x8265B79C;
	sub_826349F0(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r31,2608
	ctx.r3.s64 = ctx.r31.s64 + 2608;
	// addi r4,r5,6496
	ctx.r4.s64 = ctx.r5.s64 + 6496;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x826349f0
	ctx.lr = 0x8265B7B4;
	sub_826349F0(ctx, base);
	// addi r22,r31,2848
	ctx.r22.s64 = ctx.r31.s64 + 2848;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r4,6452
	ctx.r4.s64 = ctx.r4.s64 + 6452;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x826349f0
	ctx.lr = 0x8265B7D0;
	sub_826349F0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,3088
	ctx.r3.s64 = ctx.r31.s64 + 3088;
	// addi r4,r11,2036
	ctx.r4.s64 = ctx.r11.s64 + 2036;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x826349f0
	ctx.lr = 0x8265B7E8;
	sub_826349F0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,-344
	ctx.r4.s64 = ctx.r10.s64 + -344;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r3,r31,3328
	ctx.r3.s64 = ctx.r31.s64 + 3328;
	// bl 0x826349f0
	ctx.lr = 0x8265B800;
	sub_826349F0(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r9,-360
	ctx.r4.s64 = ctx.r9.s64 + -360;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r3,r31,3568
	ctx.r3.s64 = ctx.r31.s64 + 3568;
	// bl 0x826349f0
	ctx.lr = 0x8265B818;
	sub_826349F0(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r8,-376
	ctx.r4.s64 = ctx.r8.s64 + -376;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r31,3808
	ctx.r3.s64 = ctx.r31.s64 + 3808;
	// bl 0x82634908
	ctx.lr = 0x8265B830;
	sub_82634908(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r5,r31,1104
	ctx.r5.s64 = ctx.r31.s64 + 1104;
	// addi r24,r7,-388
	ctx.r24.s64 = ctx.r7.s64 + -388;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,4048
	ctx.r3.s64 = ctx.r31.s64 + 4048;
	// bl 0x826349f0
	ctx.lr = 0x8265B84C;
	sub_826349F0(ctx, base);
	// addi r5,r31,1120
	ctx.r5.s64 = ctx.r31.s64 + 1120;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,4288
	ctx.r3.s64 = ctx.r31.s64 + 4288;
	// bl 0x826349f0
	ctx.lr = 0x8265B860;
	sub_826349F0(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r24,r6,5568
	ctx.r24.s64 = ctx.r6.s64 + 5568;
	// addi r21,r31,4528
	ctx.r21.s64 = ctx.r31.s64 + 4528;
	// stw r24,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r24.u32);
	// addi r4,r5,-5396
	ctx.r4.s64 = ctx.r5.s64 + -5396;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826311f8
	ctx.lr = 0x8265B880;
	sub_826311F8(ctx, base);
	// stw r24,4536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4536, ctx.r24.u32);
	// addi r20,r31,4536
	ctx.r20.s64 = ctx.r31.s64 + 4536;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r4,-396
	ctx.r4.s64 = ctx.r4.s64 + -396;
	// bl 0x826311f8
	ctx.lr = 0x8265B898;
	sub_826311F8(ctx, base);
	// stw r24,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r24.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r19,r31,4544
	ctx.r19.s64 = ctx.r31.s64 + 4544;
	// addi r4,r11,6180
	ctx.r4.s64 = ctx.r11.s64 + 6180;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x826311f8
	ctx.lr = 0x8265B8B0;
	sub_826311F8(ctx, base);
	// stw r24,4552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4552, ctx.r24.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r18,r31,4552
	ctx.r18.s64 = ctx.r31.s64 + 4552;
	// addi r4,r10,6164
	ctx.r4.s64 = ctx.r10.s64 + 6164;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x826311f8
	ctx.lr = 0x8265B8C8;
	sub_826311F8(ctx, base);
	// stw r24,4560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4560, ctx.r24.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r17,r31,4560
	ctx.r17.s64 = ctx.r31.s64 + 4560;
	// addi r4,r9,-408
	ctx.r4.s64 = ctx.r9.s64 + -408;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x826311f8
	ctx.lr = 0x8265B8E0;
	sub_826311F8(ctx, base);
	// stw r24,4568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4568, ctx.r24.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r31,4568
	ctx.r3.s64 = ctx.r31.s64 + 4568;
	// addi r4,r8,-420
	ctx.r4.s64 = ctx.r8.s64 + -420;
	// bl 0x826311f8
	ctx.lr = 0x8265B8F4;
	sub_826311F8(ctx, base);
	// stw r24,4576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4576, ctx.r24.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r31,4576
	ctx.r3.s64 = ctx.r31.s64 + 4576;
	// addi r4,r7,-432
	ctx.r4.s64 = ctx.r7.s64 + -432;
	// bl 0x826311f8
	ctx.lr = 0x8265B908;
	sub_826311F8(ctx, base);
	// stw r24,4584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4584, ctx.r24.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r31,4584
	ctx.r3.s64 = ctx.r31.s64 + 4584;
	// addi r4,r6,-444
	ctx.r4.s64 = ctx.r6.s64 + -444;
	// bl 0x826311f8
	ctx.lr = 0x8265B91C;
	sub_826311F8(ctx, base);
	// addi r24,r31,4624
	ctx.r24.s64 = ctx.r31.s64 + 4624;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,6396
	ctx.r4.s64 = ctx.r4.s64 + 6396;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82633d40
	ctx.lr = 0x8265B934;
	sub_82633D40(ctx, base);
	// li r11,99
	ctx.r11.s64 = 99;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r16,4624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4624, ctx.r16.u32);
	// stw r30,4832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4832, ctx.r30.u32);
	// addi r3,r24,228
	ctx.r3.s64 = ctx.r24.s64 + 228;
	// stw r11,4836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4836, ctx.r11.u32);
	// stw r10,4840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4840, ctx.r10.u32);
	// stw r30,4844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4844, ctx.r30.u32);
	// stb r30,4848(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4848, ctx.r30.u8);
	// bl 0x821c2f70
	ctx.lr = 0x8265B95C;
	sub_821C2F70(ctx, base);
	// lwz r11,24600(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24600);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r23,r31,4880
	ctx.r23.s64 = ctx.r31.s64 + 4880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,6360
	ctx.r4.s64 = ctx.r9.s64 + 6360;
	// stw r11,4872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4872, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,24596(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24596);
	// stw r11,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r11.u32);
	// bl 0x82633d40
	ctx.lr = 0x8265B984;
	sub_82633D40(ctx, base);
	// li r8,99
	ctx.r8.s64 = 99;
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r16,4880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4880, ctx.r16.u32);
	// stw r27,5088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5088, ctx.r27.u32);
	// addi r3,r23,228
	ctx.r3.s64 = ctx.r23.s64 + 228;
	// stw r8,5092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5092, ctx.r8.u32);
	// stw r7,5096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5096, ctx.r7.u32);
	// stw r30,5100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5100, ctx.r30.u32);
	// stb r30,5104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5104, ctx.r30.u8);
	// bl 0x821c2f70
	ctx.lr = 0x8265B9AC;
	sub_821C2F70(ctx, base);
	// lwz r11,24600(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24600);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r6,6428
	ctx.r4.s64 = ctx.r6.s64 + 6428;
	// addi r3,r31,5136
	ctx.r3.s64 = ctx.r31.s64 + 5136;
	// stw r11,5128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5128, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,24596(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24596);
	// stw r11,5132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5132, ctx.r11.u32);
	// bl 0x826349f0
	ctx.lr = 0x8265B9D4;
	sub_826349F0(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,5376
	ctx.r3.s64 = ctx.r31.s64 + 5376;
	// addi r4,r4,-460
	ctx.r4.s64 = ctx.r4.s64 + -460;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x826349f0
	ctx.lr = 0x8265B9EC;
	sub_826349F0(ctx, base);
	// addi r30,r31,5616
	ctx.r30.s64 = ctx.r31.s64 + 5616;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r4,r3,6412
	ctx.r4.s64 = ctx.r3.s64 + 6412;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826349f0
	ctx.lr = 0x8265BA08;
	sub_826349F0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-480
	ctx.r4.s64 = ctx.r11.s64 + -480;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,5856
	ctx.r3.s64 = ctx.r31.s64 + 5856;
	// bl 0x826349f0
	ctx.lr = 0x8265BA20;
	sub_826349F0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-496
	ctx.r4.s64 = ctx.r10.s64 + -496;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,6096
	ctx.r3.s64 = ctx.r31.s64 + 6096;
	// bl 0x826349f0
	ctx.lr = 0x8265BA38;
	sub_826349F0(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,-516
	ctx.r4.s64 = ctx.r9.s64 + -516;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,6336
	ctx.r3.s64 = ctx.r31.s64 + 6336;
	// bl 0x826349f0
	ctx.lr = 0x8265BA50;
	sub_826349F0(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r8,-536
	ctx.r4.s64 = ctx.r8.s64 + -536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,6576
	ctx.r3.s64 = ctx.r31.s64 + 6576;
	// bl 0x826349f0
	ctx.lr = 0x8265BA68;
	sub_826349F0(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r7,-560
	ctx.r4.s64 = ctx.r7.s64 + -560;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,6816
	ctx.r3.s64 = ctx.r31.s64 + 6816;
	// bl 0x826349f0
	ctx.lr = 0x8265BA80;
	sub_826349F0(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r6,-580
	ctx.r4.s64 = ctx.r6.s64 + -580;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,7056
	ctx.r3.s64 = ctx.r31.s64 + 7056;
	// bl 0x826349f0
	ctx.lr = 0x8265BA98;
	sub_826349F0(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r4,-596
	ctx.r4.s64 = ctx.r4.s64 + -596;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,7296
	ctx.r3.s64 = ctx.r31.s64 + 7296;
	// bl 0x826349f0
	ctx.lr = 0x8265BAB0;
	sub_826349F0(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r3,-616
	ctx.r4.s64 = ctx.r3.s64 + -616;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,7536
	ctx.r3.s64 = ctx.r31.s64 + 7536;
	// bl 0x826349f0
	ctx.lr = 0x8265BAC8;
	sub_826349F0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-636
	ctx.r4.s64 = ctx.r11.s64 + -636;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,7776
	ctx.r3.s64 = ctx.r31.s64 + 7776;
	// bl 0x826349f0
	ctx.lr = 0x8265BAE0;
	sub_826349F0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-652
	ctx.r4.s64 = ctx.r10.s64 + -652;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,8016
	ctx.r3.s64 = ctx.r31.s64 + 8016;
	// bl 0x826349f0
	ctx.lr = 0x8265BAF8;
	sub_826349F0(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r9,-664
	ctx.r4.s64 = ctx.r9.s64 + -664;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,8256
	ctx.r3.s64 = ctx.r31.s64 + 8256;
	// bl 0x826349f0
	ctx.lr = 0x8265BB10;
	sub_826349F0(ctx, base);
	// lbz r6,8497(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8497);
	// li r8,255
	ctx.r8.s64 = 255;
	// ori r5,r6,224
	ctx.r5.u64 = ctx.r6.u64 | 224;
	// addi r11,r31,8496
	ctx.r11.s64 = ctx.r31.s64 + 8496;
	// stb r8,8496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8496, ctx.r8.u8);
	// stb r5,8497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8497, ctx.r5.u8);
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r4,8502(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8502);
	// addi r3,r31,8560
	ctx.r3.s64 = ctx.r31.s64 + 8560;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r11,8500(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8500);
	// ori r9,r4,192
	ctx.r9.u64 = ctx.r4.u64 | 192;
	// stb r28,8501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8501, ctx.r28.u8);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// stb r9,8502(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8502, ctx.r9.u8);
	// stw r28,8504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8504, ctx.r28.u32);
	// stb r10,8500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8500, ctx.r10.u8);
	// stw r28,8508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8508, ctx.r28.u32);
	// stw r28,8512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8512, ctx.r28.u32);
	// stb r28,8516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8516, ctx.r28.u8);
	// stb r28,8517(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8517, ctx.r28.u8);
	// stw r28,8520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8520, ctx.r28.u32);
	// stb r7,8524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8524, ctx.r7.u8);
	// stw r27,8528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8528, ctx.r27.u32);
	// stb r28,8532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8532, ctx.r28.u8);
	// stb r28,8540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8540, ctx.r28.u8);
	// stw r28,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r28.u32);
	// bl 0x82634b60
	ctx.lr = 0x8265BB80;
	sub_82634B60(ctx, base);
	// li r8,20
	ctx.r8.s64 = 20;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r8,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-4116
	ctx.r4.s64 = ctx.r7.s64 + -4116;
	// bl 0x8263b860
	ctx.lr = 0x8265BB98;
	sub_8263B860(ctx, base);
	// stw r17,4612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4612, ctx.r17.u32);
	// addi r11,r31,4584
	ctx.r11.s64 = ctx.r31.s64 + 4584;
	// stw r21,4592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4592, ctx.r21.u32);
	// stw r20,4596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4596, ctx.r20.u32);
	// addi r6,r31,672
	ctx.r6.s64 = ctx.r31.s64 + 672;
	// stw r11,4600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4600, ctx.r11.u32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// addi r11,r31,4576
	ctx.r11.s64 = ctx.r31.s64 + 4576;
	// stw r19,4616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4616, ctx.r19.u32);
	// stw r18,4620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4620, ctx.r18.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4604, ctx.r11.u32);
	// addi r11,r31,848
	ctx.r11.s64 = ctx.r31.s64 + 848;
	// addi r11,r31,4568
	ctx.r11.s64 = ctx.r31.s64 + 4568;
	// stw r11,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r11.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r5.u16);
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,852(r31)
	PPC_STORE_U16(ctx.r31.u32 + 852, ctx.r8.u16);
	// stwx r26,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,1648
	ctx.r11.s64 = ctx.r31.s64 + 1648;
	// sth r6,852(r31)
	PPC_STORE_U16(ctx.r31.u32 + 852, ctx.r6.u16);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// sth r3,852(r31)
	PPC_STORE_U16(ctx.r31.u32 + 852, ctx.r3.u16);
	// stwx r25,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r25.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,1888
	ctx.r11.s64 = ctx.r31.s64 + 1888;
	// sth r8,852(r31)
	PPC_STORE_U16(ctx.r31.u32 + 852, ctx.r8.u16);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,2128
	ctx.r11.s64 = ctx.r31.s64 + 2128;
	// sth r6,852(r31)
	PPC_STORE_U16(ctx.r31.u32 + 852, ctx.r6.u16);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lhz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// sth r3,852(r31)
	PPC_STORE_U16(ctx.r31.u32 + 852, ctx.r3.u16);
	// addi r11,r31,2608
	ctx.r11.s64 = ctx.r31.s64 + 2608;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,852(r31)
	PPC_STORE_U16(ctx.r31.u32 + 852, ctx.r7.u16);
	// stwx r22,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r22.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,3088
	ctx.r11.s64 = ctx.r31.s64 + 3088;
	// sth r5,852(r31)
	PPC_STORE_U16(ctx.r31.u32 + 852, ctx.r5.u16);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r7,2848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2848);
	// lwz r6,548(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 548);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265BCD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r5.u32);
	// bl 0x8262fff0
	ctx.lr = 0x8265BCE8;
	sub_8262FFF0(ctx, base);
	// lwz r4,3296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lwz r11,3056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3056);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r9,4496(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4496);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,4880(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r4,r6,1
	ctx.r4.u64 = ctx.r6.u64 ^ 1;
	// xori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 ^ 1;
	// stw r9,8520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8520, ctx.r9.u32);
	// lwz r10,336(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// stb r4,8516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8516, ctx.r4.u8);
	// stb r11,8517(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8517, ctx.r11.u8);
	// lwz r29,5584(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5584);
	// lwz r27,5824(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5824);
	// lwz r26,5344(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265BD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r30,r31,8500
	ctx.r30.s64 = ctx.r31.s64 + 8500;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,336(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265BD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r7,r27
	ctx.r7.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// lbz r6,8502(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8502);
	// cntlzw r5,r29
	ctx.r5.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r4,r7,2,24,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x80;
	// lbz r11,8500(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8500);
	// clrlwi r10,r6,26
	ctx.r10.u64 = ctx.r6.u32 & 0x3F;
	// stb r3,8501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8501, ctx.r3.u8);
	// xori r9,r4,128
	ctx.r9.u64 = ctx.r4.u64 ^ 128;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// lis r5,0
	ctx.r5.s64 = 0;
	// rlwimi r7,r6,6,25,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0x40) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFBF);
	// ori r4,r5,60000
	ctx.r4.u64 = ctx.r5.u64 | 60000;
	// stb r7,8502(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8502, ctx.r7.u8);
	// cntlzw r7,r26
	ctx.r7.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// mullw r8,r25,r4
	ctx.r8.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r4.s32);
	// stw r8,8504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8504, ctx.r8.u32);
	// rlwinm r5,r7,2,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x80;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// xori r4,r5,128
	ctx.r4.u64 = ctx.r5.u64 ^ 128;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stb r3,8500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8500, ctx.r3.u8);
	// lwz r9,7264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7264);
	// lwz r8,6304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// lwz r11,6544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6544);
	// lwz r10,7024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7024);
	// lwz r6,6064(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6064);
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,6784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r3,7504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r27,8464(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	// rlwinm r8,r5,28,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x2;
	// lwz r6,7984(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7984);
	// rlwinm r5,r4,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwz r30,8224(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8224);
	// xori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 ^ 2;
	// lbz r29,8497(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8497);
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// lwz r4,7744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7744);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r8,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// rlwinm r8,r5,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// or r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 | ctx.r11.u64;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// rlwinm r10,r5,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r5,r8,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// or r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 | ctx.r11.u64;
	// rlwinm r6,r3,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r3,r9,2,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x80;
	// cntlzw r8,r30
	ctx.r8.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r7,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFE;
	// xori r9,r6,1
	ctx.r9.u64 = ctx.r6.u64 ^ 1;
	// xori r7,r5,1
	ctx.r7.u64 = ctx.r5.u64 ^ 1;
	// xori r6,r3,128
	ctx.r6.u64 = ctx.r3.u64 ^ 128;
	// rlwinm r11,r8,28,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// clrlwi r5,r29,27
	ctx.r5.u64 = ctx.r29.u32 & 0x1F;
	// cntlzw r8,r4
	ctx.r8.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// or r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 | ctx.r9.u64;
	// xori r4,r11,2
	ctx.r4.u64 = ctx.r11.u64 ^ 2;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r3,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// xori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r6,r6,0,27,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// rlwinm r5,r9,5,24,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xE0;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stb r4,8496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8496, ctx.r4.u8);
	// stb r3,8497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8497, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,8533(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8533, ctx.r28.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265BECC"))) PPC_WEAK_FUNC(sub_8265BECC);
PPC_FUNC_IMPL(__imp__sub_8265BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265BED0"))) PPC_WEAK_FUNC(sub_8265BED0);
PPC_FUNC_IMPL(__imp__sub_8265BED0) {
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
	// bl 0x82647e40
	ctx.lr = 0x8265BEF0;
	sub_82647E40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265bf08
	if (ctx.cr6.eq) goto loc_8265BF08;
	// bl 0x82130588
	ctx.lr = 0x8265BF04;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265BF08:
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

__attribute__((alias("__imp__sub_8265BF20"))) PPC_WEAK_FUNC(sub_8265BF20);
PPC_FUNC_IMPL(__imp__sub_8265BF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x8265BF28;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-32121
	ctx.r22.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// ori r21,r9,54176
	ctx.r21.u64 = ctx.r9.u64 | 54176;
	// lwz r11,-10236(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -10236);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,648(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// add r23,r7,r21
	ctx.r23.u64 = ctx.r7.u64 + ctx.r21.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265BF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,528
	ctx.r4.s64 = ctx.r6.s64 + 528;
	// lwz r11,788(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 788);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265BF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265BF84;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265BF94:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265bf94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265BF94;
	// addi r24,r31,2100
	ctx.r24.s64 = ctx.r31.s64 + 2100;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265BFBC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265bfbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265BFBC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265BFD8;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265BFE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265bfe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265BFE8;
	// addi r25,r31,3300
	ctx.r25.s64 = ctx.r31.s64 + 3300;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C010:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C010;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265C02C;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C03C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c03c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C03C;
	// addi r26,r31,1364
	ctx.r26.s64 = ctx.r31.s64 + 1364;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C064:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C064;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265C080;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C090:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C090;
	// addi r28,r31,1620
	ctx.r28.s64 = ctx.r31.s64 + 1620;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C0B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c0b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C0B8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265C0D4;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C0E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c0e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C0E4;
	// addi r27,r31,5108
	ctx.r27.s64 = ctx.r31.s64 + 5108;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C10C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c10c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C10C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265C128;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C138:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C138;
	// addi r10,r31,5348
	ctx.r10.s64 = ctx.r31.s64 + 5348;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C15C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c15c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C15C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265C178;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C188:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C188;
	// addi r10,r31,5588
	ctx.r10.s64 = ctx.r31.s64 + 5588;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C1AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c1ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C1AC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265C1C8;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C1D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C1D8;
	// addi r10,r31,5828
	ctx.r10.s64 = ctx.r31.s64 + 5828;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C1FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c1fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C1FC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265C218;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C228:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C228;
	// addi r30,r31,3060
	ctx.r30.s64 = ctx.r31.s64 + 3060;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C250:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C250;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265C26C;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C27C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c27c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C27C;
	// addi r29,r31,4852
	ctx.r29.s64 = ctx.r31.s64 + 4852;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C2A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c2a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C2A4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265C2C0;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C2D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c2d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C2D0;
	// addi r10,r31,4020
	ctx.r10.s64 = ctx.r31.s64 + 4020;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C2F4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c2f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C2F4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f70
	ctx.lr = 0x8265C310;
	sub_821C2F70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C320:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C320;
	// addi r10,r31,3540
	ctx.r10.s64 = ctx.r31.s64 + 3540;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C344:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826550b8
	ctx.lr = 0x8265C360;
	sub_826550B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826583c0
	ctx.lr = 0x8265C368;
	sub_826583C0(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,27272
	ctx.r4.s64 = ctx.r11.s64 + 27272;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265C37C;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C38C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c38c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C38C;
	// addi r10,r31,3780
	ctx.r10.s64 = ctx.r31.s64 + 3780;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C3B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c3b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C3B0;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,0
	ctx.r4.s64 = ctx.r11.s64 + 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265C3D8;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C3E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c3e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C3E8;
	// addi r10,r31,4260
	ctx.r10.s64 = ctx.r31.s64 + 4260;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C40C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c40c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C40C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21960
	ctx.r4.s64 = ctx.r11.s64 + 21960;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265C434;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C444:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C444;
	// addi r10,r31,4500
	ctx.r10.s64 = ctx.r31.s64 + 4500;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C468:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C468;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,0
	ctx.r4.s64 = ctx.r11.s64 + 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265C490;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C4A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c4a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C4A0;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-29656
	ctx.r4.s64 = ctx.r11.s64 + -29656;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265C4C8;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C4D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c4d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C4D8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21840
	ctx.r4.s64 = ctx.r11.s64 + 21840;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265C500;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C510:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C510;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21944
	ctx.r4.s64 = ctx.r11.s64 + 21944;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265C538;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C548:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C548;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-20792
	ctx.r4.s64 = ctx.r11.s64 + -20792;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265C570;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C580:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C580;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21944
	ctx.r4.s64 = ctx.r11.s64 + 21944;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265C5A8;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C5B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c5b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C5B8;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,21944
	ctx.r4.s64 = ctx.r11.s64 + 21944;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2f90
	ctx.lr = 0x8265C5E0;
	sub_821C2F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265C5F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265c5f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C5F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826564b8
	ctx.lr = 0x8265C60C;
	sub_826564B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265a4a0
	ctx.lr = 0x8265C614;
	sub_8265A4A0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82654ac8
	ctx.lr = 0x8265C61C;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c64c
	if (!ctx.cr6.eq) goto loc_8265C64C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82654b60
	ctx.lr = 0x8265C630;
	sub_82654B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c64c
	if (!ctx.cr6.eq) goto loc_8265C64C;
	// lbz r11,960(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8265c650
	if (ctx.cr6.eq) goto loc_8265C650;
loc_8265C64C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265C650:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265c6c8
	if (ctx.cr6.eq) goto loc_8265C6C8;
	// addi r3,r23,672
	ctx.r3.s64 = ctx.r23.s64 + 672;
	// bl 0x82631f88
	ctx.lr = 0x8265C664;
	sub_82631F88(ctx, base);
	// lwz r11,856(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265c674
	if (ctx.cr6.lt) goto loc_8265C674;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8265C674:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8265c6c8
	if (ctx.cr6.gt) goto loc_8265C6C8;
	// lwz r11,-10236(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -10236);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x82654bf8
	ctx.lr = 0x8265C68C;
	sub_82654BF8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8265c6b4
	if (!ctx.cr6.eq) goto loc_8265C6B4;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,29396
	ctx.r4.s64 = ctx.r11.s64 + 29396;
	// bl 0x8262ffe0
	ctx.lr = 0x8265C6B0;
	sub_8262FFE0(ctx, base);
	// b 0x8265c6e8
	goto loc_8265C6E8;
loc_8265C6B4:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,28124
	ctx.r4.s64 = ctx.r11.s64 + 28124;
	// bl 0x8262ffe0
	ctx.lr = 0x8265C6C4;
	sub_8262FFE0(ctx, base);
	// b 0x8265c6e8
	goto loc_8265C6E8;
loc_8265C6C8:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// addi r29,r11,29396
	ctx.r29.s64 = ctx.r11.s64 + 29396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x8262ffe0
	ctx.lr = 0x8265C6E4;
	sub_8262FFE0(ctx, base);
	// stw r29,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
loc_8265C6E8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r3,-10236(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -10236);
	// addi r4,r10,-10256
	ctx.r4.s64 = ctx.r10.s64 + -10256;
	// bl 0x821f9fb8
	ctx.lr = 0x8265C6F8;
	sub_821F9FB8(ctx, base);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,196(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// lwz r4,56(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8265C714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82658c28
	ctx.lr = 0x8265C71C;
	sub_82658C28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265C730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,8540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8540, ctx.r9.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265C740"))) PPC_WEAK_FUNC(sub_8265C740);
PPC_FUNC_IMPL(__imp__sub_8265C740) {
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
	// addi r31,r30,1016
	ctx.r31.s64 = ctx.r30.s64 + 1016;
	// lwz r11,1056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8265c7f4
	if (!ctx.cr6.eq) goto loc_8265C7F4;
	// addi r4,r30,952
	ctx.r4.s64 = ctx.r30.s64 + 952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265b3c0
	ctx.lr = 0x8265C774;
	sub_8265B3C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265C790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265C7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265c7ec
	if (!ctx.cr6.gt) goto loc_8265C7EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265C7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1060(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// twllei r3,0
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r3
	ctx.r8.s32 = ctx.r9.s32 / ctx.r3.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r6,r8,r3
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// andc r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 & ~ctx.r7.u64;
	// subf r4,r6,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r6.s64;
	// twlgei r5,-1
	// stw r4,1060(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1060, ctx.r4.u32);
	// b 0x8265c7f4
	goto loc_8265C7F4;
loc_8265C7EC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1060(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1060, ctx.r11.u32);
loc_8265C7F4:
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

__attribute__((alias("__imp__sub_8265C80C"))) PPC_WEAK_FUNC(sub_8265C80C);
PPC_FUNC_IMPL(__imp__sub_8265C80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C810"))) PPC_WEAK_FUNC(sub_8265C810);
PPC_FUNC_IMPL(__imp__sub_8265C810) {
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
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r9,1428
	ctx.r4.s64 = ctx.r9.s64 + 1428;
	// addi r8,r11,28548
	ctx.r8.s64 = ctx.r11.s64 + 28548;
	// addi r5,r10,1404
	ctx.r5.s64 = ctx.r10.s64 + 1404;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228f920
	ctx.lr = 0x8265C84C;
	sub_8228F920(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// addi r7,r8,604
	ctx.r7.s64 = ctx.r8.s64 + 604;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82659850
	ctx.lr = 0x8265C860;
	sub_82659850(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r31,976
	ctx.r3.s64 = ctx.r31.s64 + 976;
	// addi r4,r6,568
	ctx.r4.s64 = ctx.r6.s64 + 568;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82633d40
	ctx.lr = 0x8265C874;
	sub_82633D40(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1200
	ctx.r3.s64 = ctx.r31.s64 + 1200;
	// stw r4,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r4.u32);
	// lfs f0,14192(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// bl 0x82634b60
	ctx.lr = 0x8265C890;
	sub_82634B60(ctx, base);
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

__attribute__((alias("__imp__sub_8265C8A8"))) PPC_WEAK_FUNC(sub_8265C8A8);
PPC_FUNC_IMPL(__imp__sub_8265C8A8) {
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
	// bl 0x82646b48
	ctx.lr = 0x8265C8C8;
	sub_82646B48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265c8e0
	if (ctx.cr6.eq) goto loc_8265C8E0;
	// bl 0x82130588
	ctx.lr = 0x8265C8DC;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265C8E0:
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

__attribute__((alias("__imp__sub_8265C8F8"))) PPC_WEAK_FUNC(sub_8265C8F8);
PPC_FUNC_IMPL(__imp__sub_8265C8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8265C900;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r9,2308
	ctx.r4.s64 = ctx.r9.s64 + 2308;
	// addi r8,r11,27988
	ctx.r8.s64 = ctx.r11.s64 + 27988;
	// addi r5,r10,2284
	ctx.r5.s64 = ctx.r10.s64 + 2284;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228f920
	ctx.lr = 0x8265C930;
	sub_8228F920(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r7,r8,1484
	ctx.r7.s64 = ctx.r8.s64 + 1484;
	// addi r30,r31,944
	ctx.r30.s64 = ctx.r31.s64 + 944;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,1464
	ctx.r4.s64 = ctx.r6.s64 + 1464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82633d40
	ctx.lr = 0x8265C954;
	sub_82633D40(ctx, base);
	// addi r29,r31,1152
	ctx.r29.s64 = ctx.r31.s64 + 1152;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,1448
	ctx.r4.s64 = ctx.r4.s64 + 1448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82633d40
	ctx.lr = 0x8265C96C;
	sub_82633D40(ctx, base);
	// addi r11,r31,848
	ctx.r11.s64 = ctx.r31.s64 + 848;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// sth r3,852(r31)
	PPC_STORE_U16(ctx.r31.u32 + 852, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,852(r31)
	PPC_STORE_U16(ctx.r31.u32 + 852, ctx.r8.u16);
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265C9AC"))) PPC_WEAK_FUNC(sub_8265C9AC);
PPC_FUNC_IMPL(__imp__sub_8265C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C9B0"))) PPC_WEAK_FUNC(sub_8265C9B0);
PPC_FUNC_IMPL(__imp__sub_8265C9B0) {
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
	// bl 0x82646f40
	ctx.lr = 0x8265C9D0;
	sub_82646F40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265c9e8
	if (ctx.cr6.eq) goto loc_8265C9E8;
	// bl 0x82130588
	ctx.lr = 0x8265C9E4;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265C9E8:
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

__attribute__((alias("__imp__sub_8265CA00"))) PPC_WEAK_FUNC(sub_8265CA00);
PPC_FUNC_IMPL(__imp__sub_8265CA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8265CA08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r11,-10236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265CA2C;
	sub_82641CB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826304b0
	ctx.lr = 0x8265CA34;
	sub_826304B0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-4116
	ctx.r4.s64 = ctx.r10.s64 + -4116;
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265CA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,944(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// addi r30,r31,944
	ctx.r30.s64 = ctx.r31.s64 + 944;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265CA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32120
	ctx.r5.s64 = -2105016320;
	// lwz r3,-7572(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -7572);
	// bl 0x822f10d0
	ctx.lr = 0x8265CA7C;
	sub_822F10D0(ctx, base);
	// lis r4,-32120
	ctx.r4.s64 = -2105016320;
	// stfs f1,1184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// lwz r11,-7884(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -7884);
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
	// bl 0x822166e8
	ctx.lr = 0x8265CA90;
	sub_822166E8(ctx, base);
	// bl 0x82215a60
	ctx.lr = 0x8265CA94;
	sub_82215A60(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r3,r3,2352
	ctx.r3.s64 = ctx.r3.s64 + 2352;
	// bl 0x821fa230
	ctx.lr = 0x8265CAA0;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265CAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265cafc
	if (ctx.cr6.eq) goto loc_8265CAFC;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-3624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3624);
	// bl 0x8226b298
	ctx.lr = 0x8265CAC8;
	sub_8226B298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265cafc
	if (ctx.cr6.eq) goto loc_8265CAFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x8265CADC;
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
	ctx.lr = 0x8265CAF0;
	sub_82270170(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82274128
	ctx.lr = 0x8265CAFC;
	sub_82274128(ctx, base);
loc_8265CAFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265CB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265cb38
	if (!ctx.cr6.gt) goto loc_8265CB38;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,648(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265CB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265cba8
	goto loc_8265CBA8;
loc_8265CB38:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,848
	ctx.r11.s64 = ctx.r31.s64 + 848;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r9,852(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8265cb78
	if (ctx.cr6.eq) goto loc_8265CB78;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_8265CB64:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r6,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8265cb64
	if (!ctx.cr6.eq) goto loc_8265CB64;
loc_8265CB78:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r7,r31,976
	ctx.r7.s64 = ctx.r31.s64 + 976;
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r8,r3,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
loc_8265CBA8:
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,2328
	ctx.r4.s64 = ctx.r10.s64 + 2328;
	// lwz r3,-24180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24180);
	// bl 0x821fd980
	ctx.lr = 0x8265CBC0;
	sub_821FD980(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r8,32684
	ctx.r4.s64 = ctx.r8.s64 + 32684;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x8265CBE0;
	sub_823DC018(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r7,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r7.u32);
	// addi r4,r6,-10256
	ctx.r4.s64 = ctx.r6.s64 + -10256;
	// lwz r3,-10236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// bl 0x821f9fb8
	ctx.lr = 0x8265CBF8;
	sub_821F9FB8(ctx, base);
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,196(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 196);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// lwz r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265CC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265CC1C"))) PPC_WEAK_FUNC(sub_8265CC1C);
PPC_FUNC_IMPL(__imp__sub_8265CC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265CC20"))) PPC_WEAK_FUNC(sub_8265CC20);
PPC_FUNC_IMPL(__imp__sub_8265CC20) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,2372
	ctx.r4.s64 = ctx.r10.s64 + 2372;
	// lwz r3,-24180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24180);
	// bl 0x821fd980
	ctx.lr = 0x8265CC50;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r4,r9,32684
	ctx.r4.s64 = ctx.r9.s64 + 32684;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// bl 0x823dc018
	ctx.lr = 0x8265CC6C;
	sub_823DC018(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8265CC8C"))) PPC_WEAK_FUNC(sub_8265CC8C);
PPC_FUNC_IMPL(__imp__sub_8265CC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265CC90"))) PPC_WEAK_FUNC(sub_8265CC90);
PPC_FUNC_IMPL(__imp__sub_8265CC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e0
	ctx.lr = 0x8265CC98;
	__savegprlr_22(ctx, base);
	// stwu r1,-3376(r1)
	ea = -3376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32121
	ctx.r26.s64 = -2105081856;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,-10236(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10236);
	// lwz r3,-27856(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27856);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 65536;
	// addi r31,r31,16256
	ctx.r31.s64 = ctx.r31.s64 + 16256;
	// bl 0x8238ec00
	ctx.lr = 0x8265CCC4;
	sub_8238EC00(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82250310
	ctx.lr = 0x8265CCE4;
	sub_82250310(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// stw r29,3276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3276, ctx.r29.u32);
	// stw r29,3280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3280, ctx.r29.u32);
	// addi r30,r30,19760
	ctx.r30.s64 = ctx.r30.s64 + 19760;
	// stw r29,3284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3284, ctx.r29.u32);
	// stw r29,3216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3216, ctx.r29.u32);
	// addi r3,r30,1136
	ctx.r3.s64 = ctx.r30.s64 + 1136;
	// lwz r8,1136(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// lwz r7,336(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8265CD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r3,3180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3180, ctx.r3.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r5,r6,21616
	ctx.r5.u64 = ctx.r6.u64 | 21616;
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r11,3196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3196, ctx.r11.u32);
	// stw r29,3208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3208, ctx.r29.u32);
	// blt cr6,0x8265cd38
	if (ctx.cr6.lt) goto loc_8265CD38;
	// stw r23,3208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3208, ctx.r23.u32);
loc_8265CD38:
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// addi r3,r30,1392
	ctx.r3.s64 = ctx.r30.s64 + 1392;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265CD4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,3212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3212, ctx.r3.u32);
	// lwz r9,1392(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// addi r3,r30,1392
	ctx.r3.s64 = ctx.r30.s64 + 1392;
	// lwz r8,336(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265CD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32111
	ctx.r7.s64 = -2104426496;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r6,2452
	ctx.r4.s64 = ctx.r6.s64 + 2452;
	// lwz r3,-24180(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -24180);
	// bl 0x821fd980
	ctx.lr = 0x8265CD80;
	sub_821FD980(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r28,92
	ctx.r3.s64 = ctx.r28.s64 + 92;
	// addi r4,r5,32684
	ctx.r4.s64 = ctx.r5.s64 + 32684;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r22,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r22.u32);
	// bl 0x823dc018
	ctx.lr = 0x8265CD9C;
	sub_823DC018(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r3.u32);
	// lwz r11,-10236(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10236);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265CDC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r5,3212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3212);
	// addi r4,r8,-5024
	ctx.r4.s64 = ctx.r8.s64 + -5024;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x825ee0e0
	ctx.lr = 0x8265CDD8;
	sub_825EE0E0(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82388c48
	ctx.lr = 0x8265CDE8;
	sub_82388C48(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32121
	ctx.r6.s64 = -2105081856;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,-3624(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -3624);
	// stw r5,3184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3184, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,3188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3188, ctx.r4.u32);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,796(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 796);
	// stw r8,3248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3248, ctx.r8.u32);
	// lwz r7,700(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lbz r5,797(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 797);
	// stw r5,3252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3252, ctx.r5.u32);
	// bl 0x82130528
	ctx.lr = 0x8265CE2C;
	sub_82130528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265ce84
	if (ctx.cr6.eq) goto loc_8265CE84;
	// li r9,255
	ctx.r9.s64 = 255;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// ori r8,r10,224
	ctx.r8.u64 = ctx.r10.u64 | 224;
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// lbz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// ori r5,r6,192
	ctx.r5.u64 = ctx.r6.u64 | 192;
	// lbz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// clrlwi r4,r7,25
	ctx.r4.u64 = ctx.r7.u32 & 0x7F;
	// stb r29,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r29.u8);
	// stb r5,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r5.u8);
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stb r29,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r29.u8);
	// stb r29,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r29.u8);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// b 0x8265ce88
	goto loc_8265CE88;
loc_8265CE84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8265CE88:
	// stw r3,3256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3256, ctx.r3.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,23056
	ctx.r9.u64 = ctx.r11.u64 | 23056;
	// ori r8,r10,22096
	ctx.r8.u64 = ctx.r10.u64 | 22096;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r7,55136
	ctx.r6.u64 = ctx.r7.u64 | 55136;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// lwzx r9,r31,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r8,3256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3256);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r11,-10236(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10236);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,2816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2816);
	// lbzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8265cee0
	if (ctx.cr6.eq) goto loc_8265CEE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8265CEE0:
	// lwz r10,3256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3256);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r4,r8,25344
	ctx.r4.u64 = ctx.r8.u64 | 25344;
	// ori r7,r9,22816
	ctx.r7.u64 = ctx.r9.u64 | 22816;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r8,3256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3256);
	// ori r11,r6,25584
	ctx.r11.u64 = ctx.r6.u64 | 25584;
	// ori r10,r5,25104
	ctx.r10.u64 = ctx.r5.u64 | 25104;
	// lwzx r9,r31,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r3,r30,4880
	ctx.r3.s64 = ctx.r30.s64 + 4880;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stb r5,21(r8)
	PPC_STORE_U8(ctx.r8.u32 + 21, ctx.r5.u8);
	// lwzx r29,r31,r4
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwz r4,4880(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4880);
	// lwzx r27,r31,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r28,r31,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r11,336(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265CF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4624);
	// addi r11,r30,4624
	ctx.r11.s64 = ctx.r30.s64 + 4624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265CF5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3256);
	// cntlzw r8,r27
	ctx.r8.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// cntlzw r7,r29
	ctx.r7.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r6,r8,2,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x80;
	// rlwinm r9,r7,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cntlzw r5,r28
	ctx.r5.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// xori r10,r6,128
	ctx.r10.u64 = ctx.r6.u64 ^ 128;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r7,r4,26
	ctx.r7.u64 = ctx.r4.u32 & 0x3F;
	// stb r3,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// rlwinm r5,r5,2,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x80;
	// lis r6,0
	ctx.r6.s64 = 0;
	// or r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 | ctx.r7.u64;
	// xori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 ^ 1;
	// xori r7,r5,128
	ctx.r7.u64 = ctx.r5.u64 ^ 128;
	// ori r9,r6,60000
	ctx.r9.u64 = ctx.r6.u64 | 60000;
	// clrlwi r8,r8,25
	ctx.r8.u64 = ctx.r8.u32 & 0x7F;
	// mullw r5,r30,r9
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// or r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwimi r4,r10,6,25,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x40) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r3,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r3.u8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stb r4,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r4.u8);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r30,1
	ctx.r30.s64 = 65536;
	// ori r29,r11,27024
	ctx.r29.u64 = ctx.r11.u64 | 27024;
	// ori r8,r9,25824
	ctx.r8.u64 = ctx.r9.u64 | 25824;
	// ori r30,r30,26544
	ctx.r30.u64 = ctx.r30.u64 | 26544;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// ori r7,r7,28224
	ctx.r7.u64 = ctx.r7.u64 | 28224;
	// ori r6,r6,27984
	ctx.r6.u64 = ctx.r6.u64 | 27984;
	// ori r5,r5,27744
	ctx.r5.u64 = ctx.r5.u64 | 27744;
	// ori r4,r4,27504
	ctx.r4.u64 = ctx.r4.u64 | 27504;
	// ori r3,r3,27264
	ctx.r3.u64 = ctx.r3.u64 | 27264;
	// ori r9,r9,26784
	ctx.r9.u64 = ctx.r9.u64 | 26784;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// lwz r11,3256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3256);
	// ori r28,r28,26304
	ctx.r28.u64 = ctx.r28.u64 | 26304;
	// lwzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r30,r31,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// ori r26,r26,26064
	ctx.r26.u64 = ctx.r26.u64 | 26064;
	// lwzx r28,r31,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwzx r9,r31,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cntlzw r28,r28
	ctx.r28.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r8,r8,2,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x80;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// clrlwi r27,r27,25
	ctx.r27.u64 = ctx.r27.u32 & 0x7F;
	// lwzx r26,r31,r26
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// xori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 ^ 128;
	// lwzx r7,r31,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cntlzw r30,r30
	ctx.r30.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// cntlzw r26,r26
	ctx.r26.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lwzx r31,r31,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r29,r28,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x1;
	// rlwinm r28,r26,28,30,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0x2;
	// xori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 ^ 1;
	// xori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 ^ 2;
	// or r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 | ctx.r27.u64;
	// or r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 | ctx.r29.u64;
	// rlwinm r30,r30,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r8,r29,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFE;
	// xori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 ^ 1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// rlwinm r8,r8,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// cntlzw r31,r31
	ctx.r31.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r9,r31,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r3,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r9,r9,1,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r5,r5,2,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x80;
	// cntlzw r8,r4
	ctx.r8.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// xori r4,r7,1
	ctx.r4.u64 = ctx.r7.u64 ^ 1;
	// rlwinm r6,r6,28,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x2;
	// xori r7,r5,128
	ctx.r7.u64 = ctx.r5.u64 ^ 128;
	// clrlwi r5,r3,27
	ctx.r5.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r3,r9,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// xori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 ^ 2;
	// rlwinm r9,r31,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 | ctx.r9.u64;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r9,r6,5,24,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xE0;
	// rlwinm r8,r8,0,27,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// or r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// stw r23,3228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3228, ctx.r23.u32);
	// bl 0x826589d8
	ctx.lr = 0x8265D148;
	sub_826589D8(ctx, base);
	// lwz r5,3188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3188);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8265d1d0
	if (ctx.cr6.gt) goto loc_8265D1D0;
	// lis r12,-32154
	ctx.r12.s64 = -2107244544;
	// addi r12,r12,-11920
	ctx.r12.s64 = ctx.r12.s64 + -11920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8265D184;
	case 1:
		goto loc_8265D190;
	case 2:
		goto loc_8265D19C;
	case 3:
		goto loc_8265D1D0;
	case 4:
		goto loc_8265D1A8;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-11900(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11900);
	// lwz r19,-11888(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11888);
	// lwz r19,-11876(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11876);
	// lwz r19,-11824(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11824);
	// lwz r19,-11864(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11864);
loc_8265D184:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,2444
	ctx.r4.s64 = ctx.r10.s64 + 2444;
	// b 0x8265d1b0
	goto loc_8265D1B0;
loc_8265D190:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,2436
	ctx.r4.s64 = ctx.r10.s64 + 2436;
	// b 0x8265d1b0
	goto loc_8265D1B0;
loc_8265D19C:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,2428
	ctx.r4.s64 = ctx.r10.s64 + 2428;
	// b 0x8265d1b0
	goto loc_8265D1B0;
loc_8265D1A8:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,2420
	ctx.r4.s64 = ctx.r10.s64 + 2420;
loc_8265D1B0:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,-12440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12440);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265D1D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265D1D0:
	// bl 0x822150d8
	ctx.lr = 0x8265D1D4;
	sub_822150D8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r8,3800
	ctx.r8.s64 = 3800;
	// addi r3,r11,2396
	ctx.r3.s64 = ctx.r11.s64 + 2396;
	// li r7,3208
	ctx.r7.s64 = 3208;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82727908
	ctx.lr = 0x8265D1F4;
	sub_82727908(ctx, base);
	// addi r1,r1,3376
	ctx.r1.s64 = ctx.r1.s64 + 3376;
	// b 0x823d9230
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265D1FC"))) PPC_WEAK_FUNC(sub_8265D1FC);
PPC_FUNC_IMPL(__imp__sub_8265D1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265D200"))) PPC_WEAK_FUNC(sub_8265D200);
PPC_FUNC_IMPL(__imp__sub_8265D200) {
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
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265D22C;
	sub_82641CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r9,8532(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8532);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265d298
	if (ctx.cr6.eq) goto loc_8265D298;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265D24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8265d288
	if (ctx.cr6.eq) goto loc_8265D288;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265D268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8265d288
	if (ctx.cr6.eq) goto loc_8265D288;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265D284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265d28c
	goto loc_8265D28C;
loc_8265D288:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8265D28C:
	// bl 0x8265cc20
	ctx.lr = 0x8265D290;
	sub_8265CC20(ctx, base);
	// bl 0x82216648
	ctx.lr = 0x8265D294;
	sub_82216648(ctx, base);
	// bl 0x822150d8
	ctx.lr = 0x8265D298;
	sub_822150D8(ctx, base);
loc_8265D298:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8532, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8265D2B4"))) PPC_WEAK_FUNC(sub_8265D2B4);
PPC_FUNC_IMPL(__imp__sub_8265D2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265D2B8"))) PPC_WEAK_FUNC(sub_8265D2B8);
PPC_FUNC_IMPL(__imp__sub_8265D2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91dc
	ctx.lr = 0x8265D2C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x821f88b8
	ctx.lr = 0x8265D2CC;
	sub_821F88B8(ctx, base);
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lwz r11,-10016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10016);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lbz r22,8532(r25)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r25.u32 + 8532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265d394
	if (!ctx.cr6.gt) goto loc_8265D394;
	// bl 0x8265e5e8
	ctx.lr = 0x8265D2E8;
	sub_8265E5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d394
	if (ctx.cr6.eq) goto loc_8265D394;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r29,17268(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17268);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8265d394
	if (ctx.cr6.eq) goto loc_8265D394;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lwz r11,18508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d394
	if (ctx.cr6.eq) goto loc_8265D394;
	// lwz r11,-10016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d394
	if (ctx.cr6.eq) goto loc_8265D394;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e80f8
	ctx.lr = 0x8265D32C;
	sub_821E80F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d394
	if (ctx.cr6.eq) goto loc_8265D394;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a3998
	ctx.lr = 0x8265D344;
	sub_822A3998(ctx, base);
	// lwz r11,-10016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10016);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82706998
	ctx.lr = 0x8265D358;
	sub_82706998(ctx, base);
	// lwz r11,-10016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10016);
	// lwz r3,18508(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18508);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x826b94a8
	ctx.lr = 0x8265D368;
	sub_826B94A8(ctx, base);
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lwz r3,2832(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265d394
	if (ctx.cr6.eq) goto loc_8265D394;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-14960
	ctx.r4.s64 = ctx.r10.s64 + -14960;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265D394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265D394:
	// lis r24,-32121
	ctx.r24.s64 = -2105081856;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r23,-32121
	ctx.r23.s64 = -2105081856;
	// ori r9,r11,22096
	ctx.r9.u64 = ctx.r11.u64 | 22096;
	// lwz r11,-3624(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3624);
	// lwz r10,-10236(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10236);
	// lwz r8,700(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addis r29,r7,1
	ctx.r29.s64 = ctx.r7.s64 + 65536;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r29,r29,16256
	ctx.r29.s64 = ctx.r29.s64 + 16256;
	// addis r21,r29,2
	ctx.r21.s64 = ctx.r29.s64 + 131072;
	// lbz r6,796(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 796);
	// addi r21,r21,-27616
	ctx.r21.s64 = ctx.r21.s64 + -27616;
	// lwzx r10,r29,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8265d3e4
	if (!ctx.cr6.eq) goto loc_8265D3E4;
	// lbz r11,797(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 797);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d3e8
	if (ctx.cr6.eq) goto loc_8265D3E8;
loc_8265D3E4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8265D3E8:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10012);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d430
	if (ctx.cr6.eq) goto loc_8265D430;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// ori r8,r10,16960
	ctx.r8.u64 = ctx.r10.u64 | 16960;
	// blt cr6,0x8265d424
	if (ctx.cr6.lt) goto loc_8265D424;
	// beq cr6,0x8265d418
	if (ctx.cr6.eq) goto loc_8265D418;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,7444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8265d42c
	goto loc_8265D42C;
loc_8265D418:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,14884(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14884);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8265d42c
	goto loc_8265D42C;
loc_8265D424:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
loc_8265D42C:
	// stfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
loc_8265D430:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-27856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x8265D43C;
	sub_8238EC00(ctx, base);
	// addis r30,r29,2
	ctx.r30.s64 = ctx.r29.s64 + 131072;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r30,-32640
	ctx.r30.s64 = ctx.r30.s64 + -32640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,784(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265D45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265b430
	ctx.lr = 0x8265D468;
	sub_8265B430(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r31,-32111
	ctx.r31.s64 = -2104426496;
	// addi r28,r11,2488
	ctx.r28.s64 = ctx.r11.s64 + 2488;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-24180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24180);
	// bl 0x822c7030
	ctx.lr = 0x8265D484;
	sub_822C7030(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// addi r5,r30,976
	ctx.r5.s64 = ctx.r30.s64 + 976;
	// lhz r11,3992(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 3992);
	// sth r11,92(r3)
	PPC_STORE_U16(ctx.r3.u32 + 92, ctx.r11.u16);
	// stw r6,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r6.u32);
	// lwz r4,864(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8265d4c0
	if (!ctx.cr6.eq) goto loc_8265D4C0;
	// addis r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 131072;
	// addi r3,r3,-31968
	ctx.r3.s64 = ctx.r3.s64 + -31968;
	// bl 0x82631f88
	ctx.lr = 0x8265D4BC;
	sub_82631F88(ctx, base);
	// b 0x8265d5d0
	goto loc_8265D5D0;
loc_8265D4C0:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d560
	if (ctx.cr6.eq) goto loc_8265D560;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8238ebf8
	ctx.lr = 0x8265D4DC;
	sub_8238EBF8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,-24180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24180);
	// addi r4,r11,2476
	ctx.r4.s64 = ctx.r11.s64 + 2476;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821fde78
	ctx.lr = 0x8265D4F0;
	sub_821FDE78(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,19760
	ctx.r11.s64 = ctx.r11.s64 + 19760;
	// addi r3,r11,1392
	ctx.r3.s64 = ctx.r11.s64 + 1392;
	// lwz r10,1392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1392);
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265D50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-24180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24180);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r8,2452
	ctx.r4.s64 = ctx.r8.s64 + 2452;
	// bl 0x821fde78
	ctx.lr = 0x8265D524;
	sub_821FDE78(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lwz r3,-24180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24180);
	// ori r5,r7,21616
	ctx.r5.u64 = ctx.r7.u64 | 21616;
	// addi r4,r6,2464
	ctx.r4.s64 = ctx.r6.s64 + 2464;
	// lwzx r5,r29,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// bl 0x821fde78
	ctx.lr = 0x8265D540;
	sub_821FDE78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826304b0
	ctx.lr = 0x8265D54C;
	sub_826304B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-24180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24180);
	// bl 0x822c7138
	ctx.lr = 0x8265D55C;
	sub_822C7138(ctx, base);
	// b 0x8265d5d0
	goto loc_8265D5D0;
loc_8265D560:
	// lwz r11,-3624(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3624);
	// lwz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,796(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 796);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265d58c
	if (!ctx.cr6.eq) goto loc_8265D58C;
	// lbz r11,797(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 797);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d58c
	if (!ctx.cr6.eq) goto loc_8265D58C;
	// addi r31,r25,8536
	ctx.r31.s64 = ctx.r25.s64 + 8536;
	// b 0x8265d5a8
	goto loc_8265D5A8;
loc_8265D58C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x827057e0
	ctx.lr = 0x8265D598;
	sub_827057E0(ctx, base);
	// lwz r4,8536(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8536);
	// addi r31,r25,8536
	ctx.r31.s64 = ctx.r25.s64 + 8536;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8265d5c8
	if (!ctx.cr6.eq) goto loc_8265D5C8;
loc_8265D5A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823895f8
	ctx.lr = 0x8265D5B8;
	sub_823895F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d5d0
	if (ctx.cr6.eq) goto loc_8265D5D0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8265D5C8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8265cc90
	ctx.lr = 0x8265D5D0;
	sub_8265CC90(ctx, base);
loc_8265D5D0:
	// lwz r11,-10236(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10236);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f1,1184(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 1184);
	ctx.f1.f64 = double(temp.f32);
	// ori r9,r10,55136
	ctx.r9.u64 = ctx.r10.u64 | 55136;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8265d5fc
	if (ctx.cr6.eq) goto loc_8265D5FC;
	// lwz r11,2816(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2816);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x8265d600
	goto loc_8265D600;
loc_8265D5FC:
	// lwz r3,2816(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2816);
loc_8265D600:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r31,-7572(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7572);
	// bl 0x8238eb90
	ctx.lr = 0x8265D60C;
	sub_8238EB90(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,30712(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30712);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822f1518
	ctx.lr = 0x8265D61C;
	sub_822F1518(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82656998
	ctx.lr = 0x8265D624;
	sub_82656998(ctx, base);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,736(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 736);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265D638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,74
	ctx.r4.s64 = 74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8265D644;
	sub_82641CB0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,736(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 736);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265D654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8265D660;
	sub_82641CB0(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,736(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 736);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8265D670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8265D67C;
	sub_82641CB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265D68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8265D698;
	sub_82641CB0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,736(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 736);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265D6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r3,r7,-1304
	ctx.r3.s64 = ctx.r7.s64 + -1304;
	// bl 0x821fa230
	ctx.lr = 0x8265D6B4;
	sub_821FA230(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,108(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8265D6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265D6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265D6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32115
	ctx.r7.s64 = -2104688640;
	// addi r6,r7,-12580
	ctx.r6.s64 = ctx.r7.s64 + -12580;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265d740
	if (!ctx.cr6.eq) goto loc_8265D740;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// ori r31,r11,4672
	ctx.r31.u64 = ctx.r11.u64 | 4672;
	// addi r29,r10,-2524
	ctx.r29.s64 = ctx.r10.s64 + -2524;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82219fe8
	ctx.lr = 0x8265D72C;
	sub_82219FE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82218d38
	ctx.lr = 0x8265D734;
	sub_82218D38(ctx, base);
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8221a440
	ctx.lr = 0x8265D740;
	sub_8221A440(ctx, base);
loc_8265D740:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82216138
	ctx.lr = 0x8265D748;
	sub_82216138(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// stb r11,-12456(r10)
	PPC_STORE_U8(ctx.r10.u32 + -12456, ctx.r11.u8);
	// lwz r3,-12012(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12012);
	// bl 0x821f15c8
	ctx.lr = 0x8265D760;
	sub_821F15C8(ctx, base);
	// bl 0x821e60c0
	ctx.lr = 0x8265D764;
	sub_821E60C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d922c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265D76C"))) PPC_WEAK_FUNC(sub_8265D76C);
PPC_FUNC_IMPL(__imp__sub_8265D76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265D770"))) PPC_WEAK_FUNC(sub_8265D770);
PPC_FUNC_IMPL(__imp__sub_8265D770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x8265D778;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-12776
	ctx.r4.s64 = ctx.r11.s64 + -12776;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lwz r11,-10236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// lis r9,-32130
	ctx.r9.s64 = -2105671680;
	// addi r29,r10,-7660
	ctx.r29.s64 = ctx.r10.s64 + -7660;
	// addi r28,r9,-22108
	ctx.r28.s64 = ctx.r9.s64 + -22108;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x8265D7AC;
	sub_82691650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x8265D7C0;
	sub_823DEDD8(ctx, base);
	// lwz r29,864(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8265d824
	if (ctx.cr6.eq) goto loc_8265D824;
	// addi r3,r30,672
	ctx.r3.s64 = ctx.r30.s64 + 672;
	// bl 0x82631f88
	ctx.lr = 0x8265D7D8;
	sub_82631F88(ctx, base);
	// lwz r11,856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265d7e8
	if (ctx.cr6.lt) goto loc_8265D7E8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8265D7E8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265D804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8265d824
	if (!ctx.cr6.eq) goto loc_8265D824;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24612);
	// bl 0x821e6800
	ctx.lr = 0x8265D818;
	sub_821E6800(ctx, base);
loc_8265D818:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_8265D824:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8265d83c
	if (ctx.cr6.eq) goto loc_8265D83C;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lbz r10,27964(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27964);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265d818
	if (!ctx.cr6.eq) goto loc_8265D818;
loc_8265D83C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,-10236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// addi r4,r11,-18768
	ctx.r4.s64 = ctx.r11.s64 + -18768;
	// bl 0x821f9fb8
	ctx.lr = 0x8265D84C;
	sub_821F9FB8(ctx, base);
	// lwz r11,-10236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// lwz r27,56(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 65536;
	// addi r31,r31,16256
	ctx.r31.s64 = ctx.r31.s64 + 16256;
	// bl 0x82387a18
	ctx.lr = 0x8265D864;
	sub_82387A18(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8265d89c
	if (!ctx.cr6.eq) goto loc_8265D89C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-2500
	ctx.r3.s64 = ctx.r11.s64 + -2500;
	// bl 0x821fa230
	ctx.lr = 0x8265D880;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265D890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8265d9f8
	if (ctx.cr6.eq) goto loc_8265D9F8;
loc_8265D89C:
	// lwz r11,-3624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3624);
	// lwz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d928
	if (ctx.cr6.eq) goto loc_8265D928;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,17268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17268);
	// bl 0x822a39c8
	ctx.lr = 0x8265D8C8;
	sub_822A39C8(ctx, base);
	// lwz r28,1220(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1220);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82203310
	ctx.lr = 0x8265D8D4;
	sub_82203310(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265d928
	if (ctx.cr6.eq) goto loc_8265D928;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822577d0
	ctx.lr = 0x8265D8EC;
	sub_822577D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265d928
	if (ctx.cr6.eq) goto loc_8265D928;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8265D900;
	sub_82641CB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265D914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8265D920;
	sub_82641CB0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8265db3c
	goto loc_8265DB3C;
loc_8265D928:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265d9f8
	if (ctx.cr6.eq) goto loc_8265D9F8;
	// lwz r11,864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// addi r28,r30,976
	ctx.r28.s64 = ctx.r30.s64 + 976;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8265d950
	if (!ctx.cr6.eq) goto loc_8265D950;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82655ff8
	ctx.lr = 0x8265D948;
	sub_82655FF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8265d954
	goto loc_8265D954;
loc_8265D950:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8265D954:
	// lwz r11,864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8265d96c
	if (!ctx.cr6.eq) goto loc_8265D96C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-8672
	ctx.r3.s64 = ctx.r11.s64 + -8672;
	// b 0x8265d980
	goto loc_8265D980;
loc_8265D96C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265D980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265D980:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9790
	ctx.lr = 0x8265D988;
	sub_821C9790(ctx, base);
	// lwz r11,-3624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3624);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// bl 0x82282580
	ctx.lr = 0x8265D99C;
	sub_82282580(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82216138
	ctx.lr = 0x8265D9A4;
	sub_82216138(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r10,r11,-12580
	ctx.r10.s64 = ctx.r11.s64 + -12580;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265db4c
	if (!ctx.cr6.eq) goto loc_8265DB4C;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// ori r31,r11,4672
	ctx.r31.u64 = ctx.r11.u64 | 4672;
	// addi r29,r10,-2636
	ctx.r29.s64 = ctx.r10.s64 + -2636;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82219fe8
	ctx.lr = 0x8265D9D8;
	sub_82219FE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82218d38
	ctx.lr = 0x8265D9E0;
	sub_82218D38(ctx, base);
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8221a440
	ctx.lr = 0x8265D9EC;
	sub_8221A440(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_8265D9F8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-5016
	ctx.r3.s64 = ctx.r11.s64 + -5016;
	// bl 0x821fa230
	ctx.lr = 0x8265DA04;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265DA14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8265db14
	if (ctx.cr6.eq) goto loc_8265DB14;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r27,-32111
	ctx.r27.s64 = -2104426496;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r28,r11,2532
	ctx.r28.s64 = ctx.r11.s64 + 2532;
	// addi r4,r10,2516
	ctx.r4.s64 = ctx.r10.s64 + 2516;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,-24180(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x8265DA40;
	sub_8220EF00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// bl 0x823db670
	ctx.lr = 0x8265DA54;
	sub_823DB670(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r28,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,-9136
	ctx.r4.s64 = ctx.r9.s64 + -9136;
	// lwz r3,-24180(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24180);
	// bl 0x821fde78
	ctx.lr = 0x8265DA70;
	sub_821FDE78(ctx, base);
	// bl 0x82387b38
	ctx.lr = 0x8265DA74;
	sub_82387B38(ctx, base);
	// lwz r11,-3624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3624);
	// li r8,1
	ctx.r8.s64 = 1;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,19760
	ctx.r30.s64 = ctx.r30.s64 + 19760;
	// lwz r7,700(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stb r8,796(r6)
	PPC_STORE_U8(ctx.r6.u32 + 796, ctx.r8.u8);
	// lwz r11,-3624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3624);
	// lwz r5,700(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stb r28,797(r4)
	PPC_STORE_U8(ctx.r4.u32 + 797, ctx.r28.u8);
	// bl 0x826583c0
	ctx.lr = 0x8265DAA8;
	sub_826583C0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,22368
	ctx.r3.s64 = ctx.r3.s64 + 22368;
	// bl 0x8262fff0
	ctx.lr = 0x8265DAB8;
	sub_8262FFF0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,22608
	ctx.r3.s64 = ctx.r3.s64 + 22608;
	// bl 0x8262fff0
	ctx.lr = 0x8265DAC8;
	sub_8262FFF0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,21648
	ctx.r3.s64 = ctx.r3.s64 + 21648;
	// bl 0x8262fff0
	ctx.lr = 0x8265DAD8;
	sub_8262FFF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265d2b8
	ctx.lr = 0x8265DAE0;
	sub_8265D2B8(ctx, base);
	// lis r3,-32115
	ctx.r3.s64 = -2104688640;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,2508
	ctx.r4.s64 = ctx.r11.s64 + 2508;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-12440(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12440);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265DB08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_8265DB14:
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r31,r31,19760
	ctx.r31.s64 = ctx.r31.s64 + 19760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265DB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265DB3C:
	// lwz r8,704(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265DB4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265DB4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265DB58"))) PPC_WEAK_FUNC(sub_8265DB58);
PPC_FUNC_IMPL(__imp__sub_8265DB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8265DB60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265DB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8265dbf0
	if (!ctx.cr6.eq) goto loc_8265DBF0;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// addi r9,r11,28124
	ctx.r9.s64 = ctx.r11.s64 + 28124;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8265dbf0
	if (!ctx.cr6.eq) goto loc_8265DBF0;
	// lis r31,-32111
	ctx.r31.s64 = -2104426496;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-9136
	ctx.r4.s64 = ctx.r11.s64 + -9136;
	// lwz r3,-24180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24180);
	// bl 0x821fde78
	ctx.lr = 0x8265DBB0;
	sub_821FDE78(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,-24180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24180);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r29,r10,3998
	ctx.r29.s64 = ctx.r10.s64 + 3998;
	// addi r4,r9,2516
	ctx.r4.s64 = ctx.r9.s64 + 2516;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8220ef00
	ctx.lr = 0x8265DBCC;
	sub_8220EF00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823db670
	ctx.lr = 0x8265DBE0;
	sub_823DB670(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// bl 0x8265d2b8
	ctx.lr = 0x8265DBF0;
	sub_8265D2B8(ctx, base);
loc_8265DBF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265DBF8"))) PPC_WEAK_FUNC(sub_8265DBF8);
PPC_FUNC_IMPL(__imp__sub_8265DBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d8
	ctx.lr = 0x8265DC00;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-18768
	ctx.r4.s64 = ctx.r11.s64 + -18768;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-10236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x821f9fb8
	ctx.lr = 0x8265DC24;
	sub_821F9FB8(ctx, base);
	// lwz r11,-10236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r25,r10,16256
	ctx.r25.u64 = ctx.r10.u64 | 16256;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ori r26,r9,37920
	ctx.r26.u64 = ctx.r9.u64 | 37920;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lis r6,-32130
	ctx.r6.s64 = -2105671680;
	// lis r5,-32130
	ctx.r5.s64 = -2105671680;
	// add r20,r7,r25
	ctx.r20.u64 = ctx.r7.u64 + ctx.r25.u64;
	// addi r4,r8,-12776
	ctx.r4.s64 = ctx.r8.s64 + -12776;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// add r22,r20,r26
	ctx.r22.u64 = ctx.r20.u64 + ctx.r26.u64;
	// addi r24,r6,-7660
	ctx.r24.s64 = ctx.r6.s64 + -7660;
	// addi r23,r5,-22108
	ctx.r23.s64 = ctx.r5.s64 + -22108;
	// bl 0x82691650
	ctx.lr = 0x8265DC6C;
	sub_82691650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x823dedd8
	ctx.lr = 0x8265DC80;
	sub_823DEDD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265dca4
	if (ctx.cr6.eq) goto loc_8265DCA4;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lbz r10,27964(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27964);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265dca4
	if (ctx.cr6.eq) goto loc_8265DCA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
loc_8265DCA4:
	// cmpwi cr6,r29,55
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 55, ctx.xer);
	// beq cr6,0x8265dda0
	if (ctx.cr6.eq) goto loc_8265DDA0;
	// cmpwi cr6,r29,56
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 56, ctx.xer);
	// beq cr6,0x8265dd60
	if (ctx.cr6.eq) goto loc_8265DD60;
	// cmpwi cr6,r29,62
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 62, ctx.xer);
	// beq cr6,0x8265dcd4
	if (ctx.cr6.eq) goto loc_8265DCD4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826537d0
	ctx.lr = 0x8265DCCC;
	sub_826537D0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
loc_8265DCD4:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x8265DCE0;
	sub_821E6800(ctx, base);
	// addis r31,r20,1
	ctx.r31.s64 = ctx.r20.s64 + 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r31,r31,30112
	ctx.r31.s64 = ctx.r31.s64 + 30112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265DD00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r8,-20600
	ctx.r4.s64 = ctx.r8.s64 + -20600;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2fb0
	ctx.lr = 0x8265DD1C;
	sub_821C2FB0(ctx, base);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r6,r7,30784
	ctx.r6.s64 = ctx.r7.s64 + 30784;
	// addi r5,r5,30764
	ctx.r5.s64 = ctx.r5.s64 + 30764;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634ec8
	ctx.lr = 0x8265DD54;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
loc_8265DD60:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24592);
	// bl 0x821e6800
	ctx.lr = 0x8265DD6C;
	sub_821E6800(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826304b0
	ctx.lr = 0x8265DD78;
	sub_826304B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826583c0
	ctx.lr = 0x8265DD80;
	sub_826583C0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,736(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265DD94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
loc_8265DDA0:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x8265DDAC;
	sub_821E6800(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lwz r11,-4944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4944);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265de48
	if (ctx.cr6.eq) goto loc_8265DE48;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8265de48
	if (!ctx.cr6.gt) goto loc_8265DE48;
	// addis r31,r20,1
	ctx.r31.s64 = ctx.r20.s64 + 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r31,r31,30112
	ctx.r31.s64 = ctx.r31.s64 + 30112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265DDF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,-9384
	ctx.r4.s64 = ctx.r9.s64 + -9384;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c2fb0
	ctx.lr = 0x8265DE0C;
	sub_821C2FB0(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r8,2636
	ctx.r6.s64 = ctx.r8.s64 + 2636;
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r5,r7,2608
	ctx.r5.s64 = ctx.r7.s64 + 2608;
	// ld r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826350b8
	ctx.lr = 0x8265DE3C;
	sub_826350B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
loc_8265DE48:
	// lbz r11,961(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 961);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r21,r10,32896
	ctx.r21.u64 = ctx.r10.u64 | 32896;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e1b8
	if (ctx.cr6.eq) goto loc_8265E1B8;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// addi r3,r30,2608
	ctx.r3.s64 = ctx.r30.s64 + 2608;
	// lwz r11,-10240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10240);
	// lwz r31,4304(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4304);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x826568d8
	ctx.lr = 0x8265DE74;
	sub_826568D8(ctx, base);
	// stw r3,224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 224, ctx.r3.u32);
	// addi r3,r30,1888
	ctx.r3.s64 = ctx.r30.s64 + 1888;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x826568d8
	ctx.lr = 0x8265DE84;
	sub_826568D8(ctx, base);
	// stw r3,300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 300, ctx.r3.u32);
	// addi r3,r30,2368
	ctx.r3.s64 = ctx.r30.s64 + 2368;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x826568d8
	ctx.lr = 0x8265DE94;
	sub_826568D8(ctx, base);
	// stw r3,376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 376, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,3776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3776);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 680, ctx.r8.u32);
	// lbz r7,961(r22)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r22.u32 + 961);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8265dec8
	if (ctx.cr6.eq) goto loc_8265DEC8;
	// lbz r11,960(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8265decc
	if (ctx.cr6.eq) goto loc_8265DECC;
loc_8265DEC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265DECC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e0ac
	if (ctx.cr6.eq) goto loc_8265E0AC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82654ac8
	ctx.lr = 0x8265DEE0;
	sub_82654AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265def8
	if (ctx.cr6.eq) goto loc_8265DEF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 528, ctx.r10.u32);
loc_8265DEF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r30,4624
	ctx.r3.s64 = ctx.r30.s64 + 4624;
	// lwz r10,3056(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3056);
	// stw r10,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,5344(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5344);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stw r5,1896(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1896, ctx.r5.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,5824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5824);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stw r8,1972(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1972, ctx.r8.u32);
	// lwz r7,4624(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4624);
	// lwz r6,336(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 336);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265DF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4880
	ctx.r3.s64 = ctx.r30.s64 + 4880;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// stw r11,2048(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2048, ctx.r11.u32);
	// lwz r10,4880(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4880);
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265DF6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r30,1392
	ctx.r11.s64 = ctx.r30.s64 + 1392;
	// stw r3,2124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2124, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4016(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4016);
	// stw r6,148(r7)
	PPC_STORE_U32(ctx.r7.u32 + 148, ctx.r6.u32);
	// lwz r5,1392(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// lwz r4,336(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 336);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8265DF98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// stw r3,2200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2200, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,3536(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3536);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,756(r9)
	PPC_STORE_U32(ctx.r9.u32 + 756, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4496(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4496);
	// stw r5,2276(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2276, ctx.r5.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-28304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28304);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,1212(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1212, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-28304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28304);
	// rlwinm r6,r11,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// stw r3,1288(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1288, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-28304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28304);
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stw r5,1364(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1364, ctx.r5.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-28304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28304);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,1440(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1440, ctx.r8.u32);
	// lwz r11,-28304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28304);
	// rlwinm r7,r11,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r5,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// stw r11,1516(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1516, ctx.r11.u32);
	// lwz r11,-28304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28304);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stw r5,1592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1592, ctx.r5.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-28304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28304);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,1668(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1668, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-28304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28304);
	// rlwinm r5,r11,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// subfic r4,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,1744(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1744, ctx.r10.u32);
	// bl 0x826589d8
	ctx.lr = 0x8265E0A8;
	sub_826589D8(ctx, base);
	// b 0x8265e170
	goto loc_8265E170;
loc_8265E0AC:
	// lbz r11,960(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e170
	if (ctx.cr6.eq) goto loc_8265E170;
	// lwz r11,-10240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10240);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,4304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4304);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,2356
	ctx.r29.s64 = ctx.r11.s64 + 2356;
	// bl 0x82654ac8
	ctx.lr = 0x8265E0D0;
	sub_82654AC8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265e0f4
	if (!ctx.cr6.eq) goto loc_8265E0F4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82654b60
	ctx.lr = 0x8265E0E8;
	sub_82654B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e10c
	if (ctx.cr6.eq) goto loc_8265E10C;
loc_8265E0F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 528, ctx.r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,1136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1136, ctx.r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,984(r9)
	PPC_STORE_U32(ctx.r9.u32 + 984, ctx.r28.u32);
loc_8265E10C:
	// lwz r11,4256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4256);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-2524
	ctx.r4.s64 = ctx.r10.s64 + -2524;
	// stw r8,2276(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2276, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4016);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,148(r7)
	PPC_STORE_U32(ctx.r7.u32 + 148, ctx.r6.u32);
	// lwz r29,72(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x82294ef8
	ctx.lr = 0x8265E140;
	sub_82294EF8(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8265e170
	if (ctx.cr6.eq) goto loc_8265E170;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r11,-28304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28304);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265e170
	if (!ctx.cr6.eq) goto loc_8265E170;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,2548
	ctx.r3.s64 = ctx.r11.s64 + 2548;
	// bl 0x82130000
	ctx.lr = 0x8265E168;
	sub_82130000(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 908, ctx.r28.u32);
loc_8265E170:
	// lwz r9,4016(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4016);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,3996(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3996);
	// addi r11,r30,4592
	ctx.r11.s64 = ctx.r30.s64 + 4592;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_8265E188:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8265e1a8
	if (ctx.cr6.eq) goto loc_8265E1A8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x8265e188
	if (!ctx.cr6.eq) goto loc_8265E188;
	// b 0x8265e414
	goto loc_8265E414;
loc_8265E1A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// b 0x8265e414
	goto loc_8265E414;
loc_8265E1B8:
	// bl 0x82387a18
	ctx.lr = 0x8265E1BC;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e4ac
	if (ctx.cr6.eq) goto loc_8265E4AC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r23,-32121
	ctx.r23.s64 = -2105081856;
	// addi r24,r11,-2628
	ctx.r24.s64 = ctx.r11.s64 + -2628;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-10240(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10240);
	// bl 0x822701c8
	ctx.lr = 0x8265E1E0;
	sub_822701C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8265e414
	if (ctx.cr6.eq) goto loc_8265E414;
	// lwz r11,-10236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r28,r10,55136
	ctx.r28.u64 = ctx.r10.u64 | 55136;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lbzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8265e214
	if (ctx.cr6.eq) goto loc_8265E214;
	// lwz r11,2816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2816);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// b 0x8265e218
	goto loc_8265E218;
loc_8265E214:
	// lwz r5,2816(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2816);
loc_8265E218:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82295f70
	ctx.lr = 0x8265E224;
	sub_82295F70(ctx, base);
	// lwz r11,-10236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265e244
	if (ctx.cr6.eq) goto loc_8265E244;
	// lwz r11,2816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2816);
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// b 0x8265e248
	goto loc_8265E248;
loc_8265E244:
	// lwz r28,2816(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2816);
loc_8265E248:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-7572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7572);
	// bl 0x822f10d0
	ctx.lr = 0x8265E254;
	sub_822F10D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8238eb90
	ctx.lr = 0x8265E25C;
	sub_8238EB90(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82296088
	ctx.lr = 0x8265E268;
	sub_82296088(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,2096(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	// bl 0x82295f70
	ctx.lr = 0x8265E278;
	sub_82295F70(ctx, base);
	// lwz r10,1392(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// addi r28,r30,1392
	ctx.r28.s64 = ctx.r30.s64 + 1392;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265E290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8265e2bc
	if (ctx.cr6.eq) goto loc_8265E2BC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E2AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82295d70
	ctx.lr = 0x8265E2BC;
	sub_82295D70(ctx, base);
loc_8265E2BC:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-27856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27856);
	// bl 0x8238ec00
	ctx.lr = 0x8265E2C8;
	sub_8238EC00(ctx, base);
	// lwz r11,-10236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r31,r10,r25
	ctx.r31.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bl 0x82654bf8
	ctx.lr = 0x8265E2E0;
	sub_82654BF8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265e308
	if (ctx.cr6.eq) goto loc_8265E308;
	// lwzx r11,r31,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// add r3,r31,r21
	ctx.r3.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8265e30c
	goto loc_8265E30C;
loc_8265E308:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8265E30C:
	// add r11,r31,r21
	ctx.r11.u64 = ctx.r31.u64 + ctx.r21.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,976
	ctx.r10.s64 = ctx.r11.s64 + 976;
	// lwz r9,864(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8265e32c
	if (!ctx.cr6.eq) goto loc_8265E32C;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x8265e35c
	goto loc_8265E35C;
loc_8265E32C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823895f8
	ctx.lr = 0x8265E340;
	sub_823895F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265e35c
	if (ctx.cr6.eq) goto loc_8265E35C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82388c48
	ctx.lr = 0x8265E358;
	sub_82388C48(ctx, base);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8265E35C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826589d8
	ctx.lr = 0x8265E364;
	sub_826589D8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-10240(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10240);
	// bl 0x822701c8
	ctx.lr = 0x8265E370;
	sub_822701C8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d70
	ctx.lr = 0x8265E398;
	sub_82295D70(ctx, base);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x8265e3f4
	if (ctx.cr6.lt) goto loc_8265E3F4;
	// cmpwi cr6,r29,13
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 13, ctx.xer);
	// bgt cr6,0x8265e3f4
	if (ctx.cr6.gt) goto loc_8265E3F4;
	// lwz r11,4624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4624);
	// addi r3,r30,4624
	ctx.r3.s64 = ctx.r30.s64 + 4624;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295d70
	ctx.lr = 0x8265E3CC;
	sub_82295D70(ctx, base);
	// lbz r9,8502(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8502);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r9,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// bl 0x82295f70
	ctx.lr = 0x8265E3E0;
	sub_82295F70(ctx, base);
	// lbz r8,8500(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8500);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r8,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// bl 0x82295f70
	ctx.lr = 0x8265E3F4;
	sub_82295F70(ctx, base);
loc_8265E3F4:
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r5,2576(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2576);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295f70
	ctx.lr = 0x8265E404;
	sub_82295F70(ctx, base);
	// addi r5,r30,8496
	ctx.r5.s64 = ctx.r30.s64 + 8496;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82295bc8
	ctx.lr = 0x8265E414;
	sub_82295BC8(ctx, base);
loc_8265E414:
	// lbz r11,962(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 962);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e504
	if (ctx.cr6.eq) goto loc_8265E504;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82654bf8
	ctx.lr = 0x8265E428;
	sub_82654BF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e498
	if (ctx.cr6.eq) goto loc_8265E498;
	// lwzx r11,r20,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r21.u32);
	// add r31,r20,r21
	ctx.r31.u64 = ctx.r20.u64 + ctx.r21.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,864(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// addi r8,r31,976
	ctx.r8.s64 = ctx.r31.s64 + 976;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8265e474
	if (!ctx.cr6.eq) goto loc_8265E474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82655ff8
	ctx.lr = 0x8265E468;
	sub_82655FF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-8672
	ctx.r3.s64 = ctx.r11.s64 + -8672;
loc_8265E474:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-3624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3624);
	// lwz r31,700(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// bl 0x821c9790
	ctx.lr = 0x8265E488;
	sub_821C9790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82282580
	ctx.lr = 0x8265E498;
	sub_82282580(ctx, base);
loc_8265E498:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82216138
	ctx.lr = 0x8265E4A0;
	sub_82216138(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
loc_8265E4AC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r29,-32111
	ctx.r29.s64 = -2104426496;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r28,r11,2532
	ctx.r28.s64 = ctx.r11.s64 + 2532;
	// addi r4,r10,2516
	ctx.r4.s64 = ctx.r10.s64 + 2516;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,-24180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x8265E4CC;
	sub_8220EF00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823db670
	ctx.lr = 0x8265E4E0;
	sub_823DB670(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r8,-9136
	ctx.r4.s64 = ctx.r8.s64 + -9136;
	// lwz r3,-24180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24180);
	// bl 0x821fde78
	ctx.lr = 0x8265E4FC;
	sub_821FDE78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265d2b8
	ctx.lr = 0x8265E504;
	sub_8265D2B8(ctx, base);
loc_8265E504:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9228
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E510"))) PPC_WEAK_FUNC(sub_8265E510);
PPC_FUNC_IMPL(__imp__sub_8265E510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,4972
	ctx.r3.s64 = ctx.r11.s64 + 4972;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E51C"))) PPC_WEAK_FUNC(sub_8265E51C);
PPC_FUNC_IMPL(__imp__sub_8265E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E520"))) PPC_WEAK_FUNC(sub_8265E520);
PPC_FUNC_IMPL(__imp__sub_8265E520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E52C"))) PPC_WEAK_FUNC(sub_8265E52C);
PPC_FUNC_IMPL(__imp__sub_8265E52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E530"))) PPC_WEAK_FUNC(sub_8265E530);
PPC_FUNC_IMPL(__imp__sub_8265E530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5036
	ctx.r3.s64 = ctx.r11.s64 + 5036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E53C"))) PPC_WEAK_FUNC(sub_8265E53C);
PPC_FUNC_IMPL(__imp__sub_8265E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E540"))) PPC_WEAK_FUNC(sub_8265E540);
PPC_FUNC_IMPL(__imp__sub_8265E540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5072
	ctx.r3.s64 = ctx.r11.s64 + 5072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E54C"))) PPC_WEAK_FUNC(sub_8265E54C);
PPC_FUNC_IMPL(__imp__sub_8265E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E550"))) PPC_WEAK_FUNC(sub_8265E550);
PPC_FUNC_IMPL(__imp__sub_8265E550) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265e5d0
	if (ctx.cr6.eq) goto loc_8265E5D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265e5d0
	if (ctx.cr6.eq) goto loc_8265E5D0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8265e5a0
	if (ctx.cr6.gt) goto loc_8265E5A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265E5A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e5d0
	if (!ctx.cr6.eq) goto loc_8265E5D0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x8265E5B8;
	sub_821E6800(ctx, base);
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
loc_8265E5D0:
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

__attribute__((alias("__imp__sub_8265E5E8"))) PPC_WEAK_FUNC(sub_8265E5E8);
PPC_FUNC_IMPL(__imp__sub_8265E5E8) {
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
	// lwz r31,17268(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17268);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265e674
	if (ctx.cr6.eq) goto loc_8265E674;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e80f8
	ctx.lr = 0x8265E614;
	sub_821E80F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e674
	if (ctx.cr6.eq) goto loc_8265E674;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3998
	ctx.lr = 0x8265E62C;
	sub_822A3998(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82703c70
	ctx.lr = 0x8265E634;
	sub_82703C70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e658
	if (!ctx.cr6.eq) goto loc_8265E658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82703d08
	ctx.lr = 0x8265E648;
	sub_82703D08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8265e65c
	if (ctx.cr6.eq) goto loc_8265E65C;
loc_8265E658:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8265E65C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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
loc_8265E674:
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

__attribute__((alias("__imp__sub_8265E68C"))) PPC_WEAK_FUNC(sub_8265E68C);
PPC_FUNC_IMPL(__imp__sub_8265E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E690"))) PPC_WEAK_FUNC(sub_8265E690);
PPC_FUNC_IMPL(__imp__sub_8265E690) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13196
	ctx.r3.s64 = ctx.r11.s64 + -13196;
	// bl 0x821e6800
	ctx.lr = 0x8265E6B0;
	sub_821E6800(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82215810
	ctx.lr = 0x8265E6B8;
	sub_82215810(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265e6c8
	if (ctx.cr6.eq) goto loc_8265E6C8;
	// bl 0x82130000
	ctx.lr = 0x8265E6C8;
	sub_82130000(ctx, base);
loc_8265E6C8:
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

__attribute__((alias("__imp__sub_8265E6DC"))) PPC_WEAK_FUNC(sub_8265E6DC);
PPC_FUNC_IMPL(__imp__sub_8265E6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E6E0"))) PPC_WEAK_FUNC(sub_8265E6E0);
PPC_FUNC_IMPL(__imp__sub_8265E6E0) {
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
	// bl 0x82632f78
	ctx.lr = 0x8265E6F8;
	sub_82632F78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,680(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 680);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265e740
	if (ctx.cr6.eq) goto loc_8265E740;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r10,-12592
	ctx.r31.s64 = ctx.r10.s64 + -12592;
	// lwz r9,468(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265E734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x825ee0e0
	ctx.lr = 0x8265E740;
	sub_825EE0E0(ctx, base);
loc_8265E740:
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

__attribute__((alias("__imp__sub_8265E754"))) PPC_WEAK_FUNC(sub_8265E754);
PPC_FUNC_IMPL(__imp__sub_8265E754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E758"))) PPC_WEAK_FUNC(sub_8265E758);
PPC_FUNC_IMPL(__imp__sub_8265E758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8265E760;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r10,5116
	ctx.r27.s64 = ctx.r10.s64 + 5116;
	// lwz r9,468(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265E78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825ee120
	ctx.lr = 0x8265E798;
	sub_825EE120(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8265e7b0
	if (ctx.cr6.eq) goto loc_8265E7B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8265E7B0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263afa8
	ctx.lr = 0x8265E7C0;
	sub_8263AFA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E7D8"))) PPC_WEAK_FUNC(sub_8265E7D8);
PPC_FUNC_IMPL(__imp__sub_8265E7D8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82256058
	ctx.lr = 0x8265E7F0;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265e80c
	if (ctx.cr6.eq) goto loc_8265E80C;
	// bl 0x82256058
	ctx.lr = 0x8265E7FC;
	sub_82256058(ctx, base);
	// lwz r11,3104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3104);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x8265e810
	if (ctx.cr6.eq) goto loc_8265E810;
loc_8265E80C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265E810:
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

__attribute__((alias("__imp__sub_8265E824"))) PPC_WEAK_FUNC(sub_8265E824);
PPC_FUNC_IMPL(__imp__sub_8265E824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E828"))) PPC_WEAK_FUNC(sub_8265E828);
PPC_FUNC_IMPL(__imp__sub_8265E828) {
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
	// bl 0x82256058
	ctx.lr = 0x8265E838;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265e854
	if (ctx.cr6.eq) goto loc_8265E854;
	// lwz r11,3152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// b 0x8265e858
	goto loc_8265E858;
loc_8265E854:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265E858:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e870
	if (!ctx.cr6.eq) goto loc_8265E870;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x8265E870;
	sub_82207138(ctx, base);
loc_8265E870:
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

__attribute__((alias("__imp__sub_8265E884"))) PPC_WEAK_FUNC(sub_8265E884);
PPC_FUNC_IMPL(__imp__sub_8265E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E888"))) PPC_WEAK_FUNC(sub_8265E888);
PPC_FUNC_IMPL(__imp__sub_8265E888) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5104
	ctx.r3.s64 = ctx.r9.s64 + 5104;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E8BC"))) PPC_WEAK_FUNC(sub_8265E8BC);
PPC_FUNC_IMPL(__imp__sub_8265E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E8C0"))) PPC_WEAK_FUNC(sub_8265E8C0);
PPC_FUNC_IMPL(__imp__sub_8265E8C0) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8265e918
	if (!ctx.cr6.eq) goto loc_8265E918;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x8265E8F4;
	sub_82207138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265e918
	if (!ctx.cr6.eq) goto loc_8265E918;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5140
	ctx.r3.s64 = ctx.r11.s64 + 5140;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8265E918:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5072
	ctx.r3.s64 = ctx.r11.s64 + 5072;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E930"))) PPC_WEAK_FUNC(sub_8265E930);
PPC_FUNC_IMPL(__imp__sub_8265E930) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265e970
	if (ctx.cr6.eq) goto loc_8265E970;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5200
	ctx.r3.s64 = ctx.r11.s64 + 5200;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8265E970:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5168
	ctx.r3.s64 = ctx.r11.s64 + 5168;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E988"))) PPC_WEAK_FUNC(sub_8265E988);
PPC_FUNC_IMPL(__imp__sub_8265E988) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265E9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8265e9e0
	if (!ctx.cr6.eq) goto loc_8265E9E0;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x8265E9BC;
	sub_82207138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265e9e0
	if (!ctx.cr6.eq) goto loc_8265E9E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5224
	ctx.r3.s64 = ctx.r11.s64 + 5224;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8265E9E0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5036
	ctx.r3.s64 = ctx.r11.s64 + 5036;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E9F8"))) PPC_WEAK_FUNC(sub_8265E9F8);
PPC_FUNC_IMPL(__imp__sub_8265E9F8) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265EA14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8265ea50
	if (!ctx.cr6.eq) goto loc_8265EA50;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x8265EA2C;
	sub_82207138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265ea50
	if (!ctx.cr6.eq) goto loc_8265EA50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5256
	ctx.r3.s64 = ctx.r11.s64 + 5256;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8265EA50:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5072
	ctx.r3.s64 = ctx.r11.s64 + 5072;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EA68"))) PPC_WEAK_FUNC(sub_8265EA68);
PPC_FUNC_IMPL(__imp__sub_8265EA68) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265EA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265eaa8
	if (ctx.cr6.eq) goto loc_8265EAA8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5308
	ctx.r3.s64 = ctx.r11.s64 + 5308;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8265EAA8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5288
	ctx.r3.s64 = ctx.r11.s64 + 5288;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EAC0"))) PPC_WEAK_FUNC(sub_8265EAC0);
PPC_FUNC_IMPL(__imp__sub_8265EAC0) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265EADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265eb00
	if (ctx.cr6.eq) goto loc_8265EB00;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5348
	ctx.r3.s64 = ctx.r11.s64 + 5348;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8265EB00:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5328
	ctx.r3.s64 = ctx.r11.s64 + 5328;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EB18"))) PPC_WEAK_FUNC(sub_8265EB18);
PPC_FUNC_IMPL(__imp__sub_8265EB18) {
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
	// bl 0x82387a18
	ctx.lr = 0x8265EB28;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EB48"))) PPC_WEAK_FUNC(sub_8265EB48);
PPC_FUNC_IMPL(__imp__sub_8265EB48) {
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
	// lwz r31,-5008(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5008);
	// bl 0x82256058
	ctx.lr = 0x8265EB64;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265eb80
	if (ctx.cr6.eq) goto loc_8265EB80;
	// lwz r11,3152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// b 0x8265eb84
	goto loc_8265EB84;
loc_8265EB80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265EB84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ebb8
	if (ctx.cr6.eq) goto loc_8265EBB8;
	// lbz r11,2620(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2620);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265ebb8
	if (!ctx.cr6.eq) goto loc_8265EBB8;
	// lwz r11,1888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// lwz r10,1892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8265ebbc
	if (ctx.cr6.lt) goto loc_8265EBBC;
loc_8265EBB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265EBBC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8265EBD4"))) PPC_WEAK_FUNC(sub_8265EBD4);
PPC_FUNC_IMPL(__imp__sub_8265EBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265EBD8"))) PPC_WEAK_FUNC(sub_8265EBD8);
PPC_FUNC_IMPL(__imp__sub_8265EBD8) {
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
	// bl 0x8265eb48
	ctx.lr = 0x8265EBE8;
	sub_8265EB48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EC04"))) PPC_WEAK_FUNC(sub_8265EC04);
PPC_FUNC_IMPL(__imp__sub_8265EC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265EC08"))) PPC_WEAK_FUNC(sub_8265EC08);
PPC_FUNC_IMPL(__imp__sub_8265EC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29932);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4992(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4992, temp.u32);
	// stfs f13,4996(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4996, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EC24"))) PPC_WEAK_FUNC(sub_8265EC24);
PPC_FUNC_IMPL(__imp__sub_8265EC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265EC28"))) PPC_WEAK_FUNC(sub_8265EC28);
PPC_FUNC_IMPL(__imp__sub_8265EC28) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265EC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EC60"))) PPC_WEAK_FUNC(sub_8265EC60);
PPC_FUNC_IMPL(__imp__sub_8265EC60) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265EC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265ecc0
	if (ctx.cr6.eq) goto loc_8265ECC0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82256058
	ctx.lr = 0x8265EC94;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265ecb0
	if (ctx.cr6.eq) goto loc_8265ECB0;
	// bl 0x82256058
	ctx.lr = 0x8265ECA0;
	sub_82256058(ctx, base);
	// lwz r11,3104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3104);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8265ecb0
	if (!ctx.cr6.eq) goto loc_8265ECB0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8265ECB0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8265ecc4
	if (!ctx.cr6.eq) goto loc_8265ECC4;
loc_8265ECC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265ECC4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8265ECDC"))) PPC_WEAK_FUNC(sub_8265ECDC);
PPC_FUNC_IMPL(__imp__sub_8265ECDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265ECE0"))) PPC_WEAK_FUNC(sub_8265ECE0);
PPC_FUNC_IMPL(__imp__sub_8265ECE0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265ED0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265ED24;
	sub_82641CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8265ED3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,184(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 184);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8265ED50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268e5f8
	ctx.lr = 0x8265ED58;
	sub_8268E5F8(ctx, base);
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

__attribute__((alias("__imp__sub_8265ED70"))) PPC_WEAK_FUNC(sub_8265ED70);
PPC_FUNC_IMPL(__imp__sub_8265ED70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8265ED80"))) PPC_WEAK_FUNC(sub_8265ED80);
PPC_FUNC_IMPL(__imp__sub_8265ED80) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265EDB0;
	sub_82641CB0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,468(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265EDCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265EDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,184(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 184);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265EDF4;
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

__attribute__((alias("__imp__sub_8265EE0C"))) PPC_WEAK_FUNC(sub_8265EE0C);
PPC_FUNC_IMPL(__imp__sub_8265EE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265EE10"))) PPC_WEAK_FUNC(sub_8265EE10);
PPC_FUNC_IMPL(__imp__sub_8265EE10) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265EE34;
	sub_82641CB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,472(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265EE44;
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

__attribute__((alias("__imp__sub_8265EE54"))) PPC_WEAK_FUNC(sub_8265EE54);
PPC_FUNC_IMPL(__imp__sub_8265EE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265EE58"))) PPC_WEAK_FUNC(sub_8265EE58);
PPC_FUNC_IMPL(__imp__sub_8265EE58) {
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
	// bl 0x82130000
	ctx.lr = 0x8265EE68;
	sub_82130000(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265EE80;
	sub_82641CB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,704(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265EE94;
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

__attribute__((alias("__imp__sub_8265EEA4"))) PPC_WEAK_FUNC(sub_8265EEA4);
PPC_FUNC_IMPL(__imp__sub_8265EEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265EEA8"))) PPC_WEAK_FUNC(sub_8265EEA8);
PPC_FUNC_IMPL(__imp__sub_8265EEA8) {
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
	// bl 0x82130000
	ctx.lr = 0x8265EEBC;
	sub_82130000(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,17268(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e80f8
	ctx.lr = 0x8265EED0;
	sub_821E80F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265ef30
	if (ctx.cr6.eq) goto loc_8265EF30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3998
	ctx.lr = 0x8265EEE8;
	sub_822A3998(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a93a8
	ctx.lr = 0x8265EEF4;
	sub_822A93A8(ctx, base);
	// lwz r3,880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x8265ef30
	if (ctx.cr6.eq) goto loc_8265EF30;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,-17424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17424);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822afcd0
	ctx.lr = 0x8265EF1C;
	sub_822AFCD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a5578
	ctx.lr = 0x8265EF24;
	sub_822A5578(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
loc_8265EF30:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265EF48;
	sub_82641CB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,736(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265EF58;
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

__attribute__((alias("__imp__sub_8265EF6C"))) PPC_WEAK_FUNC(sub_8265EF6C);
PPC_FUNC_IMPL(__imp__sub_8265EF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265EF70"))) PPC_WEAK_FUNC(sub_8265EF70);
PPC_FUNC_IMPL(__imp__sub_8265EF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8265EF78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265efec
	if (ctx.cr6.eq) goto loc_8265EFEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265EFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265efec
	if (!ctx.cr6.gt) goto loc_8265EFEC;
loc_8265EFA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265EFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8265eff8
	if (!ctx.cr6.eq) goto loc_8265EFF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265EFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265efa8
	if (ctx.cr6.lt) goto loc_8265EFA8;
loc_8265EFEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8265EFF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265F004"))) PPC_WEAK_FUNC(sub_8265F004);
PPC_FUNC_IMPL(__imp__sub_8265F004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265F008"))) PPC_WEAK_FUNC(sub_8265F008);
PPC_FUNC_IMPL(__imp__sub_8265F008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x8265F010;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 + 176;
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265f03c
	if (ctx.cr6.eq) goto loc_8265F03C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,188
	ctx.r3.s64 = ctx.r11.s64 + 188;
	// bl 0x821c3048
	ctx.lr = 0x8265F03C;
	sub_821C3048(ctx, base);
loc_8265F03C:
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82631f88
	ctx.lr = 0x8265F048;
	sub_82631F88(ctx, base);
	// lwz r4,1336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1336);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265f058
	if (ctx.cr6.lt) goto loc_8265F058;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
loc_8265F058:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,648(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265F06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,1408
	ctx.r29.s64 = ctx.r31.s64 + 1408;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82631f88
	ctx.lr = 0x8265F078;
	sub_82631F88(ctx, base);
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265f088
	if (ctx.cr6.lt) goto loc_8265F088;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8265F088:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,648(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,1664
	ctx.r30.s64 = ctx.r31.s64 + 1664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82631f88
	ctx.lr = 0x8265F0AC;
	sub_82631F88(ctx, base);
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265f0bc
	if (ctx.cr6.lt) goto loc_8265F0BC;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8265F0BC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,648(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1920
	ctx.r31.s64 = ctx.r31.s64 + 1920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82631f88
	ctx.lr = 0x8265F0E0;
	sub_82631F88(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265f0f0
	if (ctx.cr6.lt) goto loc_8265F0F0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8265F0F0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,648(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,192(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8265ef70
	ctx.lr = 0x8265F114;
	sub_8265EF70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,648(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265F128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,192(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8265ef70
	ctx.lr = 0x8265F134;
	sub_8265EF70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,648(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 648);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8265F148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8265ef70
	ctx.lr = 0x8265F154;
	sub_8265EF70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,648(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 648);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265F168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8265ef70
	ctx.lr = 0x8265F174;
	sub_8265EF70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,648(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8265F188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265F190"))) PPC_WEAK_FUNC(sub_8265F190);
PPC_FUNC_IMPL(__imp__sub_8265F190) {
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
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8265f1cc
	if (!ctx.cr6.eq) goto loc_8265F1CC;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265f1cc
	if (!ctx.cr6.eq) goto loc_8265F1CC;
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
loc_8265F1CC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r11,10448
	ctx.r9.u64 = ctx.r11.u64 | 10448;
	// lwz r8,468(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// lwzx r31,r3,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265F1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82653450
	ctx.lr = 0x8265F1F4;
	sub_82653450(ctx, base);
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

__attribute__((alias("__imp__sub_8265F208"))) PPC_WEAK_FUNC(sub_8265F208);
PPC_FUNC_IMPL(__imp__sub_8265F208) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r3,10448
	ctx.r3.s64 = ctx.r3.s64 + 10448;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82654960
	sub_82654960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265F21C"))) PPC_WEAK_FUNC(sub_8265F21C);
PPC_FUNC_IMPL(__imp__sub_8265F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265F220"))) PPC_WEAK_FUNC(sub_8265F220);
PPC_FUNC_IMPL(__imp__sub_8265F220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8265F228;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82632f78
	ctx.lr = 0x8265F234;
	sub_82632F78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265F248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265f2b4
	if (ctx.cr6.eq) goto loc_8265F2B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r30,208(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r10,-12592
	ctx.r29.s64 = ctx.r10.s64 + -12592;
	// lwz r9,468(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825ee0e0
	ctx.lr = 0x8265F280;
	sub_825EE0E0(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// ori r6,r8,10448
	ctx.r6.u64 = ctx.r8.u64 | 10448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,21416
	ctx.r30.s64 = ctx.r7.s64 + 21416;
	// lwz r4,468(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 468);
	// lwzx r31,r31,r6
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8265F2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825ee0e0
	ctx.lr = 0x8265F2B4;
	sub_825EE0E0(ctx, base);
loc_8265F2B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265F2BC"))) PPC_WEAK_FUNC(sub_8265F2BC);
PPC_FUNC_IMPL(__imp__sub_8265F2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265F2C0"))) PPC_WEAK_FUNC(sub_8265F2C0);
PPC_FUNC_IMPL(__imp__sub_8265F2C0) {
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
	// bl 0x82256058
	ctx.lr = 0x8265F2D4;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265f3b0
	if (ctx.cr6.eq) goto loc_8265F3B0;
	// bl 0x82256058
	ctx.lr = 0x8265F2E0;
	sub_82256058(ctx, base);
	// bl 0x82256138
	ctx.lr = 0x8265F2E4;
	sub_82256138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f3b0
	if (ctx.cr6.eq) goto loc_8265F3B0;
	// bl 0x82387a18
	ctx.lr = 0x8265F2F4;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f398
	if (ctx.cr6.eq) goto loc_8265F398;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x8265F308;
	sub_82388580(ctx, base);
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,-10240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10240);
	// bl 0x82270170
	ctx.lr = 0x8265F318;
	sub_82270170(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822577d0
	ctx.lr = 0x8265F320;
	sub_822577D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265f37c
	if (ctx.cr6.eq) goto loc_8265F37C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x8265F330;
	sub_82388580(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-10240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10240);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82270170
	ctx.lr = 0x8265F340;
	sub_82270170(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822577d0
	ctx.lr = 0x8265F348;
	sub_822577D0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x8265f37c
	if (ctx.cr6.eq) goto loc_8265F37C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// bl 0x821fa230
	ctx.lr = 0x8265F35C;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8265f380
	if (!ctx.cr6.eq) goto loc_8265F380;
loc_8265F37C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265F380:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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
loc_8265F398:
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
loc_8265F3B0:
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

__attribute__((alias("__imp__sub_8265F3C8"))) PPC_WEAK_FUNC(sub_8265F3C8);
PPC_FUNC_IMPL(__imp__sub_8265F3C8) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82691650
	ctx.lr = 0x8265F3FC;
	sub_82691650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265F410;
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

__attribute__((alias("__imp__sub_8265F428"))) PPC_WEAK_FUNC(sub_8265F428);
PPC_FUNC_IMPL(__imp__sub_8265F428) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265F454;
	sub_82641CB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,736(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r4,r7,-20148
	ctx.r4.s64 = ctx.r7.s64 + -20148;
	// lwz r11,-10236(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82691650
	ctx.lr = 0x8265F488;
	sub_82691650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265F49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32121
	ctx.r5.s64 = -2105081856;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-12456(r5)
	PPC_STORE_U8(ctx.r5.u32 + -12456, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8265F4C0"))) PPC_WEAK_FUNC(sub_8265F4C0);
PPC_FUNC_IMPL(__imp__sub_8265F4C0) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-20132
	ctx.r4.s64 = ctx.r10.s64 + -20132;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82691650
	ctx.lr = 0x8265F4F8;
	sub_82691650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265F524;
	sub_82641CB0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,736(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 736);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265F534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32121
	ctx.r5.s64 = -2105081856;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,-32121
	ctx.r4.s64 = -2105081856;
	// stb r11,-12456(r5)
	PPC_STORE_U8(ctx.r5.u32 + -12456, ctx.r11.u8);
	// lwz r3,-12012(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -12012);
	// bl 0x821f15c8
	ctx.lr = 0x8265F54C;
	sub_821F15C8(ctx, base);
	// bl 0x821e60c0
	ctx.lr = 0x8265F550;
	sub_821E60C0(ctx, base);
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

__attribute__((alias("__imp__sub_8265F568"))) PPC_WEAK_FUNC(sub_8265F568);
PPC_FUNC_IMPL(__imp__sub_8265F568) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r11,-10028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265F590;
	sub_82641CB0(ctx, base);
	// bl 0x8265c740
	ctx.lr = 0x8265F594;
	sub_8265C740(ctx, base);
	// bl 0x82256058
	ctx.lr = 0x8265F598;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265f5ac
	if (ctx.cr6.eq) goto loc_8265F5AC;
	// bl 0x82256058
	ctx.lr = 0x8265F5A4;
	sub_82256058(ctx, base);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// b 0x8265f5b0
	goto loc_8265F5B0;
loc_8265F5AC:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8265F5B0:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,-3624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3624);
	// lwz r9,700(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x8265f740
	if (ctx.cr6.eq) goto loc_8265F740;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8265f614
	if (ctx.cr6.lt) goto loc_8265F614;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265f614
	if (ctx.cr6.eq) goto loc_8265F614;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r7,-28304
	ctx.r5.s64 = ctx.r7.s64 + -28304;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,144(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
loc_8265F614:
	// lwz r11,3140(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265f740
	if (!ctx.cr6.eq) goto loc_8265F740;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f740
	if (ctx.cr6.eq) goto loc_8265F740;
	// lwz r11,3096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3096);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8265f67c
	if (ctx.cr6.gt) goto loc_8265F67C;
	// lis r12,-32154
	ctx.r12.s64 = -2107244544;
	// addi r12,r12,-2476
	ctx.r12.s64 = ctx.r12.s64 + -2476;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8265F740;
	case 1:
		goto loc_8265F740;
	case 2:
		goto loc_8265F740;
	case 3:
		goto loc_8265F67C;
	case 4:
		goto loc_8265F67C;
	case 5:
		goto loc_8265F67C;
	case 6:
		goto loc_8265F740;
	case 7:
		goto loc_8265F67C;
	case 8:
		goto loc_8265F740;
	case 9:
		goto loc_8265F740;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-2240(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2240);
	// lwz r19,-2240(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2240);
	// lwz r19,-2240(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2240);
	// lwz r19,-2436(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2436);
	// lwz r19,-2436(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2436);
	// lwz r19,-2436(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2436);
	// lwz r19,-2240(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2240);
	// lwz r19,-2436(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2436);
	// lwz r19,-2240(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2240);
	// lwz r19,-2240(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2240);
loc_8265F67C:
	// lwz r3,-10028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10028);
	// bl 0x82211210
	ctx.lr = 0x8265F684;
	sub_82211210(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// beq cr6,0x8265f6f8
	if (ctx.cr6.eq) goto loc_8265F6F8;
	// bl 0x821fa230
	ctx.lr = 0x8265F698;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5408
	ctx.r3.s64 = ctx.r8.s64 + 5408;
	// bl 0x821fa230
	ctx.lr = 0x8265F6B4;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265F6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5396
	ctx.r3.s64 = ctx.r5.s64 + 5396;
	// bl 0x821fa230
	ctx.lr = 0x8265F6D0;
	sub_821FA230(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5380
	ctx.r3.s64 = ctx.r10.s64 + 5380;
	// bl 0x821fa230
	ctx.lr = 0x8265F6EC;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// b 0x8265f7a8
	goto loc_8265F7A8;
loc_8265F6F8:
	// bl 0x821fa230
	ctx.lr = 0x8265F6FC;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5408
	ctx.r3.s64 = ctx.r8.s64 + 5408;
	// bl 0x821fa230
	ctx.lr = 0x8265F718;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265F728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5396
	ctx.r3.s64 = ctx.r5.s64 + 5396;
	// bl 0x821fa230
	ctx.lr = 0x8265F734;
	sub_821FA230(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// b 0x8265f78c
	goto loc_8265F78C;
loc_8265F740:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// bl 0x821fa230
	ctx.lr = 0x8265F74C;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5408
	ctx.r3.s64 = ctx.r8.s64 + 5408;
	// bl 0x821fa230
	ctx.lr = 0x8265F768;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8265F778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5396
	ctx.r3.s64 = ctx.r5.s64 + 5396;
	// bl 0x821fa230
	ctx.lr = 0x8265F784;
	sub_821FA230(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
loc_8265F78C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5380
	ctx.r3.s64 = ctx.r10.s64 + 5380;
	// bl 0x821fa230
	ctx.lr = 0x8265F7A0;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
loc_8265F7A8:
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265F7B0;
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

__attribute__((alias("__imp__sub_8265F7C4"))) PPC_WEAK_FUNC(sub_8265F7C4);
PPC_FUNC_IMPL(__imp__sub_8265F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265F7C8"))) PPC_WEAK_FUNC(sub_8265F7C8);
PPC_FUNC_IMPL(__imp__sub_8265F7C8) {
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
	// cmpwi cr6,r4,55
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 55, ctx.xer);
	// beq cr6,0x8265f828
	if (ctx.cr6.eq) goto loc_8265F828;
	// cmpwi cr6,r4,56
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 56, ctx.xer);
	// beq cr6,0x8265f7f8
	if (ctx.cr6.eq) goto loc_8265F7F8;
	// bl 0x826537d0
	ctx.lr = 0x8265F7F4;
	sub_826537D0(ctx, base);
	// b 0x8265f8d4
	goto loc_8265F8D4;
loc_8265F7F8:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24592);
	// bl 0x821e6800
	ctx.lr = 0x8265F804;
	sub_821E6800(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826304b0
	ctx.lr = 0x8265F810;
	sub_826304B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,736(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265f8d4
	goto loc_8265F8D4;
loc_8265F828:
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x82631f88
	ctx.lr = 0x8265F830;
	sub_82631F88(ctx, base);
	// lwz r11,856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265f840
	if (ctx.cr6.lt) goto loc_8265F840;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8265F840:
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8265F860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8265f8c8
	if (ctx.cr6.eq) goto loc_8265F8C8;
	// addi r11,r31,1152
	ctx.r11.s64 = ctx.r31.s64 + 1152;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265f884
	if (!ctx.cr6.eq) goto loc_8265F884;
	// lbz r3,1380(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1380);
	// bl 0x8265e690
	ctx.lr = 0x8265F880;
	sub_8265E690(ctx, base);
	// b 0x8265f898
	goto loc_8265F898;
loc_8265F884:
	// addi r11,r31,944
	ctx.r11.s64 = ctx.r31.s64 + 944;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265f898
	if (!ctx.cr6.eq) goto loc_8265F898;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82215770
	ctx.lr = 0x8265F898;
	sub_82215770(ctx, base);
loc_8265F898:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x8265F8A4;
	sub_821E6800(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826304b0
	ctx.lr = 0x8265F8B0;
	sub_826304B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,736(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265F8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265f8d4
	goto loc_8265F8D4;
loc_8265F8C8:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24612);
	// bl 0x821e6800
	ctx.lr = 0x8265F8D4;
	sub_821E6800(ctx, base);
loc_8265F8D4:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8265F8F0"))) PPC_WEAK_FUNC(sub_8265F8F0);
PPC_FUNC_IMPL(__imp__sub_8265F8F0) {
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
	// bl 0x8263bf18
	ctx.lr = 0x8265F90C;
	sub_8263BF18(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-12248
	ctx.r4.s64 = ctx.r10.s64 + -12248;
	// lwz r3,-10236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// bl 0x821f9fb8
	ctx.lr = 0x8265F920;
	sub_821F9FB8(ctx, base);
	// lwz r9,3248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r30,r31,3248
	ctx.r30.s64 = ctx.r31.s64 + 3248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,196(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// lwz r4,56(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8265F940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,3248(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,176(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 176);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8265F954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82635840
	ctx.lr = 0x8265F960;
	sub_82635840(ctx, base);
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

__attribute__((alias("__imp__sub_8265F978"))) PPC_WEAK_FUNC(sub_8265F978);
PPC_FUNC_IMPL(__imp__sub_8265F978) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13196
	ctx.r3.s64 = ctx.r11.s64 + -13196;
	// bl 0x821e6800
	ctx.lr = 0x8265F994;
	sub_821E6800(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82215810
	ctx.lr = 0x8265F99C;
	sub_82215810(ctx, base);
	// bl 0x82130000
	ctx.lr = 0x8265F9A0;
	sub_82130000(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lwz r11,-10236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8265f9bc
	if (!ctx.cr6.eq) goto loc_8265F9BC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8265F9BC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r10,-15108
	ctx.r4.s64 = ctx.r10.s64 + -15108;
	// bl 0x82691650
	ctx.lr = 0x8265F9CC;
	sub_82691650(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,348(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265F9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8265f428
	ctx.lr = 0x8265F9E4;
	sub_8265F428(ctx, base);
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

__attribute__((alias("__imp__sub_8265F9F8"))) PPC_WEAK_FUNC(sub_8265F9F8);
PPC_FUNC_IMPL(__imp__sub_8265F9F8) {
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
	// lwz r11,-10016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265fa44
	if (ctx.cr6.eq) goto loc_8265FA44;
	// bl 0x8265e5e8
	ctx.lr = 0x8265FA1C;
	sub_8265E5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265fa44
	if (ctx.cr6.eq) goto loc_8265FA44;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-10016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10016);
	// bl 0x827004b8
	ctx.lr = 0x8265FA34;
	sub_827004B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8265fa48
	if (ctx.cr6.eq) goto loc_8265FA48;
loc_8265FA44:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8265FA48:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8265FA60"))) PPC_WEAK_FUNC(sub_8265FA60);
PPC_FUNC_IMPL(__imp__sub_8265FA60) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-12248
	ctx.r4.s64 = ctx.r10.s64 + -12248;
	// lwz r3,-10236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// bl 0x821f9fb8
	ctx.lr = 0x8265FA80;
	sub_821F9FB8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265FA94"))) PPC_WEAK_FUNC(sub_8265FA94);
PPC_FUNC_IMPL(__imp__sub_8265FA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265FA98"))) PPC_WEAK_FUNC(sub_8265FA98);
PPC_FUNC_IMPL(__imp__sub_8265FA98) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10720
	ctx.r3.s64 = ctx.r11.s64 + -10720;
	// bl 0x821fa230
	ctx.lr = 0x8265FAB4;
	sub_821FA230(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,5480
	ctx.r3.s64 = ctx.r10.s64 + 5480;
	// bl 0x821fa230
	ctx.lr = 0x8265FAC4;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FAD0;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5464
	ctx.r3.s64 = ctx.r9.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x8265FADC;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FAE8;
	sub_8268CC80(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5452
	ctx.r3.s64 = ctx.r8.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x8265FAF4;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FB00;
	sub_8268CC80(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r7,5436
	ctx.r3.s64 = ctx.r7.s64 + 5436;
	// bl 0x821fa230
	ctx.lr = 0x8265FB0C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FB18;
	sub_8268CC80(ctx, base);
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

__attribute__((alias("__imp__sub_8265FB2C"))) PPC_WEAK_FUNC(sub_8265FB2C);
PPC_FUNC_IMPL(__imp__sub_8265FB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265FB30"))) PPC_WEAK_FUNC(sub_8265FB30);
PPC_FUNC_IMPL(__imp__sub_8265FB30) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// bl 0x821fa230
	ctx.lr = 0x8265FB4C;
	sub_821FA230(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,5520
	ctx.r3.s64 = ctx.r10.s64 + 5520;
	// bl 0x821fa230
	ctx.lr = 0x8265FB5C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FB68;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5504
	ctx.r3.s64 = ctx.r9.s64 + 5504;
	// bl 0x821fa230
	ctx.lr = 0x8265FB74;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FB80;
	sub_8268CC80(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5492
	ctx.r3.s64 = ctx.r8.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x8265FB8C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FB98;
	sub_8268CC80(ctx, base);
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

__attribute__((alias("__imp__sub_8265FBAC"))) PPC_WEAK_FUNC(sub_8265FBAC);
PPC_FUNC_IMPL(__imp__sub_8265FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265FBB0"))) PPC_WEAK_FUNC(sub_8265FBB0);
PPC_FUNC_IMPL(__imp__sub_8265FBB0) {
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
	// bl 0x821fa230
	ctx.lr = 0x8265FBD0;
	sub_821FA230(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FBE0;
	sub_8268CC80(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265FBF8;
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

__attribute__((alias("__imp__sub_8265FC10"))) PPC_WEAK_FUNC(sub_8265FC10);
PPC_FUNC_IMPL(__imp__sub_8265FC10) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10720
	ctx.r3.s64 = ctx.r11.s64 + -10720;
	// bl 0x821fa230
	ctx.lr = 0x8265FC2C;
	sub_821FA230(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,5480
	ctx.r3.s64 = ctx.r10.s64 + 5480;
	// bl 0x821fa230
	ctx.lr = 0x8265FC3C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FC48;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5452
	ctx.r3.s64 = ctx.r9.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x8265FC54;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FC60;
	sub_8268CC80(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5464
	ctx.r3.s64 = ctx.r8.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x8265FC6C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FC78;
	sub_8268CC80(ctx, base);
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

__attribute__((alias("__imp__sub_8265FC8C"))) PPC_WEAK_FUNC(sub_8265FC8C);
PPC_FUNC_IMPL(__imp__sub_8265FC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265FC90"))) PPC_WEAK_FUNC(sub_8265FC90);
PPC_FUNC_IMPL(__imp__sub_8265FC90) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8265FCC4;
	sub_82641CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8265fcd8
	if (ctx.cr6.eq) goto loc_8265FCD8;
	// bl 0x822150d8
	ctx.lr = 0x8265FCD8;
	sub_822150D8(ctx, base);
loc_8265FCD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265FCF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8265FD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f0,20160(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4992(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4992, temp.u32);
	// bl 0x8265f4c0
	ctx.lr = 0x8265FD14;
	sub_8265F4C0(ctx, base);
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

__attribute__((alias("__imp__sub_8265FD2C"))) PPC_WEAK_FUNC(sub_8265FD2C);
PPC_FUNC_IMPL(__imp__sub_8265FD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265FD30"))) PPC_WEAK_FUNC(sub_8265FD30);
PPC_FUNC_IMPL(__imp__sub_8265FD30) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10720
	ctx.r3.s64 = ctx.r11.s64 + -10720;
	// bl 0x821fa230
	ctx.lr = 0x8265FD4C;
	sub_821FA230(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,5480
	ctx.r3.s64 = ctx.r10.s64 + 5480;
	// bl 0x821fa230
	ctx.lr = 0x8265FD5C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FD68;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5628
	ctx.r3.s64 = ctx.r9.s64 + 5628;
	// bl 0x821fa230
	ctx.lr = 0x8265FD74;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FD80;
	sub_8268CC80(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5464
	ctx.r3.s64 = ctx.r8.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x8265FD8C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FD98;
	sub_8268CC80(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r7,5452
	ctx.r3.s64 = ctx.r7.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x8265FDA4;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FDB0;
	sub_8268CC80(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5608
	ctx.r3.s64 = ctx.r6.s64 + 5608;
	// bl 0x821fa230
	ctx.lr = 0x8265FDBC;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FDC8;
	sub_8268CC80(ctx, base);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5396
	ctx.r3.s64 = ctx.r5.s64 + 5396;
	// bl 0x821fa230
	ctx.lr = 0x8265FDD4;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FDE0;
	sub_8268CC80(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,5380
	ctx.r3.s64 = ctx.r4.s64 + 5380;
	// bl 0x821fa230
	ctx.lr = 0x8265FDEC;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FDF8;
	sub_8268CC80(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r3,r3,5436
	ctx.r3.s64 = ctx.r3.s64 + 5436;
	// bl 0x821fa230
	ctx.lr = 0x8265FE04;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FE10;
	sub_8268CC80(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5592
	ctx.r3.s64 = ctx.r11.s64 + 5592;
	// bl 0x821fa230
	ctx.lr = 0x8265FE1C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FE28;
	sub_8268CC80(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5576
	ctx.r3.s64 = ctx.r10.s64 + 5576;
	// bl 0x821fa230
	ctx.lr = 0x8265FE34;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FE40;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5564
	ctx.r3.s64 = ctx.r9.s64 + 5564;
	// bl 0x821fa230
	ctx.lr = 0x8265FE4C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FE58;
	sub_8268CC80(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5548
	ctx.r3.s64 = ctx.r8.s64 + 5548;
	// bl 0x821fa230
	ctx.lr = 0x8265FE64;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FE70;
	sub_8268CC80(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r7,5532
	ctx.r3.s64 = ctx.r7.s64 + 5532;
	// bl 0x821fa230
	ctx.lr = 0x8265FE7C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FE88;
	sub_8268CC80(ctx, base);
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

__attribute__((alias("__imp__sub_8265FE9C"))) PPC_WEAK_FUNC(sub_8265FE9C);
PPC_FUNC_IMPL(__imp__sub_8265FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265FEA0"))) PPC_WEAK_FUNC(sub_8265FEA0);
PPC_FUNC_IMPL(__imp__sub_8265FEA0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// bl 0x821fa230
	ctx.lr = 0x8265FEC4;
	sub_821FA230(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,5776
	ctx.r3.s64 = ctx.r10.s64 + 5776;
	// bl 0x821fa230
	ctx.lr = 0x8265FED4;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FEE0;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5520
	ctx.r3.s64 = ctx.r9.s64 + 5520;
	// bl 0x821fa230
	ctx.lr = 0x8265FEEC;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FEF8;
	sub_8268CC80(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5756
	ctx.r3.s64 = ctx.r8.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x8265FF04;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FF10;
	sub_8268CC80(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r7,5732
	ctx.r3.s64 = ctx.r7.s64 + 5732;
	// bl 0x821fa230
	ctx.lr = 0x8265FF1C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FF28;
	sub_8268CC80(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5504
	ctx.r3.s64 = ctx.r6.s64 + 5504;
	// bl 0x821fa230
	ctx.lr = 0x8265FF34;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FF40;
	sub_8268CC80(ctx, base);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5712
	ctx.r3.s64 = ctx.r5.s64 + 5712;
	// bl 0x821fa230
	ctx.lr = 0x8265FF4C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FF58;
	sub_8268CC80(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,5700
	ctx.r3.s64 = ctx.r4.s64 + 5700;
	// bl 0x821fa230
	ctx.lr = 0x8265FF64;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FF70;
	sub_8268CC80(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r3,r3,5676
	ctx.r3.s64 = ctx.r3.s64 + 5676;
	// bl 0x821fa230
	ctx.lr = 0x8265FF7C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FF88;
	sub_8268CC80(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x8265FF94;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FFA0;
	sub_8268CC80(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265FFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8265ffd8
	if (ctx.cr6.eq) goto loc_8265FFD8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// bl 0x821fa230
	ctx.lr = 0x8265FFCC;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FFD8;
	sub_8268CC80(ctx, base);
loc_8265FFD8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// bl 0x821fa230
	ctx.lr = 0x8265FFE4;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8265FFF0;
	sub_8268CC80(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5408
	ctx.r3.s64 = ctx.r10.s64 + 5408;
	// bl 0x821fa230
	ctx.lr = 0x8265FFFC;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82660008;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5652
	ctx.r3.s64 = ctx.r9.s64 + 5652;
	// bl 0x821fa230
	ctx.lr = 0x82660014;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82660020;
	sub_8268CC80(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5640
	ctx.r3.s64 = ctx.r8.s64 + 5640;
	// bl 0x821fa230
	ctx.lr = 0x8266002C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82660038;
	sub_8268CC80(ctx, base);
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

__attribute__((alias("__imp__sub_82660050"))) PPC_WEAK_FUNC(sub_82660050);
PPC_FUNC_IMPL(__imp__sub_82660050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82660058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,5480
	ctx.r4.s64 = ctx.r10.s64 + 5480;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691650
	ctx.lr = 0x8266007C;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r9,5928
	ctx.r4.s64 = ctx.r9.s64 + 5928;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82660094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5628
	ctx.r4.s64 = ctx.r6.s64 + 5628;
	// bl 0x82691650
	ctx.lr = 0x826600A4;
	sub_82691650(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r30,r5,5912
	ctx.r30.s64 = ctx.r5.s64 + 5912;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826600C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,5452
	ctx.r4.s64 = ctx.r9.s64 + 5452;
	// bl 0x82691650
	ctx.lr = 0x826600D0;
	sub_82691650(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r29,r8,5892
	ctx.r29.s64 = ctx.r8.s64 + 5892;
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826600EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,5464
	ctx.r4.s64 = ctx.r5.s64 + 5464;
	// bl 0x82691650
	ctx.lr = 0x826600FC;
	sub_82691650(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r28,r4,5876
	ctx.r28.s64 = ctx.r4.s64 + 5876;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,5520
	ctx.r4.s64 = ctx.r9.s64 + 5520;
	// bl 0x82691650
	ctx.lr = 0x82660128;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8266013C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5492
	ctx.r4.s64 = ctx.r6.s64 + 5492;
	// bl 0x82691650
	ctx.lr = 0x8266014C;
	sub_82691650(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,5504
	ctx.r4.s64 = ctx.r10.s64 + 5504;
	// bl 0x82691650
	ctx.lr = 0x82660170;
	sub_82691650(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82660184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,5640
	ctx.r4.s64 = ctx.r7.s64 + 5640;
	// bl 0x82691650
	ctx.lr = 0x82660194;
	sub_82691650(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r6,5856
	ctx.r4.s64 = ctx.r6.s64 + 5856;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826601AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,5664
	ctx.r4.s64 = ctx.r10.s64 + 5664;
	// bl 0x82691650
	ctx.lr = 0x826601BC;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r9,5836
	ctx.r4.s64 = ctx.r9.s64 + 5836;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826601D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32121
	ctx.r6.s64 = -2105081856;
	// lwz r3,-10028(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x826601E0;
	sub_82207138(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5756
	ctx.r4.s64 = ctx.r11.s64 + 5756;
	// beq cr6,0x82660208
	if (ctx.cr6.eq) goto loc_82660208;
	// bl 0x82691650
	ctx.lr = 0x826601FC;
	sub_82691650(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,5816
	ctx.r4.s64 = ctx.r10.s64 + 5816;
	// b 0x82660214
	goto loc_82660214;
loc_82660208:
	// bl 0x82691650
	ctx.lr = 0x8266020C;
	sub_82691650(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,5788
	ctx.r4.s64 = ctx.r10.s64 + 5788;
loc_82660214:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82660224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266022C"))) PPC_WEAK_FUNC(sub_8266022C);
PPC_FUNC_IMPL(__imp__sub_8266022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660230"))) PPC_WEAK_FUNC(sub_82660230);
PPC_FUNC_IMPL(__imp__sub_82660230) {
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
	// bl 0x82387a18
	ctx.lr = 0x82660240;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660288
	if (ctx.cr6.eq) goto loc_82660288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5944
	ctx.r3.s64 = ctx.r11.s64 + 5944;
	// bl 0x821fa230
	ctx.lr = 0x82660258;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,312(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82660268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82660288
	if (ctx.cr6.eq) goto loc_82660288;
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
loc_82660288:
	// bl 0x82256058
	ctx.lr = 0x8266028C;
	sub_82256058(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826602AC"))) PPC_WEAK_FUNC(sub_826602AC);
PPC_FUNC_IMPL(__imp__sub_826602AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826602B0"))) PPC_WEAK_FUNC(sub_826602B0);
PPC_FUNC_IMPL(__imp__sub_826602B0) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826602CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826602ec
	if (ctx.cr6.eq) goto loc_826602EC;
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
loc_826602EC:
	// bl 0x82660230
	ctx.lr = 0x826602F0;
	sub_82660230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82660310"))) PPC_WEAK_FUNC(sub_82660310);
PPC_FUNC_IMPL(__imp__sub_82660310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91d4
	ctx.lr = 0x82660318;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660330;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,352(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82660340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82660354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r3,r11,6172
	ctx.r3.s64 = ctx.r11.s64 + 6172;
	// beq cr6,0x82660378
	if (ctx.cr6.eq) goto loc_82660378;
	// bl 0x821fa230
	ctx.lr = 0x8266036C;
	sub_821FA230(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// b 0x82660384
	goto loc_82660384;
loc_82660378:
	// bl 0x821fa230
	ctx.lr = 0x8266037C;
	sub_821FA230(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_82660384:
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lis r23,-32121
	ctx.r23.s64 = -2105081856;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-10236(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10236);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82207190
	ctx.lr = 0x8266039C;
	sub_82207190(ctx, base);
	// bl 0x8265e5e8
	ctx.lr = 0x826603A0;
	sub_8265E5E8(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826603B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82660404
	if (ctx.cr6.eq) goto loc_82660404;
	// bl 0x82387a18
	ctx.lr = 0x826603C8;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660404
	if (!ctx.cr6.eq) goto loc_82660404;
	// bl 0x8265e7d8
	ctx.lr = 0x826603D8;
	sub_8265E7D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660404
	if (!ctx.cr6.eq) goto loc_82660404;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-3624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3624);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r8,797(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 797);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82660408
	if (ctx.cr6.eq) goto loc_82660408;
loc_82660404:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82660408:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// addi r31,r11,5520
	ctx.r31.s64 = ctx.r11.s64 + 5520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x8266041C;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,5628
	ctx.r30.s64 = ctx.r11.s64 + 5628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660440;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82660454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r20,r29,24
	ctx.r20.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8266048c
	if (ctx.cr6.eq) goto loc_8266048C;
	// bl 0x821fa230
	ctx.lr = 0x82660468;
	sub_821FA230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660480;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// b 0x826604b0
	goto loc_826604B0;
loc_8266048C:
	// bl 0x821fa230
	ctx.lr = 0x82660490;
	sub_821FA230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x821fa230
	ctx.lr = 0x826604A8;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_826604B0:
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,6160
	ctx.r31.s64 = ctx.r11.s64 + 6160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x826604C4;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826604D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,5664
	ctx.r30.s64 = ctx.r11.s64 + 5664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x826604E8;
	sub_821FA230(ctx, base);
	// lwz r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82660504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,76(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82660518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8266054c
	if (ctx.cr6.eq) goto loc_8266054C;
	// bl 0x821fa230
	ctx.lr = 0x82660528;
	sub_821FA230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660540;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// b 0x82660570
	goto loc_82660570;
loc_8266054C:
	// bl 0x821fa230
	ctx.lr = 0x82660550;
	sub_821FA230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660568;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_82660570:
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5732
	ctx.r3.s64 = ctx.r11.s64 + 5732;
	// bl 0x821fa230
	ctx.lr = 0x82660580;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82660594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,5776
	ctx.r29.s64 = ctx.r11.s64 + 5776;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x826605A4;
	sub_821FA230(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826605B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5492
	ctx.r3.s64 = ctx.r6.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x826605C4;
	sub_821FA230(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826605D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5756
	ctx.r3.s64 = ctx.r10.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x826605E4;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826605F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r7,5504
	ctx.r3.s64 = ctx.r7.s64 + 5504;
	// bl 0x821fa230
	ctx.lr = 0x82660604;
	sub_821FA230(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82660618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,5700
	ctx.r3.s64 = ctx.r4.s64 + 5700;
	// bl 0x821fa230
	ctx.lr = 0x82660624;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5480
	ctx.r3.s64 = ctx.r9.s64 + 5480;
	// bl 0x821fa230
	ctx.lr = 0x82660644;
	sub_821FA230(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82660658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r22,r11,6148
	ctx.r22.s64 = ctx.r11.s64 + 6148;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660668;
	sub_821FA230(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,6132
	ctx.r25.s64 = ctx.r11.s64 + 6132;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r4,r5,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r4,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r4.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660688;
	sub_821FA230(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r21,r11,-15096
	ctx.r21.s64 = ctx.r11.s64 + -15096;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwinm r8,r9,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// bl 0x821fa230
	ctx.lr = 0x826606A8;
	sub_821FA230(ctx, base);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r7,-32121
	ctx.r7.s64 = -2105081856;
	// ori r5,r6,512
	ctx.r5.u64 = ctx.r6.u64 | 512;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r3,-10028(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x826606C0;
	sub_82207138(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r11,5436
	ctx.r31.s64 = ctx.r11.s64 + 5436;
	// addi r30,r10,5652
	ctx.r30.s64 = ctx.r10.s64 + 5652;
	// beq cr6,0x82660798
	if (ctx.cr6.eq) goto loc_82660798;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826606F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82660798
	if (ctx.cr6.eq) goto loc_82660798;
	// bl 0x82660230
	ctx.lr = 0x82660700;
	sub_82660230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660760
	if (!ctx.cr6.eq) goto loc_82660760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660714;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660730;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82660744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x8266074C;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// b 0x82660794
	goto loc_82660794;
loc_82660760:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660768;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8266077C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660784;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82660794:
	// bctrl 
	ctx.lr = 0x82660798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82660798:
	// bl 0x82387a18
	ctx.lr = 0x8266079C;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660880
	if (ctx.cr6.eq) goto loc_82660880;
	// bl 0x821fa230
	ctx.lr = 0x826607B0;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826607C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x826607CC;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826607E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,6120
	ctx.r28.s64 = ctx.r11.s64 + 6120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fa230
	ctx.lr = 0x826607F0;
	sub_821FA230(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// ori r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 16;
	// addi r31,r11,6112
	ctx.r31.s64 = ctx.r11.s64 + 6112;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r11,-10236(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10236);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82660818;
	sub_82691650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82660840
	if (ctx.cr6.eq) goto loc_82660840;
	// lwz r11,-10236(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10236);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82660834;
	sub_82691650(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_82660840:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r11,6096
	ctx.r26.s64 = ctx.r11.s64 + 6096;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660850;
	sub_821FA230(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r24,r11,6080
	ctx.r24.s64 = ctx.r11.s64 + 6080;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660870;
	sub_821FA230(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 16;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// b 0x82660980
	goto loc_82660980;
loc_82660880:
	// bl 0x821fa230
	ctx.lr = 0x82660884;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x826608A0;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826608B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x826608BC;
	sub_821FA230(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// rlwinm r5,r6,0,28,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r5,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r5.u32);
	// bl 0x821fa230
	ctx.lr = 0x826608D4;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r11,6096
	ctx.r26.s64 = ctx.r11.s64 + 6096;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// bl 0x821fa230
	ctx.lr = 0x826608F4;
	sub_821FA230(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,6120
	ctx.r28.s64 = ctx.r11.s64 + 6120;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660914;
	sub_821FA230(ctx, base);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r5,r6,0,28,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r31,r11,6112
	ctx.r31.s64 = ctx.r11.s64 + 6112;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r11,-10236(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10236);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x8266093C;
	sub_82691650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82660964
	if (ctx.cr6.eq) goto loc_82660964;
	// lwz r11,-10236(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10236);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82660958;
	sub_82691650(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_82660964:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r24,r11,6080
	ctx.r24.s64 = ctx.r11.s64 + 6080;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660974;
	sub_821FA230(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_82660980:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5712
	ctx.r3.s64 = ctx.r11.s64 + 5712;
	// bl 0x821fa230
	ctx.lr = 0x8266098C;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826609A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5608
	ctx.r3.s64 = ctx.r8.s64 + 5608;
	// bl 0x821fa230
	ctx.lr = 0x826609AC;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826609C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82387a18
	ctx.lr = 0x826609C4;
	sub_82387A18(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826609e8
	if (!ctx.cr6.eq) goto loc_826609E8;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x821fa230
	ctx.lr = 0x826609DC;
	sub_821FA230(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// b 0x826609f8
	goto loc_826609F8;
loc_826609E8:
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x821fa230
	ctx.lr = 0x826609F0;
	sub_821FA230(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
loc_826609F8:
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82660a68
	if (ctx.cr6.eq) goto loc_82660A68;
	// bl 0x82387a18
	ctx.lr = 0x82660A20;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660a68
	if (!ctx.cr6.eq) goto loc_82660A68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,5640
	ctx.r30.s64 = ctx.r11.s64 + 5640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660A3C;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,5548
	ctx.r29.s64 = ctx.r11.s64 + 5548;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660A60;
	sub_821FA230(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82660aa0
	goto loc_82660AA0;
loc_82660A68:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,5640
	ctx.r30.s64 = ctx.r11.s64 + 5640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660A78;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,5548
	ctx.r29.s64 = ctx.r11.s64 + 5548;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660A9C;
	sub_821FA230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82660AA0:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82660AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82660ae4
	if (ctx.cr6.eq) goto loc_82660AE4;
	// bl 0x821fa230
	ctx.lr = 0x82660AC0;
	sub_821FA230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660AD8;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// b 0x82660b08
	goto loc_82660B08;
loc_82660AE4:
	// bl 0x821fa230
	ctx.lr = 0x82660AE8;
	sub_821FA230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660B00;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_82660B08:
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10684
	ctx.r3.s64 = ctx.r11.s64 + -10684;
	// bl 0x821fa230
	ctx.lr = 0x82660B18;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,312(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82660B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82660b38
	if (ctx.cr6.eq) goto loc_82660B38;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82660B38:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660B40;
	sub_821FA230(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82660ba0
	if (!ctx.cr6.eq) goto loc_82660BA0;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lwz r11,2832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2832);
	// lbz r10,10850(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10850);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82660ba0
	if (!ctx.cr6.eq) goto loc_82660BA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-15108
	ctx.r3.s64 = ctx.r11.s64 + -15108;
	// bl 0x821fa230
	ctx.lr = 0x82660B80;
	sub_821FA230(ctx, base);
	// bl 0x821f87e8
	ctx.lr = 0x82660B84;
	sub_821F87E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82660ba0
	if (ctx.cr6.eq) goto loc_82660BA0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// b 0x82660ba8
	goto loc_82660BA8;
loc_82660BA0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r10,r11,528
	ctx.r10.u64 = ctx.r11.u64 | 528;
loc_82660BA8:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660bcc
	if (ctx.cr6.eq) goto loc_82660BCC;
	// bl 0x821fa230
	ctx.lr = 0x82660BC0;
	sub_821FA230(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// b 0x82660bd8
	goto loc_82660BD8;
loc_82660BCC:
	// bl 0x821fa230
	ctx.lr = 0x82660BD0;
	sub_821FA230(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
loc_82660BD8:
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,6064
	ctx.r3.s64 = ctx.r11.s64 + 6064;
	// bl 0x821fa230
	ctx.lr = 0x82660BE8;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82660BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,6048
	ctx.r3.s64 = ctx.r8.s64 + 6048;
	// bl 0x821fa230
	ctx.lr = 0x82660C08;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82660C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,6040
	ctx.r3.s64 = ctx.r5.s64 + 6040;
	// bl 0x821fa230
	ctx.lr = 0x82660C28;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,6020
	ctx.r3.s64 = ctx.r9.s64 + 6020;
	// bl 0x821fa230
	ctx.lr = 0x82660C48;
	sub_821FA230(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82660C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,6004
	ctx.r3.s64 = ctx.r6.s64 + 6004;
	// bl 0x821fa230
	ctx.lr = 0x82660C68;
	sub_821FA230(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5984
	ctx.r3.s64 = ctx.r10.s64 + 5984;
	// bl 0x821fa230
	ctx.lr = 0x82660C88;
	sub_821FA230(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82660C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r7,5968
	ctx.r3.s64 = ctx.r7.s64 + 5968;
	// bl 0x821fa230
	ctx.lr = 0x82660CA8;
	sub_821FA230(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82660CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,5960
	ctx.r3.s64 = ctx.r4.s64 + 5960;
	// bl 0x821fa230
	ctx.lr = 0x82660CC8;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5464
	ctx.r3.s64 = ctx.r9.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x82660CE8;
	sub_821FA230(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82660CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5576
	ctx.r3.s64 = ctx.r6.s64 + 5576;
	// bl 0x821fa230
	ctx.lr = 0x82660D08;
	sub_821FA230(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8265f568
	ctx.lr = 0x82660D20;
	sub_8265F568(ctx, base);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82660D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82660D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82660e00
	if (ctx.cr6.eq) goto loc_82660E00;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660D5C;
	sub_821FA230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660D74;
	sub_821FA230(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// ori r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 16;
	// stw r6,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r6.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660D8C;
	sub_821FA230(ctx, base);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r11,r5,16
	ctx.r11.u64 = ctx.r5.u64 | 16;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,-10236(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82660DAC;
	sub_82691650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82660dd4
	if (ctx.cr6.eq) goto loc_82660DD4;
	// lwz r11,-10236(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10236);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82660DC8;
	sub_82691650(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_82660DD4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660DDC;
	sub_821FA230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x821fa230
	ctx.lr = 0x82660DF4;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
loc_82660E00:
	// bl 0x82660230
	ctx.lr = 0x82660E04;
	sub_82660230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660e3c
	if (!ctx.cr6.eq) goto loc_82660E3C;
	// bl 0x82387a18
	ctx.lr = 0x82660E14;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660e3c
	if (!ctx.cr6.eq) goto loc_82660E3C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660E28;
	sub_821FA230(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9224
	__restgprlr_19(ctx, base);
	return;
loc_82660E3C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821fa230
	ctx.lr = 0x82660E44;
	sub_821FA230(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d9224
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82660E58"))) PPC_WEAK_FUNC(sub_82660E58);
PPC_FUNC_IMPL(__imp__sub_82660E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x82660E60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82207e88
	ctx.lr = 0x82660E80;
	sub_82207E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660ebc
	if (ctx.cr6.eq) goto loc_82660EBC;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10220);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82660EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82660ebc
	if (!ctx.cr6.eq) goto loc_82660EBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_82660EBC:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 262144;
	// addi r9,r9,976
	ctx.r9.s64 = ctx.r9.s64 + 976;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82660f58
	if (!ctx.cr6.eq) goto loc_82660F58;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x82660f58
	if (ctx.cr6.gt) goto loc_82660F58;
	// lis r12,-32154
	ctx.r12.s64 = -2107244544;
	// addi r12,r12,3836
	ctx.r12.s64 = ctx.r12.s64 + 3836;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82660F4C;
	case 1:
		goto loc_82660F4C;
	case 2:
		goto loc_82660F4C;
	case 3:
		goto loc_82660F4C;
	case 4:
		goto loc_82660F58;
	case 5:
		goto loc_82660F58;
	case 6:
		goto loc_82660F58;
	case 7:
		goto loc_82660F58;
	case 8:
		goto loc_82660F58;
	case 9:
		goto loc_82660F58;
	case 10:
		goto loc_82660F58;
	case 11:
		goto loc_82660F58;
	case 12:
		goto loc_82660F58;
	case 13:
		goto loc_82660F58;
	case 14:
		goto loc_82660F58;
	case 15:
		goto loc_82660F58;
	case 16:
		goto loc_82660F4C;
	case 17:
		goto loc_82660F4C;
	case 18:
		goto loc_82660F4C;
	case 19:
		goto loc_82660F4C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,3916(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3916);
	// lwz r19,3916(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3916);
	// lwz r19,3916(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3916);
	// lwz r19,3916(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3916);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3928(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3928);
	// lwz r19,3916(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3916);
	// lwz r19,3916(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3916);
	// lwz r19,3916(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3916);
	// lwz r19,3916(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3916);
loc_82660F4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
loc_82660F58:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8263b9a0
	ctx.lr = 0x82660F74;
	sub_8263B9A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82660F7C"))) PPC_WEAK_FUNC(sub_82660F7C);
PPC_FUNC_IMPL(__imp__sub_82660F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660F80"))) PPC_WEAK_FUNC(sub_82660F80);
PPC_FUNC_IMPL(__imp__sub_82660F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82660F88;
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
	// bl 0x82207e88
	ctx.lr = 0x82660F9C;
	sub_82207E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660fd8
	if (ctx.cr6.eq) goto loc_82660FD8;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10220);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82660FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82660fd8
	if (!ctx.cr6.eq) goto loc_82660FD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82660FD8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265e758
	ctx.lr = 0x82660FE8;
	sub_8265E758(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661000"))) PPC_WEAK_FUNC(sub_82661000);
PPC_FUNC_IMPL(__imp__sub_82661000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82661008;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82256058
	ctx.lr = 0x82661014;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82661030
	if (ctx.cr6.eq) goto loc_82661030;
	// lwz r11,3152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// b 0x82661034
	goto loc_82661034;
loc_82661030:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82661034:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661088
	if (ctx.cr6.eq) goto loc_82661088;
	// bl 0x8265eb48
	ctx.lr = 0x82661048;
	sub_8265EB48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661064
	if (ctx.cr6.eq) goto loc_82661064;
loc_82661054:
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,-8208
	ctx.r3.s64 = ctx.r3.s64 + -8208;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82661064:
	// lwz r11,-10236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8266107C;
	sub_82641CB0(ctx, base);
	// lbz r10,246(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 246);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82661054
	if (!ctx.cr6.eq) goto loc_82661054;
loc_82661088:
	// bl 0x82256058
	ctx.lr = 0x8266108C;
	sub_82256058(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r31,r10,1
	ctx.r31.u64 = ctx.r10.u64 ^ 1;
	// bl 0x82387a18
	ctx.lr = 0x8266109C;
	sub_82387A18(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826610d8
	if (ctx.cr6.eq) goto loc_826610D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x826610B0;
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
	ctx.lr = 0x826610C4;
	sub_82270170(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822577d0
	ctx.lr = 0x826610CC;
	sub_822577D0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x826610d8
	if (ctx.cr6.eq) goto loc_826610D8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_826610D8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826611fc
	if (ctx.cr6.eq) goto loc_826611FC;
	// lwz r11,-10236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82204018
	ctx.lr = 0x826610F0;
	sub_82204018(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x826611ec
	if (ctx.cr6.gt) goto loc_826611EC;
	// lis r12,-32154
	ctx.r12.s64 = -2107244544;
	// addi r12,r12,4372
	ctx.r12.s64 = ctx.r12.s64 + 4372;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_826611BC;
	case 1:
		goto loc_8266117C;
	case 2:
		goto loc_82661164;
	case 3:
		goto loc_82661170;
	case 4:
		goto loc_826611AC;
	case 5:
		goto loc_82661188;
	case 6:
		goto loc_82661194;
	case 7:
		goto loc_826611BC;
	case 8:
		goto loc_826611A0;
	case 9:
		goto loc_826611DC;
	case 10:
		goto loc_82661158;
	case 11:
		goto loc_826611BC;
	case 12:
		goto loc_826611CC;
	case 13:
		goto loc_826611CC;
	case 14:
		goto loc_826611BC;
	case 15:
		goto loc_826611BC;
	case 16:
		goto loc_826611BC;
	default:
		__builtin_unreachable();
	}
	// lwz r19,4540(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4540);
	// lwz r19,4476(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4476);
	// lwz r19,4452(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4452);
	// lwz r19,4464(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4464);
	// lwz r19,4524(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4524);
	// lwz r19,4488(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4488);
	// lwz r19,4500(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4500);
	// lwz r19,4540(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4540);
	// lwz r19,4512(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4512);
	// lwz r19,4572(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4572);
	// lwz r19,4440(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4440);
	// lwz r19,4540(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4540);
	// lwz r19,4556(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4556);
	// lwz r19,4556(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4556);
	// lwz r19,4540(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4540);
	// lwz r19,4540(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4540);
	// lwz r19,4540(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4540);
loc_82661158:
	// addi r3,r29,2416
	ctx.r3.s64 = ctx.r29.s64 + 2416;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82661164:
	// addi r3,r29,7408
	ctx.r3.s64 = ctx.r29.s64 + 7408;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82661170:
	// addi r3,r29,12400
	ctx.r3.s64 = ctx.r29.s64 + 12400;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8266117C:
	// addi r3,r29,17392
	ctx.r3.s64 = ctx.r29.s64 + 17392;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82661188:
	// addi r3,r29,22384
	ctx.r3.s64 = ctx.r29.s64 + 22384;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82661194:
	// addi r3,r29,27376
	ctx.r3.s64 = ctx.r29.s64 + 27376;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_826611A0:
	// addi r3,r29,32368
	ctx.r3.s64 = ctx.r29.s64 + 32368;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_826611AC:
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,-23184
	ctx.r3.s64 = ctx.r3.s64 + -23184;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_826611BC:
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,-18192
	ctx.r3.s64 = ctx.r3.s64 + -18192;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_826611CC:
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,-13200
	ctx.r3.s64 = ctx.r3.s64 + -13200;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_826611DC:
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,-28176
	ctx.r3.s64 = ctx.r3.s64 + -28176;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_826611EC:
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,1792
	ctx.r3.s64 = ctx.r3.s64 + 1792;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_826611FC:
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,-3200
	ctx.r3.s64 = ctx.r3.s64 + -3200;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266120C"))) PPC_WEAK_FUNC(sub_8266120C);
PPC_FUNC_IMPL(__imp__sub_8266120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82661210"))) PPC_WEAK_FUNC(sub_82661210);
PPC_FUNC_IMPL(__imp__sub_82661210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82661218;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8266123C;
	sub_82641CB0(ctx, base);
	// lbz r9,246(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 246);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82661250
	if (ctx.cr6.eq) goto loc_82661250;
	// addi r31,r31,1152
	ctx.r31.s64 = ctx.r31.s64 + 1152;
	// b 0x82661268
	goto loc_82661268;
loc_82661250:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// lwz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82661268:
	// lwz r30,192(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82631f88
	ctx.lr = 0x82661278;
	sub_82631F88(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82661288
	if (ctx.cr6.lt) goto loc_82661288;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_82661288:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8266129c
	if (!ctx.cr6.eq) goto loc_8266129C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8266129C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82631f88
	ctx.lr = 0x826612A4;
	sub_82631F88(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x826612b4
	if (ctx.cr6.lt) goto loc_826612B4;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_826612B4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8268dcb0
	ctx.lr = 0x826612C8;
	sub_8268DCB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826612D0"))) PPC_WEAK_FUNC(sub_826612D0);
PPC_FUNC_IMPL(__imp__sub_826612D0) {
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
	// cmpwi cr6,r4,66
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 66, ctx.xer);
	// blt cr6,0x8266142c
	if (ctx.cr6.lt) goto loc_8266142C;
	// cmpwi cr6,r4,67
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 67, ctx.xer);
	// bgt cr6,0x8266142c
	if (ctx.cr6.gt) goto loc_8266142C;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cc8
	ctx.lr = 0x8266130C;
	sub_82641CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82661424
	if (!ctx.cr6.eq) goto loc_82661424;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lwz r11,-10236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82661334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82661424
	if (!ctx.cr6.eq) goto loc_82661424;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lwz r11,2832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2832);
	// lbz r10,10850(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10850);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82661424
	if (!ctx.cr6.eq) goto loc_82661424;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8266136C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82661380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32121
	ctx.r7.s64 = -2105081856;
	// lwz r31,17268(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17268);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826613ac
	if (ctx.cr6.eq) goto loc_826613AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e80f8
	ctx.lr = 0x8266139C;
	sub_821E80F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x826613b0
	if (!ctx.cr6.eq) goto loc_826613B0;
loc_826613AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826613B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661424
	if (ctx.cr6.eq) goto loc_82661424;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3998
	ctx.lr = 0x826613C8;
	sub_822A3998(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821a5cc0
	ctx.lr = 0x826613D0;
	sub_821A5CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661424
	if (!ctx.cr6.eq) goto loc_82661424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a5cc0
	ctx.lr = 0x826613E4;
	sub_821A5CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661424
	if (!ctx.cr6.eq) goto loc_82661424;
	// lwz r11,-10236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-18724
	ctx.r4.s64 = ctx.r10.s64 + -18724;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82691650
	ctx.lr = 0x82661410;
	sub_82691650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82661424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82661424:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82661434
	goto loc_82661434;
loc_8266142C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826309e0
	ctx.lr = 0x82661434;
	sub_826309E0(ctx, base);
loc_82661434:
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

__attribute__((alias("__imp__sub_8266144C"))) PPC_WEAK_FUNC(sub_8266144C);
PPC_FUNC_IMPL(__imp__sub_8266144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82661450"))) PPC_WEAK_FUNC(sub_82661450);
PPC_FUNC_IMPL(__imp__sub_82661450) {
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
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// bl 0x82661000
	ctx.lr = 0x82661464;
	sub_82661000(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82661474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r11,-10236(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10236);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82661490;
	sub_82641CB0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,736(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 736);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826614A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821e6828
	ctx.lr = 0x826614AC;
	sub_821E6828(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826614BC"))) PPC_WEAK_FUNC(sub_826614BC);
PPC_FUNC_IMPL(__imp__sub_826614BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

