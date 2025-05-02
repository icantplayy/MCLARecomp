#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827ACE64"))) PPC_WEAK_FUNC(sub_827ACE64);
PPC_FUNC_IMPL(__imp__sub_827ACE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ACE68"))) PPC_WEAK_FUNC(sub_827ACE68);
PPC_FUNC_IMPL(__imp__sub_827ACE68) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,9952
	ctx.r7.s64 = ctx.r8.s64 + 9952;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ACE88"))) PPC_WEAK_FUNC(sub_827ACE88);
PPC_FUNC_IMPL(__imp__sub_827ACE88) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,9960
	ctx.r7.s64 = ctx.r8.s64 + 9960;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ACEA8"))) PPC_WEAK_FUNC(sub_827ACEA8);
PPC_FUNC_IMPL(__imp__sub_827ACEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r5,r11,3220
	ctx.r5.s64 = ctx.r11.s64 + 3220;
	// addi r3,r10,-7432
	ctx.r3.s64 = ctx.r10.s64 + -7432;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ACEC4"))) PPC_WEAK_FUNC(sub_827ACEC4);
PPC_FUNC_IMPL(__imp__sub_827ACEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ACEC8"))) PPC_WEAK_FUNC(sub_827ACEC8);
PPC_FUNC_IMPL(__imp__sub_827ACEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,10608
	ctx.r7.s64 = ctx.r8.s64 + 10608;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ACEE8"))) PPC_WEAK_FUNC(sub_827ACEE8);
PPC_FUNC_IMPL(__imp__sub_827ACEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,3952
	ctx.r11.s64 = ctx.r11.s64 + 3952;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r10,95
	ctx.r10.s64 = 95;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lfs f0,3796(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,3696
	ctx.r9.s64 = ctx.r9.s64 + 3696;
loc_827ACF08:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// bge 0x827acf08
	if (!ctx.cr0.lt) goto loc_827ACF08;
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-24112
	ctx.r3.s64 = ctx.r11.s64 + -24112;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ACF30"))) PPC_WEAK_FUNC(sub_827ACF30);
PPC_FUNC_IMPL(__imp__sub_827ACF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,-7248
	ctx.r11.s64 = ctx.r11.s64 + -7248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r10,95
	ctx.r10.s64 = 95;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lfs f0,3796(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,3696
	ctx.r9.s64 = ctx.r9.s64 + 3696;
loc_827ACF50:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// bge 0x827acf50
	if (!ctx.cr0.lt) goto loc_827ACF50;
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-24032
	ctx.r3.s64 = ctx.r11.s64 + -24032;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ACF78"))) PPC_WEAK_FUNC(sub_827ACF78);
PPC_FUNC_IMPL(__imp__sub_827ACF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3568
	ctx.r9.s64 = ctx.r11.s64 + 3568;
	// lfs f0,3796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3568(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3568, temp.u32);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f0,48(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// stfs f0,76(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 76, temp.u32);
	// stfs f0,72(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 72, temp.u32);
	// stfs f0,68(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 68, temp.u32);
	// stfs f0,64(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 64, temp.u32);
	// stfs f0,96(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 96, temp.u32);
	// stfs f0,124(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 124, temp.u32);
	// stfs f0,120(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 120, temp.u32);
	// stfs f0,116(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 116, temp.u32);
	// stfs f0,112(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 112, temp.u32);
	// stfs f0,144(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 144, temp.u32);
	// stfs f0,172(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 172, temp.u32);
	// stfs f0,168(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 168, temp.u32);
	// stfs f0,164(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 164, temp.u32);
	// stfs f0,160(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 160, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827ACFDC"))) PPC_WEAK_FUNC(sub_827ACFDC);
PPC_FUNC_IMPL(__imp__sub_827ACFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ACFE0"))) PPC_WEAK_FUNC(sub_827ACFE0);
PPC_FUNC_IMPL(__imp__sub_827ACFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x827ACFE8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,14704
	ctx.r11.s64 = ctx.r11.s64 + 14704;
	// li r29,95
	ctx.r29.s64 = 95;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,3796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f31.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,3704
	ctx.r28.s64 = ctx.r11.s64 + 3704;
loc_827AD014:
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r28,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r28.u32);
	// addi r6,r11,0
	ctx.r6.s64 = ctx.r11.s64 + 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821305f0
	ctx.lr = 0x827AD03C;
	sub_821305F0(ctx, base);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stb r30,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r30.u8);
	// addi r31,r31,336
	ctx.r31.s64 = ctx.r31.s64 + 336;
	// bge 0x827ad014
	if (!ctx.cr0.lt) goto loc_827AD014;
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-23952
	ctx.r3.s64 = ctx.r11.s64 + -23952;
	// bl 0x823d9a98
	ctx.lr = 0x827AD064;
	sub_823D9A98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823d9248
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD070"))) PPC_WEAK_FUNC(sub_827AD070);
PPC_FUNC_IMPL(__imp__sub_827AD070) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1432
	ctx.r5.s64 = ctx.r11.s64 + -1432;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827AD098;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32130
	ctx.r7.s64 = -2105671680;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,11032
	ctx.r11.s64 = ctx.r7.s64 + 11032;
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD0E4"))) PPC_WEAK_FUNC(sub_827AD0E4);
PPC_FUNC_IMPL(__imp__sub_827AD0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD0E8"))) PPC_WEAK_FUNC(sub_827AD0E8);
PPC_FUNC_IMPL(__imp__sub_827AD0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,11080
	ctx.r7.s64 = ctx.r8.s64 + 11080;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD108"))) PPC_WEAK_FUNC(sub_827AD108);
PPC_FUNC_IMPL(__imp__sub_827AD108) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,11088
	ctx.r7.s64 = ctx.r8.s64 + 11088;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD128"))) PPC_WEAK_FUNC(sub_827AD128);
PPC_FUNC_IMPL(__imp__sub_827AD128) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,11388
	ctx.r7.s64 = ctx.r8.s64 + 11388;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD148"))) PPC_WEAK_FUNC(sub_827AD148);
PPC_FUNC_IMPL(__imp__sub_827AD148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// addi r5,r11,11440
	ctx.r5.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,6320
	ctx.r4.s64 = ctx.r10.s64 + 6320;
	// addi r3,r9,-18208
	ctx.r3.s64 = ctx.r9.s64 + -18208;
	// li r6,10331
	ctx.r6.s64 = 10331;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD168"))) PPC_WEAK_FUNC(sub_827AD168);
PPC_FUNC_IMPL(__imp__sub_827AD168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-23864
	ctx.r3.s64 = ctx.r11.s64 + -23864;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD174"))) PPC_WEAK_FUNC(sub_827AD174);
PPC_FUNC_IMPL(__imp__sub_827AD174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD178"))) PPC_WEAK_FUNC(sub_827AD178);
PPC_FUNC_IMPL(__imp__sub_827AD178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,8132
	ctx.r5.s64 = ctx.r11.s64 + 8132;
	// addi r3,r10,-17980
	ctx.r3.s64 = ctx.r10.s64 + -17980;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD194"))) PPC_WEAK_FUNC(sub_827AD194);
PPC_FUNC_IMPL(__imp__sub_827AD194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD198"))) PPC_WEAK_FUNC(sub_827AD198);
PPC_FUNC_IMPL(__imp__sub_827AD198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,8148
	ctx.r5.s64 = ctx.r11.s64 + 8148;
	// addi r3,r10,-18000
	ctx.r3.s64 = ctx.r10.s64 + -18000;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD1B4"))) PPC_WEAK_FUNC(sub_827AD1B4);
PPC_FUNC_IMPL(__imp__sub_827AD1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD1B8"))) PPC_WEAK_FUNC(sub_827AD1B8);
PPC_FUNC_IMPL(__imp__sub_827AD1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,8712
	ctx.r5.s64 = ctx.r11.s64 + 8712;
	// addi r3,r10,-17876
	ctx.r3.s64 = ctx.r10.s64 + -17876;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD1D4"))) PPC_WEAK_FUNC(sub_827AD1D4);
PPC_FUNC_IMPL(__imp__sub_827AD1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD1D8"))) PPC_WEAK_FUNC(sub_827AD1D8);
PPC_FUNC_IMPL(__imp__sub_827AD1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,8720
	ctx.r5.s64 = ctx.r11.s64 + 8720;
	// addi r3,r10,-17916
	ctx.r3.s64 = ctx.r10.s64 + -17916;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD1F4"))) PPC_WEAK_FUNC(sub_827AD1F4);
PPC_FUNC_IMPL(__imp__sub_827AD1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD1F8"))) PPC_WEAK_FUNC(sub_827AD1F8);
PPC_FUNC_IMPL(__imp__sub_827AD1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,8728
	ctx.r5.s64 = ctx.r11.s64 + 8728;
	// addi r3,r10,-17896
	ctx.r3.s64 = ctx.r10.s64 + -17896;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD214"))) PPC_WEAK_FUNC(sub_827AD214);
PPC_FUNC_IMPL(__imp__sub_827AD214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD218"))) PPC_WEAK_FUNC(sub_827AD218);
PPC_FUNC_IMPL(__imp__sub_827AD218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,9056
	ctx.r5.s64 = ctx.r11.s64 + 9056;
	// addi r3,r10,-17856
	ctx.r3.s64 = ctx.r10.s64 + -17856;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD234"))) PPC_WEAK_FUNC(sub_827AD234);
PPC_FUNC_IMPL(__imp__sub_827AD234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD238"))) PPC_WEAK_FUNC(sub_827AD238);
PPC_FUNC_IMPL(__imp__sub_827AD238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,9404
	ctx.r5.s64 = ctx.r11.s64 + 9404;
	// addi r3,r10,-17772
	ctx.r3.s64 = ctx.r10.s64 + -17772;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD254"))) PPC_WEAK_FUNC(sub_827AD254);
PPC_FUNC_IMPL(__imp__sub_827AD254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD258"))) PPC_WEAK_FUNC(sub_827AD258);
PPC_FUNC_IMPL(__imp__sub_827AD258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,9420
	ctx.r5.s64 = ctx.r11.s64 + 9420;
	// addi r3,r10,-17792
	ctx.r3.s64 = ctx.r10.s64 + -17792;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD274"))) PPC_WEAK_FUNC(sub_827AD274);
PPC_FUNC_IMPL(__imp__sub_827AD274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD278"))) PPC_WEAK_FUNC(sub_827AD278);
PPC_FUNC_IMPL(__imp__sub_827AD278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,9728
	ctx.r5.s64 = ctx.r11.s64 + 9728;
	// addi r3,r10,-17508
	ctx.r3.s64 = ctx.r10.s64 + -17508;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD294"))) PPC_WEAK_FUNC(sub_827AD294);
PPC_FUNC_IMPL(__imp__sub_827AD294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD298"))) PPC_WEAK_FUNC(sub_827AD298);
PPC_FUNC_IMPL(__imp__sub_827AD298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,9740
	ctx.r5.s64 = ctx.r11.s64 + 9740;
	// addi r3,r10,-17588
	ctx.r3.s64 = ctx.r10.s64 + -17588;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD2B4"))) PPC_WEAK_FUNC(sub_827AD2B4);
PPC_FUNC_IMPL(__imp__sub_827AD2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD2B8"))) PPC_WEAK_FUNC(sub_827AD2B8);
PPC_FUNC_IMPL(__imp__sub_827AD2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,9748
	ctx.r5.s64 = ctx.r11.s64 + 9748;
	// addi r3,r10,-17548
	ctx.r3.s64 = ctx.r10.s64 + -17548;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD2D4"))) PPC_WEAK_FUNC(sub_827AD2D4);
PPC_FUNC_IMPL(__imp__sub_827AD2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD2D8"))) PPC_WEAK_FUNC(sub_827AD2D8);
PPC_FUNC_IMPL(__imp__sub_827AD2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,9756
	ctx.r5.s64 = ctx.r11.s64 + 9756;
	// addi r3,r10,-17488
	ctx.r3.s64 = ctx.r10.s64 + -17488;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD2F4"))) PPC_WEAK_FUNC(sub_827AD2F4);
PPC_FUNC_IMPL(__imp__sub_827AD2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD2F8"))) PPC_WEAK_FUNC(sub_827AD2F8);
PPC_FUNC_IMPL(__imp__sub_827AD2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,9764
	ctx.r5.s64 = ctx.r11.s64 + 9764;
	// addi r3,r10,-17468
	ctx.r3.s64 = ctx.r10.s64 + -17468;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD314"))) PPC_WEAK_FUNC(sub_827AD314);
PPC_FUNC_IMPL(__imp__sub_827AD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD318"))) PPC_WEAK_FUNC(sub_827AD318);
PPC_FUNC_IMPL(__imp__sub_827AD318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,9768
	ctx.r5.s64 = ctx.r11.s64 + 9768;
	// addi r3,r10,-17568
	ctx.r3.s64 = ctx.r10.s64 + -17568;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD334"))) PPC_WEAK_FUNC(sub_827AD334);
PPC_FUNC_IMPL(__imp__sub_827AD334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD338"))) PPC_WEAK_FUNC(sub_827AD338);
PPC_FUNC_IMPL(__imp__sub_827AD338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,9776
	ctx.r5.s64 = ctx.r11.s64 + 9776;
	// addi r3,r10,-17528
	ctx.r3.s64 = ctx.r10.s64 + -17528;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD354"))) PPC_WEAK_FUNC(sub_827AD354);
PPC_FUNC_IMPL(__imp__sub_827AD354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD358"))) PPC_WEAK_FUNC(sub_827AD358);
PPC_FUNC_IMPL(__imp__sub_827AD358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17424
	ctx.r3.s64 = ctx.r11.s64 + -17424;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821ce460
	sub_821CE460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD36C"))) PPC_WEAK_FUNC(sub_827AD36C);
PPC_FUNC_IMPL(__imp__sub_827AD36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD370"))) PPC_WEAK_FUNC(sub_827AD370);
PPC_FUNC_IMPL(__imp__sub_827AD370) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// li r11,63
	ctx.r11.s64 = 63;
	// addi r10,r10,-17408
	ctx.r10.s64 = ctx.r10.s64 + -17408;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
loc_827AD384:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// bge 0x827ad384
	if (!ctx.cr0.lt) goto loc_827AD384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD398"))) PPC_WEAK_FUNC(sub_827AD398);
PPC_FUNC_IMPL(__imp__sub_827AD398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,13672
	ctx.r5.s64 = ctx.r11.s64 + 13672;
	// addi r3,r10,-11984
	ctx.r3.s64 = ctx.r10.s64 + -11984;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD3B4"))) PPC_WEAK_FUNC(sub_827AD3B4);
PPC_FUNC_IMPL(__imp__sub_827AD3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD3B8"))) PPC_WEAK_FUNC(sub_827AD3B8);
PPC_FUNC_IMPL(__imp__sub_827AD3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,13684
	ctx.r5.s64 = ctx.r11.s64 + 13684;
	// addi r3,r10,-12092
	ctx.r3.s64 = ctx.r10.s64 + -12092;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD3D4"))) PPC_WEAK_FUNC(sub_827AD3D4);
PPC_FUNC_IMPL(__imp__sub_827AD3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD3D8"))) PPC_WEAK_FUNC(sub_827AD3D8);
PPC_FUNC_IMPL(__imp__sub_827AD3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,13700
	ctx.r5.s64 = ctx.r11.s64 + 13700;
	// addi r3,r10,-12072
	ctx.r3.s64 = ctx.r10.s64 + -12072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD3F4"))) PPC_WEAK_FUNC(sub_827AD3F4);
PPC_FUNC_IMPL(__imp__sub_827AD3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD3F8"))) PPC_WEAK_FUNC(sub_827AD3F8);
PPC_FUNC_IMPL(__imp__sub_827AD3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,13712
	ctx.r5.s64 = ctx.r11.s64 + 13712;
	// addi r3,r10,-12052
	ctx.r3.s64 = ctx.r10.s64 + -12052;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD414"))) PPC_WEAK_FUNC(sub_827AD414);
PPC_FUNC_IMPL(__imp__sub_827AD414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD418"))) PPC_WEAK_FUNC(sub_827AD418);
PPC_FUNC_IMPL(__imp__sub_827AD418) {
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
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17552
	ctx.r5.s64 = ctx.r11.s64 + -17552;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827AD440;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32130
	ctx.r7.s64 = -2105671680;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,22744
	ctx.r11.s64 = ctx.r7.s64 + 22744;
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD48C"))) PPC_WEAK_FUNC(sub_827AD48C);
PPC_FUNC_IMPL(__imp__sub_827AD48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD490"))) PPC_WEAK_FUNC(sub_827AD490);
PPC_FUNC_IMPL(__imp__sub_827AD490) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,22792
	ctx.r7.s64 = ctx.r8.s64 + 22792;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD4B0"))) PPC_WEAK_FUNC(sub_827AD4B0);
PPC_FUNC_IMPL(__imp__sub_827AD4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,22800
	ctx.r7.s64 = ctx.r8.s64 + 22800;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD4D0"))) PPC_WEAK_FUNC(sub_827AD4D0);
PPC_FUNC_IMPL(__imp__sub_827AD4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r9,-11936
	ctx.r8.s64 = ctx.r9.s64 + -11936;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD4F4"))) PPC_WEAK_FUNC(sub_827AD4F4);
PPC_FUNC_IMPL(__imp__sub_827AD4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD4F8"))) PPC_WEAK_FUNC(sub_827AD4F8);
PPC_FUNC_IMPL(__imp__sub_827AD4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r9,-12016
	ctx.r8.s64 = ctx.r9.s64 + -12016;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD51C"))) PPC_WEAK_FUNC(sub_827AD51C);
PPC_FUNC_IMPL(__imp__sub_827AD51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD520"))) PPC_WEAK_FUNC(sub_827AD520);
PPC_FUNC_IMPL(__imp__sub_827AD520) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-11440
	ctx.r3.s64 = ctx.r11.s64 + -11440;
	// bl 0x8218f308
	ctx.lr = 0x827AD53C;
	sub_8218F308(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-23832
	ctx.r3.s64 = ctx.r10.s64 + -23832;
	// bl 0x823d9a98
	ctx.lr = 0x827AD548;
	sub_823D9A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD558"))) PPC_WEAK_FUNC(sub_827AD558);
PPC_FUNC_IMPL(__imp__sub_827AD558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,21012
	ctx.r5.s64 = ctx.r11.s64 + 21012;
	// addi r3,r10,-10832
	ctx.r3.s64 = ctx.r10.s64 + -10832;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD574"))) PPC_WEAK_FUNC(sub_827AD574);
PPC_FUNC_IMPL(__imp__sub_827AD574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD578"))) PPC_WEAK_FUNC(sub_827AD578);
PPC_FUNC_IMPL(__imp__sub_827AD578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,22028
	ctx.r5.s64 = ctx.r11.s64 + 22028;
	// addi r3,r10,-10764
	ctx.r3.s64 = ctx.r10.s64 + -10764;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD594"))) PPC_WEAK_FUNC(sub_827AD594);
PPC_FUNC_IMPL(__imp__sub_827AD594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD598"))) PPC_WEAK_FUNC(sub_827AD598);
PPC_FUNC_IMPL(__imp__sub_827AD598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r9,r11,-31280
	ctx.r9.s64 = ctx.r11.s64 + -31280;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r10,-10736
	ctx.r5.s64 = ctx.r10.s64 + -10736;
	// li r4,16
	ctx.r4.s64 = 16;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v62,r9,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v61,r9,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r9,r6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r5,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AD5E4"))) PPC_WEAK_FUNC(sub_827AD5E4);
PPC_FUNC_IMPL(__imp__sub_827AD5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD5E8"))) PPC_WEAK_FUNC(sub_827AD5E8);
PPC_FUNC_IMPL(__imp__sub_827AD5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-23824
	ctx.r3.s64 = ctx.r11.s64 + -23824;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD5F4"))) PPC_WEAK_FUNC(sub_827AD5F4);
PPC_FUNC_IMPL(__imp__sub_827AD5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD5F8"))) PPC_WEAK_FUNC(sub_827AD5F8);
PPC_FUNC_IMPL(__imp__sub_827AD5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,23160
	ctx.r5.s64 = ctx.r11.s64 + 23160;
	// addi r3,r10,-10424
	ctx.r3.s64 = ctx.r10.s64 + -10424;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD614"))) PPC_WEAK_FUNC(sub_827AD614);
PPC_FUNC_IMPL(__imp__sub_827AD614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD618"))) PPC_WEAK_FUNC(sub_827AD618);
PPC_FUNC_IMPL(__imp__sub_827AD618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,25788
	ctx.r5.s64 = ctx.r11.s64 + 25788;
	// addi r3,r10,-10144
	ctx.r3.s64 = ctx.r10.s64 + -10144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD634"))) PPC_WEAK_FUNC(sub_827AD634);
PPC_FUNC_IMPL(__imp__sub_827AD634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD638"))) PPC_WEAK_FUNC(sub_827AD638);
PPC_FUNC_IMPL(__imp__sub_827AD638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,25800
	ctx.r5.s64 = ctx.r11.s64 + 25800;
	// addi r3,r10,-9868
	ctx.r3.s64 = ctx.r10.s64 + -9868;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD654"))) PPC_WEAK_FUNC(sub_827AD654);
PPC_FUNC_IMPL(__imp__sub_827AD654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD658"))) PPC_WEAK_FUNC(sub_827AD658);
PPC_FUNC_IMPL(__imp__sub_827AD658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,25812
	ctx.r5.s64 = ctx.r11.s64 + 25812;
	// addi r3,r10,-10124
	ctx.r3.s64 = ctx.r10.s64 + -10124;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD674"))) PPC_WEAK_FUNC(sub_827AD674);
PPC_FUNC_IMPL(__imp__sub_827AD674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD678"))) PPC_WEAK_FUNC(sub_827AD678);
PPC_FUNC_IMPL(__imp__sub_827AD678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,25824
	ctx.r5.s64 = ctx.r11.s64 + 25824;
	// addi r3,r10,-9216
	ctx.r3.s64 = ctx.r10.s64 + -9216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD694"))) PPC_WEAK_FUNC(sub_827AD694);
PPC_FUNC_IMPL(__imp__sub_827AD694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD698"))) PPC_WEAK_FUNC(sub_827AD698);
PPC_FUNC_IMPL(__imp__sub_827AD698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,25836
	ctx.r5.s64 = ctx.r11.s64 + 25836;
	// addi r3,r10,-9888
	ctx.r3.s64 = ctx.r10.s64 + -9888;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD6B4"))) PPC_WEAK_FUNC(sub_827AD6B4);
PPC_FUNC_IMPL(__imp__sub_827AD6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD6B8"))) PPC_WEAK_FUNC(sub_827AD6B8);
PPC_FUNC_IMPL(__imp__sub_827AD6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x827AD6C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32119
	ctx.r30.s64 = -2104950784;
	// addi r31,r30,-9632
	ctx.r31.s64 = ctx.r30.s64 + -9632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0648
	ctx.lr = 0x827AD6D4;
	sub_824E0648(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// addi r11,r11,25740
	ctx.r11.s64 = ctx.r11.s64 + 25740;
	// stw r11,-9632(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9632, ctx.r11.u32);
	// bl 0x822eb198
	ctx.lr = 0x827AD6E8;
	sub_822EB198(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,27636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27636);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f10,-11624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11624);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f9,-30576(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30576);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f5,25732(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25732);
	ctx.f5.f64 = double(temp.f32);
	// li r30,80
	ctx.r30.s64 = 80;
	// lfs f0,7444(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,14884(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14884);
	ctx.f6.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f13,3796(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// li r29,96
	ctx.r29.s64 = 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f11,27640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27640);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lfs f8,-4948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4948);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f7,17032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17032);
	ctx.f7.f64 = double(temp.f32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lfs f4,-3072(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3072);
	ctx.f4.f64 = double(temp.f32);
	// lis r27,-32252
	ctx.r27.s64 = -2113667072;
	// lfs f3,25728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25728);
	ctx.f3.f64 = double(temp.f32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// stvx128 v63,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,5
	ctx.r11.s64 = 5;
	// lfs f9,25724(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25724);
	ctx.f9.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f8,140(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f7,148(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f6,112(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r30,-32132
	ctx.r30.s64 = -2105802752;
	// stvx128 v63,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f12,-9160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -9160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-29232(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29232);
	ctx.f10.f64 = double(temp.f32);
	// stb r10,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r10.u8);
	// lfs f8,31492(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 31492);
	ctx.f8.f64 = double(temp.f32);
	// stb r9,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r9.u8);
	// lfs f7,25720(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 25720);
	ctx.f7.f64 = double(temp.f32);
	// stb r8,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r8.u8);
	// lfs f6,31016(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 31016);
	ctx.f6.f64 = double(temp.f32);
	// stb r7,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r7.u8);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r30,-23792
	ctx.r3.s64 = ctx.r30.s64 + -23792;
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f6,152(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f11,160(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stvx128 v63,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d9a98
	ctx.lr = 0x827AD844;
	sub_823D9A98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD84C"))) PPC_WEAK_FUNC(sub_827AD84C);
PPC_FUNC_IMPL(__imp__sub_827AD84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD850"))) PPC_WEAK_FUNC(sub_827AD850);
PPC_FUNC_IMPL(__imp__sub_827AD850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x827AD858;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32119
	ctx.r30.s64 = -2104950784;
	// addi r31,r30,-10352
	ctx.r31.s64 = ctx.r30.s64 + -10352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0648
	ctx.lr = 0x827AD86C;
	sub_824E0648(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// addi r11,r11,25740
	ctx.r11.s64 = ctx.r11.s64 + 25740;
	// stw r11,-10352(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10352, ctx.r11.u32);
	// bl 0x822eb198
	ctx.lr = 0x827AD880;
	sub_822EB198(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,27636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27636);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f10,-11624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11624);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f9,-30576(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30576);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f5,25732(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25732);
	ctx.f5.f64 = double(temp.f32);
	// li r30,80
	ctx.r30.s64 = 80;
	// lfs f0,7444(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,14884(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14884);
	ctx.f6.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f13,3796(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// li r29,96
	ctx.r29.s64 = 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f11,27640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27640);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lfs f8,-4948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4948);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f7,17032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17032);
	ctx.f7.f64 = double(temp.f32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lfs f4,-3072(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3072);
	ctx.f4.f64 = double(temp.f32);
	// lis r27,-32252
	ctx.r27.s64 = -2113667072;
	// lfs f3,25728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25728);
	ctx.f3.f64 = double(temp.f32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// stvx128 v63,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,5
	ctx.r11.s64 = 5;
	// lfs f9,25724(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25724);
	ctx.f9.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f8,140(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f7,148(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f6,112(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r30,-32132
	ctx.r30.s64 = -2105802752;
	// stvx128 v63,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f12,-9160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -9160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-29232(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29232);
	ctx.f10.f64 = double(temp.f32);
	// stb r10,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r10.u8);
	// lfs f8,31492(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 31492);
	ctx.f8.f64 = double(temp.f32);
	// stb r9,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r9.u8);
	// lfs f7,25720(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 25720);
	ctx.f7.f64 = double(temp.f32);
	// stb r8,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r8.u8);
	// lfs f6,31016(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 31016);
	ctx.f6.f64 = double(temp.f32);
	// stb r7,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r7.u8);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r30,-23728
	ctx.r3.s64 = ctx.r30.s64 + -23728;
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f6,152(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f11,160(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stvx128 v63,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d9a98
	ctx.lr = 0x827AD9DC;
	sub_823D9A98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AD9E4"))) PPC_WEAK_FUNC(sub_827AD9E4);
PPC_FUNC_IMPL(__imp__sub_827AD9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AD9E8"))) PPC_WEAK_FUNC(sub_827AD9E8);
PPC_FUNC_IMPL(__imp__sub_827AD9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x827AD9F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32119
	ctx.r30.s64 = -2104950784;
	// addi r31,r30,-9424
	ctx.r31.s64 = ctx.r30.s64 + -9424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0648
	ctx.lr = 0x827ADA04;
	sub_824E0648(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// addi r11,r11,25740
	ctx.r11.s64 = ctx.r11.s64 + 25740;
	// stw r11,-9424(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9424, ctx.r11.u32);
	// bl 0x822eb198
	ctx.lr = 0x827ADA18;
	sub_822EB198(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,27636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27636);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f10,-11624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11624);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f9,-30576(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30576);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f5,25732(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25732);
	ctx.f5.f64 = double(temp.f32);
	// li r30,80
	ctx.r30.s64 = 80;
	// lfs f0,7444(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,14884(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14884);
	ctx.f6.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f13,3796(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// li r29,96
	ctx.r29.s64 = 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f11,27640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27640);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lfs f8,-4948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4948);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f7,17032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17032);
	ctx.f7.f64 = double(temp.f32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lfs f4,-3072(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3072);
	ctx.f4.f64 = double(temp.f32);
	// lis r27,-32252
	ctx.r27.s64 = -2113667072;
	// lfs f3,25728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25728);
	ctx.f3.f64 = double(temp.f32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// stvx128 v63,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,5
	ctx.r11.s64 = 5;
	// lfs f9,25724(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25724);
	ctx.f9.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f8,140(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f7,148(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f6,112(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r30,-32132
	ctx.r30.s64 = -2105802752;
	// stvx128 v63,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f12,-9160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -9160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-29232(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29232);
	ctx.f10.f64 = double(temp.f32);
	// stb r10,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r10.u8);
	// lfs f8,31492(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 31492);
	ctx.f8.f64 = double(temp.f32);
	// stb r9,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r9.u8);
	// lfs f7,25720(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 25720);
	ctx.f7.f64 = double(temp.f32);
	// stb r8,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r8.u8);
	// lfs f6,31016(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 31016);
	ctx.f6.f64 = double(temp.f32);
	// stb r7,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r7.u8);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r30,-23664
	ctx.r3.s64 = ctx.r30.s64 + -23664;
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f6,152(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f11,160(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stvx128 v63,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d9a98
	ctx.lr = 0x827ADB74;
	sub_823D9A98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADB7C"))) PPC_WEAK_FUNC(sub_827ADB7C);
PPC_FUNC_IMPL(__imp__sub_827ADB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADB80"))) PPC_WEAK_FUNC(sub_827ADB80);
PPC_FUNC_IMPL(__imp__sub_827ADB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x827ADB88;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32119
	ctx.r30.s64 = -2104950784;
	// addi r31,r30,-10096
	ctx.r31.s64 = ctx.r30.s64 + -10096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0648
	ctx.lr = 0x827ADB9C;
	sub_824E0648(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// addi r11,r11,25740
	ctx.r11.s64 = ctx.r11.s64 + 25740;
	// stw r11,-10096(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10096, ctx.r11.u32);
	// bl 0x822eb198
	ctx.lr = 0x827ADBB0;
	sub_822EB198(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,27636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27636);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f10,-11624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11624);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f9,-30576(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30576);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f5,25732(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25732);
	ctx.f5.f64 = double(temp.f32);
	// li r30,80
	ctx.r30.s64 = 80;
	// lfs f0,7444(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,14884(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14884);
	ctx.f6.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f13,3796(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// li r29,96
	ctx.r29.s64 = 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f11,27640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27640);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lfs f8,-4948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4948);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f7,17032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17032);
	ctx.f7.f64 = double(temp.f32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lfs f4,-3072(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3072);
	ctx.f4.f64 = double(temp.f32);
	// lis r27,-32252
	ctx.r27.s64 = -2113667072;
	// lfs f3,25728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25728);
	ctx.f3.f64 = double(temp.f32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// stvx128 v63,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,5
	ctx.r11.s64 = 5;
	// lfs f9,25724(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25724);
	ctx.f9.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f8,140(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f7,148(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f6,112(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r30,-32132
	ctx.r30.s64 = -2105802752;
	// stvx128 v63,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f12,-9160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -9160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-29232(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29232);
	ctx.f10.f64 = double(temp.f32);
	// stb r10,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r10.u8);
	// lfs f8,31492(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 31492);
	ctx.f8.f64 = double(temp.f32);
	// stb r9,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r9.u8);
	// lfs f7,25720(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 25720);
	ctx.f7.f64 = double(temp.f32);
	// stb r8,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r8.u8);
	// lfs f6,31016(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 31016);
	ctx.f6.f64 = double(temp.f32);
	// stb r7,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r7.u8);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r30,-23600
	ctx.r3.s64 = ctx.r30.s64 + -23600;
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f6,152(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f11,160(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stvx128 v63,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d9a98
	ctx.lr = 0x827ADD0C;
	sub_823D9A98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADD14"))) PPC_WEAK_FUNC(sub_827ADD14);
PPC_FUNC_IMPL(__imp__sub_827ADD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADD18"))) PPC_WEAK_FUNC(sub_827ADD18);
PPC_FUNC_IMPL(__imp__sub_827ADD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f0
	ctx.lr = 0x827ADD20;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32119
	ctx.r30.s64 = -2104950784;
	// addi r31,r30,-9840
	ctx.r31.s64 = ctx.r30.s64 + -9840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0648
	ctx.lr = 0x827ADD34;
	sub_824E0648(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// addi r11,r11,25740
	ctx.r11.s64 = ctx.r11.s64 + 25740;
	// stw r11,-9840(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9840, ctx.r11.u32);
	// bl 0x822eb198
	ctx.lr = 0x827ADD48;
	sub_822EB198(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,27636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27636);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f10,-11624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11624);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f9,-30576(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30576);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f5,25732(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25732);
	ctx.f5.f64 = double(temp.f32);
	// li r30,80
	ctx.r30.s64 = 80;
	// lfs f0,7444(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,14884(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14884);
	ctx.f6.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f13,3796(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// li r29,96
	ctx.r29.s64 = 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f11,27640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27640);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lfs f8,-4948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4948);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f7,17032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17032);
	ctx.f7.f64 = double(temp.f32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lfs f4,-3072(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3072);
	ctx.f4.f64 = double(temp.f32);
	// lis r27,-32252
	ctx.r27.s64 = -2113667072;
	// lfs f3,25728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25728);
	ctx.f3.f64 = double(temp.f32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// stvx128 v63,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,5
	ctx.r11.s64 = 5;
	// lfs f9,25724(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25724);
	ctx.f9.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f8,140(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f7,148(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f6,112(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r30,-32132
	ctx.r30.s64 = -2105802752;
	// stvx128 v63,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f12,-9160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -9160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-29232(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29232);
	ctx.f10.f64 = double(temp.f32);
	// stb r10,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r10.u8);
	// lfs f8,31492(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 31492);
	ctx.f8.f64 = double(temp.f32);
	// stb r9,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r9.u8);
	// lfs f7,25720(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 25720);
	ctx.f7.f64 = double(temp.f32);
	// stb r8,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r8.u8);
	// lfs f6,31016(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 31016);
	ctx.f6.f64 = double(temp.f32);
	// stb r7,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r7.u8);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r30,-23536
	ctx.r3.s64 = ctx.r30.s64 + -23536;
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f6,152(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f11,160(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stvx128 v63,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d9a98
	ctx.lr = 0x827ADEA4;
	sub_823D9A98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823d9240
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADEAC"))) PPC_WEAK_FUNC(sub_827ADEAC);
PPC_FUNC_IMPL(__imp__sub_827ADEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADEB0"))) PPC_WEAK_FUNC(sub_827ADEB0);
PPC_FUNC_IMPL(__imp__sub_827ADEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,28572
	ctx.r5.s64 = ctx.r11.s64 + 28572;
	// addi r3,r10,-9016
	ctx.r3.s64 = ctx.r10.s64 + -9016;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADECC"))) PPC_WEAK_FUNC(sub_827ADECC);
PPC_FUNC_IMPL(__imp__sub_827ADECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADED0"))) PPC_WEAK_FUNC(sub_827ADED0);
PPC_FUNC_IMPL(__imp__sub_827ADED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,32040
	ctx.r5.s64 = ctx.r11.s64 + 32040;
	// addi r3,r10,-8812
	ctx.r3.s64 = ctx.r10.s64 + -8812;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADEEC"))) PPC_WEAK_FUNC(sub_827ADEEC);
PPC_FUNC_IMPL(__imp__sub_827ADEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADEF0"))) PPC_WEAK_FUNC(sub_827ADEF0);
PPC_FUNC_IMPL(__imp__sub_827ADEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,32052
	ctx.r5.s64 = ctx.r11.s64 + 32052;
	// addi r3,r10,-8852
	ctx.r3.s64 = ctx.r10.s64 + -8852;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADF0C"))) PPC_WEAK_FUNC(sub_827ADF0C);
PPC_FUNC_IMPL(__imp__sub_827ADF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADF10"))) PPC_WEAK_FUNC(sub_827ADF10);
PPC_FUNC_IMPL(__imp__sub_827ADF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,32068
	ctx.r5.s64 = ctx.r11.s64 + 32068;
	// addi r3,r10,-8832
	ctx.r3.s64 = ctx.r10.s64 + -8832;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADF2C"))) PPC_WEAK_FUNC(sub_827ADF2C);
PPC_FUNC_IMPL(__imp__sub_827ADF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADF30"))) PPC_WEAK_FUNC(sub_827ADF30);
PPC_FUNC_IMPL(__imp__sub_827ADF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,32080
	ctx.r5.s64 = ctx.r11.s64 + 32080;
	// addi r3,r10,-8952
	ctx.r3.s64 = ctx.r10.s64 + -8952;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADF4C"))) PPC_WEAK_FUNC(sub_827ADF4C);
PPC_FUNC_IMPL(__imp__sub_827ADF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADF50"))) PPC_WEAK_FUNC(sub_827ADF50);
PPC_FUNC_IMPL(__imp__sub_827ADF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,32100
	ctx.r5.s64 = ctx.r11.s64 + 32100;
	// addi r3,r10,-8872
	ctx.r3.s64 = ctx.r10.s64 + -8872;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADF6C"))) PPC_WEAK_FUNC(sub_827ADF6C);
PPC_FUNC_IMPL(__imp__sub_827ADF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADF70"))) PPC_WEAK_FUNC(sub_827ADF70);
PPC_FUNC_IMPL(__imp__sub_827ADF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,32112
	ctx.r5.s64 = ctx.r11.s64 + 32112;
	// addi r3,r10,-8932
	ctx.r3.s64 = ctx.r10.s64 + -8932;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADF8C"))) PPC_WEAK_FUNC(sub_827ADF8C);
PPC_FUNC_IMPL(__imp__sub_827ADF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADF90"))) PPC_WEAK_FUNC(sub_827ADF90);
PPC_FUNC_IMPL(__imp__sub_827ADF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,32132
	ctx.r5.s64 = ctx.r11.s64 + 32132;
	// addi r3,r10,-8912
	ctx.r3.s64 = ctx.r10.s64 + -8912;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADFAC"))) PPC_WEAK_FUNC(sub_827ADFAC);
PPC_FUNC_IMPL(__imp__sub_827ADFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADFB0"))) PPC_WEAK_FUNC(sub_827ADFB0);
PPC_FUNC_IMPL(__imp__sub_827ADFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,32148
	ctx.r5.s64 = ctx.r11.s64 + 32148;
	// addi r3,r10,-8892
	ctx.r3.s64 = ctx.r10.s64 + -8892;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827ADFCC"))) PPC_WEAK_FUNC(sub_827ADFCC);
PPC_FUNC_IMPL(__imp__sub_827ADFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827ADFD0"))) PPC_WEAK_FUNC(sub_827ADFD0);
PPC_FUNC_IMPL(__imp__sub_827ADFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r10,14
	ctx.r10.s64 = 14;
	// addi r11,r11,-8416
	ctx.r11.s64 = ctx.r11.s64 + -8416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-31380(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31380);
	ctx.f0.f64 = double(temp.f32);
loc_827ADFE8:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bge 0x827adfe8
	if (!ctx.cr0.lt) goto loc_827ADFE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE000"))) PPC_WEAK_FUNC(sub_827AE000);
PPC_FUNC_IMPL(__imp__sub_827AE000) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-32119
	ctx.r7.s64 = -2104950784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,-8472
	ctx.r6.s64 = ctx.r7.s64 + -8472;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,-8472(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8472, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r10,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r8,12(r6)
	PPC_STORE_U8(ctx.r6.u32 + 12, ctx.r8.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r7,20(r6)
	PPC_STORE_U8(ctx.r6.u32 + 20, ctx.r7.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,28(r6)
	PPC_STORE_U8(ctx.r6.u32 + 28, ctx.r9.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,36(r6)
	PPC_STORE_U8(ctx.r6.u32 + 36, ctx.r11.u8);
	// stw r7,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r7.u32);
	// stb r10,44(r6)
	PPC_STORE_U8(ctx.r6.u32 + 44, ctx.r10.u8);
	// stw r9,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r9.u32);
	// stb r8,52(r6)
	PPC_STORE_U8(ctx.r6.u32 + 52, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE078"))) PPC_WEAK_FUNC(sub_827AE078);
PPC_FUNC_IMPL(__imp__sub_827AE078) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r3,r11,-8296
	ctx.r3.s64 = ctx.r11.s64 + -8296;
	// bl 0x821c8ed8
	ctx.lr = 0x827AE090;
	sub_821C8ED8(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-23472
	ctx.r3.s64 = ctx.r10.s64 + -23472;
	// bl 0x823d9a98
	ctx.lr = 0x827AE09C;
	sub_823D9A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE0AC"))) PPC_WEAK_FUNC(sub_827AE0AC);
PPC_FUNC_IMPL(__imp__sub_827AE0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE0B0"))) PPC_WEAK_FUNC(sub_827AE0B0);
PPC_FUNC_IMPL(__imp__sub_827AE0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,27968
	ctx.r7.s64 = ctx.r8.s64 + 27968;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE0D0"))) PPC_WEAK_FUNC(sub_827AE0D0);
PPC_FUNC_IMPL(__imp__sub_827AE0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,29888
	ctx.r7.s64 = ctx.r8.s64 + 29888;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE0F0"))) PPC_WEAK_FUNC(sub_827AE0F0);
PPC_FUNC_IMPL(__imp__sub_827AE0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-26936
	ctx.r5.s64 = ctx.r11.s64 + -26936;
	// addi r3,r10,-8248
	ctx.r3.s64 = ctx.r10.s64 + -8248;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE10C"))) PPC_WEAK_FUNC(sub_827AE10C);
PPC_FUNC_IMPL(__imp__sub_827AE10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE110"))) PPC_WEAK_FUNC(sub_827AE110);
PPC_FUNC_IMPL(__imp__sub_827AE110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-25976
	ctx.r5.s64 = ctx.r11.s64 + -25976;
	// addi r3,r10,-8196
	ctx.r3.s64 = ctx.r10.s64 + -8196;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE12C"))) PPC_WEAK_FUNC(sub_827AE12C);
PPC_FUNC_IMPL(__imp__sub_827AE12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE130"))) PPC_WEAK_FUNC(sub_827AE130);
PPC_FUNC_IMPL(__imp__sub_827AE130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-25964
	ctx.r5.s64 = ctx.r11.s64 + -25964;
	// addi r3,r10,-8216
	ctx.r3.s64 = ctx.r10.s64 + -8216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE14C"))) PPC_WEAK_FUNC(sub_827AE14C);
PPC_FUNC_IMPL(__imp__sub_827AE14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE150"))) PPC_WEAK_FUNC(sub_827AE150);
PPC_FUNC_IMPL(__imp__sub_827AE150) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,31652
	ctx.r7.s64 = ctx.r8.s64 + 31652;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE170"))) PPC_WEAK_FUNC(sub_827AE170);
PPC_FUNC_IMPL(__imp__sub_827AE170) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,32156
	ctx.r7.s64 = ctx.r8.s64 + 32156;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE190"))) PPC_WEAK_FUNC(sub_827AE190);
PPC_FUNC_IMPL(__imp__sub_827AE190) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// addi r7,r8,32324
	ctx.r7.s64 = ctx.r8.s64 + 32324;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE1B0"))) PPC_WEAK_FUNC(sub_827AE1B0);
PPC_FUNC_IMPL(__imp__sub_827AE1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,-32468
	ctx.r7.s64 = ctx.r8.s64 + -32468;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE1D0"))) PPC_WEAK_FUNC(sub_827AE1D0);
PPC_FUNC_IMPL(__imp__sub_827AE1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-15732
	ctx.r5.s64 = ctx.r11.s64 + -15732;
	// addi r3,r10,-7920
	ctx.r3.s64 = ctx.r10.s64 + -7920;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE1EC"))) PPC_WEAK_FUNC(sub_827AE1EC);
PPC_FUNC_IMPL(__imp__sub_827AE1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE1F0"))) PPC_WEAK_FUNC(sub_827AE1F0);
PPC_FUNC_IMPL(__imp__sub_827AE1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,-30688
	ctx.r7.s64 = ctx.r8.s64 + -30688;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE210"))) PPC_WEAK_FUNC(sub_827AE210);
PPC_FUNC_IMPL(__imp__sub_827AE210) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,-30444
	ctx.r7.s64 = ctx.r8.s64 + -30444;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE230"))) PPC_WEAK_FUNC(sub_827AE230);
PPC_FUNC_IMPL(__imp__sub_827AE230) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,-30224
	ctx.r7.s64 = ctx.r8.s64 + -30224;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE250"))) PPC_WEAK_FUNC(sub_827AE250);
PPC_FUNC_IMPL(__imp__sub_827AE250) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,-30008
	ctx.r7.s64 = ctx.r8.s64 + -30008;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE270"))) PPC_WEAK_FUNC(sub_827AE270);
PPC_FUNC_IMPL(__imp__sub_827AE270) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,-29676
	ctx.r7.s64 = ctx.r8.s64 + -29676;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE290"))) PPC_WEAK_FUNC(sub_827AE290);
PPC_FUNC_IMPL(__imp__sub_827AE290) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,-29012
	ctx.r7.s64 = ctx.r8.s64 + -29012;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE2B0"))) PPC_WEAK_FUNC(sub_827AE2B0);
PPC_FUNC_IMPL(__imp__sub_827AE2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,-28828
	ctx.r7.s64 = ctx.r8.s64 + -28828;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE2D0"))) PPC_WEAK_FUNC(sub_827AE2D0);
PPC_FUNC_IMPL(__imp__sub_827AE2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,-28504
	ctx.r7.s64 = ctx.r8.s64 + -28504;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE2F0"))) PPC_WEAK_FUNC(sub_827AE2F0);
PPC_FUNC_IMPL(__imp__sub_827AE2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,-28348
	ctx.r7.s64 = ctx.r8.s64 + -28348;
	// lwz r11,22972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22972);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r10,22972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22972, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827AE310"))) PPC_WEAK_FUNC(sub_827AE310);
PPC_FUNC_IMPL(__imp__sub_827AE310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-10204
	ctx.r5.s64 = ctx.r11.s64 + -10204;
	// addi r3,r10,-12872
	ctx.r3.s64 = ctx.r10.s64 + -12872;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE32C"))) PPC_WEAK_FUNC(sub_827AE32C);
PPC_FUNC_IMPL(__imp__sub_827AE32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE330"))) PPC_WEAK_FUNC(sub_827AE330);
PPC_FUNC_IMPL(__imp__sub_827AE330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-10188
	ctx.r5.s64 = ctx.r11.s64 + -10188;
	// addi r3,r10,-6180
	ctx.r3.s64 = ctx.r10.s64 + -6180;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE34C"))) PPC_WEAK_FUNC(sub_827AE34C);
PPC_FUNC_IMPL(__imp__sub_827AE34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE350"))) PPC_WEAK_FUNC(sub_827AE350);
PPC_FUNC_IMPL(__imp__sub_827AE350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-10176
	ctx.r5.s64 = ctx.r11.s64 + -10176;
	// addi r3,r10,-13312
	ctx.r3.s64 = ctx.r10.s64 + -13312;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE36C"))) PPC_WEAK_FUNC(sub_827AE36C);
PPC_FUNC_IMPL(__imp__sub_827AE36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE370"))) PPC_WEAK_FUNC(sub_827AE370);
PPC_FUNC_IMPL(__imp__sub_827AE370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-10160
	ctx.r5.s64 = ctx.r11.s64 + -10160;
	// addi r3,r10,-12932
	ctx.r3.s64 = ctx.r10.s64 + -12932;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE38C"))) PPC_WEAK_FUNC(sub_827AE38C);
PPC_FUNC_IMPL(__imp__sub_827AE38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE390"))) PPC_WEAK_FUNC(sub_827AE390);
PPC_FUNC_IMPL(__imp__sub_827AE390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-10144
	ctx.r5.s64 = ctx.r11.s64 + -10144;
	// addi r3,r10,-12892
	ctx.r3.s64 = ctx.r10.s64 + -12892;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE3AC"))) PPC_WEAK_FUNC(sub_827AE3AC);
PPC_FUNC_IMPL(__imp__sub_827AE3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE3B0"))) PPC_WEAK_FUNC(sub_827AE3B0);
PPC_FUNC_IMPL(__imp__sub_827AE3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-10124
	ctx.r5.s64 = ctx.r11.s64 + -10124;
	// addi r3,r10,-13852
	ctx.r3.s64 = ctx.r10.s64 + -13852;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE3CC"))) PPC_WEAK_FUNC(sub_827AE3CC);
PPC_FUNC_IMPL(__imp__sub_827AE3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE3D0"))) PPC_WEAK_FUNC(sub_827AE3D0);
PPC_FUNC_IMPL(__imp__sub_827AE3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-10108
	ctx.r5.s64 = ctx.r11.s64 + -10108;
	// addi r3,r10,-12832
	ctx.r3.s64 = ctx.r10.s64 + -12832;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE3EC"))) PPC_WEAK_FUNC(sub_827AE3EC);
PPC_FUNC_IMPL(__imp__sub_827AE3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE3F0"))) PPC_WEAK_FUNC(sub_827AE3F0);
PPC_FUNC_IMPL(__imp__sub_827AE3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-10092
	ctx.r5.s64 = ctx.r11.s64 + -10092;
	// addi r3,r10,-6580
	ctx.r3.s64 = ctx.r10.s64 + -6580;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE40C"))) PPC_WEAK_FUNC(sub_827AE40C);
PPC_FUNC_IMPL(__imp__sub_827AE40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE410"))) PPC_WEAK_FUNC(sub_827AE410);
PPC_FUNC_IMPL(__imp__sub_827AE410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-10072
	ctx.r5.s64 = ctx.r11.s64 + -10072;
	// addi r3,r10,-6620
	ctx.r3.s64 = ctx.r10.s64 + -6620;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE42C"))) PPC_WEAK_FUNC(sub_827AE42C);
PPC_FUNC_IMPL(__imp__sub_827AE42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE430"))) PPC_WEAK_FUNC(sub_827AE430);
PPC_FUNC_IMPL(__imp__sub_827AE430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-10052
	ctx.r5.s64 = ctx.r11.s64 + -10052;
	// addi r3,r10,-13560
	ctx.r3.s64 = ctx.r10.s64 + -13560;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE44C"))) PPC_WEAK_FUNC(sub_827AE44C);
PPC_FUNC_IMPL(__imp__sub_827AE44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE450"))) PPC_WEAK_FUNC(sub_827AE450);
PPC_FUNC_IMPL(__imp__sub_827AE450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-10044
	ctx.r5.s64 = ctx.r11.s64 + -10044;
	// addi r3,r10,-13092
	ctx.r3.s64 = ctx.r10.s64 + -13092;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE46C"))) PPC_WEAK_FUNC(sub_827AE46C);
PPC_FUNC_IMPL(__imp__sub_827AE46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE470"))) PPC_WEAK_FUNC(sub_827AE470);
PPC_FUNC_IMPL(__imp__sub_827AE470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-10028
	ctx.r5.s64 = ctx.r11.s64 + -10028;
	// addi r3,r10,-6260
	ctx.r3.s64 = ctx.r10.s64 + -6260;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE48C"))) PPC_WEAK_FUNC(sub_827AE48C);
PPC_FUNC_IMPL(__imp__sub_827AE48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE490"))) PPC_WEAK_FUNC(sub_827AE490);
PPC_FUNC_IMPL(__imp__sub_827AE490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-10012
	ctx.r5.s64 = ctx.r11.s64 + -10012;
	// addi r3,r10,-13792
	ctx.r3.s64 = ctx.r10.s64 + -13792;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE4AC"))) PPC_WEAK_FUNC(sub_827AE4AC);
PPC_FUNC_IMPL(__imp__sub_827AE4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE4B0"))) PPC_WEAK_FUNC(sub_827AE4B0);
PPC_FUNC_IMPL(__imp__sub_827AE4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-10000
	ctx.r5.s64 = ctx.r11.s64 + -10000;
	// addi r3,r10,-13620
	ctx.r3.s64 = ctx.r10.s64 + -13620;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE4CC"))) PPC_WEAK_FUNC(sub_827AE4CC);
PPC_FUNC_IMPL(__imp__sub_827AE4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE4D0"))) PPC_WEAK_FUNC(sub_827AE4D0);
PPC_FUNC_IMPL(__imp__sub_827AE4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9980
	ctx.r5.s64 = ctx.r11.s64 + -9980;
	// addi r3,r10,-13072
	ctx.r3.s64 = ctx.r10.s64 + -13072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE4EC"))) PPC_WEAK_FUNC(sub_827AE4EC);
PPC_FUNC_IMPL(__imp__sub_827AE4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE4F0"))) PPC_WEAK_FUNC(sub_827AE4F0);
PPC_FUNC_IMPL(__imp__sub_827AE4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9960
	ctx.r5.s64 = ctx.r11.s64 + -9960;
	// addi r3,r10,-13952
	ctx.r3.s64 = ctx.r10.s64 + -13952;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE50C"))) PPC_WEAK_FUNC(sub_827AE50C);
PPC_FUNC_IMPL(__imp__sub_827AE50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE510"))) PPC_WEAK_FUNC(sub_827AE510);
PPC_FUNC_IMPL(__imp__sub_827AE510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9940
	ctx.r5.s64 = ctx.r11.s64 + -9940;
	// addi r3,r10,-13640
	ctx.r3.s64 = ctx.r10.s64 + -13640;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE52C"))) PPC_WEAK_FUNC(sub_827AE52C);
PPC_FUNC_IMPL(__imp__sub_827AE52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE530"))) PPC_WEAK_FUNC(sub_827AE530);
PPC_FUNC_IMPL(__imp__sub_827AE530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9920
	ctx.r5.s64 = ctx.r11.s64 + -9920;
	// addi r3,r10,-13052
	ctx.r3.s64 = ctx.r10.s64 + -13052;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE54C"))) PPC_WEAK_FUNC(sub_827AE54C);
PPC_FUNC_IMPL(__imp__sub_827AE54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE550"))) PPC_WEAK_FUNC(sub_827AE550);
PPC_FUNC_IMPL(__imp__sub_827AE550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9892
	ctx.r5.s64 = ctx.r11.s64 + -9892;
	// addi r3,r10,-12752
	ctx.r3.s64 = ctx.r10.s64 + -12752;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE56C"))) PPC_WEAK_FUNC(sub_827AE56C);
PPC_FUNC_IMPL(__imp__sub_827AE56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE570"))) PPC_WEAK_FUNC(sub_827AE570);
PPC_FUNC_IMPL(__imp__sub_827AE570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9868
	ctx.r5.s64 = ctx.r11.s64 + -9868;
	// addi r3,r10,-12852
	ctx.r3.s64 = ctx.r10.s64 + -12852;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE58C"))) PPC_WEAK_FUNC(sub_827AE58C);
PPC_FUNC_IMPL(__imp__sub_827AE58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE590"))) PPC_WEAK_FUNC(sub_827AE590);
PPC_FUNC_IMPL(__imp__sub_827AE590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9844
	ctx.r5.s64 = ctx.r11.s64 + -9844;
	// addi r3,r10,-6280
	ctx.r3.s64 = ctx.r10.s64 + -6280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE5AC"))) PPC_WEAK_FUNC(sub_827AE5AC);
PPC_FUNC_IMPL(__imp__sub_827AE5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE5B0"))) PPC_WEAK_FUNC(sub_827AE5B0);
PPC_FUNC_IMPL(__imp__sub_827AE5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9824
	ctx.r5.s64 = ctx.r11.s64 + -9824;
	// addi r3,r10,-13352
	ctx.r3.s64 = ctx.r10.s64 + -13352;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE5CC"))) PPC_WEAK_FUNC(sub_827AE5CC);
PPC_FUNC_IMPL(__imp__sub_827AE5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE5D0"))) PPC_WEAK_FUNC(sub_827AE5D0);
PPC_FUNC_IMPL(__imp__sub_827AE5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9800
	ctx.r5.s64 = ctx.r11.s64 + -9800;
	// addi r3,r10,-13252
	ctx.r3.s64 = ctx.r10.s64 + -13252;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE5EC"))) PPC_WEAK_FUNC(sub_827AE5EC);
PPC_FUNC_IMPL(__imp__sub_827AE5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE5F0"))) PPC_WEAK_FUNC(sub_827AE5F0);
PPC_FUNC_IMPL(__imp__sub_827AE5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9776
	ctx.r5.s64 = ctx.r11.s64 + -9776;
	// addi r3,r10,-6440
	ctx.r3.s64 = ctx.r10.s64 + -6440;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE60C"))) PPC_WEAK_FUNC(sub_827AE60C);
PPC_FUNC_IMPL(__imp__sub_827AE60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE610"))) PPC_WEAK_FUNC(sub_827AE610);
PPC_FUNC_IMPL(__imp__sub_827AE610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9752
	ctx.r5.s64 = ctx.r11.s64 + -9752;
	// addi r3,r10,-13540
	ctx.r3.s64 = ctx.r10.s64 + -13540;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE62C"))) PPC_WEAK_FUNC(sub_827AE62C);
PPC_FUNC_IMPL(__imp__sub_827AE62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE630"))) PPC_WEAK_FUNC(sub_827AE630);
PPC_FUNC_IMPL(__imp__sub_827AE630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9728
	ctx.r5.s64 = ctx.r11.s64 + -9728;
	// addi r3,r10,-6100
	ctx.r3.s64 = ctx.r10.s64 + -6100;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE64C"))) PPC_WEAK_FUNC(sub_827AE64C);
PPC_FUNC_IMPL(__imp__sub_827AE64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE650"))) PPC_WEAK_FUNC(sub_827AE650);
PPC_FUNC_IMPL(__imp__sub_827AE650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// addi r3,r10,-6480
	ctx.r3.s64 = ctx.r10.s64 + -6480;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE66C"))) PPC_WEAK_FUNC(sub_827AE66C);
PPC_FUNC_IMPL(__imp__sub_827AE66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE670"))) PPC_WEAK_FUNC(sub_827AE670);
PPC_FUNC_IMPL(__imp__sub_827AE670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9680
	ctx.r5.s64 = ctx.r11.s64 + -9680;
	// addi r3,r10,-13292
	ctx.r3.s64 = ctx.r10.s64 + -13292;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE68C"))) PPC_WEAK_FUNC(sub_827AE68C);
PPC_FUNC_IMPL(__imp__sub_827AE68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE690"))) PPC_WEAK_FUNC(sub_827AE690);
PPC_FUNC_IMPL(__imp__sub_827AE690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9656
	ctx.r5.s64 = ctx.r11.s64 + -9656;
	// addi r3,r10,-13432
	ctx.r3.s64 = ctx.r10.s64 + -13432;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE6AC"))) PPC_WEAK_FUNC(sub_827AE6AC);
PPC_FUNC_IMPL(__imp__sub_827AE6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE6B0"))) PPC_WEAK_FUNC(sub_827AE6B0);
PPC_FUNC_IMPL(__imp__sub_827AE6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9632
	ctx.r5.s64 = ctx.r11.s64 + -9632;
	// addi r3,r10,-5900
	ctx.r3.s64 = ctx.r10.s64 + -5900;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE6CC"))) PPC_WEAK_FUNC(sub_827AE6CC);
PPC_FUNC_IMPL(__imp__sub_827AE6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE6D0"))) PPC_WEAK_FUNC(sub_827AE6D0);
PPC_FUNC_IMPL(__imp__sub_827AE6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9612
	ctx.r5.s64 = ctx.r11.s64 + -9612;
	// addi r3,r10,-12992
	ctx.r3.s64 = ctx.r10.s64 + -12992;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE6EC"))) PPC_WEAK_FUNC(sub_827AE6EC);
PPC_FUNC_IMPL(__imp__sub_827AE6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE6F0"))) PPC_WEAK_FUNC(sub_827AE6F0);
PPC_FUNC_IMPL(__imp__sub_827AE6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9600
	ctx.r5.s64 = ctx.r11.s64 + -9600;
	// addi r3,r10,-6220
	ctx.r3.s64 = ctx.r10.s64 + -6220;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE70C"))) PPC_WEAK_FUNC(sub_827AE70C);
PPC_FUNC_IMPL(__imp__sub_827AE70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE710"))) PPC_WEAK_FUNC(sub_827AE710);
PPC_FUNC_IMPL(__imp__sub_827AE710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9580
	ctx.r5.s64 = ctx.r11.s64 + -9580;
	// addi r3,r10,-13812
	ctx.r3.s64 = ctx.r10.s64 + -13812;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE72C"))) PPC_WEAK_FUNC(sub_827AE72C);
PPC_FUNC_IMPL(__imp__sub_827AE72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE730"))) PPC_WEAK_FUNC(sub_827AE730);
PPC_FUNC_IMPL(__imp__sub_827AE730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9564
	ctx.r5.s64 = ctx.r11.s64 + -9564;
	// addi r3,r10,-6140
	ctx.r3.s64 = ctx.r10.s64 + -6140;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE74C"))) PPC_WEAK_FUNC(sub_827AE74C);
PPC_FUNC_IMPL(__imp__sub_827AE74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE750"))) PPC_WEAK_FUNC(sub_827AE750);
PPC_FUNC_IMPL(__imp__sub_827AE750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9548
	ctx.r5.s64 = ctx.r11.s64 + -9548;
	// addi r3,r10,-5960
	ctx.r3.s64 = ctx.r10.s64 + -5960;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE76C"))) PPC_WEAK_FUNC(sub_827AE76C);
PPC_FUNC_IMPL(__imp__sub_827AE76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE770"))) PPC_WEAK_FUNC(sub_827AE770);
PPC_FUNC_IMPL(__imp__sub_827AE770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9532
	ctx.r5.s64 = ctx.r11.s64 + -9532;
	// addi r3,r10,-6040
	ctx.r3.s64 = ctx.r10.s64 + -6040;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE78C"))) PPC_WEAK_FUNC(sub_827AE78C);
PPC_FUNC_IMPL(__imp__sub_827AE78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE790"))) PPC_WEAK_FUNC(sub_827AE790);
PPC_FUNC_IMPL(__imp__sub_827AE790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9516
	ctx.r5.s64 = ctx.r11.s64 + -9516;
	// addi r3,r10,-13272
	ctx.r3.s64 = ctx.r10.s64 + -13272;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE7AC"))) PPC_WEAK_FUNC(sub_827AE7AC);
PPC_FUNC_IMPL(__imp__sub_827AE7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE7B0"))) PPC_WEAK_FUNC(sub_827AE7B0);
PPC_FUNC_IMPL(__imp__sub_827AE7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r10,-6240
	ctx.r3.s64 = ctx.r10.s64 + -6240;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE7CC"))) PPC_WEAK_FUNC(sub_827AE7CC);
PPC_FUNC_IMPL(__imp__sub_827AE7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE7D0"))) PPC_WEAK_FUNC(sub_827AE7D0);
PPC_FUNC_IMPL(__imp__sub_827AE7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9476
	ctx.r5.s64 = ctx.r11.s64 + -9476;
	// addi r3,r10,-13392
	ctx.r3.s64 = ctx.r10.s64 + -13392;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE7EC"))) PPC_WEAK_FUNC(sub_827AE7EC);
PPC_FUNC_IMPL(__imp__sub_827AE7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE7F0"))) PPC_WEAK_FUNC(sub_827AE7F0);
PPC_FUNC_IMPL(__imp__sub_827AE7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9460
	ctx.r5.s64 = ctx.r11.s64 + -9460;
	// addi r3,r10,-6120
	ctx.r3.s64 = ctx.r10.s64 + -6120;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE80C"))) PPC_WEAK_FUNC(sub_827AE80C);
PPC_FUNC_IMPL(__imp__sub_827AE80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE810"))) PPC_WEAK_FUNC(sub_827AE810);
PPC_FUNC_IMPL(__imp__sub_827AE810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9444
	ctx.r5.s64 = ctx.r11.s64 + -9444;
	// addi r3,r10,-13932
	ctx.r3.s64 = ctx.r10.s64 + -13932;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE82C"))) PPC_WEAK_FUNC(sub_827AE82C);
PPC_FUNC_IMPL(__imp__sub_827AE82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE830"))) PPC_WEAK_FUNC(sub_827AE830);
PPC_FUNC_IMPL(__imp__sub_827AE830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// addi r3,r10,-13412
	ctx.r3.s64 = ctx.r10.s64 + -13412;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE84C"))) PPC_WEAK_FUNC(sub_827AE84C);
PPC_FUNC_IMPL(__imp__sub_827AE84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE850"))) PPC_WEAK_FUNC(sub_827AE850);
PPC_FUNC_IMPL(__imp__sub_827AE850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9412
	ctx.r5.s64 = ctx.r11.s64 + -9412;
	// addi r3,r10,-6000
	ctx.r3.s64 = ctx.r10.s64 + -6000;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE86C"))) PPC_WEAK_FUNC(sub_827AE86C);
PPC_FUNC_IMPL(__imp__sub_827AE86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE870"))) PPC_WEAK_FUNC(sub_827AE870);
PPC_FUNC_IMPL(__imp__sub_827AE870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r10,-13112
	ctx.r3.s64 = ctx.r10.s64 + -13112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE88C"))) PPC_WEAK_FUNC(sub_827AE88C);
PPC_FUNC_IMPL(__imp__sub_827AE88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE890"))) PPC_WEAK_FUNC(sub_827AE890);
PPC_FUNC_IMPL(__imp__sub_827AE890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9380
	ctx.r5.s64 = ctx.r11.s64 + -9380;
	// addi r3,r10,-6540
	ctx.r3.s64 = ctx.r10.s64 + -6540;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE8AC"))) PPC_WEAK_FUNC(sub_827AE8AC);
PPC_FUNC_IMPL(__imp__sub_827AE8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE8B0"))) PPC_WEAK_FUNC(sub_827AE8B0);
PPC_FUNC_IMPL(__imp__sub_827AE8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9372
	ctx.r5.s64 = ctx.r11.s64 + -9372;
	// addi r3,r10,-12812
	ctx.r3.s64 = ctx.r10.s64 + -12812;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE8CC"))) PPC_WEAK_FUNC(sub_827AE8CC);
PPC_FUNC_IMPL(__imp__sub_827AE8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE8D0"))) PPC_WEAK_FUNC(sub_827AE8D0);
PPC_FUNC_IMPL(__imp__sub_827AE8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9364
	ctx.r5.s64 = ctx.r11.s64 + -9364;
	// addi r3,r10,-13600
	ctx.r3.s64 = ctx.r10.s64 + -13600;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE8EC"))) PPC_WEAK_FUNC(sub_827AE8EC);
PPC_FUNC_IMPL(__imp__sub_827AE8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE8F0"))) PPC_WEAK_FUNC(sub_827AE8F0);
PPC_FUNC_IMPL(__imp__sub_827AE8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9352
	ctx.r5.s64 = ctx.r11.s64 + -9352;
	// addi r3,r10,-13512
	ctx.r3.s64 = ctx.r10.s64 + -13512;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE90C"))) PPC_WEAK_FUNC(sub_827AE90C);
PPC_FUNC_IMPL(__imp__sub_827AE90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE910"))) PPC_WEAK_FUNC(sub_827AE910);
PPC_FUNC_IMPL(__imp__sub_827AE910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9344
	ctx.r5.s64 = ctx.r11.s64 + -9344;
	// addi r3,r10,-5920
	ctx.r3.s64 = ctx.r10.s64 + -5920;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE92C"))) PPC_WEAK_FUNC(sub_827AE92C);
PPC_FUNC_IMPL(__imp__sub_827AE92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE930"))) PPC_WEAK_FUNC(sub_827AE930);
PPC_FUNC_IMPL(__imp__sub_827AE930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9336
	ctx.r5.s64 = ctx.r11.s64 + -9336;
	// addi r3,r10,-6640
	ctx.r3.s64 = ctx.r10.s64 + -6640;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE94C"))) PPC_WEAK_FUNC(sub_827AE94C);
PPC_FUNC_IMPL(__imp__sub_827AE94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE950"))) PPC_WEAK_FUNC(sub_827AE950);
PPC_FUNC_IMPL(__imp__sub_827AE950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9324
	ctx.r5.s64 = ctx.r11.s64 + -9324;
	// addi r3,r10,-13332
	ctx.r3.s64 = ctx.r10.s64 + -13332;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE96C"))) PPC_WEAK_FUNC(sub_827AE96C);
PPC_FUNC_IMPL(__imp__sub_827AE96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE970"))) PPC_WEAK_FUNC(sub_827AE970);
PPC_FUNC_IMPL(__imp__sub_827AE970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9312
	ctx.r5.s64 = ctx.r11.s64 + -9312;
	// addi r3,r10,-13660
	ctx.r3.s64 = ctx.r10.s64 + -13660;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE98C"))) PPC_WEAK_FUNC(sub_827AE98C);
PPC_FUNC_IMPL(__imp__sub_827AE98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE990"))) PPC_WEAK_FUNC(sub_827AE990);
PPC_FUNC_IMPL(__imp__sub_827AE990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9300
	ctx.r5.s64 = ctx.r11.s64 + -9300;
	// addi r3,r10,-13032
	ctx.r3.s64 = ctx.r10.s64 + -13032;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE9AC"))) PPC_WEAK_FUNC(sub_827AE9AC);
PPC_FUNC_IMPL(__imp__sub_827AE9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE9B0"))) PPC_WEAK_FUNC(sub_827AE9B0);
PPC_FUNC_IMPL(__imp__sub_827AE9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9292
	ctx.r5.s64 = ctx.r11.s64 + -9292;
	// addi r3,r10,-13172
	ctx.r3.s64 = ctx.r10.s64 + -13172;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE9CC"))) PPC_WEAK_FUNC(sub_827AE9CC);
PPC_FUNC_IMPL(__imp__sub_827AE9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE9D0"))) PPC_WEAK_FUNC(sub_827AE9D0);
PPC_FUNC_IMPL(__imp__sub_827AE9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addi r5,r11,-9280
	ctx.r5.s64 = ctx.r11.s64 + -9280;
	// addi r3,r10,-6600
	ctx.r3.s64 = ctx.r10.s64 + -6600;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AE9EC"))) PPC_WEAK_FUNC(sub_827AE9EC);
PPC_FUNC_IMPL(__imp__sub_827AE9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AE9F0"))) PPC_WEAK_FUNC(sub_827AE9F0);
PPC_FUNC_IMPL(__imp__sub_827AE9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-9264
	ctx.r5.s64 = ctx.r11.s64 + -9264;
	// addi r3,r10,-12952
	ctx.r3.s64 = ctx.r10.s64 + -12952;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AEA0C"))) PPC_WEAK_FUNC(sub_827AEA0C);
PPC_FUNC_IMPL(__imp__sub_827AEA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

