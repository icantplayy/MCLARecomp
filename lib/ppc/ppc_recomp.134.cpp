#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826614C0"))) PPC_WEAK_FUNC(sub_826614C0);
PPC_FUNC_IMPL(__imp__sub_826614C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82661000
	ctx.lr = 0x826614DC;
	sub_82661000(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826614F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661504"))) PPC_WEAK_FUNC(sub_82661504);
PPC_FUNC_IMPL(__imp__sub_82661504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82661508"))) PPC_WEAK_FUNC(sub_82661508);
PPC_FUNC_IMPL(__imp__sub_82661508) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82661538;
	sub_82691650(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82661554;
	sub_82641CB0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826615bc
	if (ctx.cr6.eq) goto loc_826615BC;
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// bl 0x82661210
	ctx.lr = 0x82661564;
	sub_82661210(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826615bc
	if (!ctx.cr6.eq) goto loc_826615BC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82661584
	if (ctx.cr6.gt) goto loc_82661584;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82661584:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826615b0
	if (!ctx.cr6.eq) goto loc_826615B0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826615a8
	if (ctx.cr6.eq) goto loc_826615A8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x826615A8;
	sub_821E6800(ctx, base);
loc_826615A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826615c0
	goto loc_826615C0;
loc_826615B0:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24612);
	// bl 0x821e6800
	ctx.lr = 0x826615BC;
	sub_821E6800(ctx, base);
loc_826615BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826615C0:
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

__attribute__((alias("__imp__sub_826615D8"))) PPC_WEAK_FUNC(sub_826615D8);
PPC_FUNC_IMPL(__imp__sub_826615D8) {
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
	// bl 0x82660050
	ctx.lr = 0x826615F0;
	sub_82660050(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,5628
	ctx.r4.s64 = ctx.r10.s64 + 5628;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691650
	ctx.lr = 0x82661610;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r30,r9,6248
	ctx.r30.s64 = ctx.r9.s64 + 6248;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8266162C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5520
	ctx.r4.s64 = ctx.r6.s64 + 5520;
	// bl 0x82691650
	ctx.lr = 0x8266163C;
	sub_82691650(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,5464
	ctx.r4.s64 = ctx.r10.s64 + 5464;
	// bl 0x82691650
	ctx.lr = 0x82661660;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r30,r9,6228
	ctx.r30.s64 = ctx.r9.s64 + 6228;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8266167C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5504
	ctx.r4.s64 = ctx.r6.s64 + 5504;
	// bl 0x82691650
	ctx.lr = 0x8266168C;
	sub_82691650(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826616A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,5452
	ctx.r4.s64 = ctx.r10.s64 + 5452;
	// bl 0x82691650
	ctx.lr = 0x826616B0;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r9,6204
	ctx.r4.s64 = ctx.r9.s64 + 6204;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826616C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5492
	ctx.r4.s64 = ctx.r6.s64 + 5492;
	// bl 0x82691650
	ctx.lr = 0x826616D8;
	sub_82691650(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r4,r5,6184
	ctx.r4.s64 = ctx.r5.s64 + 6184;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826616F0;
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

__attribute__((alias("__imp__sub_82661708"))) PPC_WEAK_FUNC(sub_82661708);
PPC_FUNC_IMPL(__imp__sub_82661708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82661710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82660050
	ctx.lr = 0x82661718;
	sub_82660050(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,5464
	ctx.r4.s64 = ctx.r10.s64 + 5464;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691650
	ctx.lr = 0x82661738;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r30,r9,6316
	ctx.r30.s64 = ctx.r9.s64 + 6316;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82661754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5452
	ctx.r4.s64 = ctx.r6.s64 + 5452;
	// bl 0x82691650
	ctx.lr = 0x82661764;
	sub_82691650(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r29,r5,6292
	ctx.r29.s64 = ctx.r5.s64 + 6292;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82661780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,5492
	ctx.r4.s64 = ctx.r9.s64 + 5492;
	// bl 0x82691650
	ctx.lr = 0x82661790;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826617A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5640
	ctx.r4.s64 = ctx.r6.s64 + 5640;
	// bl 0x82691650
	ctx.lr = 0x826617B4;
	sub_82691650(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826617C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,5664
	ctx.r4.s64 = ctx.r10.s64 + 5664;
	// bl 0x82691650
	ctx.lr = 0x826617D8;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r9,6268
	ctx.r4.s64 = ctx.r9.s64 + 6268;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826617F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826617F8"))) PPC_WEAK_FUNC(sub_826617F8);
PPC_FUNC_IMPL(__imp__sub_826617F8) {
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
	// bl 0x82660310
	ctx.lr = 0x82661810;
	sub_82660310(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826618bc
	if (ctx.cr6.eq) goto loc_826618BC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5640
	ctx.r3.s64 = ctx.r11.s64 + 5640;
	// bl 0x821fa230
	ctx.lr = 0x82661828;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8266183C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5664
	ctx.r3.s64 = ctx.r8.s64 + 5664;
	// bl 0x821fa230
	ctx.lr = 0x82661848;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8266185C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5492
	ctx.r3.s64 = ctx.r5.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x82661868;
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
	ctx.lr = 0x8266187C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5756
	ctx.r3.s64 = ctx.r9.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x82661888;
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
	ctx.lr = 0x8266189C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5520
	ctx.r3.s64 = ctx.r6.s64 + 5520;
	// bl 0x821fa230
	ctx.lr = 0x826618A8;
	sub_821FA230(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82661938
	goto loc_82661938;
loc_826618BC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// bl 0x821fa230
	ctx.lr = 0x826618C8;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826618DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5464
	ctx.r3.s64 = ctx.r8.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x826618E8;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826618FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5548
	ctx.r3.s64 = ctx.r5.s64 + 5548;
	// bl 0x821fa230
	ctx.lr = 0x82661908;
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
	ctx.lr = 0x8266191C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5452
	ctx.r3.s64 = ctx.r9.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x82661928;
	sub_821FA230(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82661938:
	// bctrl 
	ctx.lr = 0x8266193C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5652
	ctx.r3.s64 = ctx.r11.s64 + 5652;
	// bl 0x821fa230
	ctx.lr = 0x82661948;
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
	ctx.lr = 0x8266195C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5436
	ctx.r3.s64 = ctx.r8.s64 + 5436;
	// bl 0x821fa230
	ctx.lr = 0x82661968;
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
	ctx.lr = 0x8266197C;
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

__attribute__((alias("__imp__sub_82661990"))) PPC_WEAK_FUNC(sub_82661990);
PPC_FUNC_IMPL(__imp__sub_82661990) {
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
	// bl 0x82660310
	ctx.lr = 0x826619AC;
	sub_82660310(ctx, base);
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,-10028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x826619C4;
	sub_82641CB0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,24348
	ctx.r4.s64 = ctx.r11.s64 + 24348;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// bl 0x8262ffe0
	ctx.lr = 0x826619D8;
	sub_8262FFE0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5452
	ctx.r3.s64 = ctx.r10.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x826619E4;
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
	ctx.lr = 0x826619F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r7,5436
	ctx.r3.s64 = ctx.r7.s64 + 5436;
	// bl 0x821fa230
	ctx.lr = 0x82661A04;
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
	ctx.lr = 0x82661A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,5652
	ctx.r3.s64 = ctx.r4.s64 + 5652;
	// bl 0x821fa230
	ctx.lr = 0x82661A24;
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
	ctx.lr = 0x82661A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5664
	ctx.r3.s64 = ctx.r9.s64 + 5664;
	// bl 0x821fa230
	ctx.lr = 0x82661A44;
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
	ctx.lr = 0x82661A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82661a94
	if (ctx.cr6.eq) goto loc_82661A94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5640
	ctx.r3.s64 = ctx.r11.s64 + 5640;
	// bl 0x821fa230
	ctx.lr = 0x82661A70;
	sub_821FA230(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-10028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10028);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82207138
	ctx.lr = 0x82661A80;
	sub_82207138(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82661ab0
	goto loc_82661AB0;
loc_82661A94:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x82661AA0;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82661AB0:
	// bctrl 
	ctx.lr = 0x82661AB4;
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

__attribute__((alias("__imp__sub_82661ACC"))) PPC_WEAK_FUNC(sub_82661ACC);
PPC_FUNC_IMPL(__imp__sub_82661ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82661AD0"))) PPC_WEAK_FUNC(sub_82661AD0);
PPC_FUNC_IMPL(__imp__sub_82661AD0) {
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
	// bl 0x82660050
	ctx.lr = 0x82661AE8;
	sub_82660050(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,5452
	ctx.r4.s64 = ctx.r10.s64 + 5452;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691650
	ctx.lr = 0x82661B08;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r30,r9,6356
	ctx.r30.s64 = ctx.r9.s64 + 6356;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82661B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5492
	ctx.r4.s64 = ctx.r6.s64 + 5492;
	// bl 0x82691650
	ctx.lr = 0x82661B34;
	sub_82691650(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,5628
	ctx.r4.s64 = ctx.r10.s64 + 5628;
	// bl 0x82691650
	ctx.lr = 0x82661B58;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r30,r9,6336
	ctx.r30.s64 = ctx.r9.s64 + 6336;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82661B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5520
	ctx.r4.s64 = ctx.r6.s64 + 5520;
	// bl 0x82691650
	ctx.lr = 0x82661B84;
	sub_82691650(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661B98;
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

__attribute__((alias("__imp__sub_82661BB0"))) PPC_WEAK_FUNC(sub_82661BB0);
PPC_FUNC_IMPL(__imp__sub_82661BB0) {
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
	// bl 0x82660310
	ctx.lr = 0x82661BC0;
	sub_82660310(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5436
	ctx.r3.s64 = ctx.r11.s64 + 5436;
	// bl 0x821fa230
	ctx.lr = 0x82661BCC;
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
	ctx.lr = 0x82661BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5452
	ctx.r3.s64 = ctx.r8.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x82661BEC;
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
	ctx.lr = 0x82661C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5548
	ctx.r3.s64 = ctx.r5.s64 + 5548;
	// bl 0x821fa230
	ctx.lr = 0x82661C0C;
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
	ctx.lr = 0x82661C20;
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

__attribute__((alias("__imp__sub_82661C30"))) PPC_WEAK_FUNC(sub_82661C30);
PPC_FUNC_IMPL(__imp__sub_82661C30) {
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
	// bl 0x82660050
	ctx.lr = 0x82661C44;
	sub_82660050(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,5452
	ctx.r4.s64 = ctx.r10.s64 + 5452;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691650
	ctx.lr = 0x82661C64;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r9,5892
	ctx.r4.s64 = ctx.r9.s64 + 5892;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82661C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5492
	ctx.r4.s64 = ctx.r6.s64 + 5492;
	// bl 0x82691650
	ctx.lr = 0x82661C8C;
	sub_82691650(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r4,r5,6372
	ctx.r4.s64 = ctx.r5.s64 + 6372;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82661CA4;
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

__attribute__((alias("__imp__sub_82661CB8"))) PPC_WEAK_FUNC(sub_82661CB8);
PPC_FUNC_IMPL(__imp__sub_82661CB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82660050
	sub_82660050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661CBC"))) PPC_WEAK_FUNC(sub_82661CBC);
PPC_FUNC_IMPL(__imp__sub_82661CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82661CC0"))) PPC_WEAK_FUNC(sub_82661CC0);
PPC_FUNC_IMPL(__imp__sub_82661CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82661CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-3624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3624);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r30,24(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82660310
	ctx.lr = 0x82661CE4;
	sub_82660310(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5652
	ctx.r3.s64 = ctx.r9.s64 + 5652;
	// bl 0x821fa230
	ctx.lr = 0x82661CF0;
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
	ctx.lr = 0x82661D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82661d4c
	if (!ctx.cr6.eq) goto loc_82661D4C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x82661d4c
	if (ctx.cr6.lt) goto loc_82661D4C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-15096
	ctx.r29.s64 = ctx.r11.s64 + -15096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82661D24;
	sub_821FA230(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// ori r8,r9,512
	ctx.r8.u64 = ctx.r9.u64 | 512;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// bl 0x821fa230
	ctx.lr = 0x82661D3C;
	sub_821FA230(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 16;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// b 0x82661e10
	goto loc_82661E10;
loc_82661D4C:
	// bl 0x8265e5e8
	ctx.lr = 0x82661D50;
	sub_8265E5E8(ctx, base);
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lwz r11,2832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2832);
	// lbz r10,10850(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10850);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82661dc0
	if (!ctx.cr6.eq) goto loc_82661DC0;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661dc0
	if (!ctx.cr6.eq) goto loc_82661DC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-15096
	ctx.r29.s64 = ctx.r11.s64 + -15096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82661D80;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82661D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82661D9C;
	sub_821FA230(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r6,r7,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r6,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r6.u32);
	// bl 0x821fa230
	ctx.lr = 0x82661DB4;
	sub_821FA230(ctx, base);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r5,0,23,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// b 0x82661e0c
	goto loc_82661E0C;
loc_82661DC0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-15096
	ctx.r29.s64 = ctx.r11.s64 + -15096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82661DD0;
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
	ctx.lr = 0x82661DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82661DEC;
	sub_821FA230(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// ori r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 16;
	// stw r6,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r6.u32);
	// bl 0x821fa230
	ctx.lr = 0x82661E04;
	sub_821FA230(ctx, base);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r4,r5,512
	ctx.r4.u64 = ctx.r5.u64 | 512;
loc_82661E0C:
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
loc_82661E10:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5436
	ctx.r3.s64 = ctx.r11.s64 + 5436;
	// bl 0x821fa230
	ctx.lr = 0x82661E1C;
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
	ctx.lr = 0x82661E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5452
	ctx.r3.s64 = ctx.r8.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x82661E3C;
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
	ctx.lr = 0x82661E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5464
	ctx.r3.s64 = ctx.r5.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x82661E5C;
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
	ctx.lr = 0x82661E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82661e84
	if (!ctx.cr6.eq) goto loc_82661E84;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// blt cr6,0x82661e88
	if (ctx.cr6.lt) goto loc_82661E88;
loc_82661E84:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82661E88:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5576
	ctx.r3.s64 = ctx.r11.s64 + 5576;
	// bl 0x821fa230
	ctx.lr = 0x82661E94;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82661EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// lwz r3,-10028(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x82661EB4;
	sub_82207138(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82661f00
	if (ctx.cr6.eq) goto loc_82661F00;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x82661ECC;
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
	ctx.lr = 0x82661EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5492
	ctx.r3.s64 = ctx.r8.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x82661EEC;
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
	ctx.lr = 0x82661F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82661F00:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,6420
	ctx.r3.s64 = ctx.r11.s64 + 6420;
	// bl 0x821fa230
	ctx.lr = 0x82661F0C;
	sub_821FA230(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x82661F18;
	sub_82388580(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,-10240(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10240);
	// bl 0x82270170
	ctx.lr = 0x82661F34;
	sub_82270170(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82272fc0
	ctx.lr = 0x82661F40;
	sub_82272FC0(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82661f78
	if (ctx.cr6.gt) goto loc_82661F78;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82661f78
	if (ctx.cr6.gt) goto loc_82661F78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82661F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82661F78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82661F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,340(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// ble cr6,0x82661fc0
	if (!ctx.cr6.gt) goto loc_82661FC0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,6388
	ctx.r4.s64 = ctx.r10.s64 + 6388;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82661FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82661FC0:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r4,r10,25900
	ctx.r4.s64 = ctx.r10.s64 + 25900;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82661FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661FD8"))) PPC_WEAK_FUNC(sub_82661FD8);
PPC_FUNC_IMPL(__imp__sub_82661FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82661FE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82660310
	ctx.lr = 0x82661FEC;
	sub_82660310(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,5452
	ctx.r30.s64 = ctx.r11.s64 + 5452;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x82661FFC;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82662010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r29,r8,5464
	ctx.r29.s64 = ctx.r8.s64 + 5464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82662020;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82662034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r28,r5,5480
	ctx.r28.s64 = ctx.r5.s64 + 5480;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fa230
	ctx.lr = 0x82662044;
	sub_821FA230(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8265eb48
	ctx.lr = 0x82662050;
	sub_8265EB48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x8266206C;
	sub_821FA230(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r8,r9,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// bl 0x821fa230
	ctx.lr = 0x82662084;
	sub_821FA230(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// rlwinm r5,r6,0,28,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r5,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r5.u32);
	// bl 0x821fa230
	ctx.lr = 0x8266209C;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r3,r3,5628
	ctx.r3.s64 = ctx.r3.s64 + 5628;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// bl 0x821fa230
	ctx.lr = 0x826620B8;
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
	ctx.lr = 0x826620CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r7,5608
	ctx.r3.s64 = ctx.r7.s64 + 5608;
	// bl 0x821fa230
	ctx.lr = 0x826620D8;
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
	ctx.lr = 0x826620EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,5396
	ctx.r3.s64 = ctx.r4.s64 + 5396;
	// bl 0x821fa230
	ctx.lr = 0x826620F8;
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
	ctx.lr = 0x8266210C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5380
	ctx.r3.s64 = ctx.r9.s64 + 5380;
	// bl 0x821fa230
	ctx.lr = 0x82662118;
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
	ctx.lr = 0x8266212C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5436
	ctx.r3.s64 = ctx.r6.s64 + 5436;
	// bl 0x821fa230
	ctx.lr = 0x82662138;
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
	ctx.lr = 0x8266214C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5592
	ctx.r3.s64 = ctx.r10.s64 + 5592;
	// bl 0x821fa230
	ctx.lr = 0x82662158;
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
	ctx.lr = 0x8266216C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r7,5576
	ctx.r3.s64 = ctx.r7.s64 + 5576;
	// bl 0x821fa230
	ctx.lr = 0x82662178;
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
	ctx.lr = 0x8266218C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,5564
	ctx.r3.s64 = ctx.r4.s64 + 5564;
	// bl 0x821fa230
	ctx.lr = 0x82662198;
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
	ctx.lr = 0x826621AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5548
	ctx.r3.s64 = ctx.r9.s64 + 5548;
	// bl 0x821fa230
	ctx.lr = 0x826621B8;
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
	ctx.lr = 0x826621CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5532
	ctx.r3.s64 = ctx.r6.s64 + 5532;
	// bl 0x821fa230
	ctx.lr = 0x826621D8;
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
	ctx.lr = 0x826621EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826621F4"))) PPC_WEAK_FUNC(sub_826621F4);
PPC_FUNC_IMPL(__imp__sub_826621F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826621F8"))) PPC_WEAK_FUNC(sub_826621F8);
PPC_FUNC_IMPL(__imp__sub_826621F8) {
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
	// bl 0x82660050
	ctx.lr = 0x8266220C;
	sub_82660050(ctx, base);
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
	ctx.lr = 0x8266222C;
	sub_82691650(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r9,6492
	ctx.r4.s64 = ctx.r9.s64 + 6492;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82662244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5452
	ctx.r4.s64 = ctx.r6.s64 + 5452;
	// bl 0x82691650
	ctx.lr = 0x82662254;
	sub_82691650(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r4,r5,6464
	ctx.r4.s64 = ctx.r5.s64 + 6464;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8266226C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,5464
	ctx.r4.s64 = ctx.r9.s64 + 5464;
	// bl 0x82691650
	ctx.lr = 0x8266227C;
	sub_82691650(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r4,r8,6436
	ctx.r4.s64 = ctx.r8.s64 + 6436;
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82662294;
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

__attribute__((alias("__imp__sub_826622A8"))) PPC_WEAK_FUNC(sub_826622A8);
PPC_FUNC_IMPL(__imp__sub_826622A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x826622B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-10720
	ctx.r4.s64 = ctx.r11.s64 + -10720;
	// lwz r11,-10236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x826622D4;
	sub_82691650(ctx, base);
	// lwz r11,-10236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r10,6540
	ctx.r4.s64 = ctx.r10.s64 + 6540;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x826622F0;
	sub_82691650(ctx, base);
	// lwz r11,-10236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r9,6524
	ctx.r4.s64 = ctx.r9.s64 + 6524;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x8266230C;
	sub_82691650(ctx, base);
	// lwz r11,-10236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r8,5368
	ctx.r4.s64 = ctx.r8.s64 + 5368;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82662328;
	sub_82691650(ctx, base);
	// lwz r7,2176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// addi r29,r31,2176
	ctx.r29.s64 = ctx.r31.s64 + 2176;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r28,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r28.u32);
	// lwz r6,2180(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// stw r27,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r27.u32);
	// lwz r5,2184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// stw r26,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r26.u32);
	// lwz r4,2188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// lwz r3,2188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// lwz r10,2180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// lwz r9,2184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// lwz r11,2176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// stw r11,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r9,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r9.u32);
	// stw r10,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r10.u32);
	// stw r3,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r3.u32);
	// addi r31,r11,3998
	ctx.r31.s64 = ctx.r11.s64 + 3998;
loc_82662378:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82662394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82662378
	if (!ctx.cr0.eq) goto loc_82662378;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826623A8"))) PPC_WEAK_FUNC(sub_826623A8);
PPC_FUNC_IMPL(__imp__sub_826623A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x826623B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82661000
	ctx.lr = 0x826623C4;
	sub_82661000(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826623DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826624a0
	if (!ctx.cr6.eq) goto loc_826624A0;
	// cmpwi cr6,r31,55
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 55, ctx.xer);
	// beq cr6,0x8266243c
	if (ctx.cr6.eq) goto loc_8266243C;
	// cmpwi cr6,r31,59
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 59, ctx.xer);
	// beq cr6,0x82662410
	if (ctx.cr6.eq) goto loc_82662410;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826309e0
	ctx.lr = 0x82662408;
	sub_826309E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82662410:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lwz r10,2368(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2368);
	// addi r9,r11,28388
	ctx.r9.s64 = ctx.r11.s64 + 28388;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826624a0
	if (!ctx.cr6.eq) goto loc_826624A0;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-12456(r10)
	PPC_STORE_U8(ctx.r10.u32 + -12456, ctx.r11.u8);
	// bl 0x82650038
	ctx.lr = 0x82662434;
	sub_82650038(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8266243C:
	// li r11,52
	ctx.r11.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82661210
	ctx.lr = 0x8266244C;
	sub_82661210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826624a0
	if (ctx.cr6.eq) goto loc_826624A0;
	// bl 0x8265e550
	ctx.lr = 0x8266245C;
	sub_8265E550(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82662478
	if (!ctx.cr6.eq) goto loc_82662478;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82662478:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 262144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r5,976
	ctx.r5.s64 = ctx.r5.s64 + 976;
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826624A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826624A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826624AC"))) PPC_WEAK_FUNC(sub_826624AC);
PPC_FUNC_IMPL(__imp__sub_826624AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826624B0"))) PPC_WEAK_FUNC(sub_826624B0);
PPC_FUNC_IMPL(__imp__sub_826624B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
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

__attribute__((alias("__imp__sub_826624C4"))) PPC_WEAK_FUNC(sub_826624C4);
PPC_FUNC_IMPL(__imp__sub_826624C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826624C8"))) PPC_WEAK_FUNC(sub_826624C8);
PPC_FUNC_IMPL(__imp__sub_826624C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x826624D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r10,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r10.u64);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,24324
	ctx.r4.s64 = ctx.r11.s64 + 24324;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x8262ffe0
	ctx.lr = 0x82662504;
	sub_8262FFE0(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r9,468(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8266251C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,196(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82662530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82662548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r31,1360
	ctx.r10.s64 = ctx.r31.s64 + 1360;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82662570:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82662570
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82662570;
	// lhz r10,852(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 852);
	// addi r11,r31,848
	ctx.r11.s64 = ctx.r31.s64 + 848;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826625bc
	if (ctx.cr6.eq) goto loc_826625BC;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_826625A8:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r6,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826625a8
	if (!ctx.cr6.eq) goto loc_826625A8;
loc_826625BC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r29,r31,1152
	ctx.r29.s64 = ctx.r31.s64 + 1152;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rotlwi r8,r5,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// sth r4,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r4.u16);
	// stwx r29,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r29.u32);
	// beq cr6,0x82662618
	if (ctx.cr6.eq) goto loc_82662618;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r7,r31,944
	ctx.r7.s64 = ctx.r31.s64 + 944;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
loc_82662618:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82662630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,944(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// addi r30,r31,944
	ctx.r30.s64 = ctx.r31.s64 + 944;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8266264C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,944(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82662664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,-32111
	ctx.r28.s64 = -2104426496;
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r3,-29340(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29340);
	// bl 0x8269ec68
	ctx.lr = 0x82662674;
	sub_8269EC68(ctx, base);
	// lis r26,-32121
	ctx.r26.s64 = -2105081856;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x826626b8
	if (ctx.cr6.eq) goto loc_826626B8;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826626b8
	if (ctx.cr6.eq) goto loc_826626B8;
	// lwz r3,-10028(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x82662694;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826626b8
	if (!ctx.cr6.eq) goto loc_826626B8;
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
	ctx.lr = 0x826626B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826626B8:
	// lwz r3,-29340(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29340);
	// bl 0x8269ea88
	ctx.lr = 0x826626C0;
	sub_8269EA88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826626dc
	if (!ctx.cr6.eq) goto loc_826626DC;
	// lwz r3,-10028(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x826626D0;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826626f8
	if (ctx.cr6.eq) goto loc_826626F8;
loc_826626DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826626F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826626F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r23,1380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1380, ctx.r23.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82662714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r8,648(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 648);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8266272C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662734"))) PPC_WEAK_FUNC(sub_82662734);
PPC_FUNC_IMPL(__imp__sub_82662734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662738"))) PPC_WEAK_FUNC(sub_82662738);
PPC_FUNC_IMPL(__imp__sub_82662738) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,3998
	ctx.r30.s64 = ctx.r11.s64 + 3998;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228f920
	ctx.lr = 0x82662774;
	sub_8228F920(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// addi r9,r10,7300
	ctx.r9.s64 = ctx.r10.s64 + 7300;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82633d40
	ctx.lr = 0x82662790;
	sub_82633D40(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r31,1152
	ctx.r3.s64 = ctx.r31.s64 + 1152;
	// addi r4,r8,7280
	ctx.r4.s64 = ctx.r8.s64 + 7280;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82633d40
	ctx.lr = 0x826627A4;
	sub_82633D40(ctx, base);
	// addi r3,r31,1360
	ctx.r3.s64 = ctx.r31.s64 + 1360;
	// bl 0x821c2f70
	ctx.lr = 0x826627AC;
	sub_821C2F70(ctx, base);
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

__attribute__((alias("__imp__sub_826627C8"))) PPC_WEAK_FUNC(sub_826627C8);
PPC_FUNC_IMPL(__imp__sub_826627C8) {
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
	// bl 0x82630580
	ctx.lr = 0x826627E0;
	sub_82630580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,1360
	ctx.r3.s64 = ctx.r31.s64 + 1360;
	// bl 0x821c3048
	ctx.lr = 0x826627EC;
	sub_821C3048(ctx, base);
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

__attribute__((alias("__imp__sub_82662800"))) PPC_WEAK_FUNC(sub_82662800);
PPC_FUNC_IMPL(__imp__sub_82662800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5288
	ctx.r3.s64 = ctx.r11.s64 + 5288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266280C"))) PPC_WEAK_FUNC(sub_8266280C);
PPC_FUNC_IMPL(__imp__sub_8266280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662810"))) PPC_WEAK_FUNC(sub_82662810);
PPC_FUNC_IMPL(__imp__sub_82662810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5328
	ctx.r3.s64 = ctx.r11.s64 + 5328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266281C"))) PPC_WEAK_FUNC(sub_8266281C);
PPC_FUNC_IMPL(__imp__sub_8266281C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662820"))) PPC_WEAK_FUNC(sub_82662820);
PPC_FUNC_IMPL(__imp__sub_82662820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,8224
	ctx.r3.s64 = ctx.r11.s64 + 8224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266282C"))) PPC_WEAK_FUNC(sub_8266282C);
PPC_FUNC_IMPL(__imp__sub_8266282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662830"))) PPC_WEAK_FUNC(sub_82662830);
PPC_FUNC_IMPL(__imp__sub_82662830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,8252
	ctx.r3.s64 = ctx.r11.s64 + 8252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266283C"))) PPC_WEAK_FUNC(sub_8266283C);
PPC_FUNC_IMPL(__imp__sub_8266283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662840"))) PPC_WEAK_FUNC(sub_82662840);
PPC_FUNC_IMPL(__imp__sub_82662840) {
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
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x82646f40
	ctx.lr = 0x82662864;
	sub_82646F40(ctx, base);
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x8266286C;
	sub_8221FBC8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82662874;
	sub_8221FBC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2028
	ctx.lr = 0x8266287C;
	sub_821D2028(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662894
	if (ctx.cr6.eq) goto loc_82662894;
	// bl 0x82130588
	ctx.lr = 0x82662890;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82662894:
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

__attribute__((alias("__imp__sub_826628AC"))) PPC_WEAK_FUNC(sub_826628AC);
PPC_FUNC_IMPL(__imp__sub_826628AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826628B0"))) PPC_WEAK_FUNC(sub_826628B0);
PPC_FUNC_IMPL(__imp__sub_826628B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x826628B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r29,2176
	ctx.r31.s64 = ctx.r29.s64 + 2176;
	// addi r10,r11,8284
	ctx.r10.s64 = ctx.r11.s64 + 8284;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_826628D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826628f4
	if (ctx.cr6.eq) goto loc_826628F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826628F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826628F4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x826628d4
	if (!ctx.cr0.eq) goto loc_826628D4;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// addi r31,r31,8576
	ctx.r31.s64 = ctx.r31.s64 + 8576;
	// addi r30,r31,1152
	ctx.r30.s64 = ctx.r31.s64 + 1152;
	// lhz r11,1346(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1346);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662920
	if (ctx.cr6.eq) goto loc_82662920;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662920;
	sub_82130588(ctx, base);
loc_82662920:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662928;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r30,r31,944
	ctx.r30.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662940
	if (ctx.cr6.eq) goto loc_82662940;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662940;
	sub_82130588(ctx, base);
loc_82662940:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662948;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r30,r31,672
	ctx.r30.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662960
	if (ctx.cr6.eq) goto loc_82662960;
	// lwz r3,208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82662960;
	sub_82130588(ctx, base);
loc_82662960:
	// lhz r11,182(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662974
	if (ctx.cr6.eq) goto loc_82662974;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82662974;
	sub_82130588(ctx, base);
loc_82662974:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82633b00
	ctx.lr = 0x8266297C;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x82662984;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x8266298C;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662994;
	sub_82633B00(ctx, base);
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,6784
	ctx.r3.s64 = ctx.r3.s64 + 6784;
	// bl 0x8221fbc8
	ctx.lr = 0x826629A0;
	sub_8221FBC8(ctx, base);
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,1792
	ctx.r30.s64 = ctx.r30.s64 + 1792;
	// addi r31,r30,3600
	ctx.r31.s64 = ctx.r30.s64 + 3600;
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// lhz r11,4946(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4946);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826629c4
	if (ctx.cr6.eq) goto loc_826629C4;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x826629C4;
	sub_82130588(ctx, base);
loc_826629C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x826629CC;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r28,r31,944
	ctx.r28.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826629e4
	if (ctx.cr6.eq) goto loc_826629E4;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x826629E4;
	sub_82130588(ctx, base);
loc_826629E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x826629EC;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662a04
	if (ctx.cr6.eq) goto loc_82662A04;
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82662A04;
	sub_82130588(ctx, base);
loc_82662A04:
	// lhz r11,182(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662a18
	if (ctx.cr6.eq) goto loc_82662A18;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82662A18;
	sub_82130588(ctx, base);
loc_82662A18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662A20;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x82662A28;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x82662A30;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662A38;
	sub_82633B00(ctx, base);
	// addi r3,r30,1808
	ctx.r3.s64 = ctx.r30.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82662A40;
	sub_8221FBC8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82662A48;
	sub_8221FBC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x82662A50;
	sub_821D2028(ctx, base);
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,-3200
	ctx.r30.s64 = ctx.r30.s64 + -3200;
	// addi r31,r30,3600
	ctx.r31.s64 = ctx.r30.s64 + 3600;
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// lhz r11,4946(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4946);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662a74
	if (ctx.cr6.eq) goto loc_82662A74;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662A74;
	sub_82130588(ctx, base);
loc_82662A74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662A7C;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r28,r31,944
	ctx.r28.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662a94
	if (ctx.cr6.eq) goto loc_82662A94;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662A94;
	sub_82130588(ctx, base);
loc_82662A94:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662A9C;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662ab4
	if (ctx.cr6.eq) goto loc_82662AB4;
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82662AB4;
	sub_82130588(ctx, base);
loc_82662AB4:
	// lhz r11,182(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662ac8
	if (ctx.cr6.eq) goto loc_82662AC8;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82662AC8;
	sub_82130588(ctx, base);
loc_82662AC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662AD0;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x82662AD8;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x82662AE0;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662AE8;
	sub_82633B00(ctx, base);
	// addi r3,r30,1808
	ctx.r3.s64 = ctx.r30.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82662AF0;
	sub_8221FBC8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82662AF8;
	sub_8221FBC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x82662B00;
	sub_821D2028(ctx, base);
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,-8208
	ctx.r30.s64 = ctx.r30.s64 + -8208;
	// addi r31,r30,3600
	ctx.r31.s64 = ctx.r30.s64 + 3600;
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// lhz r11,4946(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4946);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662b24
	if (ctx.cr6.eq) goto loc_82662B24;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662B24;
	sub_82130588(ctx, base);
loc_82662B24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662B2C;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r28,r31,944
	ctx.r28.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662b44
	if (ctx.cr6.eq) goto loc_82662B44;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662B44;
	sub_82130588(ctx, base);
loc_82662B44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662B4C;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662b64
	if (ctx.cr6.eq) goto loc_82662B64;
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82662B64;
	sub_82130588(ctx, base);
loc_82662B64:
	// lhz r11,182(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662b78
	if (ctx.cr6.eq) goto loc_82662B78;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82662B78;
	sub_82130588(ctx, base);
loc_82662B78:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662B80;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x82662B88;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x82662B90;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662B98;
	sub_82633B00(ctx, base);
	// addi r3,r30,1808
	ctx.r3.s64 = ctx.r30.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82662BA0;
	sub_8221FBC8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82662BA8;
	sub_8221FBC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x82662BB0;
	sub_821D2028(ctx, base);
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,-13200
	ctx.r30.s64 = ctx.r30.s64 + -13200;
	// addi r31,r30,3600
	ctx.r31.s64 = ctx.r30.s64 + 3600;
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// lhz r11,4946(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4946);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662bd4
	if (ctx.cr6.eq) goto loc_82662BD4;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662BD4;
	sub_82130588(ctx, base);
loc_82662BD4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662BDC;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r28,r31,944
	ctx.r28.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662bf4
	if (ctx.cr6.eq) goto loc_82662BF4;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662BF4;
	sub_82130588(ctx, base);
loc_82662BF4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662BFC;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662c14
	if (ctx.cr6.eq) goto loc_82662C14;
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82662C14;
	sub_82130588(ctx, base);
loc_82662C14:
	// lhz r11,182(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662c28
	if (ctx.cr6.eq) goto loc_82662C28;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82662C28;
	sub_82130588(ctx, base);
loc_82662C28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662C30;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x82662C38;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x82662C40;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662C48;
	sub_82633B00(ctx, base);
	// addi r3,r30,1808
	ctx.r3.s64 = ctx.r30.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82662C50;
	sub_8221FBC8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82662C58;
	sub_8221FBC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x82662C60;
	sub_821D2028(ctx, base);
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,-18192
	ctx.r30.s64 = ctx.r30.s64 + -18192;
	// addi r31,r30,3600
	ctx.r31.s64 = ctx.r30.s64 + 3600;
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// lhz r11,4946(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4946);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662c84
	if (ctx.cr6.eq) goto loc_82662C84;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662C84;
	sub_82130588(ctx, base);
loc_82662C84:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662C8C;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r28,r31,944
	ctx.r28.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662ca4
	if (ctx.cr6.eq) goto loc_82662CA4;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662CA4;
	sub_82130588(ctx, base);
loc_82662CA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662CAC;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662cc4
	if (ctx.cr6.eq) goto loc_82662CC4;
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82662CC4;
	sub_82130588(ctx, base);
loc_82662CC4:
	// lhz r11,182(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662cd8
	if (ctx.cr6.eq) goto loc_82662CD8;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82662CD8;
	sub_82130588(ctx, base);
loc_82662CD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662CE0;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x82662CE8;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x82662CF0;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662CF8;
	sub_82633B00(ctx, base);
	// addi r3,r30,1808
	ctx.r3.s64 = ctx.r30.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82662D00;
	sub_8221FBC8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82662D08;
	sub_8221FBC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x82662D10;
	sub_821D2028(ctx, base);
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,-23184
	ctx.r30.s64 = ctx.r30.s64 + -23184;
	// addi r31,r30,3600
	ctx.r31.s64 = ctx.r30.s64 + 3600;
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// lhz r11,4946(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4946);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662d34
	if (ctx.cr6.eq) goto loc_82662D34;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662D34;
	sub_82130588(ctx, base);
loc_82662D34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662D3C;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r28,r31,944
	ctx.r28.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662d54
	if (ctx.cr6.eq) goto loc_82662D54;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662D54;
	sub_82130588(ctx, base);
loc_82662D54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662D5C;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662d74
	if (ctx.cr6.eq) goto loc_82662D74;
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82662D74;
	sub_82130588(ctx, base);
loc_82662D74:
	// lhz r11,182(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662d88
	if (ctx.cr6.eq) goto loc_82662D88;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82662D88;
	sub_82130588(ctx, base);
loc_82662D88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662D90;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x82662D98;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x82662DA0;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662DA8;
	sub_82633B00(ctx, base);
	// addi r3,r30,1808
	ctx.r3.s64 = ctx.r30.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82662DB0;
	sub_8221FBC8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82662DB8;
	sub_8221FBC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x82662DC0;
	sub_821D2028(ctx, base);
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,-28176
	ctx.r30.s64 = ctx.r30.s64 + -28176;
	// addi r31,r30,3600
	ctx.r31.s64 = ctx.r30.s64 + 3600;
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// lhz r11,4946(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4946);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662de4
	if (ctx.cr6.eq) goto loc_82662DE4;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662DE4;
	sub_82130588(ctx, base);
loc_82662DE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662DEC;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r28,r31,944
	ctx.r28.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662e04
	if (ctx.cr6.eq) goto loc_82662E04;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662E04;
	sub_82130588(ctx, base);
loc_82662E04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662E0C;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662e24
	if (ctx.cr6.eq) goto loc_82662E24;
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82662E24;
	sub_82130588(ctx, base);
loc_82662E24:
	// lhz r11,182(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662e38
	if (ctx.cr6.eq) goto loc_82662E38;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82662E38;
	sub_82130588(ctx, base);
loc_82662E38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662E40;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x82662E48;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x82662E50;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662E58;
	sub_82633B00(ctx, base);
	// addi r3,r30,1808
	ctx.r3.s64 = ctx.r30.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82662E60;
	sub_8221FBC8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82662E68;
	sub_8221FBC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x82662E70;
	sub_821D2028(ctx, base);
	// addi r30,r29,32368
	ctx.r30.s64 = ctx.r29.s64 + 32368;
	// addi r31,r30,3600
	ctx.r31.s64 = ctx.r30.s64 + 3600;
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// lhz r11,4946(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4946);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662e90
	if (ctx.cr6.eq) goto loc_82662E90;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662E90;
	sub_82130588(ctx, base);
loc_82662E90:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662E98;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r28,r31,944
	ctx.r28.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662eb0
	if (ctx.cr6.eq) goto loc_82662EB0;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662EB0;
	sub_82130588(ctx, base);
loc_82662EB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662EB8;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662ed0
	if (ctx.cr6.eq) goto loc_82662ED0;
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82662ED0;
	sub_82130588(ctx, base);
loc_82662ED0:
	// lhz r11,182(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662ee4
	if (ctx.cr6.eq) goto loc_82662EE4;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82662EE4;
	sub_82130588(ctx, base);
loc_82662EE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662EEC;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x82662EF4;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x82662EFC;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662F04;
	sub_82633B00(ctx, base);
	// addi r3,r30,1808
	ctx.r3.s64 = ctx.r30.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82662F0C;
	sub_8221FBC8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82662F14;
	sub_8221FBC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x82662F1C;
	sub_821D2028(ctx, base);
	// addi r30,r29,27376
	ctx.r30.s64 = ctx.r29.s64 + 27376;
	// lhz r11,32322(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32322);
	// addi r31,r30,3600
	ctx.r31.s64 = ctx.r30.s64 + 3600;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// beq cr6,0x82662f3c
	if (ctx.cr6.eq) goto loc_82662F3C;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662F3C;
	sub_82130588(ctx, base);
loc_82662F3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662F44;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r28,r31,944
	ctx.r28.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662f5c
	if (ctx.cr6.eq) goto loc_82662F5C;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662F5C;
	sub_82130588(ctx, base);
loc_82662F5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662F64;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662f7c
	if (ctx.cr6.eq) goto loc_82662F7C;
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82662F7C;
	sub_82130588(ctx, base);
loc_82662F7C:
	// lhz r11,182(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662f90
	if (ctx.cr6.eq) goto loc_82662F90;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82662F90;
	sub_82130588(ctx, base);
loc_82662F90:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662F98;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x82662FA0;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x82662FA8;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662FB0;
	sub_82633B00(ctx, base);
	// addi r3,r30,1808
	ctx.r3.s64 = ctx.r30.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82662FB8;
	sub_8221FBC8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82662FC0;
	sub_8221FBC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x82662FC8;
	sub_821D2028(ctx, base);
	// addi r30,r29,22384
	ctx.r30.s64 = ctx.r29.s64 + 22384;
	// lhz r11,27330(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 27330);
	// addi r31,r30,3600
	ctx.r31.s64 = ctx.r30.s64 + 3600;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r31,1152
	ctx.r28.s64 = ctx.r31.s64 + 1152;
	// beq cr6,0x82662fe8
	if (ctx.cr6.eq) goto loc_82662FE8;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82662FE8;
	sub_82130588(ctx, base);
loc_82662FE8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82662FF0;
	sub_82633B00(ctx, base);
	// lhz r11,1138(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1138);
	// addi r28,r31,944
	ctx.r28.s64 = ctx.r31.s64 + 944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663008
	if (ctx.cr6.eq) goto loc_82663008;
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// bl 0x82130588
	ctx.lr = 0x82663008;
	sub_82130588(ctx, base);
loc_82663008:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82663010;
	sub_82633B00(ctx, base);
	// lhz r11,886(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 886);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663028
	if (ctx.cr6.eq) goto loc_82663028;
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82663028;
	sub_82130588(ctx, base);
loc_82663028:
	// lhz r11,182(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266303c
	if (ctx.cr6.eq) goto loc_8266303C;
	// lwz r3,176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x8266303C;
	sub_82130588(ctx, base);
loc_8266303C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82633b00
	ctx.lr = 0x82663044;
	sub_82633B00(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82633b00
	ctx.lr = 0x8266304C;
	sub_82633B00(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82633b00
	ctx.lr = 0x82663054;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x8266305C;
	sub_82633B00(ctx, base);
	// addi r3,r30,1808
	ctx.r3.s64 = ctx.r30.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82663064;
	sub_8221FBC8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x8266306C;
	sub_8221FBC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2028
	ctx.lr = 0x82663074;
	sub_821D2028(ctx, base);
	// addi r31,r29,17392
	ctx.r31.s64 = ctx.r29.s64 + 17392;
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x82646f40
	ctx.lr = 0x82663080;
	sub_82646F40(ctx, base);
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x82663088;
	sub_8221FBC8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x82663090;
	sub_8221FBC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2028
	ctx.lr = 0x82663098;
	sub_821D2028(ctx, base);
	// addi r31,r29,12400
	ctx.r31.s64 = ctx.r29.s64 + 12400;
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x82646f40
	ctx.lr = 0x826630A4;
	sub_82646F40(ctx, base);
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x826630AC;
	sub_8221FBC8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x826630B4;
	sub_8221FBC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2028
	ctx.lr = 0x826630BC;
	sub_821D2028(ctx, base);
	// addi r31,r29,7408
	ctx.r31.s64 = ctx.r29.s64 + 7408;
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x82646f40
	ctx.lr = 0x826630C8;
	sub_82646F40(ctx, base);
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x826630D0;
	sub_8221FBC8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x826630D8;
	sub_8221FBC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2028
	ctx.lr = 0x826630E0;
	sub_821D2028(ctx, base);
	// addi r31,r29,2416
	ctx.r31.s64 = ctx.r29.s64 + 2416;
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x82646f40
	ctx.lr = 0x826630EC;
	sub_82646F40(ctx, base);
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// bl 0x8221fbc8
	ctx.lr = 0x826630F4;
	sub_8221FBC8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8221fbc8
	ctx.lr = 0x826630FC;
	sub_8221FBC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2028
	ctx.lr = 0x82663104;
	sub_821D2028(ctx, base);
	// addi r3,r29,2192
	ctx.r3.s64 = ctx.r29.s64 + 2192;
	// bl 0x82633b00
	ctx.lr = 0x8266310C;
	sub_82633B00(ctx, base);
	// lhz r11,2134(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2134);
	// addi r31,r29,1920
	ctx.r31.s64 = ctx.r29.s64 + 1920;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663124
	if (ctx.cr6.eq) goto loc_82663124;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82663124;
	sub_82130588(ctx, base);
loc_82663124:
	// lhz r11,182(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663138
	if (ctx.cr6.eq) goto loc_82663138;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82663138;
	sub_82130588(ctx, base);
loc_82663138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82663140;
	sub_82633B00(ctx, base);
	// lhz r11,1878(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1878);
	// addi r31,r29,1664
	ctx.r31.s64 = ctx.r29.s64 + 1664;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663158
	if (ctx.cr6.eq) goto loc_82663158;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x82663158;
	sub_82130588(ctx, base);
loc_82663158:
	// lhz r11,182(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266316c
	if (ctx.cr6.eq) goto loc_8266316C;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x8266316C;
	sub_82130588(ctx, base);
loc_8266316C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82663174;
	sub_82633B00(ctx, base);
	// lhz r11,1622(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1622);
	// addi r31,r29,1408
	ctx.r31.s64 = ctx.r29.s64 + 1408;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266318c
	if (ctx.cr6.eq) goto loc_8266318C;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x8266318C;
	sub_82130588(ctx, base);
loc_8266318C:
	// lhz r11,182(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826631a0
	if (ctx.cr6.eq) goto loc_826631A0;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x826631A0;
	sub_82130588(ctx, base);
loc_826631A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x826631A8;
	sub_82633B00(ctx, base);
	// lhz r11,1366(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1366);
	// addi r31,r29,1152
	ctx.r31.s64 = ctx.r29.s64 + 1152;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826631c0
	if (ctx.cr6.eq) goto loc_826631C0;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x82130588
	ctx.lr = 0x826631C0;
	sub_82130588(ctx, base);
loc_826631C0:
	// lhz r11,182(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826631d4
	if (ctx.cr6.eq) goto loc_826631D4;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x826631D4;
	sub_82130588(ctx, base);
loc_826631D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x826631DC;
	sub_82633B00(ctx, base);
	// addi r3,r29,960
	ctx.r3.s64 = ctx.r29.s64 + 960;
	// bl 0x82633b00
	ctx.lr = 0x826631E4;
	sub_82633B00(ctx, base);
	// addi r3,r29,768
	ctx.r3.s64 = ctx.r29.s64 + 768;
	// bl 0x82633b00
	ctx.lr = 0x826631EC;
	sub_82633B00(ctx, base);
	// addi r3,r29,576
	ctx.r3.s64 = ctx.r29.s64 + 576;
	// bl 0x82633b00
	ctx.lr = 0x826631F4;
	sub_82633B00(ctx, base);
	// addi r3,r29,384
	ctx.r3.s64 = ctx.r29.s64 + 384;
	// bl 0x82633b00
	ctx.lr = 0x826631FC;
	sub_82633B00(ctx, base);
	// lhz r11,362(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 362);
	// addi r31,r29,176
	ctx.r31.s64 = ctx.r29.s64 + 176;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663214
	if (ctx.cr6.eq) goto loc_82663214;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82130588
	ctx.lr = 0x82663214;
	sub_82130588(ctx, base);
loc_82663214:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x8266321C;
	sub_82633B00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82633b00
	ctx.lr = 0x82663224;
	sub_82633B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266322C"))) PPC_WEAK_FUNC(sub_8266322C);
PPC_FUNC_IMPL(__imp__sub_8266322C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663230"))) PPC_WEAK_FUNC(sub_82663230);
PPC_FUNC_IMPL(__imp__sub_82663230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82663238;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r11,-21500
	ctx.r30.s64 = ctx.r11.s64 + -21500;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r29,-24180(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24180);
	// bl 0x823db670
	ctx.lr = 0x82663264;
	sub_823DB670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,10248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10248);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821fd7c0
	ctx.lr = 0x82663278;
	sub_821FD7C0(ctx, base);
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r9,10248(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// bne cr6,0x826632ac
	if (!ctx.cr6.eq) goto loc_826632AC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_826632AC:
	// bl 0x822031a8
	ctx.lr = 0x826632B0;
	sub_822031A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826632BC"))) PPC_WEAK_FUNC(sub_826632BC);
PPC_FUNC_IMPL(__imp__sub_826632BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826632C0"))) PPC_WEAK_FUNC(sub_826632C0);
PPC_FUNC_IMPL(__imp__sub_826632C0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,8972
	ctx.r3.s64 = ctx.r11.s64 + 8972;
	// bl 0x82663230
	ctx.lr = 0x826632DC;
	sub_82663230(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r10,8956
	ctx.r3.s64 = ctx.r10.s64 + 8956;
	// bl 0x82663230
	ctx.lr = 0x826632EC;
	sub_82663230(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r9,8940
	ctx.r3.s64 = ctx.r9.s64 + 8940;
	// bl 0x82663230
	ctx.lr = 0x826632FC;
	sub_82663230(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82663320
	if (ctx.cr6.eq) goto loc_82663320;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82663320
	if (ctx.cr6.eq) goto loc_82663320;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82663350
	if (!ctx.cr6.eq) goto loc_82663350;
loc_82663320:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,8932
	ctx.r4.s64 = ctx.r10.s64 + 8932;
	// lwz r3,-12440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12440);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82663344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82663354
	if (!ctx.cr6.eq) goto loc_82663354;
loc_82663350:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82663354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663364"))) PPC_WEAK_FUNC(sub_82663364);
PPC_FUNC_IMPL(__imp__sub_82663364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663368"))) PPC_WEAK_FUNC(sub_82663368);
PPC_FUNC_IMPL(__imp__sub_82663368) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r31,r11,-21500
	ctx.r31.s64 = ctx.r11.s64 + -21500;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r9,8988
	ctx.r4.s64 = ctx.r9.s64 + 8988;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r30,-24180(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24180);
	// bl 0x823db670
	ctx.lr = 0x826633A4;
	sub_823DB670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,10248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10248);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821fd7c0
	ctx.lr = 0x826633B8;
	sub_821FD7C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r8,10248(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10248);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826633f4
	if (ctx.cr6.eq) goto loc_826633F4;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// b 0x826633f8
	goto loc_826633F8;
loc_826633F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826633F8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
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

__attribute__((alias("__imp__sub_82663410"))) PPC_WEAK_FUNC(sub_82663410);
PPC_FUNC_IMPL(__imp__sub_82663410) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r31,r11,-21500
	ctx.r31.s64 = ctx.r11.s64 + -21500;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r9,9000
	ctx.r4.s64 = ctx.r9.s64 + 9000;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r30,-24180(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24180);
	// bl 0x823db670
	ctx.lr = 0x8266344C;
	sub_823DB670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,10248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10248);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821fd7c0
	ctx.lr = 0x82663460;
	sub_821FD7C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r8,10248(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10248);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266349c
	if (ctx.cr6.eq) goto loc_8266349C;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// b 0x826634a0
	goto loc_826634A0;
loc_8266349C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826634A0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
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

__attribute__((alias("__imp__sub_826634B8"))) PPC_WEAK_FUNC(sub_826634B8);
PPC_FUNC_IMPL(__imp__sub_826634B8) {
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
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x826634D8;
	sub_82207138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82663528
	if (!ctx.cr6.eq) goto loc_82663528;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826634F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82663528
	if (ctx.cr6.eq) goto loc_82663528;
	// bl 0x82663368
	ctx.lr = 0x82663508;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663528
	if (!ctx.cr6.eq) goto loc_82663528;
	// bl 0x82663410
	ctx.lr = 0x82663518;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266352c
	if (ctx.cr6.eq) goto loc_8266352C;
loc_82663528:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266352C:
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

__attribute__((alias("__imp__sub_82663540"))) PPC_WEAK_FUNC(sub_82663540);
PPC_FUNC_IMPL(__imp__sub_82663540) {
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
	// bl 0x82663368
	ctx.lr = 0x82663550;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663584
	if (!ctx.cr6.eq) goto loc_82663584;
	// bl 0x82663410
	ctx.lr = 0x82663560;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663584
	if (!ctx.cr6.eq) goto loc_82663584;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9040
	ctx.r3.s64 = ctx.r11.s64 + 9040;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82663584:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9012
	ctx.r3.s64 = ctx.r11.s64 + 9012;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266359C"))) PPC_WEAK_FUNC(sub_8266359C);
PPC_FUNC_IMPL(__imp__sub_8266359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826635A0"))) PPC_WEAK_FUNC(sub_826635A0);
PPC_FUNC_IMPL(__imp__sub_826635A0) {
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
	// bl 0x82663368
	ctx.lr = 0x826635B0;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826635e4
	if (!ctx.cr6.eq) goto loc_826635E4;
	// bl 0x82663410
	ctx.lr = 0x826635C0;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826635e4
	if (!ctx.cr6.eq) goto loc_826635E4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9092
	ctx.r3.s64 = ctx.r11.s64 + 9092;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826635E4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9064
	ctx.r3.s64 = ctx.r11.s64 + 9064;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826635FC"))) PPC_WEAK_FUNC(sub_826635FC);
PPC_FUNC_IMPL(__imp__sub_826635FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663600"))) PPC_WEAK_FUNC(sub_82663600);
PPC_FUNC_IMPL(__imp__sub_82663600) {
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
	// bl 0x82663368
	ctx.lr = 0x82663610;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663624
	if (!ctx.cr6.eq) goto loc_82663624;
	// bl 0x82663410
	ctx.lr = 0x82663620;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_82663624:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5104
	ctx.r3.s64 = ctx.r11.s64 + 5104;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266363C"))) PPC_WEAK_FUNC(sub_8266363C);
PPC_FUNC_IMPL(__imp__sub_8266363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663640"))) PPC_WEAK_FUNC(sub_82663640);
PPC_FUNC_IMPL(__imp__sub_82663640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82663648;
	__savegprlr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82660310
	ctx.lr = 0x82663654;
	sub_82660310(ctx, base);
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,-10028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x8266366C;
	sub_82641CB0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,24348
	ctx.r4.s64 = ctx.r11.s64 + 24348;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// bl 0x8262ffe0
	ctx.lr = 0x82663680;
	sub_8262FFE0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5436
	ctx.r3.s64 = ctx.r10.s64 + 5436;
	// bl 0x821fa230
	ctx.lr = 0x8266368C;
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
	ctx.lr = 0x826636A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r3,r7,5492
	ctx.r3.s64 = ctx.r7.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x826636AC;
	sub_821FA230(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-10028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10028);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82207138
	ctx.lr = 0x826636BC;
	sub_82207138(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826636D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5452
	ctx.r3.s64 = ctx.r5.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x826636DC;
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
	ctx.lr = 0x826636F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5520
	ctx.r3.s64 = ctx.r9.s64 + 5520;
	// bl 0x821fa230
	ctx.lr = 0x826636FC;
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
	ctx.lr = 0x82663710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82663834
	if (ctx.cr6.eq) goto loc_82663834;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r11,-21500
	ctx.r30.s64 = ctx.r11.s64 + -21500;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r9,9120
	ctx.r4.s64 = ctx.r9.s64 + 9120;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r29,-24180(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24180);
	// bl 0x823db670
	ctx.lr = 0x82663744;
	sub_823DB670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,10248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10248);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821fd7c0
	ctx.lr = 0x82663758;
	sub_821FD7C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r8,10248(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10248);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r7,88(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826637ac
	if (ctx.cr6.eq) goto loc_826637AC;
	// lwz r3,-10028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x8266378C;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826637ac
	if (!ctx.cr6.eq) goto loc_826637AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5700
	ctx.r3.s64 = ctx.r11.s64 + 5700;
	// bl 0x821fa230
	ctx.lr = 0x826637A4;
	sub_821FA230(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x826637bc
	goto loc_826637BC;
loc_826637AC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5700
	ctx.r3.s64 = ctx.r11.s64 + 5700;
	// bl 0x821fa230
	ctx.lr = 0x826637B8;
	sub_821FA230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_826637BC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826637CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// bl 0x821fa230
	ctx.lr = 0x826637D8;
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
	ctx.lr = 0x826637EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5408
	ctx.r3.s64 = ctx.r8.s64 + 5408;
	// bl 0x821fa230
	ctx.lr = 0x826637F8;
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
	ctx.lr = 0x8266380C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5756
	ctx.r3.s64 = ctx.r5.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x82663818;
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
	ctx.lr = 0x8266382C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82663834:
	// bl 0x82387a18
	ctx.lr = 0x82663838;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663858
	if (!ctx.cr6.eq) goto loc_82663858;
	// bl 0x82660230
	ctx.lr = 0x82663848;
	sub_82660230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266385c
	if (!ctx.cr6.eq) goto loc_8266385C;
loc_82663858:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8266385C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x82663868;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8266387C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663884"))) PPC_WEAK_FUNC(sub_82663884);
PPC_FUNC_IMPL(__imp__sub_82663884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663888"))) PPC_WEAK_FUNC(sub_82663888);
PPC_FUNC_IMPL(__imp__sub_82663888) {
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
	// bl 0x82663368
	ctx.lr = 0x82663898;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826638cc
	if (!ctx.cr6.eq) goto loc_826638CC;
	// bl 0x82663410
	ctx.lr = 0x826638A8;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826638cc
	if (!ctx.cr6.eq) goto loc_826638CC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826638CC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,4972
	ctx.r3.s64 = ctx.r11.s64 + 4972;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826638E4"))) PPC_WEAK_FUNC(sub_826638E4);
PPC_FUNC_IMPL(__imp__sub_826638E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826638E8"))) PPC_WEAK_FUNC(sub_826638E8);
PPC_FUNC_IMPL(__imp__sub_826638E8) {
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
	// bl 0x82663368
	ctx.lr = 0x826638F8;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266392c
	if (!ctx.cr6.eq) goto loc_8266392C;
	// bl 0x82663410
	ctx.lr = 0x82663908;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266392c
	if (!ctx.cr6.eq) goto loc_8266392C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9156
	ctx.r3.s64 = ctx.r11.s64 + 9156;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8266392C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663944"))) PPC_WEAK_FUNC(sub_82663944);
PPC_FUNC_IMPL(__imp__sub_82663944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663948"))) PPC_WEAK_FUNC(sub_82663948);
PPC_FUNC_IMPL(__imp__sub_82663948) {
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
	ctx.lr = 0x82663964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826639a4
	if (ctx.cr6.eq) goto loc_826639A4;
	// bl 0x82663368
	ctx.lr = 0x82663974;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663990
	if (!ctx.cr6.eq) goto loc_82663990;
	// bl 0x82663410
	ctx.lr = 0x82663984;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826639a4
	if (ctx.cr6.eq) goto loc_826639A4;
loc_82663990:
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
loc_826639A4:
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

__attribute__((alias("__imp__sub_826639B8"))) PPC_WEAK_FUNC(sub_826639B8);
PPC_FUNC_IMPL(__imp__sub_826639B8) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826639E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82663b7c
	if (ctx.cr6.eq) goto loc_82663B7C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// bl 0x821fa230
	ctx.lr = 0x826639F8;
	sub_821FA230(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82663368
	ctx.lr = 0x82663A00;
	sub_82663368(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82663a9c
	if (!ctx.cr6.eq) goto loc_82663A9C;
	// bl 0x82663410
	ctx.lr = 0x82663A10;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663a9c
	if (!ctx.cr6.eq) goto loc_82663A9C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5520
	ctx.r3.s64 = ctx.r11.s64 + 5520;
	// bl 0x821fa230
	ctx.lr = 0x82663A28;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663A34;
	sub_8268CC80(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5756
	ctx.r3.s64 = ctx.r10.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x82663A40;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663A4C;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5504
	ctx.r3.s64 = ctx.r9.s64 + 5504;
	// bl 0x821fa230
	ctx.lr = 0x82663A58;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663A64;
	sub_8268CC80(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5492
	ctx.r3.s64 = ctx.r8.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x82663A70;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663A7C;
	sub_8268CC80(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82663A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x82663b00
	goto loc_82663B00;
loc_82663A9C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x82663AA8;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663AB4;
	sub_8268CC80(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5504
	ctx.r3.s64 = ctx.r10.s64 + 5504;
	// bl 0x821fa230
	ctx.lr = 0x82663AC0;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663ACC;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5492
	ctx.r3.s64 = ctx.r9.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x82663AD8;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663AE4;
	sub_8268CC80(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82663AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
loc_82663B00:
	// beq cr6,0x82663b1c
	if (ctx.cr6.eq) goto loc_82663B1C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// bl 0x821fa230
	ctx.lr = 0x82663B10;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663B1C;
	sub_8268CC80(ctx, base);
loc_82663B1C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// bl 0x821fa230
	ctx.lr = 0x82663B28;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663B34;
	sub_8268CC80(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5408
	ctx.r3.s64 = ctx.r10.s64 + 5408;
	// bl 0x821fa230
	ctx.lr = 0x82663B40;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663B4C;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5652
	ctx.r3.s64 = ctx.r9.s64 + 5652;
	// bl 0x821fa230
	ctx.lr = 0x82663B58;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663B64;
	sub_8268CC80(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5640
	ctx.r3.s64 = ctx.r8.s64 + 5640;
	// bl 0x821fa230
	ctx.lr = 0x82663B70;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82663B7C;
	sub_8268CC80(ctx, base);
loc_82663B7C:
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

__attribute__((alias("__imp__sub_82663B94"))) PPC_WEAK_FUNC(sub_82663B94);
PPC_FUNC_IMPL(__imp__sub_82663B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663B98"))) PPC_WEAK_FUNC(sub_82663B98);
PPC_FUNC_IMPL(__imp__sub_82663B98) {
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
	ctx.lr = 0x82663BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82663bf8
	if (ctx.cr6.eq) goto loc_82663BF8;
	// bl 0x82663368
	ctx.lr = 0x82663BC4;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663be0
	if (!ctx.cr6.eq) goto loc_82663BE0;
	// bl 0x82663410
	ctx.lr = 0x82663BD4;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663bf8
	if (ctx.cr6.eq) goto loc_82663BF8;
loc_82663BE0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9204
	ctx.r3.s64 = ctx.r11.s64 + 9204;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82663BF8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9180
	ctx.r3.s64 = ctx.r11.s64 + 9180;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663C10"))) PPC_WEAK_FUNC(sub_82663C10);
PPC_FUNC_IMPL(__imp__sub_82663C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82663C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82660050
	ctx.lr = 0x82663C20;
	sub_82660050(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82663368
	ctx.lr = 0x82663C30;
	sub_82663368(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82663c50
	if (!ctx.cr6.eq) goto loc_82663C50;
	// bl 0x82663410
	ctx.lr = 0x82663C40;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82663c54
	if (ctx.cr6.eq) goto loc_82663C54;
loc_82663C50:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82663C54:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,9364
	ctx.r29.s64 = ctx.r11.s64 + 9364;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r30,r10,9340
	ctx.r30.s64 = ctx.r10.s64 + 9340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5756
	ctx.r4.s64 = ctx.r11.s64 + 5756;
	// bne cr6,0x82663cbc
	if (!ctx.cr6.eq) goto loc_82663CBC;
	// bl 0x82691650
	ctx.lr = 0x82663C84;
	sub_82691650(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82663C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,5492
	ctx.r4.s64 = ctx.r8.s64 + 5492;
	// bl 0x82691650
	ctx.lr = 0x82663CA8;
	sub_82691650(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// b 0x82663cfc
	goto loc_82663CFC;
loc_82663CBC:
	// bl 0x82691650
	ctx.lr = 0x82663CC0;
	sub_82691650(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,5788
	ctx.r4.s64 = ctx.r10.s64 + 5788;
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82663CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,5492
	ctx.r4.s64 = ctx.r7.s64 + 5492;
	// bl 0x82691650
	ctx.lr = 0x82663CE8;
	sub_82691650(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r4,r6,9316
	ctx.r4.s64 = ctx.r6.s64 + 9316;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82663CFC:
	// bctrl 
	ctx.lr = 0x82663D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5464
	ctx.r4.s64 = ctx.r11.s64 + 5464;
	// bl 0x82691650
	ctx.lr = 0x82663D10;
	sub_82691650(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82663D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,5504
	ctx.r4.s64 = ctx.r8.s64 + 5504;
	// bl 0x82691650
	ctx.lr = 0x82663D34;
	sub_82691650(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82663D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,5452
	ctx.r4.s64 = ctx.r5.s64 + 5452;
	// bl 0x82691650
	ctx.lr = 0x82663D58;
	sub_82691650(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82663D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,5520
	ctx.r4.s64 = ctx.r9.s64 + 5520;
	// bl 0x82691650
	ctx.lr = 0x82663D7C;
	sub_82691650(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r4,r8,9292
	ctx.r4.s64 = ctx.r8.s64 + 9292;
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82663D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,6160
	ctx.r4.s64 = ctx.r5.s64 + 6160;
	// bl 0x82691650
	ctx.lr = 0x82663DA4;
	sub_82691650(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r4,r4,9264
	ctx.r4.s64 = ctx.r4.s64 + 9264;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82663DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,5664
	ctx.r4.s64 = ctx.r9.s64 + 5664;
	// bl 0x82691650
	ctx.lr = 0x82663DCC;
	sub_82691650(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r4,r8,9236
	ctx.r4.s64 = ctx.r8.s64 + 9236;
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82663DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663DEC"))) PPC_WEAK_FUNC(sub_82663DEC);
PPC_FUNC_IMPL(__imp__sub_82663DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663DF0"))) PPC_WEAK_FUNC(sub_82663DF0);
PPC_FUNC_IMPL(__imp__sub_82663DF0) {
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
	// bl 0x82663368
	ctx.lr = 0x82663E08;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663e28
	if (!ctx.cr6.eq) goto loc_82663E28;
	// bl 0x82663410
	ctx.lr = 0x82663E18;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82663e2c
	if (ctx.cr6.eq) goto loc_82663E2C;
loc_82663E28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82663E2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663e50
	if (ctx.cr6.eq) goto loc_82663E50;
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
loc_82663E50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82663E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82663E88"))) PPC_WEAK_FUNC(sub_82663E88);
PPC_FUNC_IMPL(__imp__sub_82663E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82663E90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82660050
	ctx.lr = 0x82663E98;
	sub_82660050(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82663368
	ctx.lr = 0x82663EA8;
	sub_82663368(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82663ec8
	if (!ctx.cr6.eq) goto loc_82663EC8;
	// bl 0x82663410
	ctx.lr = 0x82663EB8;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663ecc
	if (ctx.cr6.eq) goto loc_82663ECC;
loc_82663EC8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82663ECC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,6160
	ctx.r4.s64 = ctx.r11.s64 + 6160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691650
	ctx.lr = 0x82663EE0;
	sub_82691650(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,9480
	ctx.r30.s64 = ctx.r10.s64 + 9480;
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82663EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,5664
	ctx.r4.s64 = ctx.r7.s64 + 5664;
	// bl 0x82691650
	ctx.lr = 0x82663F0C;
	sub_82691650(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,340(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82663F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,5452
	ctx.r4.s64 = ctx.r4.s64 + 5452;
	// bl 0x82691650
	ctx.lr = 0x82663F30;
	sub_82691650(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,9456
	ctx.r30.s64 = ctx.r11.s64 + 9456;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82663F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// addi r29,r11,9436
	ctx.r29.s64 = ctx.r11.s64 + 9436;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5756
	ctx.r4.s64 = ctx.r11.s64 + 5756;
	// bne cr6,0x82663fa8
	if (!ctx.cr6.eq) goto loc_82663FA8;
	// bl 0x82691650
	ctx.lr = 0x82663F70;
	sub_82691650(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82663F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,5492
	ctx.r4.s64 = ctx.r8.s64 + 5492;
	// bl 0x82691650
	ctx.lr = 0x82663F94;
	sub_82691650(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// b 0x82663fe8
	goto loc_82663FE8;
loc_82663FA8:
	// bl 0x82691650
	ctx.lr = 0x82663FAC;
	sub_82691650(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,5788
	ctx.r4.s64 = ctx.r10.s64 + 5788;
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82663FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,5492
	ctx.r4.s64 = ctx.r7.s64 + 5492;
	// bl 0x82691650
	ctx.lr = 0x82663FD4;
	sub_82691650(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r4,r6,9412
	ctx.r4.s64 = ctx.r6.s64 + 9412;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82663FE8:
	// bctrl 
	ctx.lr = 0x82663FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5464
	ctx.r4.s64 = ctx.r11.s64 + 5464;
	// bl 0x82691650
	ctx.lr = 0x82663FFC;
	sub_82691650(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82664010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,5504
	ctx.r4.s64 = ctx.r8.s64 + 5504;
	// bl 0x82691650
	ctx.lr = 0x82664020;
	sub_82691650(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82664034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,5628
	ctx.r4.s64 = ctx.r5.s64 + 5628;
	// bl 0x82691650
	ctx.lr = 0x82664044;
	sub_82691650(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r30,r4,9392
	ctx.r30.s64 = ctx.r4.s64 + 9392;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82664060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,5520
	ctx.r4.s64 = ctx.r9.s64 + 5520;
	// bl 0x82691650
	ctx.lr = 0x82664070;
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
	ctx.lr = 0x82664084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266408C"))) PPC_WEAK_FUNC(sub_8266408C);
PPC_FUNC_IMPL(__imp__sub_8266408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664090"))) PPC_WEAK_FUNC(sub_82664090);
PPC_FUNC_IMPL(__imp__sub_82664090) {
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
	// bl 0x82660310
	ctx.lr = 0x826640AC;
	sub_82660310(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x826640B8;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826640CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5504
	ctx.r3.s64 = ctx.r8.s64 + 5504;
	// bl 0x821fa230
	ctx.lr = 0x826640D8;
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
	ctx.lr = 0x826640EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5664
	ctx.r3.s64 = ctx.r5.s64 + 5664;
	// bl 0x821fa230
	ctx.lr = 0x826640F8;
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
	ctx.lr = 0x8266410C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82256058
	ctx.lr = 0x82664110;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664130
	if (ctx.cr6.eq) goto loc_82664130;
	// bl 0x82256058
	ctx.lr = 0x8266411C;
	sub_82256058(ctx, base);
	// lwz r11,3144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3144);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// b 0x82664134
	goto loc_82664134;
loc_82664130:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82664134:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664184
	if (ctx.cr6.eq) goto loc_82664184;
	// bl 0x82663368
	ctx.lr = 0x82664144;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664184
	if (ctx.cr6.eq) goto loc_82664184;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x8266415C;
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
	ctx.lr = 0x82664170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5452
	ctx.r3.s64 = ctx.r8.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x8266417C;
	sub_821FA230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826641b4
	goto loc_826641B4;
loc_82664184:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x82664190;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826641A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5452
	ctx.r3.s64 = ctx.r8.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x826641B0;
	sub_821FA230(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_826641B4:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826641C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,6160
	ctx.r31.s64 = ctx.r11.s64 + 6160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x826641D4;
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
	ctx.lr = 0x826641E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r3,r9,5700
	ctx.r3.s64 = ctx.r9.s64 + 5700;
	// bl 0x821fa230
	ctx.lr = 0x826641F4;
	sub_821FA230(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664254
	if (ctx.cr6.eq) goto loc_82664254;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5684
	ctx.r4.s64 = ctx.r11.s64 + 5684;
	// bl 0x8268da78
	ctx.lr = 0x8266420C;
	sub_8268DA78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664240
	if (ctx.cr6.eq) goto loc_82664240;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82664240
	if (!ctx.cr6.eq) goto loc_82664240;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664240
	if (!ctx.cr6.eq) goto loc_82664240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x82664234;
	sub_821FA230(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// b 0x82664250
	goto loc_82664250;
loc_82664240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x82664248;
	sub_821FA230(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_82664250:
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_82664254:
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

__attribute__((alias("__imp__sub_8266426C"))) PPC_WEAK_FUNC(sub_8266426C);
PPC_FUNC_IMPL(__imp__sub_8266426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664270"))) PPC_WEAK_FUNC(sub_82664270);
PPC_FUNC_IMPL(__imp__sub_82664270) {
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
	// bl 0x82664090
	ctx.lr = 0x82664288;
	sub_82664090(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,5616
	ctx.r3.s64 = ctx.r11.s64 + 5616;
	// bl 0x821fa230
	ctx.lr = 0x82664294;
	sub_821FA230(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826642fc
	if (ctx.cr6.eq) goto loc_826642FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5596
	ctx.r4.s64 = ctx.r11.s64 + 5596;
	// bl 0x8268da78
	ctx.lr = 0x826642AC;
	sub_8268DA78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826642e4
	if (ctx.cr6.eq) goto loc_826642E4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826642e4
	if (!ctx.cr6.eq) goto loc_826642E4;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826642e4
	if (!ctx.cr6.eq) goto loc_826642E4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// bl 0x821fa230
	ctx.lr = 0x826642D8;
	sub_821FA230(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// b 0x826642f8
	goto loc_826642F8;
loc_826642E4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// bl 0x821fa230
	ctx.lr = 0x826642F0;
	sub_821FA230(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_826642F8:
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
loc_826642FC:
	// bl 0x82663368
	ctx.lr = 0x82664300;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664350
	if (!ctx.cr6.eq) goto loc_82664350;
	// bl 0x82663410
	ctx.lr = 0x82664310;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664350
	if (!ctx.cr6.eq) goto loc_82664350;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x82664328;
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
	ctx.lr = 0x8266433C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5504
	ctx.r3.s64 = ctx.r8.s64 + 5504;
	// bl 0x821fa230
	ctx.lr = 0x82664348;
	sub_821FA230(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82664380
	goto loc_82664380;
loc_82664350:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x8266435C;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82664370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5504
	ctx.r3.s64 = ctx.r8.s64 + 5504;
	// bl 0x821fa230
	ctx.lr = 0x8266437C;
	sub_821FA230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82664380:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82664390;
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

__attribute__((alias("__imp__sub_826643A4"))) PPC_WEAK_FUNC(sub_826643A4);
PPC_FUNC_IMPL(__imp__sub_826643A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826643A8"))) PPC_WEAK_FUNC(sub_826643A8);
PPC_FUNC_IMPL(__imp__sub_826643A8) {
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
	// bl 0x82660310
	ctx.lr = 0x826643B8;
	sub_82660310(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5452
	ctx.r3.s64 = ctx.r11.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x826643C4;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826643D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5464
	ctx.r3.s64 = ctx.r8.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x826643E4;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826643F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82663368
	ctx.lr = 0x826643FC;
	sub_82663368(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// beq cr6,0x8266441c
	if (ctx.cr6.eq) goto loc_8266441C;
	// bl 0x821fa230
	ctx.lr = 0x82664414;
	sub_821FA230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82664424
	goto loc_82664424;
loc_8266441C:
	// bl 0x821fa230
	ctx.lr = 0x82664420;
	sub_821FA230(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82664424:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82664434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x82664440;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82664454;
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

__attribute__((alias("__imp__sub_82664464"))) PPC_WEAK_FUNC(sub_82664464);
PPC_FUNC_IMPL(__imp__sub_82664464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664468"))) PPC_WEAK_FUNC(sub_82664468);
PPC_FUNC_IMPL(__imp__sub_82664468) {
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
	// bl 0x82660050
	ctx.lr = 0x82664480;
	sub_82660050(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,5452
	ctx.r4.s64 = ctx.r10.s64 + 5452;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691650
	ctx.lr = 0x826644A0;
	sub_82691650(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,9576
	ctx.r30.s64 = ctx.r11.s64 + 9576;
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826644BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82663410
	ctx.lr = 0x826644C0;
	sub_82663410(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5492
	ctx.r4.s64 = ctx.r11.s64 + 5492;
	// beq cr6,0x826644f4
	if (ctx.cr6.eq) goto loc_826644F4;
	// bl 0x82691650
	ctx.lr = 0x826644DC;
	sub_82691650(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,9556
	ctx.r4.s64 = ctx.r10.s64 + 9556;
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82664508
	goto loc_82664508;
loc_826644F4:
	// bl 0x82691650
	ctx.lr = 0x826644F8;
	sub_82691650(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82664508:
	// bctrl 
	ctx.lr = 0x8266450C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5464
	ctx.r4.s64 = ctx.r11.s64 + 5464;
	// bl 0x82691650
	ctx.lr = 0x8266451C;
	sub_82691650(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,9532
	ctx.r4.s64 = ctx.r10.s64 + 9532;
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82664534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,5664
	ctx.r4.s64 = ctx.r7.s64 + 5664;
	// bl 0x82691650
	ctx.lr = 0x82664544;
	sub_82691650(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r4,r6,9504
	ctx.r4.s64 = ctx.r6.s64 + 9504;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266455C;
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

__attribute__((alias("__imp__sub_82664574"))) PPC_WEAK_FUNC(sub_82664574);
PPC_FUNC_IMPL(__imp__sub_82664574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664578"))) PPC_WEAK_FUNC(sub_82664578);
PPC_FUNC_IMPL(__imp__sub_82664578) {
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
	// bl 0x82663410
	ctx.lr = 0x82664588;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826645ac
	if (ctx.cr6.eq) goto loc_826645AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9628
	ctx.r3.s64 = ctx.r11.s64 + 9628;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826645AC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9600
	ctx.r3.s64 = ctx.r11.s64 + 9600;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826645C4"))) PPC_WEAK_FUNC(sub_826645C4);
PPC_FUNC_IMPL(__imp__sub_826645C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826645C8"))) PPC_WEAK_FUNC(sub_826645C8);
PPC_FUNC_IMPL(__imp__sub_826645C8) {
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
	// bl 0x82663410
	ctx.lr = 0x826645D8;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826645fc
	if (ctx.cr6.eq) goto loc_826645FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9688
	ctx.r3.s64 = ctx.r11.s64 + 9688;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826645FC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9660
	ctx.r3.s64 = ctx.r11.s64 + 9660;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664614"))) PPC_WEAK_FUNC(sub_82664614);
PPC_FUNC_IMPL(__imp__sub_82664614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664618"))) PPC_WEAK_FUNC(sub_82664618);
PPC_FUNC_IMPL(__imp__sub_82664618) {
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
	// bl 0x82660310
	ctx.lr = 0x82664630;
	sub_82660310(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826646f0
	if (ctx.cr6.eq) goto loc_826646F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x82664648;
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
	ctx.lr = 0x8266465C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// lwz r3,-10028(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x82664668;
	sub_82207138(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82664698
	if (!ctx.cr6.eq) goto loc_82664698;
	// bl 0x82663410
	ctx.lr = 0x82664678;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664698
	if (!ctx.cr6.eq) goto loc_82664698;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x82664690;
	sub_821FA230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826646a8
	goto loc_826646A8;
loc_82664698:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x826646A4;
	sub_821FA230(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_826646A8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826646B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// bl 0x821fa230
	ctx.lr = 0x826646C4;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826646D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5408
	ctx.r3.s64 = ctx.r8.s64 + 5408;
	// bl 0x821fa230
	ctx.lr = 0x826646E0;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826646F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826646F0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5452
	ctx.r3.s64 = ctx.r11.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x826646FC;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82664710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5464
	ctx.r3.s64 = ctx.r8.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x8266471C;
	sub_821FA230(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82664730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5504
	ctx.r3.s64 = ctx.r5.s64 + 5504;
	// bl 0x821fa230
	ctx.lr = 0x8266473C;
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
	ctx.lr = 0x82664750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5652
	ctx.r3.s64 = ctx.r9.s64 + 5652;
	// bl 0x821fa230
	ctx.lr = 0x8266475C;
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
	ctx.lr = 0x82664770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5436
	ctx.r3.s64 = ctx.r6.s64 + 5436;
	// bl 0x821fa230
	ctx.lr = 0x8266477C;
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
	ctx.lr = 0x82664790;
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

__attribute__((alias("__imp__sub_826647A4"))) PPC_WEAK_FUNC(sub_826647A4);
PPC_FUNC_IMPL(__imp__sub_826647A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826647A8"))) PPC_WEAK_FUNC(sub_826647A8);
PPC_FUNC_IMPL(__imp__sub_826647A8) {
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
	ctx.lr = 0x826647C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82664844
	if (ctx.cr6.eq) goto loc_82664844;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// bl 0x821fa230
	ctx.lr = 0x826647E0;
	sub_821FA230(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82663368
	ctx.lr = 0x826647E8;
	sub_82663368(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826647fc
	if (!ctx.cr6.eq) goto loc_826647FC;
	// bl 0x82663410
	ctx.lr = 0x826647F8;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_826647FC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5640
	ctx.r3.s64 = ctx.r11.s64 + 5640;
	// bl 0x821fa230
	ctx.lr = 0x82664808;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82664814;
	sub_8268CC80(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r10,5492
	ctx.r3.s64 = ctx.r10.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x82664820;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x8266482C;
	sub_8268CC80(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5664
	ctx.r3.s64 = ctx.r9.s64 + 5664;
	// bl 0x821fa230
	ctx.lr = 0x82664838;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82664844;
	sub_8268CC80(ctx, base);
loc_82664844:
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

__attribute__((alias("__imp__sub_82664858"))) PPC_WEAK_FUNC(sub_82664858);
PPC_FUNC_IMPL(__imp__sub_82664858) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r31,r11,-21500
	ctx.r31.s64 = ctx.r11.s64 + -21500;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r9,9720
	ctx.r4.s64 = ctx.r9.s64 + 9720;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r30,-24180(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24180);
	// bl 0x823db670
	ctx.lr = 0x82664894;
	sub_823DB670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,10248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10248);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821fd7c0
	ctx.lr = 0x826648A8;
	sub_821FD7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,10248(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10248);
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// bl 0x822031a8
	ctx.lr = 0x826648CC;
	sub_822031A8(ctx, base);
	// lis r7,-32121
	ctx.r7.s64 = -2105081856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,18508(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18508);
	// bl 0x826b94e8
	ctx.lr = 0x826648DC;
	sub_826B94E8(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
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

__attribute__((alias("__imp__sub_826648F4"))) PPC_WEAK_FUNC(sub_826648F4);
PPC_FUNC_IMPL(__imp__sub_826648F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826648F8"))) PPC_WEAK_FUNC(sub_826648F8);
PPC_FUNC_IMPL(__imp__sub_826648F8) {
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
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x82664918;
	sub_82207138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266495c
	if (!ctx.cr6.eq) goto loc_8266495C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82664938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8266495c
	if (!ctx.cr6.eq) goto loc_8266495C;
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
loc_8266495C:
	// bl 0x826632c0
	ctx.lr = 0x82664960;
	sub_826632C0(ctx, base);
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

__attribute__((alias("__imp__sub_82664974"))) PPC_WEAK_FUNC(sub_82664974);
PPC_FUNC_IMPL(__imp__sub_82664974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664978"))) PPC_WEAK_FUNC(sub_82664978);
PPC_FUNC_IMPL(__imp__sub_82664978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82664980;
	__savegprlr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82660310
	ctx.lr = 0x8266498C;
	sub_82660310(ctx, base);
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r11,5492
	ctx.r31.s64 = ctx.r11.s64 + 5492;
	// addi r30,r10,5452
	ctx.r30.s64 = ctx.r10.s64 + 5452;
	// beq cr6,0x82664a04
	if (ctx.cr6.eq) goto loc_82664A04;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x826649B4;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826649C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x826649D0;
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
	ctx.lr = 0x826649E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5712
	ctx.r3.s64 = ctx.r6.s64 + 5712;
	// bl 0x821fa230
	ctx.lr = 0x826649F0;
	sub_821FA230(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82664a3c
	goto loc_82664A3C;
loc_82664A04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x82664A0C;
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
	ctx.lr = 0x82664A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5608
	ctx.r3.s64 = ctx.r9.s64 + 5608;
	// bl 0x821fa230
	ctx.lr = 0x82664A2C;
	sub_821FA230(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82664A3C:
	// bctrl 
	ctx.lr = 0x82664A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r29,r11,-21500
	ctx.r29.s64 = ctx.r11.s64 + -21500;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r9,9720
	ctx.r4.s64 = ctx.r9.s64 + 9720;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r28,-24180(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24180);
	// bl 0x823db670
	ctx.lr = 0x82664A68;
	sub_823DB670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,10248(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10248);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821fd7c0
	ctx.lr = 0x82664A7C;
	sub_821FD7C0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,10248(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10248);
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// bl 0x822031a8
	ctx.lr = 0x82664AA0;
	sub_822031A8(ctx, base);
	// lis r7,-32121
	ctx.r7.s64 = -2105081856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,18508(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18508);
	// bl 0x826b94e8
	ctx.lr = 0x82664AB0;
	sub_826B94E8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82664af0
	if (ctx.cr6.eq) goto loc_82664AF0;
	// bl 0x821fa230
	ctx.lr = 0x82664AC4;
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
	ctx.lr = 0x82664ADC;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82664AF0:
	// bl 0x821fa230
	ctx.lr = 0x82664AF4;
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
	ctx.lr = 0x82664B0C;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664B20"))) PPC_WEAK_FUNC(sub_82664B20);
PPC_FUNC_IMPL(__imp__sub_82664B20) {
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
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// bl 0x821fa230
	ctx.lr = 0x82664B40;
	sub_821FA230(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82663410
	ctx.lr = 0x82664B48;
	sub_82663410(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82664bd0
	if (!ctx.cr6.eq) goto loc_82664BD0;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x82664B60;
	sub_82207138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82664bd0
	if (!ctx.cr6.eq) goto loc_82664BD0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5756
	ctx.r4.s64 = ctx.r11.s64 + 5756;
	// bl 0x8265fbb0
	ctx.lr = 0x82664B7C;
	sub_8265FBB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,5712
	ctx.r4.s64 = ctx.r10.s64 + 5712;
	// bl 0x8265fbb0
	ctx.lr = 0x82664B8C;
	sub_8265FBB0(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,5424
	ctx.r4.s64 = ctx.r9.s64 + 5424;
	// bl 0x8265fbb0
	ctx.lr = 0x82664B9C;
	sub_8265FBB0(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,5408
	ctx.r4.s64 = ctx.r8.s64 + 5408;
	// bl 0x8265fbb0
	ctx.lr = 0x82664BAC;
	sub_8265FBB0(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,5652
	ctx.r4.s64 = ctx.r7.s64 + 5652;
	// bl 0x8265fbb0
	ctx.lr = 0x82664BBC;
	sub_8265FBB0(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,5640
	ctx.r4.s64 = ctx.r6.s64 + 5640;
	// bl 0x8265fbb0
	ctx.lr = 0x82664BCC;
	sub_8265FBB0(ctx, base);
	// b 0x82664ca0
	goto loc_82664CA0;
loc_82664BD0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5640
	ctx.r3.s64 = ctx.r11.s64 + 5640;
	// bl 0x821fa230
	ctx.lr = 0x82664BDC;
	sub_821FA230(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82664BEC;
	sub_8268CC80(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82664C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5424
	ctx.r3.s64 = ctx.r8.s64 + 5424;
	// bl 0x821fa230
	ctx.lr = 0x82664C10;
	sub_821FA230(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82664C20;
	sub_8268CC80(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82664C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5408
	ctx.r3.s64 = ctx.r5.s64 + 5408;
	// bl 0x821fa230
	ctx.lr = 0x82664C44;
	sub_821FA230(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82664C54;
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
	ctx.lr = 0x82664C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5652
	ctx.r3.s64 = ctx.r9.s64 + 5652;
	// bl 0x821fa230
	ctx.lr = 0x82664C78;
	sub_821FA230(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8268cc80
	ctx.lr = 0x82664C88;
	sub_8268CC80(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82664CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82664CA0:
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

__attribute__((alias("__imp__sub_82664CB8"))) PPC_WEAK_FUNC(sub_82664CB8);
PPC_FUNC_IMPL(__imp__sub_82664CB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82663368
	sub_82663368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664CBC"))) PPC_WEAK_FUNC(sub_82664CBC);
PPC_FUNC_IMPL(__imp__sub_82664CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664CC0"))) PPC_WEAK_FUNC(sub_82664CC0);
PPC_FUNC_IMPL(__imp__sub_82664CC0) {
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
	// lwz r11,-10236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82204018
	ctx.lr = 0x82664CE0;
	sub_82204018(ctx, base);
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// beq cr6,0x82664da8
	if (ctx.cr6.eq) goto loc_82664DA8;
	// bl 0x82256058
	ctx.lr = 0x82664CEC;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664d08
	if (ctx.cr6.eq) goto loc_82664D08;
	// bl 0x82256058
	ctx.lr = 0x82664CF8;
	sub_82256058(ctx, base);
	// lwz r11,3140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82664d0c
	if (!ctx.cr6.eq) goto loc_82664D0C;
loc_82664D08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82664D0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664d54
	if (ctx.cr6.eq) goto loc_82664D54;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// addis r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 196608;
	// addi r3,r3,-16384
	ctx.r3.s64 = ctx.r3.s64 + -16384;
	// bl 0x82654e08
	ctx.lr = 0x82664D2C;
	sub_82654E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82664d3c
	if (ctx.cr6.gt) goto loc_82664D3C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82664D3C:
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
loc_82664D54:
	// lwz r11,-10236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10236);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82204018
	ctx.lr = 0x82664D60;
	sub_82204018(ctx, base);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// beq cr6,0x82664da8
	if (ctx.cr6.eq) goto loc_82664DA8;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,9736
	ctx.r4.s64 = ctx.r10.s64 + 9736;
	// lwz r3,-24180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24180);
	// bl 0x8220eea8
	ctx.lr = 0x82664D7C;
	sub_8220EEA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664da8
	if (ctx.cr6.eq) goto loc_82664DA8;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
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
loc_82664DA8:
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

__attribute__((alias("__imp__sub_82664DC0"))) PPC_WEAK_FUNC(sub_82664DC0);
PPC_FUNC_IMPL(__imp__sub_82664DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82664DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82387a18
	ctx.lr = 0x82664DD8;
	sub_82387A18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82660310
	ctx.lr = 0x82664DE8;
	sub_82660310(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664ff8
	if (ctx.cr6.eq) goto loc_82664FF8;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82204018
	ctx.lr = 0x82664E04;
	sub_82204018(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bne cr6,0x82664e54
	if (!ctx.cr6.eq) goto loc_82664E54;
	// bl 0x82663410
	ctx.lr = 0x82664E14;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664e30
	if (ctx.cr6.eq) goto loc_82664E30;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664e34
	if (ctx.cr6.eq) goto loc_82664E34;
loc_82664E30:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82664E34:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x82664E40;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x82664e78
	goto loc_82664E78;
loc_82664E54:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x821fa230
	ctx.lr = 0x82664E60;
	sub_821FA230(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82664E78:
	// bctrl 
	ctx.lr = 0x82664E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x82664E88;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82664E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5652
	ctx.r3.s64 = ctx.r8.s64 + 5652;
	// bl 0x821fa230
	ctx.lr = 0x82664EA8;
	sub_821FA230(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82664ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82664f14
	if (ctx.cr6.eq) goto loc_82664F14;
	// bl 0x82387a18
	ctx.lr = 0x82664EE8;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664f14
	if (!ctx.cr6.eq) goto loc_82664F14;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-3624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3624);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,797(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 797);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82664f18
	if (ctx.cr6.eq) goto loc_82664F18;
loc_82664F14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82664F18:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8265e5e8
	ctx.lr = 0x82664F20;
	sub_8265E5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664f30
	if (ctx.cr6.eq) goto loc_82664F30;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82664F30:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,5520
	ctx.r31.s64 = ctx.r11.s64 + 5520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa230
	ctx.lr = 0x82664F40;
	sub_821FA230(ctx, base);
	// addi r11,r28,-8
	ctx.r11.s64 = ctx.r28.s64 + -8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r28,r8,1
	ctx.r28.u64 = ctx.r8.u64 ^ 1;
	// lwz r7,76(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82664F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,5628
	ctx.r30.s64 = ctx.r11.s64 + 5628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fa230
	ctx.lr = 0x82664F74;
	sub_821FA230(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82664F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82664fc8
	if (ctx.cr6.eq) goto loc_82664FC8;
	// bl 0x821fa230
	ctx.lr = 0x82664F9C;
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
	ctx.lr = 0x82664FB4;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82664FC8:
	// bl 0x821fa230
	ctx.lr = 0x82664FCC;
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
	ctx.lr = 0x82664FE4;
	sub_821FA230(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82664FF8:
	// bl 0x82387a18
	ctx.lr = 0x82664FFC;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665038
	if (ctx.cr6.eq) goto loc_82665038;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388580
	ctx.lr = 0x82665010;
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
	ctx.lr = 0x82665024;
	sub_82270170(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822577d0
	ctx.lr = 0x8266502C;
	sub_822577D0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// bne cr6,0x8266503c
	if (!ctx.cr6.eq) goto loc_8266503C;
loc_82665038:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8266503C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5452
	ctx.r3.s64 = ctx.r11.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x82665048;
	sub_821FA230(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82665064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5464
	ctx.r3.s64 = ctx.r6.s64 + 5464;
	// bl 0x821fa230
	ctx.lr = 0x82665070;
	sub_821FA230(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82665084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266508C"))) PPC_WEAK_FUNC(sub_8266508C);
PPC_FUNC_IMPL(__imp__sub_8266508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665090"))) PPC_WEAK_FUNC(sub_82665090);
PPC_FUNC_IMPL(__imp__sub_82665090) {
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
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82204018
	ctx.lr = 0x826650B4;
	sub_82204018(ctx, base);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// beq cr6,0x8266510c
	if (ctx.cr6.eq) goto loc_8266510C;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x826650C8;
	sub_82207138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826650f4
	if (!ctx.cr6.eq) goto loc_826650F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826650E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8266510c
	if (ctx.cr6.eq) goto loc_8266510C;
loc_826650F4:
	// bl 0x826632c0
	ctx.lr = 0x826650F8;
	sub_826632C0(ctx, base);
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
loc_8266510C:
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

__attribute__((alias("__imp__sub_82665124"))) PPC_WEAK_FUNC(sub_82665124);
PPC_FUNC_IMPL(__imp__sub_82665124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665128"))) PPC_WEAK_FUNC(sub_82665128);
PPC_FUNC_IMPL(__imp__sub_82665128) {
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
	// bl 0x82660310
	ctx.lr = 0x82665140;
	sub_82660310(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5452
	ctx.r3.s64 = ctx.r11.s64 + 5452;
	// bl 0x821fa230
	ctx.lr = 0x8266514C;
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
	ctx.lr = 0x82665160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5652
	ctx.r3.s64 = ctx.r8.s64 + 5652;
	// bl 0x821fa230
	ctx.lr = 0x8266516C;
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
	ctx.lr = 0x82665180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r5,5436
	ctx.r3.s64 = ctx.r5.s64 + 5436;
	// bl 0x821fa230
	ctx.lr = 0x8266518C;
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
	ctx.lr = 0x826651A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r9,5664
	ctx.r3.s64 = ctx.r9.s64 + 5664;
	// bl 0x821fa230
	ctx.lr = 0x826651AC;
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
	ctx.lr = 0x826651C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82665278
	if (ctx.cr6.eq) goto loc_82665278;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x826651D8;
	sub_82207138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82665230
	if (ctx.cr6.eq) goto loc_82665230;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5504
	ctx.r3.s64 = ctx.r11.s64 + 5504;
	// bl 0x821fa230
	ctx.lr = 0x826651F0;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82665204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r3,r8,5756
	ctx.r3.s64 = ctx.r8.s64 + 5756;
	// bl 0x821fa230
	ctx.lr = 0x82665210;
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
	ctx.lr = 0x82665224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5732
	ctx.r3.s64 = ctx.r11.s64 + 5732;
	// b 0x82665280
	goto loc_82665280;
loc_82665230:
	// bl 0x826632c0
	ctx.lr = 0x82665234;
	sub_826632C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// beq cr6,0x82665254
	if (ctx.cr6.eq) goto loc_82665254;
	// bl 0x821fa230
	ctx.lr = 0x8266524C;
	sub_821FA230(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8266525c
	goto loc_8266525C;
loc_82665254:
	// bl 0x821fa230
	ctx.lr = 0x82665258;
	sub_821FA230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8266525C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8266526C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5732
	ctx.r3.s64 = ctx.r11.s64 + 5732;
	// b 0x82665280
	goto loc_82665280;
loc_82665278:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
loc_82665280:
	// bl 0x821fa230
	ctx.lr = 0x82665284;
	sub_821FA230(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82665298;
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

__attribute__((alias("__imp__sub_826652AC"))) PPC_WEAK_FUNC(sub_826652AC);
PPC_FUNC_IMPL(__imp__sub_826652AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826652B0"))) PPC_WEAK_FUNC(sub_826652B0);
PPC_FUNC_IMPL(__imp__sub_826652B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x826652B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r30,r11,-21500
	ctx.r30.s64 = ctx.r11.s64 + -21500;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r9,9748
	ctx.r4.s64 = ctx.r9.s64 + 9748;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r29,-24180(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24180);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x823db670
	ctx.lr = 0x826652E8;
	sub_823DB670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,10248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10248);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821fd7c0
	ctx.lr = 0x826652FC;
	sub_821FD7C0(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r8,10248(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// beq cr6,0x82665338
	if (ctx.cr6.eq) goto loc_82665338;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82665338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665344"))) PPC_WEAK_FUNC(sub_82665344);
PPC_FUNC_IMPL(__imp__sub_82665344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665348"))) PPC_WEAK_FUNC(sub_82665348);
PPC_FUNC_IMPL(__imp__sub_82665348) {
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
	ctx.lr = 0x82665364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8266539c
	if (ctx.cr6.eq) goto loc_8266539C;
	// bl 0x82663368
	ctx.lr = 0x82665374;
	sub_82663368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665388
	if (!ctx.cr6.eq) goto loc_82665388;
	// bl 0x82663410
	ctx.lr = 0x82665384;
	sub_82663410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_82665388:
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
loc_8266539C:
	// bl 0x82660230
	ctx.lr = 0x826653A0;
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

__attribute__((alias("__imp__sub_826653C0"))) PPC_WEAK_FUNC(sub_826653C0);
PPC_FUNC_IMPL(__imp__sub_826653C0) {
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
	// bl 0x82256058
	ctx.lr = 0x826653D8;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82665418
	if (ctx.cr6.eq) goto loc_82665418;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826653F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82665418
	if (!ctx.cr6.eq) goto loc_82665418;
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
loc_82665418:
	// bl 0x826632c0
	ctx.lr = 0x8266541C;
	sub_826632C0(ctx, base);
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

__attribute__((alias("__imp__sub_82665430"))) PPC_WEAK_FUNC(sub_82665430);
PPC_FUNC_IMPL(__imp__sub_82665430) {
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
	// bl 0x826628b0
	ctx.lr = 0x82665450;
	sub_826628B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665468
	if (ctx.cr6.eq) goto loc_82665468;
	// bl 0x82130588
	ctx.lr = 0x82665464;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82665468:
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

__attribute__((alias("__imp__sub_82665480"))) PPC_WEAK_FUNC(sub_82665480);
PPC_FUNC_IMPL(__imp__sub_82665480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10000
	ctx.r3.s64 = ctx.r11.s64 + 10000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266548C"))) PPC_WEAK_FUNC(sub_8266548C);
PPC_FUNC_IMPL(__imp__sub_8266548C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665490"))) PPC_WEAK_FUNC(sub_82665490);
PPC_FUNC_IMPL(__imp__sub_82665490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266549C"))) PPC_WEAK_FUNC(sub_8266549C);
PPC_FUNC_IMPL(__imp__sub_8266549C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826654A0"))) PPC_WEAK_FUNC(sub_826654A0);
PPC_FUNC_IMPL(__imp__sub_826654A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,9156
	ctx.r3.s64 = ctx.r11.s64 + 9156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826654AC"))) PPC_WEAK_FUNC(sub_826654AC);
PPC_FUNC_IMPL(__imp__sub_826654AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826654B0"))) PPC_WEAK_FUNC(sub_826654B0);
PPC_FUNC_IMPL(__imp__sub_826654B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10152
	ctx.r3.s64 = ctx.r11.s64 + 10152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826654BC"))) PPC_WEAK_FUNC(sub_826654BC);
PPC_FUNC_IMPL(__imp__sub_826654BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826654C0"))) PPC_WEAK_FUNC(sub_826654C0);
PPC_FUNC_IMPL(__imp__sub_826654C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10180
	ctx.r3.s64 = ctx.r11.s64 + 10180;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826654CC"))) PPC_WEAK_FUNC(sub_826654CC);
PPC_FUNC_IMPL(__imp__sub_826654CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826654D0"))) PPC_WEAK_FUNC(sub_826654D0);
PPC_FUNC_IMPL(__imp__sub_826654D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10204
	ctx.r3.s64 = ctx.r11.s64 + 10204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826654DC"))) PPC_WEAK_FUNC(sub_826654DC);
PPC_FUNC_IMPL(__imp__sub_826654DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826654E0"))) PPC_WEAK_FUNC(sub_826654E0);
PPC_FUNC_IMPL(__imp__sub_826654E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10240
	ctx.r3.s64 = ctx.r11.s64 + 10240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826654EC"))) PPC_WEAK_FUNC(sub_826654EC);
PPC_FUNC_IMPL(__imp__sub_826654EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826654F0"))) PPC_WEAK_FUNC(sub_826654F0);
PPC_FUNC_IMPL(__imp__sub_826654F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10392
	ctx.r3.s64 = ctx.r11.s64 + 10392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826654FC"))) PPC_WEAK_FUNC(sub_826654FC);
PPC_FUNC_IMPL(__imp__sub_826654FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665500"))) PPC_WEAK_FUNC(sub_82665500);
PPC_FUNC_IMPL(__imp__sub_82665500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266550C"))) PPC_WEAK_FUNC(sub_8266550C);
PPC_FUNC_IMPL(__imp__sub_8266550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665510"))) PPC_WEAK_FUNC(sub_82665510);
PPC_FUNC_IMPL(__imp__sub_82665510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10568
	ctx.r3.s64 = ctx.r11.s64 + 10568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266551C"))) PPC_WEAK_FUNC(sub_8266551C);
PPC_FUNC_IMPL(__imp__sub_8266551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665520"))) PPC_WEAK_FUNC(sub_82665520);
PPC_FUNC_IMPL(__imp__sub_82665520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10604
	ctx.r3.s64 = ctx.r11.s64 + 10604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266552C"))) PPC_WEAK_FUNC(sub_8266552C);
PPC_FUNC_IMPL(__imp__sub_8266552C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665530"))) PPC_WEAK_FUNC(sub_82665530);
PPC_FUNC_IMPL(__imp__sub_82665530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10636
	ctx.r3.s64 = ctx.r11.s64 + 10636;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266553C"))) PPC_WEAK_FUNC(sub_8266553C);
PPC_FUNC_IMPL(__imp__sub_8266553C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665540"))) PPC_WEAK_FUNC(sub_82665540);
PPC_FUNC_IMPL(__imp__sub_82665540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10668
	ctx.r3.s64 = ctx.r11.s64 + 10668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266554C"))) PPC_WEAK_FUNC(sub_8266554C);
PPC_FUNC_IMPL(__imp__sub_8266554C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665550"))) PPC_WEAK_FUNC(sub_82665550);
PPC_FUNC_IMPL(__imp__sub_82665550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10816
	ctx.r3.s64 = ctx.r11.s64 + 10816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266555C"))) PPC_WEAK_FUNC(sub_8266555C);
PPC_FUNC_IMPL(__imp__sub_8266555C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665560"))) PPC_WEAK_FUNC(sub_82665560);
PPC_FUNC_IMPL(__imp__sub_82665560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10848
	ctx.r3.s64 = ctx.r11.s64 + 10848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266556C"))) PPC_WEAK_FUNC(sub_8266556C);
PPC_FUNC_IMPL(__imp__sub_8266556C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665570"))) PPC_WEAK_FUNC(sub_82665570);
PPC_FUNC_IMPL(__imp__sub_82665570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10884
	ctx.r3.s64 = ctx.r11.s64 + 10884;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266557C"))) PPC_WEAK_FUNC(sub_8266557C);
PPC_FUNC_IMPL(__imp__sub_8266557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665580"))) PPC_WEAK_FUNC(sub_82665580);
PPC_FUNC_IMPL(__imp__sub_82665580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5104
	ctx.r3.s64 = ctx.r11.s64 + 5104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266558C"))) PPC_WEAK_FUNC(sub_8266558C);
PPC_FUNC_IMPL(__imp__sub_8266558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665590"))) PPC_WEAK_FUNC(sub_82665590);
PPC_FUNC_IMPL(__imp__sub_82665590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10912
	ctx.r3.s64 = ctx.r11.s64 + 10912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266559C"))) PPC_WEAK_FUNC(sub_8266559C);
PPC_FUNC_IMPL(__imp__sub_8266559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826655A0"))) PPC_WEAK_FUNC(sub_826655A0);
PPC_FUNC_IMPL(__imp__sub_826655A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,10944
	ctx.r3.s64 = ctx.r11.s64 + 10944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826655AC"))) PPC_WEAK_FUNC(sub_826655AC);
PPC_FUNC_IMPL(__imp__sub_826655AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826655B0"))) PPC_WEAK_FUNC(sub_826655B0);
PPC_FUNC_IMPL(__imp__sub_826655B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11096
	ctx.r3.s64 = ctx.r11.s64 + 11096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826655BC"))) PPC_WEAK_FUNC(sub_826655BC);
PPC_FUNC_IMPL(__imp__sub_826655BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826655C0"))) PPC_WEAK_FUNC(sub_826655C0);
PPC_FUNC_IMPL(__imp__sub_826655C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11120
	ctx.r3.s64 = ctx.r11.s64 + 11120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826655CC"))) PPC_WEAK_FUNC(sub_826655CC);
PPC_FUNC_IMPL(__imp__sub_826655CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826655D0"))) PPC_WEAK_FUNC(sub_826655D0);
PPC_FUNC_IMPL(__imp__sub_826655D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11152
	ctx.r3.s64 = ctx.r11.s64 + 11152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826655DC"))) PPC_WEAK_FUNC(sub_826655DC);
PPC_FUNC_IMPL(__imp__sub_826655DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826655E0"))) PPC_WEAK_FUNC(sub_826655E0);
PPC_FUNC_IMPL(__imp__sub_826655E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11296
	ctx.r3.s64 = ctx.r11.s64 + 11296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826655EC"))) PPC_WEAK_FUNC(sub_826655EC);
PPC_FUNC_IMPL(__imp__sub_826655EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826655F0"))) PPC_WEAK_FUNC(sub_826655F0);
PPC_FUNC_IMPL(__imp__sub_826655F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11320
	ctx.r3.s64 = ctx.r11.s64 + 11320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826655FC"))) PPC_WEAK_FUNC(sub_826655FC);
PPC_FUNC_IMPL(__imp__sub_826655FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665600"))) PPC_WEAK_FUNC(sub_82665600);
PPC_FUNC_IMPL(__imp__sub_82665600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11344
	ctx.r3.s64 = ctx.r11.s64 + 11344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266560C"))) PPC_WEAK_FUNC(sub_8266560C);
PPC_FUNC_IMPL(__imp__sub_8266560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665610"))) PPC_WEAK_FUNC(sub_82665610);
PPC_FUNC_IMPL(__imp__sub_82665610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x82665618;
	__savegprlr_26(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,-29340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29340);
	// bl 0x8269ec68
	ctx.lr = 0x82665634;
	sub_8269EC68(ctx, base);
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r4,r10,25036
	ctx.r4.s64 = ctx.r10.s64 + 25036;
	// lwz r3,-10244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10244);
	// bl 0x82218310
	ctx.lr = 0x82665648;
	sub_82218310(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32111
	ctx.r8.s64 = -2104426496;
	// addi r29,r9,-21500
	ctx.r29.s64 = ctx.r9.s64 + -21500;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r7,9720
	ctx.r4.s64 = ctx.r7.s64 + 9720;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r26,-24180(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24180);
	// bl 0x823db670
	ctx.lr = 0x82665670;
	sub_823DB670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,10248(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10248);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821fd7c0
	ctx.lr = 0x82665684;
	sub_821FD7C0(ctx, base);
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r6,10248(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r5,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r5.u8);
	// stw r5,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r6,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
	// beq cr6,0x826656b4
	if (ctx.cr6.eq) goto loc_826656B4;
	// bl 0x822031a8
	ctx.lr = 0x826656B0;
	sub_822031A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_826656B4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,-10244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10244);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,12000
	ctx.r4.s64 = ctx.r11.s64 + 12000;
	// bl 0x82218788
	ctx.lr = 0x826656C8;
	sub_82218788(ctx, base);
	// lhz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82665700
	if (ctx.cr6.eq) goto loc_82665700;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_826656EC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826656ec
	if (!ctx.cr6.eq) goto loc_826656EC;
loc_82665700:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r29,r31,2192
	ctx.r29.s64 = ctx.r31.s64 + 2192;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// li r4,72
	ctx.r4.s64 = 72;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r9,r11,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r5.u16);
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,-10236(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10236);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82665748;
	sub_82641CB0(ctx, base);
	// lbz r10,246(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 246);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82665778
	if (ctx.cr6.eq) goto loc_82665778;
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r8,r31,1152
	ctx.r8.s64 = ctx.r31.s64 + 1152;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r7.u16);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x8266588c
	goto loc_8266588C;
loc_82665778:
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r7,r31,176
	ctx.r7.s64 = ctx.r31.s64 + 176;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r31,356
	ctx.r11.s64 = ctx.r31.s64 + 356;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r6.u16);
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r8,356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lhz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 360);
	// rotlwi r10,r4,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826657d0
	if (ctx.cr6.eq) goto loc_826657D0;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_826657BC:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r6,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826657bc
	if (!ctx.cr6.eq) goto loc_826657BC;
loc_826657D0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// srawi r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r5,r31,576
	ctx.r5.s64 = ctx.r31.s64 + 576;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r4,r31,768
	ctx.r4.s64 = ctx.r31.s64 + 768;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// beq cr6,0x82665850
	if (ctx.cr6.eq) goto loc_82665850;
	// addi r7,r31,960
	ctx.r7.s64 = ctx.r31.s64 + 960;
	// stwx r7,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r8,r3,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// stwx r5,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rotlwi r8,r6,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// stwx r4,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// b 0x8266588c
	goto loc_8266588C;
loc_82665850:
	// addi r7,r31,384
	ctx.r7.s64 = ctx.r31.s64 + 384;
	// stwx r7,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r10,r3,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// stwx r5,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
loc_8266588C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// bl 0x821fa230
	ctx.lr = 0x82665898;
	sub_821FA230(ctx, base);
	// bl 0x8264f2a8
	ctx.lr = 0x8266589C;
	sub_8264F2A8(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826658b8
	if (ctx.cr6.eq) goto loc_826658B8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,24340
	ctx.r4.s64 = ctx.r11.s64 + 24340;
	// b 0x826658e0
	goto loc_826658E0;
loc_826658B8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826658d4
	if (!ctx.cr6.eq) goto loc_826658D4;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,24324
	ctx.r4.s64 = ctx.r11.s64 + 24324;
	// b 0x826658e0
	goto loc_826658E0;
loc_826658D4:
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,28388
	ctx.r4.s64 = ctx.r11.s64 + 28388;
loc_826658E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8262ffe0
	ctx.lr = 0x826658E8;
	sub_8262FFE0(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lwz r9,340(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// beq cr6,0x8266590c
	if (ctx.cr6.eq) goto loc_8266590C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,11976
	ctx.r30.s64 = ctx.r10.s64 + 11976;
	// b 0x82665914
	goto loc_82665914;
loc_8266590C:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,3988
	ctx.r30.s64 = ctx.r10.s64 + 3988;
loc_82665914:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82665920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,960(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,960
	ctx.r3.s64 = ctx.r31.s64 + 960;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82665938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665940"))) PPC_WEAK_FUNC(sub_82665940);
PPC_FUNC_IMPL(__imp__sub_82665940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91e4
	ctx.lr = 0x82665948;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,5492
	ctx.r29.s64 = ctx.r11.s64 + 5492;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82665960;
	sub_821FA230(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,5452
	ctx.r28.s64 = ctx.r11.s64 + 5452;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r8,r9,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// bl 0x821fa230
	ctx.lr = 0x82665980;
	sub_821FA230(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r11,5464
	ctx.r27.s64 = ctx.r11.s64 + 5464;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r5,r6,0,28,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r5,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r5.u32);
	// bl 0x821fa230
	ctx.lr = 0x826659A0;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r11,5504
	ctx.r26.s64 = ctx.r11.s64 + 5504;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// bl 0x821fa230
	ctx.lr = 0x826659C0;
	sub_821FA230(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,5436
	ctx.r25.s64 = ctx.r11.s64 + 5436;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// bl 0x821fa230
	ctx.lr = 0x826659E0;
	sub_821FA230(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r24,r11,5652
	ctx.r24.s64 = ctx.r11.s64 + 5652;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r4,r5,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r4,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r4.u32);
	// bl 0x821fa230
	ctx.lr = 0x82665A00;
	sub_821FA230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r31,480
	ctx.r30.s64 = ctx.r31.s64 + 480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x82661000
	ctx.lr = 0x82665A1C;
	sub_82661000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82665A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lis r23,-32121
	ctx.r23.s64 = -2105081856;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82665a58
	if (!ctx.cr6.eq) goto loc_82665A58;
	// lwz r3,-10028(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x82665A48;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82665a5c
	if (ctx.cr6.eq) goto loc_82665A5C;
loc_82665A58:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82665A5C:
	// lwz r3,-10028(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10028);
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82207138
	ctx.lr = 0x82665A68;
	sub_82207138(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82665610
	ctx.lr = 0x82665A78;
	sub_82665610(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82665A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82256058
	ctx.lr = 0x82665A94;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82665ab0
	if (ctx.cr6.eq) goto loc_82665AB0;
	// lwz r11,3152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// b 0x82665ab4
	goto loc_82665AB4;
loc_82665AB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82665AB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665ba8
	if (!ctx.cr6.eq) goto loc_82665BA8;
	// bl 0x8265e5e8
	ctx.lr = 0x82665AC4;
	sub_8265E5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665ba8
	if (ctx.cr6.eq) goto loc_82665BA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa230
	ctx.lr = 0x82665AD8;
	sub_821FA230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bl 0x821fa230
	ctx.lr = 0x82665AF0;
	sub_821FA230(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// ori r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 16;
	// stw r6,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r6.u32);
	// bl 0x821fa230
	ctx.lr = 0x82665B08;
	sub_821FA230(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// ori r11,r4,16
	ctx.r11.u64 = ctx.r4.u64 | 16;
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// bl 0x821fa230
	ctx.lr = 0x82665B20;
	sub_821FA230(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// bl 0x821fa230
	ctx.lr = 0x82665B38;
	sub_821FA230(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// ori r5,r6,16
	ctx.r5.u64 = ctx.r6.u64 | 16;
	// stw r5,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r5.u32);
	// bl 0x821fa230
	ctx.lr = 0x82665B50;
	sub_821FA230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r3,r3,5756
	ctx.r3.s64 = ctx.r3.s64 + 5756;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// bl 0x821fa230
	ctx.lr = 0x82665B6C;
	sub_821FA230(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r31,r9,12016
	ctx.r31.s64 = ctx.r9.s64 + 12016;
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82665B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r6,5480
	ctx.r3.s64 = ctx.r6.s64 + 5480;
	// bl 0x821fa230
	ctx.lr = 0x82665B94;
	sub_821FA230(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82665BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82665BA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826622a8
	ctx.lr = 0x82665BB0;
	sub_826622A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9234
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665BB8"))) PPC_WEAK_FUNC(sub_82665BB8);
PPC_FUNC_IMPL(__imp__sub_82665BB8) {
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
	// bl 0x82215a60
	ctx.lr = 0x82665BD4;
	sub_82215A60(ctx, base);
	// addi r31,r30,480
	ctx.r31.s64 = ctx.r30.s64 + 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82661000
	ctx.lr = 0x82665BE0;
	sub_82661000(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82665BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82665940
	ctx.lr = 0x82665BF8;
	sub_82665940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265f008
	ctx.lr = 0x82665C00;
	sub_8265F008(ctx, base);
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

__attribute__((alias("__imp__sub_82665C18"))) PPC_WEAK_FUNC(sub_82665C18);
PPC_FUNC_IMPL(__imp__sub_82665C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82665C20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r30,-32111
	ctx.r30.s64 = -2104426496;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,2532
	ctx.r29.s64 = ctx.r11.s64 + 2532;
	// addi r4,r10,2516
	ctx.r4.s64 = ctx.r10.s64 + 2516;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x82665C44;
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
	ctx.lr = 0x82665C58;
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
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x821fd980
	ctx.lr = 0x82665C74;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,32684
	ctx.r4.s64 = ctx.r6.s64 + 32684;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x82665C94;
	sub_823DC018(ctx, base);
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// li r5,3
	ctx.r5.s64 = 3;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r5,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r5.u32);
	// addi r4,r4,-15108
	ctx.r4.s64 = ctx.r4.s64 + -15108;
	// lwz r11,-10236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82665CB8;
	sub_82691650(ctx, base);
	// lwz r11,-10236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10236);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82665CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665CE0"))) PPC_WEAK_FUNC(sub_82665CE0);
PPC_FUNC_IMPL(__imp__sub_82665CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82665CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r30,-32111
	ctx.r30.s64 = -2104426496;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,-4180
	ctx.r29.s64 = ctx.r11.s64 + -4180;
	// addi r4,r10,2516
	ctx.r4.s64 = ctx.r10.s64 + 2516;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x82665D0C;
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
	ctx.lr = 0x82665D20;
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
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x821fd980
	ctx.lr = 0x82665D3C;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,32684
	ctx.r4.s64 = ctx.r6.s64 + 32684;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x82665D5C;
	sub_823DC018(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r9,12036
	ctx.r4.s64 = ctx.r9.s64 + 12036;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,-12440(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12440);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8238dbb0
	ctx.lr = 0x82665D88;
	sub_8238DBB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82665D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8265f4c0
	ctx.lr = 0x82665DA0;
	sub_8265F4C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665DA8"))) PPC_WEAK_FUNC(sub_82665DA8);
PPC_FUNC_IMPL(__imp__sub_82665DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82665DB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,2104
	ctx.r10.s64 = ctx.r11.s64 + 2104;
	// lwz r3,-12216(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12216);
	// lwz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82665df0
	if (!ctx.cr6.eq) goto loc_82665DF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665de8
	if (ctx.cr6.eq) goto loc_82665DE8;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82665df0
	if (!ctx.cr6.eq) goto loc_82665DF0;
loc_82665DE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82665df4
	goto loc_82665DF4;
loc_82665DF0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82665DF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665e08
	if (ctx.cr6.eq) goto loc_82665E08;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821ef1f8
	ctx.lr = 0x82665E08;
	sub_821EF1F8(ctx, base);
loc_82665E08:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r29,-32111
	ctx.r29.s64 = -2104426496;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r28,r11,12044
	ctx.r28.s64 = ctx.r11.s64 + 12044;
	// addi r4,r10,2516
	ctx.r4.s64 = ctx.r10.s64 + 2516;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,-24180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x82665E28;
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
	ctx.lr = 0x82665E3C;
	sub_823DB670(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r3,-24180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24180);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,-9136
	ctx.r4.s64 = ctx.r9.s64 + -9136;
	// bl 0x821fd980
	ctx.lr = 0x82665E54;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,32684
	ctx.r4.s64 = ctx.r7.s64 + 32684;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x82665E74;
	sub_823DC018(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r6,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r6.u32);
	// bl 0x821f88b8
	ctx.lr = 0x82665E80;
	sub_821F88B8(ctx, base);
	// lis r5,-32121
	ctx.r5.s64 = -2105081856;
	// lis r3,-32121
	ctx.r3.s64 = -2105081856;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-3624(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3624);
	// lwz r11,700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,797(r10)
	PPC_STORE_U8(ctx.r10.u32 + 797, ctx.r30.u8);
	// lwz r11,-10028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82665EAC;
	sub_82641CB0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,736(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 736);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82665EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32121
	ctx.r7.s64 = -2105081856;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r11,-12456(r7)
	PPC_STORE_U8(ctx.r7.u32 + -12456, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665ED0"))) PPC_WEAK_FUNC(sub_82665ED0);
PPC_FUNC_IMPL(__imp__sub_82665ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82665ED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-3624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3624);
	// lwz r9,700(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stb r30,796(r8)
	PPC_STORE_U8(ctx.r8.u32 + 796, ctx.r30.u8);
	// lwz r11,-3624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3624);
	// lwz r7,700(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stb r30,797(r6)
	PPC_STORE_U8(ctx.r6.u32 + 797, ctx.r30.u8);
	// bl 0x82388680
	ctx.lr = 0x82665F0C;
	sub_82388680(ctx, base);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lis r29,-32111
	ctx.r29.s64 = -2104426496;
	// addi r28,r5,2532
	ctx.r28.s64 = ctx.r5.s64 + 2532;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r4,2516
	ctx.r4.s64 = ctx.r4.s64 + 2516;
	// lwz r3,-24180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x82665F2C;
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
	ctx.lr = 0x82665F40;
	sub_823DB670(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,-24180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24180);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-9136
	ctx.r4.s64 = ctx.r11.s64 + -9136;
	// bl 0x821fd980
	ctx.lr = 0x82665F58;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,32684
	ctx.r4.s64 = ctx.r9.s64 + 32684;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x82665F78;
	sub_823DC018(ctx, base);
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// lwz r11,-10236(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665f98
	if (ctx.cr6.eq) goto loc_82665F98;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82665F98:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r10,-15108
	ctx.r4.s64 = ctx.r10.s64 + -15108;
	// bl 0x82691650
	ctx.lr = 0x82665FA8;
	sub_82691650(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,348(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82665FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8265f428
	ctx.lr = 0x82665FC0;
	sub_8265F428(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665FC8"))) PPC_WEAK_FUNC(sub_82665FC8);
PPC_FUNC_IMPL(__imp__sub_82665FC8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82665FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82665ff4
	if (!ctx.cr6.eq) goto loc_82665FF4;
	// bl 0x82665da8
	ctx.lr = 0x82665FF4;
	sub_82665DA8(ctx, base);
loc_82665FF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666004"))) PPC_WEAK_FUNC(sub_82666004);
PPC_FUNC_IMPL(__imp__sub_82666004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666008"))) PPC_WEAK_FUNC(sub_82666008);
PPC_FUNC_IMPL(__imp__sub_82666008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82666010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,7444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823bcd10
	ctx.lr = 0x82666020;
	sub_823BCD10(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r30,-32111
	ctx.r30.s64 = -2104426496;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r29,r10,12056
	ctx.r29.s64 = ctx.r10.s64 + 12056;
	// addi r4,r9,2516
	ctx.r4.s64 = ctx.r9.s64 + 2516;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x82666040;
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
	ctx.lr = 0x82666054;
	sub_823DB670(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,-9136
	ctx.r4.s64 = ctx.r7.s64 + -9136;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x821fd980
	ctx.lr = 0x82666070;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r4,32684
	ctx.r4.s64 = ctx.r4.s64 + 32684;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x82666090;
	sub_823DC018(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// bl 0x8265f428
	ctx.lr = 0x8266609C;
	sub_8265F428(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826660A4"))) PPC_WEAK_FUNC(sub_826660A4);
PPC_FUNC_IMPL(__imp__sub_826660A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826660A8"))) PPC_WEAK_FUNC(sub_826660A8);
PPC_FUNC_IMPL(__imp__sub_826660A8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826660C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826660e8
	if (!ctx.cr6.eq) goto loc_826660E8;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-10028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// bl 0x82205950
	ctx.lr = 0x826660E4;
	sub_82205950(ctx, base);
	// bl 0x82666008
	ctx.lr = 0x826660E8;
	sub_82666008(ctx, base);
loc_826660E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826660F8"))) PPC_WEAK_FUNC(sub_826660F8);
PPC_FUNC_IMPL(__imp__sub_826660F8) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8266614c
	if (!ctx.cr6.eq) goto loc_8266614C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r6,r11,28996
	ctx.r6.s64 = ctx.r11.s64 + 28996;
	// addi r5,r10,-21896
	ctx.r5.s64 = ctx.r10.s64 + -21896;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dedd8
	ctx.lr = 0x82666148;
	sub_823DEDD8(ctx, base);
	// bl 0x82666008
	ctx.lr = 0x8266614C;
	sub_82666008(ctx, base);
loc_8266614C:
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

__attribute__((alias("__imp__sub_82666160"))) PPC_WEAK_FUNC(sub_82666160);
PPC_FUNC_IMPL(__imp__sub_82666160) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8266618c
	if (!ctx.cr6.eq) goto loc_8266618C;
	// bl 0x82666008
	ctx.lr = 0x8266618C;
	sub_82666008(ctx, base);
loc_8266618C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266619C"))) PPC_WEAK_FUNC(sub_8266619C);
PPC_FUNC_IMPL(__imp__sub_8266619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826661A0"))) PPC_WEAK_FUNC(sub_826661A0);
PPC_FUNC_IMPL(__imp__sub_826661A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x826661A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r30,-32111
	ctx.r30.s64 = -2104426496;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,-4776
	ctx.r29.s64 = ctx.r11.s64 + -4776;
	// addi r4,r10,2516
	ctx.r4.s64 = ctx.r10.s64 + 2516;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x826661CC;
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
	ctx.lr = 0x826661E0;
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
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x821fd980
	ctx.lr = 0x826661FC;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,32684
	ctx.r4.s64 = ctx.r6.s64 + 32684;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x8266621C;
	sub_823DC018(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266622C"))) PPC_WEAK_FUNC(sub_8266622C);
PPC_FUNC_IMPL(__imp__sub_8266622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666230"))) PPC_WEAK_FUNC(sub_82666230);
PPC_FUNC_IMPL(__imp__sub_82666230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82666238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826663bc
	if (!ctx.cr6.eq) goto loc_826663BC;
	// bl 0x826661a0
	ctx.lr = 0x82666260;
	sub_826661A0(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-3624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3624);
	// lwz r9,700(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stb r29,796(r8)
	PPC_STORE_U8(ctx.r8.u32 + 796, ctx.r29.u8);
	// lwz r11,-3624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3624);
	// lwz r7,700(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stb r29,797(r6)
	PPC_STORE_U8(ctx.r6.u32 + 797, ctx.r29.u8);
	// bl 0x82388680
	ctx.lr = 0x82666290;
	sub_82388680(ctx, base);
	// lis r5,-32121
	ctx.r5.s64 = -2105081856;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r4,r4,12080
	ctx.r4.s64 = ctx.r4.s64 + 12080;
	// lwz r11,-10236(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10236);
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691650
	ctx.lr = 0x826662B0;
	sub_82691650(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826662C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82666304
	if (ctx.cr6.eq) goto loc_82666304;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826662d8
	if (ctx.cr6.eq) goto loc_826662D8;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_826662D8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12064
	ctx.r4.s64 = ctx.r11.s64 + 12064;
	// bl 0x82691650
	ctx.lr = 0x826662E8;
	sub_82691650(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826662FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82666304:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12064
	ctx.r4.s64 = ctx.r11.s64 + 12064;
	// bl 0x82691650
	ctx.lr = 0x82666314;
	sub_82691650(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,312(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82666324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82666368
	if (ctx.cr6.eq) goto loc_82666368;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8266633c
	if (ctx.cr6.eq) goto loc_8266633C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8266633C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2032
	ctx.r4.s64 = ctx.r11.s64 + -2032;
	// bl 0x82691650
	ctx.lr = 0x8266634C;
	sub_82691650(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82666360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82666368:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8266637C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826663b8
	if (ctx.cr6.eq) goto loc_826663B8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82666394
	if (ctx.cr6.eq) goto loc_82666394;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82666394:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15108
	ctx.r4.s64 = ctx.r11.s64 + -15108;
	// bl 0x82691650
	ctx.lr = 0x826663A4;
	sub_82691650(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826663B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826663B8:
	// bl 0x8265f428
	ctx.lr = 0x826663BC;
	sub_8265F428(ctx, base);
loc_826663BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826663C4"))) PPC_WEAK_FUNC(sub_826663C4);
PPC_FUNC_IMPL(__imp__sub_826663C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826663C8"))) PPC_WEAK_FUNC(sub_826663C8);
PPC_FUNC_IMPL(__imp__sub_826663C8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826663E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826663f4
	if (!ctx.cr6.eq) goto loc_826663F4;
	// bl 0x82665ed0
	ctx.lr = 0x826663F4;
	sub_82665ED0(ctx, base);
loc_826663F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666404"))) PPC_WEAK_FUNC(sub_82666404);
PPC_FUNC_IMPL(__imp__sub_82666404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666408"))) PPC_WEAK_FUNC(sub_82666408);
PPC_FUNC_IMPL(__imp__sub_82666408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82666410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x82256058
	ctx.lr = 0x82666420;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266643c
	if (ctx.cr6.eq) goto loc_8266643C;
	// bl 0x82256058
	ctx.lr = 0x8266642C;
	sub_82256058(ctx, base);
	// lwz r11,3104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3104);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8266643c
	if (!ctx.cr6.eq) goto loc_8266643C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8266643C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826664f0
	if (!ctx.cr6.eq) goto loc_826664F0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x82256058
	ctx.lr = 0x82666450;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266646c
	if (ctx.cr6.eq) goto loc_8266646C;
	// bl 0x82256058
	ctx.lr = 0x8266645C;
	sub_82256058(ctx, base);
	// lwz r11,3104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3104);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8266646c
	if (!ctx.cr6.eq) goto loc_8266646C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8266646C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826664f0
	if (!ctx.cr6.eq) goto loc_826664F0;
	// bl 0x82256058
	ctx.lr = 0x8266647C;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826664e0
	if (ctx.cr6.eq) goto loc_826664E0;
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
	ctx.lr = 0x826664A4;
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
	ctx.lr = 0x826664B8;
	sub_823DB670(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r3,-24180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24180);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,-9136
	ctx.r4.s64 = ctx.r9.s64 + -9136;
	// bl 0x821fde78
	ctx.lr = 0x826664D0;
	sub_821FDE78(ctx, base);
	// lis r8,-32111
	ctx.r8.s64 = -2104426496;
	// lwz r3,-29340(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29340);
	// bl 0x826ab070
	ctx.lr = 0x826664DC;
	sub_826AB070(ctx, base);
	// b 0x82666568
	goto loc_82666568;
loc_826664E0:
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lwz r3,-29340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29340);
	// bl 0x826ab070
	ctx.lr = 0x826664EC;
	sub_826AB070(ctx, base);
	// b 0x82666568
	goto loc_82666568;
loc_826664F0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r29,-32111
	ctx.r29.s64 = -2104426496;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r28,r11,12100
	ctx.r28.s64 = ctx.r11.s64 + 12100;
	// addi r4,r10,2516
	ctx.r4.s64 = ctx.r10.s64 + 2516;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,-24180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x82666510;
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
	ctx.lr = 0x82666524;
	sub_823DB670(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r3,-24180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24180);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,-9136
	ctx.r4.s64 = ctx.r9.s64 + -9136;
	// bl 0x821fd980
	ctx.lr = 0x8266653C;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,32684
	ctx.r4.s64 = ctx.r7.s64 + 32684;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x8266655C;
	sub_823DC018(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r6,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r6.u32);
	// bl 0x8265f428
	ctx.lr = 0x82666568;
	sub_8265F428(ctx, base);
loc_82666568:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lwz r3,-12012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12012);
	// lwz r11,-27288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27288);
	// lwz r9,2252(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2252);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82666594
	if (!ctx.cr6.eq) goto loc_82666594;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f1498
	ctx.lr = 0x82666594;
	sub_821F1498(ctx, base);
loc_82666594:
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-3624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3624);
	// lwz r9,700(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stb r30,796(r8)
	PPC_STORE_U8(ctx.r8.u32 + 796, ctx.r30.u8);
	// lwz r11,-3624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3624);
	// lwz r7,700(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stb r30,797(r6)
	PPC_STORE_U8(ctx.r6.u32 + 797, ctx.r30.u8);
	// bl 0x82388680
	ctx.lr = 0x826665C0;
	sub_82388680(ctx, base);
	// lis r5,-32121
	ctx.r5.s64 = -2105081856;
	// lwz r11,-10236(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826665d8
	if (ctx.cr6.eq) goto loc_826665D8;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_826665D8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r10,-15108
	ctx.r4.s64 = ctx.r10.s64 + -15108;
	// bl 0x82691650
	ctx.lr = 0x826665E8;
	sub_82691650(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,348(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826665FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32121
	ctx.r7.s64 = -2105081856;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82666614;
	sub_82641CB0(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,736(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 736);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82666624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266662C"))) PPC_WEAK_FUNC(sub_8266662C);
PPC_FUNC_IMPL(__imp__sub_8266662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666630"))) PPC_WEAK_FUNC(sub_82666630);
PPC_FUNC_IMPL(__imp__sub_82666630) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8266665c
	if (!ctx.cr6.eq) goto loc_8266665C;
	// bl 0x82666408
	ctx.lr = 0x8266665C;
	sub_82666408(ctx, base);
loc_8266665C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266666C"))) PPC_WEAK_FUNC(sub_8266666C);
PPC_FUNC_IMPL(__imp__sub_8266666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666670"))) PPC_WEAK_FUNC(sub_82666670);
PPC_FUNC_IMPL(__imp__sub_82666670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82666678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82666754
	if (!ctx.cr6.eq) goto loc_82666754;
	// lis r30,-32111
	ctx.r30.s64 = -2104426496;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-9136
	ctx.r4.s64 = ctx.r11.s64 + -9136;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x821fd980
	ctx.lr = 0x826666B0;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,32684
	ctx.r4.s64 = ctx.r9.s64 + 32684;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x826666D0;
	sub_823DC018(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r29,r7,3998
	ctx.r29.s64 = ctx.r7.s64 + 3998;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// addi r4,r6,2516
	ctx.r4.s64 = ctx.r6.s64 + 2516;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8220ef00
	ctx.lr = 0x826666F4;
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
	ctx.lr = 0x82666708;
	sub_823DB670(ctx, base);
	// lis r5,-32121
	ctx.r5.s64 = -2105081856;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// lwz r11,-10236(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10236);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8266672c
	if (!ctx.cr6.eq) goto loc_8266672C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8266672C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r10,-15108
	ctx.r4.s64 = ctx.r10.s64 + -15108;
	// bl 0x82691650
	ctx.lr = 0x8266673C;
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
	ctx.lr = 0x82666750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8265f428
	ctx.lr = 0x82666754;
	sub_8265F428(ctx, base);
loc_82666754:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266675C"))) PPC_WEAK_FUNC(sub_8266675C);
PPC_FUNC_IMPL(__imp__sub_8266675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666760"))) PPC_WEAK_FUNC(sub_82666760);
PPC_FUNC_IMPL(__imp__sub_82666760) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826667c0
	if (!ctx.cr6.eq) goto loc_826667C0;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stb r10,797(r5)
	PPC_STORE_U8(ctx.r5.u32 + 797, ctx.r10.u8);
	// bl 0x82665c18
	ctx.lr = 0x826667B4;
	sub_82665C18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,-12776
	ctx.r3.s64 = ctx.r4.s64 + -12776;
	// bl 0x8265f3c8
	ctx.lr = 0x826667C0;
	sub_8265F3C8(ctx, base);
loc_826667C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826667D0"))) PPC_WEAK_FUNC(sub_826667D0);
PPC_FUNC_IMPL(__imp__sub_826667D0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826667F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82666840
	if (!ctx.cr6.eq) goto loc_82666840;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stb r10,797(r5)
	PPC_STORE_U8(ctx.r5.u32 + 797, ctx.r10.u8);
	// bl 0x82665c18
	ctx.lr = 0x82666824;
	sub_82665C18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,12116
	ctx.r3.s64 = ctx.r4.s64 + 12116;
	// bl 0x821fa230
	ctx.lr = 0x82666830;
	sub_821FA230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82666840:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666850"))) PPC_WEAK_FUNC(sub_82666850);
PPC_FUNC_IMPL(__imp__sub_82666850) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r9,656(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82666888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x826668f8
	if (ctx.cr6.eq) goto loc_826668F8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826669a4
	if (!ctx.cr6.eq) goto loc_826669A4;
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-6148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6148);
	// bl 0x82250da8
	ctx.lr = 0x826668A8;
	sub_82250DA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-6148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6148);
	// bl 0x82253298
	ctx.lr = 0x826668B4;
	sub_82253298(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,-15384
	ctx.r4.s64 = ctx.r9.s64 + -15384;
	// lwz r3,-24180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24180);
	// lfs f1,7444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fde10
	ctx.lr = 0x826668D0;
	sub_821FDE10(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-15924
	ctx.r3.s64 = ctx.r8.s64 + -15924;
	// bl 0x821e6800
	ctx.lr = 0x826668DC;
	sub_821E6800(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x826668ec
	if (!ctx.cr6.eq) goto loc_826668EC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_826668EC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,12164
	ctx.r4.s64 = ctx.r11.s64 + 12164;
	// b 0x82666988
	goto loc_82666988;
loc_826668F8:
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-6148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6148);
	// bl 0x82250da8
	ctx.lr = 0x82666908;
	sub_82250DA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-6148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6148);
	// bl 0x82253298
	ctx.lr = 0x82666914;
	sub_82253298(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,-15384
	ctx.r4.s64 = ctx.r9.s64 + -15384;
	// lfs f31,7444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7444);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,-24180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24180);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821fd878
	ctx.lr = 0x82666934;
	sub_821FD878(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r4,r7,9792
	ctx.r4.s64 = ctx.r7.s64 + 9792;
	// lfd f1,21560(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r8.u32 + 21560);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x823dc018
	ctx.lr = 0x82666958;
	sub_823DC018(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// stfs f31,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r6,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r6.u32);
	// addi r3,r5,-15924
	ctx.r3.s64 = ctx.r5.s64 + -15924;
	// bl 0x821e6800
	ctx.lr = 0x82666970;
	sub_821E6800(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x82666980
	if (!ctx.cr6.eq) goto loc_82666980;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82666980:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,12140
	ctx.r4.s64 = ctx.r11.s64 + 12140;
loc_82666988:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82691650
	ctx.lr = 0x82666990;
	sub_82691650(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,348(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826669A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826669A4:
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

__attribute__((alias("__imp__sub_826669C0"))) PPC_WEAK_FUNC(sub_826669C0);
PPC_FUNC_IMPL(__imp__sub_826669C0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826669E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82666a24
	if (!ctx.cr6.eq) goto loc_82666A24;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,-3624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3624);
	// lwz r7,700(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stb r9,796(r6)
	PPC_STORE_U8(ctx.r6.u32 + 796, ctx.r9.u8);
	// lwz r11,-3624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3624);
	// lwz r5,700(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stb r8,797(r4)
	PPC_STORE_U8(ctx.r4.u32 + 797, ctx.r8.u8);
	// bl 0x82665c18
	ctx.lr = 0x82666A18;
	sub_82665C18(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r3,r3,-5016
	ctx.r3.s64 = ctx.r3.s64 + -5016;
	// bl 0x8265f3c8
	ctx.lr = 0x82666A24;
	sub_8265F3C8(ctx, base);
loc_82666A24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666A34"))) PPC_WEAK_FUNC(sub_82666A34);
PPC_FUNC_IMPL(__imp__sub_82666A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666A38"))) PPC_WEAK_FUNC(sub_82666A38);
PPC_FUNC_IMPL(__imp__sub_82666A38) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82666a98
	if (!ctx.cr6.eq) goto loc_82666A98;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stb r10,797(r5)
	PPC_STORE_U8(ctx.r5.u32 + 797, ctx.r10.u8);
	// bl 0x82665c18
	ctx.lr = 0x82666A8C;
	sub_82665C18(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,5696
	ctx.r3.s64 = ctx.r4.s64 + 5696;
	// bl 0x8265f3c8
	ctx.lr = 0x82666A98;
	sub_8265F3C8(ctx, base);
loc_82666A98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666AA8"))) PPC_WEAK_FUNC(sub_82666AA8);
PPC_FUNC_IMPL(__imp__sub_82666AA8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82666b08
	if (!ctx.cr6.eq) goto loc_82666B08;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stb r10,797(r5)
	PPC_STORE_U8(ctx.r5.u32 + 797, ctx.r10.u8);
	// bl 0x82665c18
	ctx.lr = 0x82666AFC;
	sub_82665C18(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r4,14304
	ctx.r3.s64 = ctx.r4.s64 + 14304;
	// bl 0x8265f3c8
	ctx.lr = 0x82666B08;
	sub_8265F3C8(ctx, base);
loc_82666B08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666B18"))) PPC_WEAK_FUNC(sub_82666B18);
PPC_FUNC_IMPL(__imp__sub_82666B18) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82666b78
	if (!ctx.cr6.eq) goto loc_82666B78;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stb r10,797(r5)
	PPC_STORE_U8(ctx.r5.u32 + 797, ctx.r10.u8);
	// bl 0x82665c18
	ctx.lr = 0x82666B6C;
	sub_82665C18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r4,12188
	ctx.r3.s64 = ctx.r4.s64 + 12188;
	// bl 0x8265f3c8
	ctx.lr = 0x82666B78;
	sub_8265F3C8(ctx, base);
loc_82666B78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666B88"))) PPC_WEAK_FUNC(sub_82666B88);
PPC_FUNC_IMPL(__imp__sub_82666B88) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82666bb4
	if (!ctx.cr6.eq) goto loc_82666BB4;
	// bl 0x82665ce0
	ctx.lr = 0x82666BB4;
	sub_82665CE0(ctx, base);
loc_82666BB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666BC4"))) PPC_WEAK_FUNC(sub_82666BC4);
PPC_FUNC_IMPL(__imp__sub_82666BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666BC8"))) PPC_WEAK_FUNC(sub_82666BC8);
PPC_FUNC_IMPL(__imp__sub_82666BC8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82666c38
	if (!ctx.cr6.eq) goto loc_82666C38;
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-10028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10028);
	// bl 0x82212200
	ctx.lr = 0x82666C04;
	sub_82212200(ctx, base);
	// bl 0x8265f568
	ctx.lr = 0x82666C08;
	sub_8265F568(ctx, base);
	// lwz r11,-10028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10028);
	// li r4,71
	ctx.r4.s64 = 71;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82666C1C;
	sub_82641CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82665940
	ctx.lr = 0x82666C24;
	sub_82665940(ctx, base);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82666C38:
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

__attribute__((alias("__imp__sub_82666C4C"))) PPC_WEAK_FUNC(sub_82666C4C);
PPC_FUNC_IMPL(__imp__sub_82666C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82666C50"))) PPC_WEAK_FUNC(sub_82666C50);
PPC_FUNC_IMPL(__imp__sub_82666C50) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82666cd0
	if (!ctx.cr6.eq) goto loc_82666CD0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r30,r10,9120
	ctx.r30.s64 = ctx.r10.s64 + 9120;
	// addi r4,r9,2516
	ctx.r4.s64 = ctx.r9.s64 + 2516;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,-24180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x82666CA0;
	sub_8220EF00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823db670
	ctx.lr = 0x82666CB4;
	sub_823DB670(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r7,-9136
	ctx.r3.s64 = ctx.r7.s64 + -9136;
	// bl 0x82255cf8
	ctx.lr = 0x82666CCC;
	sub_82255CF8(ctx, base);
	// bl 0x8265f428
	ctx.lr = 0x82666CD0;
	sub_8265F428(ctx, base);
loc_82666CD0:
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

__attribute__((alias("__imp__sub_82666CE8"))) PPC_WEAK_FUNC(sub_82666CE8);
PPC_FUNC_IMPL(__imp__sub_82666CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82666CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82666db0
	if (!ctx.cr6.eq) goto loc_82666DB0;
	// lis r30,-32111
	ctx.r30.s64 = -2104426496;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-9136
	ctx.r4.s64 = ctx.r11.s64 + -9136;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x821fd980
	ctx.lr = 0x82666D28;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,32684
	ctx.r4.s64 = ctx.r9.s64 + 32684;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x82666D48;
	sub_823DC018(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r29,r7,3998
	ctx.r29.s64 = ctx.r7.s64 + 3998;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// addi r4,r6,2516
	ctx.r4.s64 = ctx.r6.s64 + 2516;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8220ef00
	ctx.lr = 0x82666D6C;
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
	ctx.lr = 0x82666D80;
	sub_823DB670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r3,-32121
	ctx.r3.s64 = -2105081856;
	// stw r5,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r5.u32);
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82666DA0;
	sub_82641CB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82666DB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666DB8"))) PPC_WEAK_FUNC(sub_82666DB8);
PPC_FUNC_IMPL(__imp__sub_82666DB8) {
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
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-5008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5008);
	// lwz r10,1888(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1888);
	// lwz r9,1892(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1892);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82666df4
	if (ctx.cr6.lt) goto loc_82666DF4;
	// lfs f0,4992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,4992(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4992, temp.u32);
loc_82666DF4:
	// lfs f0,4996(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82666e14
	if (!ctx.cr6.gt) goto loc_82666E14;
	// bl 0x82665ce0
	ctx.lr = 0x82666E08;
	sub_82665CE0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,20160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4992, temp.u32);
loc_82666E14:
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

__attribute__((alias("__imp__sub_82666E28"))) PPC_WEAK_FUNC(sub_82666E28);
PPC_FUNC_IMPL(__imp__sub_82666E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82666E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
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
	ctx.lr = 0x82666E50;
	sub_82641CB0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,736(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 736);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82666E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32111
	ctx.r30.s64 = -2104426496;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,-9136
	ctx.r4.s64 = ctx.r7.s64 + -9136;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x821fd980
	ctx.lr = 0x82666E78;
	sub_821FD980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r4,32684
	ctx.r4.s64 = ctx.r4.s64 + 32684;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823dc018
	ctx.lr = 0x82666E98;
	sub_823DC018(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,12212
	ctx.r29.s64 = ctx.r11.s64 + 12212;
	// addi r4,r10,2516
	ctx.r4.s64 = ctx.r10.s64 + 2516;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x82666EBC;
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
	ctx.lr = 0x82666ED0;
	sub_823DB670(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17268(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17268);
	// bl 0x822a3998
	ctx.lr = 0x82666EE8;
	sub_822A3998(ctx, base);
	// lwz r3,880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// bl 0x822b34b0
	ctx.lr = 0x82666EF0;
	sub_822B34B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666EF8"))) PPC_WEAK_FUNC(sub_82666EF8);
PPC_FUNC_IMPL(__imp__sub_82666EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82666F00;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82666F20;
	sub_82641CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82666f4c
	if (ctx.cr6.eq) goto loc_82666F4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82666f60
	goto loc_82666F60;
loc_82666F4C:
	// bl 0x82660230
	ctx.lr = 0x82666F50;
	sub_82660230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
loc_82666F60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826670d8
	if (ctx.cr6.eq) goto loc_826670D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,27192
	ctx.r4.s64 = ctx.r11.s64 + 27192;
	// beq cr6,0x8266704c
	if (ctx.cr6.eq) goto loc_8266704C;
	// bl 0x821c2fb0
	ctx.lr = 0x82666FA8;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82666FB8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82666fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82666FB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82666FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82667010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x826624c8
	ctx.lr = 0x82667044;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_8266704C:
	// bl 0x821c2fb0
	ctx.lr = 0x82667050;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82667064:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82667064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82667064;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8266708C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826670A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x826670D0;
	sub_82634EC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_826670D8:
	// lwz r3,-10028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x826670E0;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266714c
	if (ctx.cr6.eq) goto loc_8266714C;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,27192
	ctx.r4.s64 = ctx.r11.s64 + 27192;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c2fb0
	ctx.lr = 0x82667108;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r10,11976
	ctx.r6.s64 = ctx.r10.s64 + 11976;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r5,r9,12232
	ctx.r5.s64 = ctx.r9.s64 + 12232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x82667144;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_8266714C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,5696
	ctx.r3.s64 = ctx.r11.s64 + 5696;
	// bl 0x8265f3c8
	ctx.lr = 0x82667158;
	sub_8265F3C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667160"))) PPC_WEAK_FUNC(sub_82667160);
PPC_FUNC_IMPL(__imp__sub_82667160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82667168;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82667188;
	sub_82641CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826671A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826671b4
	if (ctx.cr6.eq) goto loc_826671B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826671c8
	goto loc_826671C8;
loc_826671B4:
	// bl 0x82660230
	ctx.lr = 0x826671B8;
	sub_82660230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
loc_826671C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667340
	if (ctx.cr6.eq) goto loc_82667340;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826671E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,26464
	ctx.r4.s64 = ctx.r11.s64 + 26464;
	// beq cr6,0x826672b4
	if (ctx.cr6.eq) goto loc_826672B4;
	// bl 0x821c2fb0
	ctx.lr = 0x82667210;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82667220:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82667220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82667220;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82667260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82667278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x826624c8
	ctx.lr = 0x826672AC;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_826672B4:
	// bl 0x821c2fb0
	ctx.lr = 0x826672B8;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826672CC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826672cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826672CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826672F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8266730C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x82667338;
	sub_82634EC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82667340:
	// lwz r3,-10028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x82667348;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826673b4
	if (ctx.cr6.eq) goto loc_826673B4;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,26464
	ctx.r4.s64 = ctx.r11.s64 + 26464;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c2fb0
	ctx.lr = 0x82667370;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r10,11976
	ctx.r6.s64 = ctx.r10.s64 + 11976;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r5,r9,12232
	ctx.r5.s64 = ctx.r9.s64 + 12232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x826673AC;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_826673B4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// bl 0x8265f3c8
	ctx.lr = 0x826673C0;
	sub_8265F3C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826673C8"))) PPC_WEAK_FUNC(sub_826673C8);
PPC_FUNC_IMPL(__imp__sub_826673C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x826673D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x826673F0;
	sub_82641CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8266741c
	if (ctx.cr6.eq) goto loc_8266741C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82667430
	goto loc_82667430;
loc_8266741C:
	// bl 0x82660230
	ctx.lr = 0x82667420;
	sub_82660230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
loc_82667430:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826675a8
	if (ctx.cr6.eq) goto loc_826675A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,27072
	ctx.r4.s64 = ctx.r11.s64 + 27072;
	// beq cr6,0x8266751c
	if (ctx.cr6.eq) goto loc_8266751C;
	// bl 0x821c2fb0
	ctx.lr = 0x82667478;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82667488:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82667488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82667488;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826674B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826674C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826674E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x826624c8
	ctx.lr = 0x82667514;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_8266751C:
	// bl 0x821c2fb0
	ctx.lr = 0x82667520;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82667534:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82667534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82667534;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8266755C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82667574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x826675A0;
	sub_82634EC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_826675A8:
	// lwz r3,-10028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x826675B0;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266761c
	if (ctx.cr6.eq) goto loc_8266761C;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,27072
	ctx.r4.s64 = ctx.r11.s64 + 27072;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c2fb0
	ctx.lr = 0x826675D8;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r10,11976
	ctx.r6.s64 = ctx.r10.s64 + 11976;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r5,r9,12232
	ctx.r5.s64 = ctx.r9.s64 + 12232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x82667614;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_8266761C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-5016
	ctx.r3.s64 = ctx.r11.s64 + -5016;
	// bl 0x8265f3c8
	ctx.lr = 0x82667628;
	sub_8265F3C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667630"))) PPC_WEAK_FUNC(sub_82667630);
PPC_FUNC_IMPL(__imp__sub_82667630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82667638;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82667658;
	sub_82641CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82667684
	if (ctx.cr6.eq) goto loc_82667684;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82667698
	goto loc_82667698;
loc_82667684:
	// bl 0x82660230
	ctx.lr = 0x82667688;
	sub_82660230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
loc_82667698:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667810
	if (ctx.cr6.eq) goto loc_82667810;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826676B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,27304
	ctx.r4.s64 = ctx.r11.s64 + 27304;
	// beq cr6,0x82667784
	if (ctx.cr6.eq) goto loc_82667784;
	// bl 0x821c2fb0
	ctx.lr = 0x826676E0;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826676F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826676f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826676F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82667730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82667748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x826624c8
	ctx.lr = 0x8266777C;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82667784:
	// bl 0x821c2fb0
	ctx.lr = 0x82667788;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8266779C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8266779c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8266779C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826677C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826677DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x82667808;
	sub_82634EC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82667810:
	// lwz r3,-10028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x82667818;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667884
	if (ctx.cr6.eq) goto loc_82667884;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,27304
	ctx.r4.s64 = ctx.r11.s64 + 27304;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c2fb0
	ctx.lr = 0x82667840;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r10,11976
	ctx.r6.s64 = ctx.r10.s64 + 11976;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r5,r9,12232
	ctx.r5.s64 = ctx.r9.s64 + 12232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x8266787C;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82667884:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,14304
	ctx.r3.s64 = ctx.r11.s64 + 14304;
	// bl 0x8265f3c8
	ctx.lr = 0x82667890;
	sub_8265F3C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667898"))) PPC_WEAK_FUNC(sub_82667898);
PPC_FUNC_IMPL(__imp__sub_82667898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x826678A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x826678C0;
	sub_82641CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826678D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826678ec
	if (ctx.cr6.eq) goto loc_826678EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82667900
	goto loc_82667900;
loc_826678EC:
	// bl 0x82660230
	ctx.lr = 0x826678F0;
	sub_82660230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
loc_82667900:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667a78
	if (ctx.cr6.eq) goto loc_82667A78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,27416
	ctx.r4.s64 = ctx.r11.s64 + 27416;
	// beq cr6,0x826679ec
	if (ctx.cr6.eq) goto loc_826679EC;
	// bl 0x821c2fb0
	ctx.lr = 0x82667948;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82667958:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82667958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82667958;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82667998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826679B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x826624c8
	ctx.lr = 0x826679E4;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_826679EC:
	// bl 0x821c2fb0
	ctx.lr = 0x826679F0;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82667A04:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82667a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82667A04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82667A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x82667A70;
	sub_82634EC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82667A78:
	// lwz r3,-10028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x82667A80;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667aec
	if (ctx.cr6.eq) goto loc_82667AEC;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,27416
	ctx.r4.s64 = ctx.r11.s64 + 27416;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c2fb0
	ctx.lr = 0x82667AA8;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r10,11976
	ctx.r6.s64 = ctx.r10.s64 + 11976;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r5,r9,12232
	ctx.r5.s64 = ctx.r9.s64 + 12232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x82667AE4;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_82667AEC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,12188
	ctx.r3.s64 = ctx.r11.s64 + 12188;
	// bl 0x8265f3c8
	ctx.lr = 0x82667AF8;
	sub_8265F3C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667B00"))) PPC_WEAK_FUNC(sub_82667B00);
PPC_FUNC_IMPL(__imp__sub_82667B00) {
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
	ctx.lr = 0x82667B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82667b38
	if (!ctx.cr6.eq) goto loc_82667B38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82667160
	ctx.lr = 0x82667B38;
	sub_82667160(ctx, base);
loc_82667B38:
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

__attribute__((alias("__imp__sub_82667B4C"))) PPC_WEAK_FUNC(sub_82667B4C);
PPC_FUNC_IMPL(__imp__sub_82667B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667B50"))) PPC_WEAK_FUNC(sub_82667B50);
PPC_FUNC_IMPL(__imp__sub_82667B50) {
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
	ctx.lr = 0x82667B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82667b88
	if (!ctx.cr6.eq) goto loc_82667B88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826673c8
	ctx.lr = 0x82667B88;
	sub_826673C8(ctx, base);
loc_82667B88:
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

__attribute__((alias("__imp__sub_82667B9C"))) PPC_WEAK_FUNC(sub_82667B9C);
PPC_FUNC_IMPL(__imp__sub_82667B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667BA0"))) PPC_WEAK_FUNC(sub_82667BA0);
PPC_FUNC_IMPL(__imp__sub_82667BA0) {
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
	ctx.lr = 0x82667BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82667bd8
	if (!ctx.cr6.eq) goto loc_82667BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82666ef8
	ctx.lr = 0x82667BD8;
	sub_82666EF8(ctx, base);
loc_82667BD8:
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

__attribute__((alias("__imp__sub_82667BEC"))) PPC_WEAK_FUNC(sub_82667BEC);
PPC_FUNC_IMPL(__imp__sub_82667BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667BF0"))) PPC_WEAK_FUNC(sub_82667BF0);
PPC_FUNC_IMPL(__imp__sub_82667BF0) {
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
	ctx.lr = 0x82667C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82667c28
	if (!ctx.cr6.eq) goto loc_82667C28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82667630
	ctx.lr = 0x82667C28;
	sub_82667630(ctx, base);
loc_82667C28:
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

__attribute__((alias("__imp__sub_82667C3C"))) PPC_WEAK_FUNC(sub_82667C3C);
PPC_FUNC_IMPL(__imp__sub_82667C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667C40"))) PPC_WEAK_FUNC(sub_82667C40);
PPC_FUNC_IMPL(__imp__sub_82667C40) {
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
	ctx.lr = 0x82667C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82667c78
	if (!ctx.cr6.eq) goto loc_82667C78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82667898
	ctx.lr = 0x82667C78;
	sub_82667898(ctx, base);
loc_82667C78:
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

__attribute__((alias("__imp__sub_82667C8C"))) PPC_WEAK_FUNC(sub_82667C8C);
PPC_FUNC_IMPL(__imp__sub_82667C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667C90"))) PPC_WEAK_FUNC(sub_82667C90);
PPC_FUNC_IMPL(__imp__sub_82667C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82667C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8268e6b8
	ctx.lr = 0x82667CA4;
	sub_8268E6B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r4,71
	ctx.r4.s64 = 71;
	// ori r31,r9,16256
	ctx.r31.u64 = ctx.r9.u64 | 16256;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82641cb0
	ctx.lr = 0x82667CD8;
	sub_82641CB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82665940
	ctx.lr = 0x82667CE0;
	sub_82665940(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82667CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32121
	ctx.r6.s64 = -2105081856;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,17268(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 17268);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e80f8
	ctx.lr = 0x82667D0C;
	sub_821E80F8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82667d2c
	if (ctx.cr6.eq) goto loc_82667D2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a3998
	ctx.lr = 0x82667D24;
	sub_822A3998(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a93a8
	ctx.lr = 0x82667D2C;
	sub_822A93A8(ctx, base);
loc_82667D2C:
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82641cc8
	ctx.lr = 0x82667D38;
	sub_82641CC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82667d70
	if (ctx.cr6.eq) goto loc_82667D70;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82641cc8
	ctx.lr = 0x82667D4C;
	sub_82641CC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-12456(r9)
	PPC_STORE_U8(ctx.r9.u32 + -12456, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82667D70:
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-12456(r10)
	PPC_STORE_U8(ctx.r10.u32 + -12456, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667D84"))) PPC_WEAK_FUNC(sub_82667D84);
PPC_FUNC_IMPL(__imp__sub_82667D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82667D88"))) PPC_WEAK_FUNC(sub_82667D88);
PPC_FUNC_IMPL(__imp__sub_82667D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91c0
	ctx.lr = 0x82667D90;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82633930
	ctx.lr = 0x82667DA0;
	sub_82633930(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r19,r31,176
	ctx.r19.s64 = ctx.r31.s64 + 176;
	// addi r10,r11,8284
	ctx.r10.s64 = ctx.r11.s64 + 8284;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82633ca8
	ctx.lr = 0x82667DBC;
	sub_82633CA8(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r26,r31,384
	ctx.r26.s64 = ctx.r31.s64 + 384;
	// addi r30,r9,3988
	ctx.r30.s64 = ctx.r9.s64 + 3988;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82633a10
	ctx.lr = 0x82667DD8;
	sub_82633A10(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r8,4324
	ctx.r28.s64 = ctx.r8.s64 + 4324;
	// stw r29,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r29.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r28,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r28.u32);
	// addi r25,r31,576
	ctx.r25.s64 = ctx.r31.s64 + 576;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,3968
	ctx.r4.s64 = ctx.r7.s64 + 3968;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82633a10
	ctx.lr = 0x82667E04;
	sub_82633A10(ctx, base);
	// stw r28,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r28.u32);
	// stw r29,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r29.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r24,r31,768
	ctx.r24.s64 = ctx.r31.s64 + 768;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,3948
	ctx.r4.s64 = ctx.r6.s64 + 3948;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82633a10
	ctx.lr = 0x82667E24;
	sub_82633A10(ctx, base);
	// stw r28,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r28.u32);
	// stw r29,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r29.u32);
	// addi r3,r31,960
	ctx.r3.s64 = ctx.r31.s64 + 960;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82633a10
	ctx.lr = 0x82667E3C;
	sub_82633A10(ctx, base);
	// stw r28,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r28.u32);
	// stw r29,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r29.u32);
	// addi r23,r31,1152
	ctx.r23.s64 = ctx.r31.s64 + 1152;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82634738
	ctx.lr = 0x82667E58;
	sub_82634738(ctx, base);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r22,r31,1408
	ctx.r22.s64 = ctx.r31.s64 + 1408;
	// addi r30,r5,6612
	ctx.r30.s64 = ctx.r5.s64 + 6612;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82634738
	ctx.lr = 0x82667E78;
	sub_82634738(ctx, base);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// addi r21,r31,1664
	ctx.r21.s64 = ctx.r31.s64 + 1664;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82634738
	ctx.lr = 0x82667E90;
	sub_82634738(ctx, base);
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// addi r20,r31,1920
	ctx.r20.s64 = ctx.r31.s64 + 1920;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82634738
	ctx.lr = 0x82667EA8;
	sub_82634738(ctx, base);
	// stw r30,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r30.u32);
	// addi r30,r31,2192
	ctx.r30.s64 = ctx.r31.s64 + 2192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826337a8
	ctx.lr = 0x82667EB8;
	sub_826337A8(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r29,2368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2368, ctx.r29.u32);
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// addi r11,r4,-14100
	ctx.r11.s64 = ctx.r4.s64 + -14100;
	// stw r29,2372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2372, ctx.r29.u32);
	// stw r11,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// bl 0x821c2f70
	ctx.lr = 0x82667ED4;
	sub_821C2F70(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r29,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r29.u32);
	// addi r17,r10,8108
	ctx.r17.s64 = ctx.r10.s64 + 8108;
	// stb r18,2396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2396, ctx.r18.u8);
	// addi r28,r31,2416
	ctx.r28.s64 = ctx.r31.s64 + 2416;
	// stw r17,2416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2416, ctx.r17.u32);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82634b60
	ctx.lr = 0x82667EF8;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x82667F00;
	sub_82634B60(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// addi r16,r9,-3372
	ctx.r16.s64 = ctx.r9.s64 + -3372;
	// stw r16,4224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4224, ctx.r16.u32);
	// bl 0x82662738
	ctx.lr = 0x82667F14;
	sub_82662738(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r28,r31,7408
	ctx.r28.s64 = ctx.r31.s64 + 7408;
	// addi r7,r8,9764
	ctx.r7.s64 = ctx.r8.s64 + 9764;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r7,2416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2416, ctx.r7.u32);
	// stw r17,7408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7408, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x82667F30;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x82667F38;
	sub_82634B60(ctx, base);
	// stw r16,9216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9216, ctx.r16.u32);
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x82667F44;
	sub_82662738(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r28,r31,12400
	ctx.r28.s64 = ctx.r31.s64 + 12400;
	// addi r5,r6,9884
	ctx.r5.s64 = ctx.r6.s64 + 9884;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r5,7408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7408, ctx.r5.u32);
	// stw r17,12400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12400, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x82667F60;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x82667F68;
	sub_82634B60(ctx, base);
	// stw r16,14208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14208, ctx.r16.u32);
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x82667F74;
	sub_82662738(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r28,r31,17392
	ctx.r28.s64 = ctx.r31.s64 + 17392;
	// addi r11,r4,10036
	ctx.r11.s64 = ctx.r4.s64 + 10036;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r11,12400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12400, ctx.r11.u32);
	// stw r17,17392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17392, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x82667F90;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x82667F98;
	sub_82634B60(ctx, base);
	// stw r16,19200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19200, ctx.r16.u32);
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x82667FA4;
	sub_82662738(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r28,r31,22384
	ctx.r28.s64 = ctx.r31.s64 + 22384;
	// addi r9,r10,10276
	ctx.r9.s64 = ctx.r10.s64 + 10276;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r9,17392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17392, ctx.r9.u32);
	// stw r17,22384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22384, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x82667FC0;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x82667FC8;
	sub_82634B60(ctx, base);
	// stw r16,24192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24192, ctx.r16.u32);
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x82667FD4;
	sub_82662738(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r28,r31,27376
	ctx.r28.s64 = ctx.r31.s64 + 27376;
	// addi r7,r8,10452
	ctx.r7.s64 = ctx.r8.s64 + 10452;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r7,22384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22384, ctx.r7.u32);
	// stw r17,27376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27376, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x82667FF0;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x82667FF8;
	sub_82634B60(ctx, base);
	// stw r16,29184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29184, ctx.r16.u32);
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x82668004;
	sub_82662738(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r28,r31,32368
	ctx.r28.s64 = ctx.r31.s64 + 32368;
	// addi r5,r6,10700
	ctx.r5.s64 = ctx.r6.s64 + 10700;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r5,27376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27376, ctx.r5.u32);
	// stw r17,32368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32368, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x82668020;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x82668028;
	sub_82634B60(ctx, base);
	// stw r16,1808(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1808, ctx.r16.u32);
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x82668034;
	sub_82662738(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r28,r28,-28176
	ctx.r28.s64 = ctx.r28.s64 + -28176;
	// addi r11,r4,10980
	ctx.r11.s64 = ctx.r4.s64 + 10980;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r11,32368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32368, ctx.r11.u32);
	// stw r17,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x82668054;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x8266805C;
	sub_82634B60(ctx, base);
	// stw r16,1808(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1808, ctx.r16.u32);
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x82668068;
	sub_82662738(ctx, base);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r27,r27,-23184
	ctx.r27.s64 = ctx.r27.s64 + -23184;
	// addi r9,r10,11180
	ctx.r9.s64 = ctx.r10.s64 + 11180;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r17,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x82668088;
	sub_82634B60(ctx, base);
	// addi r3,r27,1808
	ctx.r3.s64 = ctx.r27.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x82668090;
	sub_82634B60(ctx, base);
	// stw r16,1808(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1808, ctx.r16.u32);
	// addi r3,r27,3600
	ctx.r3.s64 = ctx.r27.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x8266809C;
	sub_82662738(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r28,r28,-18192
	ctx.r28.s64 = ctx.r28.s64 + -18192;
	// addi r7,r8,11380
	ctx.r7.s64 = ctx.r8.s64 + 11380;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// stw r17,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x826680BC;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x826680C4;
	sub_82634B60(ctx, base);
	// stw r16,1808(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1808, ctx.r16.u32);
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x826680D0;
	sub_82662738(ctx, base);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r27,r27,-13200
	ctx.r27.s64 = ctx.r27.s64 + -13200;
	// addi r5,r6,11500
	ctx.r5.s64 = ctx.r6.s64 + 11500;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// stw r17,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x826680F0;
	sub_82634B60(ctx, base);
	// addi r3,r27,1808
	ctx.r3.s64 = ctx.r27.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x826680F8;
	sub_82634B60(ctx, base);
	// stw r16,1808(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1808, ctx.r16.u32);
	// addi r3,r27,3600
	ctx.r3.s64 = ctx.r27.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x82668104;
	sub_82662738(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r28,r28,-8208
	ctx.r28.s64 = ctx.r28.s64 + -8208;
	// addi r11,r4,11620
	ctx.r11.s64 = ctx.r4.s64 + 11620;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r17,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x82668124;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x8266812C;
	sub_82634B60(ctx, base);
	// stw r16,1808(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1808, ctx.r16.u32);
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x82668138;
	sub_82662738(ctx, base);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r27,r27,-3200
	ctx.r27.s64 = ctx.r27.s64 + -3200;
	// addi r9,r10,11740
	ctx.r9.s64 = ctx.r10.s64 + 11740;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r17,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x82668158;
	sub_82634B60(ctx, base);
	// addi r3,r27,1808
	ctx.r3.s64 = ctx.r27.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x82668160;
	sub_82634B60(ctx, base);
	// stw r16,1808(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1808, ctx.r16.u32);
	// addi r3,r27,3600
	ctx.r3.s64 = ctx.r27.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x8266816C;
	sub_82662738(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r28,r28,1792
	ctx.r28.s64 = ctx.r28.s64 + 1792;
	// addi r7,r8,11860
	ctx.r7.s64 = ctx.r8.s64 + 11860;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// stw r17,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r17.u32);
	// bl 0x82634b60
	ctx.lr = 0x8266818C;
	sub_82634B60(ctx, base);
	// addi r3,r28,1808
	ctx.r3.s64 = ctx.r28.s64 + 1808;
	// bl 0x82634b60
	ctx.lr = 0x82668194;
	sub_82634B60(ctx, base);
	// stw r16,1808(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1808, ctx.r16.u32);
	// addi r3,r28,3600
	ctx.r3.s64 = ctx.r28.s64 + 3600;
	// bl 0x82662738
	ctx.lr = 0x826681A0;
	sub_82662738(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,6784
	ctx.r3.s64 = ctx.r3.s64 + 6784;
	// bl 0x82634b60
	ctx.lr = 0x826681AC;
	sub_82634B60(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,8576
	ctx.r3.s64 = ctx.r3.s64 + 8576;
	// bl 0x82662738
	ctx.lr = 0x826681B8;
	sub_82662738(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r17,r31,2176
	ctx.r17.s64 = ctx.r31.s64 + 2176;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r14,32
	ctx.r14.s64 = 32;
	// addi r16,r11,-4092
	ctx.r16.s64 = ctx.r11.s64 + -4092;
	// addi r15,r10,6560
	ctx.r15.s64 = ctx.r10.s64 + 6560;
loc_826681D4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82130528
	ctx.lr = 0x826681DC;
	sub_82130528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82668214
	if (ctx.cr6.eq) goto loc_82668214;
	// stw r16,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r16.u32);
	// li r3,128
	ctx.r3.s64 = 128;
	// sth r29,8(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8, ctx.r29.u16);
	// sth r14,10(r28)
	PPC_STORE_U16(ctx.r28.u32 + 10, ctx.r14.u16);
	// bl 0x82130528
	ctx.lr = 0x826681FC;
	sub_82130528(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r15,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r15.u32);
	// stw r18,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r18.u32);
	// b 0x82668218
	goto loc_82668218;
loc_82668214:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82668218:
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// bne 0x826681d4
	if (!ctx.cr0.eq) goto loc_826681D4;
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r8,2
	ctx.r8.s64 = 2;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,356
	ctx.r11.s64 = ctx.r31.s64 + 356;
	// sth r7,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r7.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r4.u16);
	// stwx r19,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r19.u32);
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lhz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 360);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 360, ctx.r7.u16);
	// stwx r26,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lhz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 360);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 360, ctx.r4.u16);
	// stwx r25,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r25.u32);
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lhz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 360);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 360, ctx.r7.u16);
	// stwx r24,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r24.u32);
	// lwz r10,452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lhz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 456);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// sth r4,456(r31)
	PPC_STORE_U16(ctx.r31.u32 + 456, ctx.r4.u16);
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// lwz r10,644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// lhz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 648);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// sth r9,648(r31)
	PPC_STORE_U16(ctx.r31.u32 + 648, ctx.r9.u16);
	// stwx r22,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r22.u32);
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lhz r11,840(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 840);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// sth r6,840(r31)
	PPC_STORE_U16(ctx.r31.u32 + 840, ctx.r6.u16);
	// stwx r21,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r21.u32);
	// lwz r10,1028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// sth r3,1032(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1032, ctx.r3.u16);
	// stwx r20,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r20.u32);
	// stw r18,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r18.u32);
	// stw r18,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r18.u32);
	// stw r8,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r8.u32);
	// stw r5,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r5.u32);
	// lwz r10,176(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,176(r19)
	PPC_STORE_U32(ctx.r19.u32 + 176, ctx.r29.u32);
	// beq cr6,0x8266833c
	if (ctx.cr6.eq) goto loc_8266833C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r19,188
	ctx.r3.s64 = ctx.r19.s64 + 188;
	// bl 0x821c3048
	ctx.lr = 0x8266833C;
	sub_821C3048(ctx, base);
loc_8266833C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823d9210
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668348"))) PPC_WEAK_FUNC(sub_82668348);
PPC_FUNC_IMPL(__imp__sub_82668348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x82668350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-13208
	ctx.r4.s64 = ctx.r11.s64 + -13208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82633e80
	ctx.lr = 0x82668368;
	sub_82633E80(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// addi r9,r10,12268
	ctx.r9.s64 = ctx.r10.s64 + 12268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82634078
	ctx.lr = 0x82668384;
	sub_82634078(ctx, base);
	// addi r29,r31,480
	ctx.r29.s64 = ctx.r31.s64 + 480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82667d88
	ctx.lr = 0x82668390;
	sub_82667D88(ctx, base);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r8.u16);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r9,324(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,328(r31)
	PPC_STORE_U16(ctx.r31.u32 + 328, ctx.r6.u16);
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// bl 0x82632e98
	ctx.lr = 0x826683D0;
	sub_82632E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826683DC"))) PPC_WEAK_FUNC(sub_826683DC);
PPC_FUNC_IMPL(__imp__sub_826683DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826683E0"))) PPC_WEAK_FUNC(sub_826683E0);
PPC_FUNC_IMPL(__imp__sub_826683E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x826683E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x826628b0
	ctx.lr = 0x826683FC;
	sub_826628B0(ctx, base);
	// lhz r11,438(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 438);
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668414
	if (ctx.cr6.eq) goto loc_82668414;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// bl 0x82130588
	ctx.lr = 0x82668414;
	sub_82130588(ctx, base);
loc_82668414:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82633b00
	ctx.lr = 0x8266841C;
	sub_82633B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633b00
	ctx.lr = 0x82668424;
	sub_82633B00(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266843c
	if (ctx.cr6.eq) goto loc_8266843C;
	// bl 0x82130588
	ctx.lr = 0x82668438;
	sub_82130588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8266843C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668444"))) PPC_WEAK_FUNC(sub_82668444);
PPC_FUNC_IMPL(__imp__sub_82668444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82668448"))) PPC_WEAK_FUNC(sub_82668448);
PPC_FUNC_IMPL(__imp__sub_82668448) {
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
	// bl 0x82665940
	ctx.lr = 0x82668460;
	sub_82665940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826302b8
	ctx.lr = 0x82668468;
	sub_826302B8(ctx, base);
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

__attribute__((alias("__imp__sub_8266847C"))) PPC_WEAK_FUNC(sub_8266847C);
PPC_FUNC_IMPL(__imp__sub_8266847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82668480"))) PPC_WEAK_FUNC(sub_82668480);
PPC_FUNC_IMPL(__imp__sub_82668480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x82668488;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826684A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826684d0
	if (!ctx.cr6.eq) goto loc_826684D0;
	// lwz r3,-10028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x826684B8;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826684d0
	if (!ctx.cr6.eq) goto loc_826684D0;
	// bl 0x8265f428
	ctx.lr = 0x826684C8;
	sub_8265F428(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_826684D0:
	// bl 0x8265e5e8
	ctx.lr = 0x826684D4;
	sub_8265E5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826684ec
	if (ctx.cr6.eq) goto loc_826684EC;
	// bl 0x82665ed0
	ctx.lr = 0x826684E4;
	sub_82665ED0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_826684EC:
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// li r4,71
	ctx.r4.s64 = 71;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82668500;
	sub_82641CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82668518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,25544
	ctx.r4.s64 = ctx.r11.s64 + 25544;
	// beq cr6,0x826685d4
	if (ctx.cr6.eq) goto loc_826685D4;
	// bl 0x821c2fb0
	ctx.lr = 0x82668540;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82668550:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82668550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82668550;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,5104
	ctx.r30.s64 = ctx.r10.s64 + 5104;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82668580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82668598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x826624c8
	ctx.lr = 0x826685CC;
	sub_826624C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_826685D4:
	// bl 0x821c2fb0
	ctx.lr = 0x826685D8;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826685EC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826685ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826685EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82668614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8266862C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x82668658;
	sub_82634EC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668660"))) PPC_WEAK_FUNC(sub_82668660);
PPC_FUNC_IMPL(__imp__sub_82668660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82668668;
	__savegprlr_27(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r30,r11,16256
	ctx.r30.u64 = ctx.r11.u64 | 16256;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-10028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10028);
	// li r4,71
	ctx.r4.s64 = 71;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x82668690;
	sub_82641CB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 17, ctx.xer);
	// beq cr6,0x82669864
	if (ctx.cr6.eq) goto loc_82669864;
	// cmpwi cr6,r28,55
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 55, ctx.xer);
	// beq cr6,0x826686b8
	if (ctx.cr6.eq) goto loc_826686B8;
	// cmpwi cr6,r28,56
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 56, ctx.xer);
	// beq cr6,0x82669864
	if (ctx.cr6.eq) goto loc_82669864;
loc_826686AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_826686B8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,13416
	ctx.r3.s64 = ctx.r11.s64 + 13416;
	// bl 0x82661508
	ctx.lr = 0x826686C8;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266870c
	if (ctx.cr6.eq) goto loc_8266870C;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x826686EC;
	sub_82641CB0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,704(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82668700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8266870C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6172
	ctx.r3.s64 = ctx.r11.s64 + 6172;
	// bl 0x82661508
	ctx.lr = 0x8266871C;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668778
	if (ctx.cr6.eq) goto loc_82668778;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82668740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r11,-10236(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10236);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 + ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x82668758;
	sub_82641CB0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,704(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 704);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8266876C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82668778:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,13400
	ctx.r3.s64 = ctx.r11.s64 + 13400;
	// bl 0x82661508
	ctx.lr = 0x82668788;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826687cc
	if (ctx.cr6.eq) goto loc_826687CC;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x826687AC;
	sub_82641CB0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,704(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826687C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_826687CC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6080
	ctx.r3.s64 = ctx.r11.s64 + 6080;
	// bl 0x82661508
	ctx.lr = 0x826687DC;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668820
	if (ctx.cr6.eq) goto loc_82668820;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x82668800;
	sub_82641CB0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,704(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82668814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82668820:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5480
	ctx.r3.s64 = ctx.r11.s64 + 5480;
	// bl 0x82661508
	ctx.lr = 0x82668830;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266884c
	if (ctx.cr6.eq) goto loc_8266884C;
	// bl 0x8265f428
	ctx.lr = 0x82668840;
	sub_8265F428(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8266884C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// bl 0x82661508
	ctx.lr = 0x8266885C;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826697f8
	if (!ctx.cr6.eq) goto loc_826697F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// bl 0x82661508
	ctx.lr = 0x82668878;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826697f8
	if (!ctx.cr6.eq) goto loc_826697F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5776
	ctx.r3.s64 = ctx.r11.s64 + 5776;
	// bl 0x82661508
	ctx.lr = 0x82668894;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826688b4
	if (ctx.cr6.eq) goto loc_826688B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265f978
	ctx.lr = 0x826688A8;
	sub_8265F978(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_826688B4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5712
	ctx.r3.s64 = ctx.r11.s64 + 5712;
	// bl 0x82661508
	ctx.lr = 0x826688C4;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669790
	if (!ctx.cr6.eq) goto loc_82669790;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5608
	ctx.r3.s64 = ctx.r11.s64 + 5608;
	// bl 0x82661508
	ctx.lr = 0x826688E0;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669790
	if (!ctx.cr6.eq) goto loc_82669790;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// bl 0x82661508
	ctx.lr = 0x826688FC;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266975c
	if (!ctx.cr6.eq) goto loc_8266975C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,5396
	ctx.r3.s64 = ctx.r11.s64 + 5396;
	// bl 0x82661508
	ctx.lr = 0x82668918;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266975c
	if (!ctx.cr6.eq) goto loc_8266975C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5408
	ctx.r3.s64 = ctx.r11.s64 + 5408;
	// bl 0x82661508
	ctx.lr = 0x82668934;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826696fc
	if (!ctx.cr6.eq) goto loc_826696FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5380
	ctx.r3.s64 = ctx.r11.s64 + 5380;
	// bl 0x82661508
	ctx.lr = 0x82668950;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826696fc
	if (!ctx.cr6.eq) goto loc_826696FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5652
	ctx.r3.s64 = ctx.r11.s64 + 5652;
	// bl 0x82661508
	ctx.lr = 0x8266896C;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669634
	if (!ctx.cr6.eq) goto loc_82669634;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5436
	ctx.r3.s64 = ctx.r11.s64 + 5436;
	// bl 0x82661508
	ctx.lr = 0x82668988;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669634
	if (!ctx.cr6.eq) goto loc_82669634;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x82661508
	ctx.lr = 0x826689A4;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826698a4
	if (!ctx.cr6.eq) goto loc_826698A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5452
	ctx.r3.s64 = ctx.r11.s64 + 5452;
	// bl 0x82661508
	ctx.lr = 0x826689C0;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826694bc
	if (!ctx.cr6.eq) goto loc_826694BC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x82661508
	ctx.lr = 0x826689DC;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826694bc
	if (!ctx.cr6.eq) goto loc_826694BC;
	// bl 0x82387a18
	ctx.lr = 0x826689EC;
	sub_82387A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82668bc4
	if (!ctx.cr6.eq) goto loc_82668BC4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5504
	ctx.r3.s64 = ctx.r11.s64 + 5504;
	// bl 0x82661508
	ctx.lr = 0x82668A08;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82668a4c
	if (!ctx.cr6.eq) goto loc_82668A4C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// bl 0x82661508
	ctx.lr = 0x82668A24;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82668a4c
	if (!ctx.cr6.eq) goto loc_82668A4C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5732
	ctx.r3.s64 = ctx.r11.s64 + 5732;
	// bl 0x82661508
	ctx.lr = 0x82668A40;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668bc4
	if (ctx.cr6.eq) goto loc_82668BC4;
loc_82668A4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82668A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,25136
	ctx.r4.s64 = ctx.r11.s64 + 25136;
	// bne cr6,0x82668b14
	if (!ctx.cr6.eq) goto loc_82668B14;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x821c2fb0
	ctx.lr = 0x82668A88;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82668A9C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82668a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82668A9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82668AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82668ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x82668B08;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82668B14:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821c2fb0
	ctx.lr = 0x82668B1C;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82668B2C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82668b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82668B2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82668B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82668B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82668B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x826624c8
	ctx.lr = 0x82668BB8;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82668BC4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6148
	ctx.r3.s64 = ctx.r11.s64 + 6148;
	// bl 0x82661508
	ctx.lr = 0x82668BD4;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668cb0
	if (ctx.cr6.eq) goto loc_82668CB0;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-10016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668c90
	if (ctx.cr6.eq) goto loc_82668C90;
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82668c90
	if (!ctx.cr6.gt) goto loc_82668C90;
	// bl 0x8265e5e8
	ctx.lr = 0x82668C04;
	sub_8265E5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668c90
	if (ctx.cr6.eq) goto loc_82668C90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823dc018
	ctx.lr = 0x82668C24;
	sub_823DC018(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-2496
	ctx.r4.s64 = ctx.r9.s64 + -2496;
	// lwz r3,-10244(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10244);
	// bl 0x822183b0
	ctx.lr = 0x82668C3C;
	sub_822183B0(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r8,31488
	ctx.r4.s64 = ctx.r8.s64 + 31488;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x821c2fb0
	ctx.lr = 0x82668C58;
	sub_821C2FB0(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r6,r7,13380
	ctx.r6.s64 = ctx.r7.s64 + 13380;
	// rldicr r10,r4,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r5,r5,-2516
	ctx.r5.s64 = ctx.r5.s64 + -2516;
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82634ec8
	ctx.lr = 0x82668C90;
	sub_82634EC8(ctx, base);
loc_82668C90:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826698ac
	if (ctx.cr6.eq) goto loc_826698AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82667160
	ctx.lr = 0x82668CA4;
	sub_82667160(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82668CB0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-15096
	ctx.r3.s64 = ctx.r11.s64 + -15096;
	// bl 0x82661508
	ctx.lr = 0x82668CC0;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668f3c
	if (ctx.cr6.eq) goto loc_82668F3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826602b0
	ctx.lr = 0x82668CD4;
	sub_826602B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668e58
	if (ctx.cr6.eq) goto loc_82668E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82668CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,26576
	ctx.r4.s64 = ctx.r11.s64 + 26576;
	// beq cr6,0x82668dc4
	if (ctx.cr6.eq) goto loc_82668DC4;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x821c2fb0
	ctx.lr = 0x82668D1C;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82668D2C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82668d2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82668D2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82668D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82668D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82668D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x826624c8
	ctx.lr = 0x82668DB8;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82668DC4:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x821c2fb0
	ctx.lr = 0x82668DCC;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82668DE0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82668de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82668DE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82668E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82668E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x82668E4C;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82668E58:
	// lwz r3,-10028(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x82668E60;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// beq cr6,0x82668ed0
	if (ctx.cr6.eq) goto loc_82668ED0;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,26576
	ctx.r4.s64 = ctx.r11.s64 + 26576;
	// bl 0x821c2fb0
	ctx.lr = 0x82668E88;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// ld r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r6,r10,11976
	ctx.r6.s64 = ctx.r10.s64 + 11976;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r5,r9,12232
	ctx.r5.s64 = ctx.r9.s64 + 12232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x82668EC4;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82668ED0:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,26704
	ctx.r4.s64 = ctx.r11.s64 + 26704;
	// bl 0x821c2fb0
	ctx.lr = 0x82668EE0;
	sub_821C2FB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// bl 0x823da950
	ctx.lr = 0x82668EF8;
	sub_823DA950(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r10,r9,13360
	ctx.r10.s64 = ctx.r9.s64 + 13360;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r9,r8,13344
	ctx.r9.s64 = ctx.r8.s64 + 13344;
	// addi r8,r7,13324
	ctx.r8.s64 = ctx.r7.s64 + 13324;
	// addi r6,r6,13312
	ctx.r6.s64 = ctx.r6.s64 + 13312;
	// addi r5,r5,13288
	ctx.r5.s64 = ctx.r5.s64 + 13288;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82634db0
	ctx.lr = 0x82668F30;
	sub_82634DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82668F3C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6132
	ctx.r3.s64 = ctx.r11.s64 + 6132;
	// bl 0x82661508
	ctx.lr = 0x82668F4C;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82669028
	if (ctx.cr6.eq) goto loc_82669028;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-10016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669008
	if (ctx.cr6.eq) goto loc_82669008;
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82669008
	if (!ctx.cr6.gt) goto loc_82669008;
	// bl 0x8265e5e8
	ctx.lr = 0x82668F7C;
	sub_8265E5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669008
	if (ctx.cr6.eq) goto loc_82669008;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823dc018
	ctx.lr = 0x82668F9C;
	sub_823DC018(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-2496
	ctx.r4.s64 = ctx.r9.s64 + -2496;
	// lwz r3,-10244(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10244);
	// bl 0x822183b0
	ctx.lr = 0x82668FB4;
	sub_822183B0(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r8,31568
	ctx.r4.s64 = ctx.r8.s64 + 31568;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x821c2fb0
	ctx.lr = 0x82668FD0;
	sub_821C2FB0(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r6,r7,13380
	ctx.r6.s64 = ctx.r7.s64 + 13380;
	// rldicr r10,r4,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r5,r5,-2516
	ctx.r5.s64 = ctx.r5.s64 + -2516;
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82634ec8
	ctx.lr = 0x82669008;
	sub_82634EC8(ctx, base);
loc_82669008:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826698ac
	if (ctx.cr6.eq) goto loc_826698AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826673c8
	ctx.lr = 0x8266901C;
	sub_826673C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669028:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6120
	ctx.r3.s64 = ctx.r11.s64 + 6120;
	// bl 0x82661508
	ctx.lr = 0x82669038;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82669114
	if (ctx.cr6.eq) goto loc_82669114;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-10016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826690f4
	if (ctx.cr6.eq) goto loc_826690F4;
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x826690f4
	if (!ctx.cr6.gt) goto loc_826690F4;
	// bl 0x8265e5e8
	ctx.lr = 0x82669068;
	sub_8265E5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826690f4
	if (ctx.cr6.eq) goto loc_826690F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823dc018
	ctx.lr = 0x82669088;
	sub_823DC018(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-2496
	ctx.r4.s64 = ctx.r9.s64 + -2496;
	// lwz r3,-10244(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10244);
	// bl 0x822183b0
	ctx.lr = 0x826690A0;
	sub_822183B0(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r8,31648
	ctx.r4.s64 = ctx.r8.s64 + 31648;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c2fb0
	ctx.lr = 0x826690BC;
	sub_821C2FB0(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r6,r7,13380
	ctx.r6.s64 = ctx.r7.s64 + 13380;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r5,r5,-2516
	ctx.r5.s64 = ctx.r5.s64 + -2516;
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82634ec8
	ctx.lr = 0x826690F4;
	sub_82634EC8(ctx, base);
loc_826690F4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826698ac
	if (ctx.cr6.eq) goto loc_826698AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82666ef8
	ctx.lr = 0x82669108;
	sub_82666EF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669114:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6112
	ctx.r3.s64 = ctx.r11.s64 + 6112;
	// bl 0x82661508
	ctx.lr = 0x82669124;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82669200
	if (ctx.cr6.eq) goto loc_82669200;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-10016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826691e0
	if (ctx.cr6.eq) goto loc_826691E0;
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x826691e0
	if (!ctx.cr6.gt) goto loc_826691E0;
	// bl 0x8265e5e8
	ctx.lr = 0x82669154;
	sub_8265E5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826691e0
	if (ctx.cr6.eq) goto loc_826691E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823dc018
	ctx.lr = 0x82669174;
	sub_823DC018(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-2496
	ctx.r4.s64 = ctx.r9.s64 + -2496;
	// lwz r3,-10244(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10244);
	// bl 0x822183b0
	ctx.lr = 0x8266918C;
	sub_822183B0(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r8,31728
	ctx.r4.s64 = ctx.r8.s64 + 31728;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821c2fb0
	ctx.lr = 0x826691A8;
	sub_821C2FB0(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r6,r7,13380
	ctx.r6.s64 = ctx.r7.s64 + 13380;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r5,r5,-2516
	ctx.r5.s64 = ctx.r5.s64 + -2516;
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82634ec8
	ctx.lr = 0x826691E0;
	sub_82634EC8(ctx, base);
loc_826691E0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826698ac
	if (ctx.cr6.eq) goto loc_826698AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82667630
	ctx.lr = 0x826691F4;
	sub_82667630(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669200:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6096
	ctx.r3.s64 = ctx.r11.s64 + 6096;
	// bl 0x82661508
	ctx.lr = 0x82669210;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826692ec
	if (ctx.cr6.eq) goto loc_826692EC;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-10016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826692cc
	if (ctx.cr6.eq) goto loc_826692CC;
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x826692cc
	if (!ctx.cr6.gt) goto loc_826692CC;
	// bl 0x8265e5e8
	ctx.lr = 0x82669240;
	sub_8265E5E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826692cc
	if (ctx.cr6.eq) goto loc_826692CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823dc018
	ctx.lr = 0x82669260;
	sub_823DC018(ctx, base);
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-2496
	ctx.r4.s64 = ctx.r9.s64 + -2496;
	// lwz r3,-10244(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10244);
	// bl 0x822183b0
	ctx.lr = 0x82669278;
	sub_822183B0(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r8,31808
	ctx.r4.s64 = ctx.r8.s64 + 31808;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821c2fb0
	ctx.lr = 0x82669294;
	sub_821C2FB0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r6,r7,13380
	ctx.r6.s64 = ctx.r7.s64 + 13380;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r5,r5,-2516
	ctx.r5.s64 = ctx.r5.s64 + -2516;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82634ec8
	ctx.lr = 0x826692CC;
	sub_82634EC8(ctx, base);
loc_826692CC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826698ac
	if (ctx.cr6.eq) goto loc_826698AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82667898
	ctx.lr = 0x826692E0;
	sub_82667898(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_826692EC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5520
	ctx.r3.s64 = ctx.r11.s64 + 5520;
	// bl 0x82661508
	ctx.lr = 0x826692FC;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669424
	if (!ctx.cr6.eq) goto loc_82669424;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5628
	ctx.r3.s64 = ctx.r11.s64 + 5628;
	// bl 0x82661508
	ctx.lr = 0x82669318;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669424
	if (!ctx.cr6.eq) goto loc_82669424;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5548
	ctx.r3.s64 = ctx.r11.s64 + 5548;
	// bl 0x82661508
	ctx.lr = 0x82669334;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266935c
	if (!ctx.cr6.eq) goto loc_8266935C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5640
	ctx.r3.s64 = ctx.r11.s64 + 5640;
	// bl 0x82661508
	ctx.lr = 0x82669350;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826686ac
	if (ctx.cr6.eq) goto loc_826686AC;
loc_8266935C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82669370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82669414
	if (ctx.cr6.eq) goto loc_82669414;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,26160
	ctx.r4.s64 = ctx.r11.s64 + 26160;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x821c2fb0
	ctx.lr = 0x82669398;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826693AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826693ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826693AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r10,13260
	ctx.r29.s64 = ctx.r10.s64 + 13260;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826693DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x82669408;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669414:
	// bl 0x82666408
	ctx.lr = 0x82669418;
	sub_82666408(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669424:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82669438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82669450
	if (ctx.cr6.eq) goto loc_82669450;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,13232
	ctx.r30.s64 = ctx.r11.s64 + 13232;
	// b 0x82669458
	goto loc_82669458;
loc_82669450:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,13204
	ctx.r30.s64 = ctx.r11.s64 + 13204;
loc_82669458:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,24520
	ctx.r4.s64 = ctx.r11.s64 + 24520;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x821c2fb0
	ctx.lr = 0x82669474;
	sub_821C2FB0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r7,r10,5104
	ctx.r7.s64 = ctx.r10.s64 + 5104;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r6,r9,13180
	ctx.r6.s64 = ctx.r9.s64 + 13180;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x826694B0;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_826694BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826694D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,24824
	ctx.r4.s64 = ctx.r11.s64 + 24824;
	// bne cr6,0x82669584
	if (!ctx.cr6.eq) goto loc_82669584;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x821c2fb0
	ctx.lr = 0x826694F8;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8266950C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8266950c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8266950C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82669534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8266954C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x82669578;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669584:
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x821c2fb0
	ctx.lr = 0x8266958C;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8266959C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8266959c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8266959C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826695C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826695DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,92(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826695F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x826624c8
	ctx.lr = 0x82669628;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669634:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82669648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82669664
	if (ctx.cr6.eq) goto loc_82669664;
	// bl 0x82665ce0
	ctx.lr = 0x82669658;
	sub_82665CE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669664:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,27528
	ctx.r4.s64 = ctx.r11.s64 + 27528;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x821c2fb0
	ctx.lr = 0x82669680;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82669694:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82669694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82669694;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r10,13156
	ctx.r29.s64 = ctx.r10.s64 + 13156;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826696C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x826696F0;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_826696FC:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,27592
	ctx.r4.s64 = ctx.r11.s64 + 27592;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x821c2fb0
	ctx.lr = 0x82669718;
	sub_821C2FB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r10,13132
	ctx.r6.s64 = ctx.r10.s64 + 13132;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r5,r9,13100
	ctx.r5.s64 = ctx.r9.s64 + 13100;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// bl 0x82634ec8
	ctx.lr = 0x82669750;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8266975C:
	// lwz r3,-10028(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10028);
	// bl 0x82212608
	ctx.lr = 0x82669764;
	sub_82212608(ctx, base);
	// bl 0x8265f568
	ctx.lr = 0x82669768;
	sub_8265F568(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82665940
	ctx.lr = 0x82669770;
	sub_82665940(ctx, base);
	// lwz r11,656(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 656);
	// addi r3,r27,656
	ctx.r3.s64 = ctx.r27.s64 + 656;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82669784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669790:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,26224
	ctx.r4.s64 = ctx.r11.s64 + 26224;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x821c2fb0
	ctx.lr = 0x826697AC;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r10,5104
	ctx.r7.s64 = ctx.r10.s64 + 5104;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r6,r9,13072
	ctx.r6.s64 = ctx.r9.s64 + 13072;
	// addi r5,r8,13036
	ctx.r5.s64 = ctx.r8.s64 + 13036;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x826697EC;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_826697F8:
	// bl 0x82256058
	ctx.lr = 0x826697FC;
	sub_82256058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266984c
	if (ctx.cr6.eq) goto loc_8266984C;
	// bl 0x82256058
	ctx.lr = 0x82669808;
	sub_82256058(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266984c
	if (ctx.cr6.eq) goto loc_8266984C;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8266982C;
	sub_82641CB0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,704(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82669840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8266984C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24612);
	// bl 0x821e6800
	ctx.lr = 0x82669858;
	sub_821E6800(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82669878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826698ac
	if (!ctx.cr6.eq) goto loc_826698AC;
	// lwz r3,-10028(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10028);
	// bl 0x82207138
	ctx.lr = 0x8266988C;
	sub_82207138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826698ac
	if (!ctx.cr6.eq) goto loc_826698AC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24592);
	// bl 0x821e6800
	ctx.lr = 0x826698A4;
	sub_821E6800(ctx, base);
loc_826698A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668480
	ctx.lr = 0x826698AC;
	sub_82668480(ctx, base);
loc_826698AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826698B8"))) PPC_WEAK_FUNC(sub_826698B8);
PPC_FUNC_IMPL(__imp__sub_826698B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x826698C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,55
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 55, ctx.xer);
	// bne cr6,0x82669978
	if (!ctx.cr6.eq) goto loc_82669978;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5700
	ctx.r3.s64 = ctx.r11.s64 + 5700;
	// bl 0x82661508
	ctx.lr = 0x826698E8;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82669978
	if (ctx.cr6.eq) goto loc_82669978;
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
	ctx.lr = 0x8266990C;
	sub_82641CB0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,27728
	ctx.r4.s64 = ctx.r10.s64 + 27728;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2fb0
	ctx.lr = 0x8266992C;
	sub_821C2FB0(ctx, base);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r7,r9,5104
	ctx.r7.s64 = ctx.r9.s64 + 5104;
	// addi r6,r8,13460
	ctx.r6.s64 = ctx.r8.s64 + 13460;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r5,r5,13432
	ctx.r5.s64 = ctx.r5.s64 + 13432;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x8266996C;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_82669978:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668660
	ctx.lr = 0x82669988;
	sub_82668660(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669990"))) PPC_WEAK_FUNC(sub_82669990);
PPC_FUNC_IMPL(__imp__sub_82669990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x82669998;
	__savegprlr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-10236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82204018
	ctx.lr = 0x826699B8;
	sub_82204018(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// ori r30,r10,16256
	ctx.r30.u64 = ctx.r10.u64 | 16256;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r11,-10028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// li r4,71
	ctx.r4.s64 = 71;
	// rlwinm r26,r8,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x826699E0;
	sub_82641CB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,55
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 55, ctx.xer);
	// bne cr6,0x82669a94
	if (!ctx.cr6.eq) goto loc_82669A94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// bl 0x82661508
	ctx.lr = 0x826699FC;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669c38
	if (!ctx.cr6.eq) goto loc_82669C38;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// bl 0x82661508
	ctx.lr = 0x82669A18;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669c38
	if (!ctx.cr6.eq) goto loc_82669C38;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5452
	ctx.r3.s64 = ctx.r11.s64 + 5452;
	// bl 0x82661508
	ctx.lr = 0x82669A34;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669b74
	if (!ctx.cr6.eq) goto loc_82669B74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x82661508
	ctx.lr = 0x82669A50;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669b74
	if (!ctx.cr6.eq) goto loc_82669B74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5520
	ctx.r3.s64 = ctx.r11.s64 + 5520;
	// bl 0x82661508
	ctx.lr = 0x82669A6C;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669aac
	if (!ctx.cr6.eq) goto loc_82669AAC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5628
	ctx.r3.s64 = ctx.r11.s64 + 5628;
	// bl 0x82661508
	ctx.lr = 0x82669A88;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669aac
	if (!ctx.cr6.eq) goto loc_82669AAC;
loc_82669A94:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668660
	ctx.lr = 0x82669AA4;
	sub_82668660(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_82669AAC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,24520
	ctx.r4.s64 = ctx.r11.s64 + 24520;
	// beq cr6,0x82669b20
	if (ctx.cr6.eq) goto loc_82669B20;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c2fb0
	ctx.lr = 0x82669AD4;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r10,5104
	ctx.r7.s64 = ctx.r10.s64 + 5104;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r6,r9,13576
	ctx.r6.s64 = ctx.r9.s64 + 13576;
	// addi r5,r8,13540
	ctx.r5.s64 = ctx.r8.s64 + 13540;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x82669B14;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_82669B20:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821c2fb0
	ctx.lr = 0x82669B28;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r10,5104
	ctx.r7.s64 = ctx.r10.s64 + 5104;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r6,r9,13516
	ctx.r6.s64 = ctx.r9.s64 + 13516;
	// addi r5,r8,13484
	ctx.r5.s64 = ctx.r8.s64 + 13484;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x82669B68;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_82669B74:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,24824
	ctx.r4.s64 = ctx.r11.s64 + 24824;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821c2fb0
	ctx.lr = 0x82669B90;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82669BA0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82669ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82669BA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82669BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82669BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,92(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82669BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x826624c8
	ctx.lr = 0x82669C2C;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_82669C38:
	// lwz r11,-10236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10236);
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x82669C4C;
	sub_82641CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 808);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82669C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,704(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 704);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82669C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669C84"))) PPC_WEAK_FUNC(sub_82669C84);
PPC_FUNC_IMPL(__imp__sub_82669C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82669C88"))) PPC_WEAK_FUNC(sub_82669C88);
PPC_FUNC_IMPL(__imp__sub_82669C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82669C90;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r30,r10,16256
	ctx.r30.u64 = ctx.r10.u64 | 16256;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-10028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x82669CBC;
	sub_82641CB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,55
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 55, ctx.xer);
	// bne cr6,0x82669db4
	if (!ctx.cr6.eq) goto loc_82669DB4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// bl 0x82661508
	ctx.lr = 0x82669CD8;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669e74
	if (!ctx.cr6.eq) goto loc_82669E74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// bl 0x82661508
	ctx.lr = 0x82669CF4;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669e74
	if (!ctx.cr6.eq) goto loc_82669E74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x82661508
	ctx.lr = 0x82669D10;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669dcc
	if (!ctx.cr6.eq) goto loc_82669DCC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5452
	ctx.r3.s64 = ctx.r11.s64 + 5452;
	// bl 0x82661508
	ctx.lr = 0x82669D2C;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669dcc
	if (!ctx.cr6.eq) goto loc_82669DCC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x82661508
	ctx.lr = 0x82669D48;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82669db4
	if (ctx.cr6.eq) goto loc_82669DB4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r30,-32111
	ctx.r30.s64 = -2104426496;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,2532
	ctx.r29.s64 = ctx.r11.s64 + 2532;
	// addi r4,r10,2516
	ctx.r4.s64 = ctx.r10.s64 + 2516;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x8220ef00
	ctx.lr = 0x82669D74;
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
	ctx.lr = 0x82669D88;
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
	// lwz r3,-24180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24180);
	// bl 0x821fde78
	ctx.lr = 0x82669DA4;
	sub_821FDE78(ctx, base);
	// bl 0x8265f428
	ctx.lr = 0x82669DA8;
	sub_8265F428(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669DB4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668660
	ctx.lr = 0x82669DC4;
	sub_82668660(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669DCC:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,24744
	ctx.r4.s64 = ctx.r11.s64 + 24744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821c2fb0
	ctx.lr = 0x82669DE8;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82669DFC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82669dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82669DFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82669E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82669E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x82669E68;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669E74:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r11,-10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10236);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x82641cb0
	ctx.lr = 0x82669E8C;
	sub_82641CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826748a8
	ctx.lr = 0x82669E94;
	sub_826748A8(ctx, base);
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
	ctx.lr = 0x82669EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669EB8"))) PPC_WEAK_FUNC(sub_82669EB8);
PPC_FUNC_IMPL(__imp__sub_82669EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x82669EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-10028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10028);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,16256
	ctx.r3.s64 = ctx.r3.s64 + 16256;
	// bl 0x82641cb0
	ctx.lr = 0x82669EE8;
	sub_82641CB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,55
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 55, ctx.xer);
	// bne cr6,0x8266a120
	if (!ctx.cr6.eq) goto loc_8266A120;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5520
	ctx.r3.s64 = ctx.r11.s64 + 5520;
	// bl 0x82661508
	ctx.lr = 0x82669F04;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266a138
	if (!ctx.cr6.eq) goto loc_8266A138;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5628
	ctx.r3.s64 = ctx.r11.s64 + 5628;
	// bl 0x82661508
	ctx.lr = 0x82669F20;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266a138
	if (!ctx.cr6.eq) goto loc_8266A138;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5504
	ctx.r3.s64 = ctx.r11.s64 + 5504;
	// bl 0x82661508
	ctx.lr = 0x82669F3C;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82669f5c
	if (ctx.cr6.eq) goto loc_82669F5C;
	// bl 0x826661a0
	ctx.lr = 0x82669F4C;
	sub_826661A0(ctx, base);
	// bl 0x8265f428
	ctx.lr = 0x82669F50;
	sub_8265F428(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_82669F5C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// bl 0x82661508
	ctx.lr = 0x82669F6C;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266a020
	if (ctx.cr6.eq) goto loc_8266A020;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,25136
	ctx.r4.s64 = ctx.r11.s64 + 25136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821c2fb0
	ctx.lr = 0x82669F94;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82669FA8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82669fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82669FA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82669FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82669FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x8266A014;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8266A020:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5452
	ctx.r3.s64 = ctx.r11.s64 + 5452;
	// bl 0x82661508
	ctx.lr = 0x8266A030;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266a0e4
	if (ctx.cr6.eq) goto loc_8266A0E4;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,24744
	ctx.r4.s64 = ctx.r11.s64 + 24744;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821c2fb0
	ctx.lr = 0x8266A058;
	sub_821C2FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8266A06C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8266a06c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8266A06C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8266A094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8266A0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82634ec8
	ctx.lr = 0x8266A0D8;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8266A0E4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x82661508
	ctx.lr = 0x8266A0F4;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266a120
	if (ctx.cr6.eq) goto loc_8266A120;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-10028(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10028);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82205950
	ctx.lr = 0x8266A110;
	sub_82205950(ctx, base);
	// bl 0x82666008
	ctx.lr = 0x8266A114;
	sub_82666008(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8266A120:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668660
	ctx.lr = 0x8266A130;
	sub_82668660(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8266A138:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8266A14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8266a1b8
	if (!ctx.cr6.eq) goto loc_8266A1B8;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,24520
	ctx.r4.s64 = ctx.r11.s64 + 24520;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821c2fb0
	ctx.lr = 0x8266A174;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r6,r10,13636
	ctx.r6.s64 = ctx.r10.s64 + 13636;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r5,r9,13604
	ctx.r5.s64 = ctx.r9.s64 + 13604;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82634ec8
	ctx.lr = 0x8266A1AC;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
loc_8266A1B8:
	// bl 0x82665da8
	ctx.lr = 0x8266A1BC;
	sub_82665DA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A1C8"))) PPC_WEAK_FUNC(sub_8266A1C8);
PPC_FUNC_IMPL(__imp__sub_8266A1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91ec
	ctx.lr = 0x8266A1D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r31,r11,16256
	ctx.r31.u64 = ctx.r11.u64 | 16256;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8266A1FC;
	sub_82641CB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,55
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 55, ctx.xer);
	// bne cr6,0x8266a2a8
	if (!ctx.cr6.eq) goto loc_8266A2A8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r25,r11,5452
	ctx.r25.s64 = ctx.r11.s64 + 5452;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82661508
	ctx.lr = 0x8266A21C;
	sub_82661508(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266a2c0
	if (!ctx.cr6.eq) goto loc_8266A2C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x82661508
	ctx.lr = 0x8266A238;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266a2c0
	if (!ctx.cr6.eq) goto loc_8266A2C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// bl 0x82661508
	ctx.lr = 0x8266A254;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266a2a8
	if (ctx.cr6.eq) goto loc_8266A2A8;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// li r4,52
	ctx.r4.s64 = 52;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8266A270;
	sub_82641CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,808(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 808);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8266A284;
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
	ctx.lr = 0x8266A29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_8266A2A8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82668660
	ctx.lr = 0x8266A2B8;
	sub_82668660(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_8266A2C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82661508
	ctx.lr = 0x8266A2CC;
	sub_82661508(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a338
	if (ctx.cr6.eq) goto loc_8266A338;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,24928
	ctx.r4.s64 = ctx.r11.s64 + 24928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c2fb0
	ctx.lr = 0x8266A2F4;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r6,r10,13700
	ctx.r6.s64 = ctx.r10.s64 + 13700;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r5,r9,13664
	ctx.r5.s64 = ctx.r9.s64 + 13664;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82634ec8
	ctx.lr = 0x8266A32C;
	sub_82634EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
loc_8266A338:
	// bl 0x82666008
	ctx.lr = 0x8266A33C;
	sub_82666008(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823d923c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A348"))) PPC_WEAK_FUNC(sub_8266A348);
PPC_FUNC_IMPL(__imp__sub_8266A348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8266A350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,55
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 55, ctx.xer);
	// bne cr6,0x8266a3a0
	if (!ctx.cr6.eq) goto loc_8266A3A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// bl 0x82661508
	ctx.lr = 0x8266A378;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266a3b8
	if (!ctx.cr6.eq) goto loc_8266A3B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// bl 0x82661508
	ctx.lr = 0x8266A394;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266a3b8
	if (!ctx.cr6.eq) goto loc_8266A3B8;
loc_8266A3A0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82668660
	ctx.lr = 0x8266A3B0;
	sub_82668660(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8266A3B8:
	// lis r30,-32121
	ctx.r30.s64 = -2105081856;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r4,71
	ctx.r4.s64 = 71;
	// ori r31,r11,16256
	ctx.r31.u64 = ctx.r11.u64 | 16256;
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8266A3D4;
	sub_82641CB0(ctx, base);
	// lwz r11,-10028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10028);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,49
	ctx.r4.s64 = 49;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82641cb0
	ctx.lr = 0x8266A3E8;
	sub_82641CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 808);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8266A3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,704(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 704);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8266A414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A420"))) PPC_WEAK_FUNC(sub_8266A420);
PPC_FUNC_IMPL(__imp__sub_8266A420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x8266A428;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,55
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 55, ctx.xer);
	// bne cr6,0x8266a478
	if (!ctx.cr6.eq) goto loc_8266A478;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5520
	ctx.r3.s64 = ctx.r11.s64 + 5520;
	// bl 0x82661508
	ctx.lr = 0x8266A450;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266a490
	if (!ctx.cr6.eq) goto loc_8266A490;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5628
	ctx.r3.s64 = ctx.r11.s64 + 5628;
	// bl 0x82661508
	ctx.lr = 0x8266A46C;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266a490
	if (!ctx.cr6.eq) goto loc_8266A490;
loc_8266A478:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668660
	ctx.lr = 0x8266A488;
	sub_82668660(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
loc_8266A490:
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
	ctx.lr = 0x8266A4A8;
	sub_82641CB0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8266A4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8266a4d8
	if (ctx.cr6.eq) goto loc_8266A4D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,13776
	ctx.r30.s64 = ctx.r11.s64 + 13776;
	// b 0x8266a4e0
	goto loc_8266A4E0;
loc_8266A4D8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,13748
	ctx.r30.s64 = ctx.r11.s64 + 13748;
loc_8266A4E0:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,24520
	ctx.r4.s64 = ctx.r11.s64 + 24520;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2fb0
	ctx.lr = 0x8266A4FC;
	sub_821C2FB0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r7,r10,5104
	ctx.r7.s64 = ctx.r10.s64 + 5104;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r6,r9,13728
	ctx.r6.s64 = ctx.r9.s64 + 13728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x8266A538;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A544"))) PPC_WEAK_FUNC(sub_8266A544);
PPC_FUNC_IMPL(__imp__sub_8266A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266A548"))) PPC_WEAK_FUNC(sub_8266A548);
PPC_FUNC_IMPL(__imp__sub_8266A548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x8266A550;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,55
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 55, ctx.xer);
	// bne cr6,0x8266a608
	if (!ctx.cr6.eq) goto loc_8266A608;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5732
	ctx.r3.s64 = ctx.r11.s64 + 5732;
	// bl 0x82661508
	ctx.lr = 0x8266A578;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266a608
	if (ctx.cr6.eq) goto loc_8266A608;
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
	ctx.lr = 0x8266A59C;
	sub_82641CB0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,27880
	ctx.r4.s64 = ctx.r10.s64 + 27880;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c2fb0
	ctx.lr = 0x8266A5BC;
	sub_821C2FB0(ctx, base);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r7,r9,13860
	ctx.r7.s64 = ctx.r9.s64 + 13860;
	// addi r6,r8,13828
	ctx.r6.s64 = ctx.r8.s64 + 13828;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r5,r5,13796
	ctx.r5.s64 = ctx.r5.s64 + 13796;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,3600
	ctx.r3.s64 = ctx.r31.s64 + 3600;
	// bl 0x826624c8
	ctx.lr = 0x8266A5FC;
	sub_826624C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
loc_8266A608:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668660
	ctx.lr = 0x8266A618;
	sub_82668660(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A620"))) PPC_WEAK_FUNC(sub_8266A620);
PPC_FUNC_IMPL(__imp__sub_8266A620) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 17, ctx.xer);
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4992, temp.u32);
	// beq cr6,0x8266a708
	if (ctx.cr6.eq) goto loc_8266A708;
	// cmpwi cr6,r4,55
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 55, ctx.xer);
	// beq cr6,0x8266a670
	if (ctx.cr6.eq) goto loc_8266A670;
	// cmpwi cr6,r4,56
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 56, ctx.xer);
	// beq cr6,0x8266a708
	if (ctx.cr6.eq) goto loc_8266A708;
	// bl 0x82668660
	ctx.lr = 0x8266A65C;
	sub_82668660(ctx, base);
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
loc_8266A670:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5452
	ctx.r3.s64 = ctx.r11.s64 + 5452;
	// bl 0x82661508
	ctx.lr = 0x8266A680;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266a694
	if (ctx.cr6.eq) goto loc_8266A694;
	// bl 0x82665ce0
	ctx.lr = 0x8266A690;
	sub_82665CE0(ctx, base);
	// b 0x8266a72c
	goto loc_8266A72C;
loc_8266A694:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// bl 0x82661508
	ctx.lr = 0x8266A6A4;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266a6e8
	if (ctx.cr6.eq) goto loc_8266A6E8;
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
	ctx.lr = 0x8266A6C8;
	sub_82641CB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,736(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8266A6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82666e28
	ctx.lr = 0x8266A6E0;
	sub_82666E28(ctx, base);
	// bl 0x8265f428
	ctx.lr = 0x8266A6E4;
	sub_8265F428(ctx, base);
	// b 0x8266a72c
	goto loc_8266A72C;
loc_8266A6E8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,5480
	ctx.r3.s64 = ctx.r11.s64 + 5480;
	// bl 0x82661508
	ctx.lr = 0x8266A6F8;
	sub_82661508(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266a72c
	if (ctx.cr6.eq) goto loc_8266A72C;
	// b 0x8266a724
	goto loc_8266A724;
loc_8266A708:
	// bl 0x8265eb48
	ctx.lr = 0x8266A70C;
	sub_8265EB48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a72c
	if (ctx.cr6.eq) goto loc_8266A72C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,24588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24588);
	// bl 0x821e6800
	ctx.lr = 0x8266A724;
	sub_821E6800(ctx, base);
loc_8266A724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265fc90
	ctx.lr = 0x8266A72C;
	sub_8265FC90(ctx, base);
loc_8266A72C:
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
}

__attribute__((alias("__imp__sub_8266A744"))) PPC_WEAK_FUNC(sub_8266A744);
PPC_FUNC_IMPL(__imp__sub_8266A744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266A748"))) PPC_WEAK_FUNC(sub_8266A748);
PPC_FUNC_IMPL(__imp__sub_8266A748) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8266A798:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8266a798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8266A798;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A7B0"))) PPC_WEAK_FUNC(sub_8266A7B0);
PPC_FUNC_IMPL(__imp__sub_8266A7B0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8266A7BC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x8266a7d8
	if (ctx.cr6.eq) goto loc_8266A7D8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 64);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8266a7f0
	if (ctx.cr6.eq) goto loc_8266A7F0;
loc_8266A7D8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8266a7bc
	if (ctx.cr6.lt) goto loc_8266A7BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8266A7F0:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,64(r8)
	PPC_STORE_U8(ctx.r8.u32 + 64, ctx.r9.u8);
	// stb r9,73(r10)
	PPC_STORE_U8(ctx.r10.u32 + 73, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A80C"))) PPC_WEAK_FUNC(sub_8266A80C);
PPC_FUNC_IMPL(__imp__sub_8266A80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266A810"))) PPC_WEAK_FUNC(sub_8266A810);
PPC_FUNC_IMPL(__imp__sub_8266A810) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8266A818:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8266a83c
	if (ctx.cr6.eq) goto loc_8266A83C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8266a818
	if (ctx.cr6.lt) goto loc_8266A818;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8266A83C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A844"))) PPC_WEAK_FUNC(sub_8266A844);
PPC_FUNC_IMPL(__imp__sub_8266A844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266A848"))) PPC_WEAK_FUNC(sub_8266A848);
PPC_FUNC_IMPL(__imp__sub_8266A848) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8266A858:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8266a858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8266A858;
	// stb r9,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r9.u8);
	// stb r9,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A870"))) PPC_WEAK_FUNC(sub_8266A870);
PPC_FUNC_IMPL(__imp__sub_8266A870) {
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
	// bl 0x82630158
	ctx.lr = 0x8266A88C;
	sub_82630158(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8266a9e0
	if (ctx.cr6.lt) goto loc_8266A9E0;
	// beq cr6,0x8266a934
	if (ctx.cr6.eq) goto loc_8266A934;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8266aa4c
	if (!ctx.cr6.lt) goto loc_8266AA4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-10308
	ctx.r4.s64 = ctx.r10.s64 + -10308;
	// bl 0x82722678
	ctx.lr = 0x8266A8C0;
	sub_82722678(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r31,212
	ctx.r5.s64 = ctx.r31.s64 + 212;
	// addi r4,r9,20268
	ctx.r4.s64 = ctx.r9.s64 + 20268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266A8D4;
	sub_82722678(ctx, base);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r4,r8,-11016
	ctx.r4.s64 = ctx.r8.s64 + -11016;
	// bl 0x827227b8
	ctx.lr = 0x8266A8E8;
	sub_827227B8(ctx, base);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r5,r31,308
	ctx.r5.s64 = ctx.r31.s64 + 308;
	// addi r4,r7,-11024
	ctx.r4.s64 = ctx.r7.s64 + -11024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266A8FC;
	sub_82722678(ctx, base);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r5,r31,252
	ctx.r5.s64 = ctx.r31.s64 + 252;
	// addi r4,r6,-11032
	ctx.r4.s64 = ctx.r6.s64 + -11032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266A910;
	sub_82722678(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// addi r4,r4,2440
	ctx.r4.s64 = ctx.r4.s64 + 2440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827227b8
	ctx.lr = 0x8266A924;
	sub_827227B8(ctx, base);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// addi r5,r31,281
	ctx.r5.s64 = ctx.r31.s64 + 281;
	// addi r4,r3,-3656
	ctx.r4.s64 = ctx.r3.s64 + -3656;
	// b 0x8266aa44
	goto loc_8266AA44;
loc_8266A934:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,-10308
	ctx.r4.s64 = ctx.r10.s64 + -10308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266A950;
	sub_82722678(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r31,212
	ctx.r5.s64 = ctx.r31.s64 + 212;
	// addi r4,r9,20268
	ctx.r4.s64 = ctx.r9.s64 + 20268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266A964;
	sub_82722678(ctx, base);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r4,r8,-11016
	ctx.r4.s64 = ctx.r8.s64 + -11016;
	// bl 0x827227b8
	ctx.lr = 0x8266A978;
	sub_827227B8(ctx, base);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r5,r31,308
	ctx.r5.s64 = ctx.r31.s64 + 308;
	// addi r4,r7,-11024
	ctx.r4.s64 = ctx.r7.s64 + -11024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266A98C;
	sub_82722678(ctx, base);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r5,r31,252
	ctx.r5.s64 = ctx.r31.s64 + 252;
	// addi r4,r6,-11032
	ctx.r4.s64 = ctx.r6.s64 + -11032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266A9A0;
	sub_82722678(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// addi r4,r4,2440
	ctx.r4.s64 = ctx.r4.s64 + 2440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827227b8
	ctx.lr = 0x8266A9B4;
	sub_827227B8(ctx, base);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// addi r5,r31,312
	ctx.r5.s64 = ctx.r31.s64 + 312;
	// addi r4,r3,-3656
	ctx.r4.s64 = ctx.r3.s64 + -3656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266A9C8;
	sub_82722678(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r31,316
	ctx.r5.s64 = ctx.r31.s64 + 316;
	// addi r4,r11,14332
	ctx.r4.s64 = ctx.r11.s64 + 14332;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266A9DC;
	sub_82722678(ctx, base);
	// b 0x8266aa4c
	goto loc_8266AA4C;
loc_8266A9E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-10308
	ctx.r4.s64 = ctx.r10.s64 + -10308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266A9FC;
	sub_82722678(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r31,212
	ctx.r5.s64 = ctx.r31.s64 + 212;
	// addi r4,r9,20268
	ctx.r4.s64 = ctx.r9.s64 + 20268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82722678
	ctx.lr = 0x8266AA10;
	sub_82722678(ctx, base);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r4,r8,-11016
	ctx.r4.s64 = ctx.r8.s64 + -11016;
	// bl 0x827227b8
	ctx.lr = 0x8266AA24;
	sub_827227B8(ctx, base);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r4,r7,-11024
	ctx.r4.s64 = ctx.r7.s64 + -11024;
	// bl 0x827227b8
	ctx.lr = 0x8266AA38;
	sub_827227B8(ctx, base);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r5,r31,224
	ctx.r5.s64 = ctx.r31.s64 + 224;
	// addi r4,r6,-11032
	ctx.r4.s64 = ctx.r6.s64 + -11032;
loc_8266AA44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827227b8
	ctx.lr = 0x8266AA4C;
	sub_827227B8(ctx, base);
loc_8266AA4C:
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

__attribute__((alias("__imp__sub_8266AA64"))) PPC_WEAK_FUNC(sub_8266AA64);
PPC_FUNC_IMPL(__imp__sub_8266AA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266AA68"))) PPC_WEAK_FUNC(sub_8266AA68);
PPC_FUNC_IMPL(__imp__sub_8266AA68) {
	PPC_FUNC_PROLOGUE();
	// b 0x826535f8
	sub_826535F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266AA6C"))) PPC_WEAK_FUNC(sub_8266AA6C);
PPC_FUNC_IMPL(__imp__sub_8266AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266AA70"))) PPC_WEAK_FUNC(sub_8266AA70);
PPC_FUNC_IMPL(__imp__sub_8266AA70) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-7
	ctx.r11.s64 = ctx.r4.s64 + -7;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32153
	ctx.r12.s64 = -2107179008;
	// addi r12,r12,-21868
	ctx.r12.s64 = ctx.r12.s64 + -21868;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x8266AAAC
		return;
	case 1:
		// ERROR: 0x8266AAC4
		return;
	case 2:
		// ERROR: 0x8266AADC
		return;
	case 3:
		// ERROR: 0x8266AAF4
		return;
	case 4:
		// ERROR: 0x8266AB0C
		return;
	case 5:
		// ERROR: 0x8266AB24
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8266AA94"))) PPC_WEAK_FUNC(sub_8266AA94);
PPC_FUNC_IMPL(__imp__sub_8266AA94) {
	PPC_FUNC_PROLOGUE();
	// lwz r19,-21844(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21844);
	// lwz r19,-21820(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21820);
	// lwz r19,-21796(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21796);
	// lwz r19,-21772(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21772);
	// lwz r19,-21748(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21748);
	// lwz r19,-21724(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21724);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,84
	ctx.r4.s64 = ctx.r10.s64 + 84;
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266AAC4"))) PPC_WEAK_FUNC(sub_8266AAC4);
PPC_FUNC_IMPL(__imp__sub_8266AAC4) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,14456
	ctx.r4.s64 = ctx.r10.s64 + 14456;
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266AADC"))) PPC_WEAK_FUNC(sub_8266AADC);
PPC_FUNC_IMPL(__imp__sub_8266AADC) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,14428
	ctx.r4.s64 = ctx.r10.s64 + 14428;
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266AAF4"))) PPC_WEAK_FUNC(sub_8266AAF4);
PPC_FUNC_IMPL(__imp__sub_8266AAF4) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,14400
	ctx.r4.s64 = ctx.r10.s64 + 14400;
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266AB0C"))) PPC_WEAK_FUNC(sub_8266AB0C);
PPC_FUNC_IMPL(__imp__sub_8266AB0C) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,14368
	ctx.r4.s64 = ctx.r10.s64 + 14368;
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266AB24"))) PPC_WEAK_FUNC(sub_8266AB24);
PPC_FUNC_IMPL(__imp__sub_8266AB24) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,14340
	ctx.r4.s64 = ctx.r10.s64 + 14340;
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266AB3C"))) PPC_WEAK_FUNC(sub_8266AB3C);
PPC_FUNC_IMPL(__imp__sub_8266AB3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AB40"))) PPC_WEAK_FUNC(sub_8266AB40);
PPC_FUNC_IMPL(__imp__sub_8266AB40) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,4528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4528, ctx.r5.u32);
	// stw r6,10856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10856, ctx.r6.u32);
	// stb r11,4524(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4524, ctx.r11.u8);
	// b 0x82630318
	sub_82630318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266AB54"))) PPC_WEAK_FUNC(sub_8266AB54);
PPC_FUNC_IMPL(__imp__sub_8266AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266AB58"))) PPC_WEAK_FUNC(sub_8266AB58);
PPC_FUNC_IMPL(__imp__sub_8266AB58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32153
	ctx.r12.s64 = -2107179008;
	// addi r12,r12,-21636
	ctx.r12.s64 = ctx.r12.s64 + -21636;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x8266AB90
		return;
	case 1:
		// ERROR: 0x8266ABA8
		return;
	case 2:
		// ERROR: 0x8266ABC0
		return;
	case 3:
		// ERROR: 0x8266ABD8
		return;
	case 4:
		// ERROR: 0x8266ABF0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8266AB7C"))) PPC_WEAK_FUNC(sub_8266AB7C);
PPC_FUNC_IMPL(__imp__sub_8266AB7C) {
	PPC_FUNC_PROLOGUE();
	// lwz r19,-21616(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21616);
	// lwz r19,-21592(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21592);
	// lwz r19,-21568(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21568);
	// lwz r19,-21544(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21544);
	// lwz r19,-21520(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21520);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,14592
	ctx.r4.s64 = ctx.r10.s64 + 14592;
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266ABA8"))) PPC_WEAK_FUNC(sub_8266ABA8);
PPC_FUNC_IMPL(__imp__sub_8266ABA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,14564
	ctx.r4.s64 = ctx.r10.s64 + 14564;
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266ABC0"))) PPC_WEAK_FUNC(sub_8266ABC0);
PPC_FUNC_IMPL(__imp__sub_8266ABC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,14540
	ctx.r4.s64 = ctx.r10.s64 + 14540;
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

