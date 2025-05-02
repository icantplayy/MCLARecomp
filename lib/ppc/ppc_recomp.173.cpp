#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827AFAA0"))) PPC_WEAK_FUNC(sub_827AFAA0);
PPC_FUNC_IMPL(__imp__sub_827AFAA0) {
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
	// addi r11,r11,-15640
	ctx.r11.s64 = ctx.r11.s64 + -15640;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x827bcff4
	ctx.lr = 0x827AFABC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-22984
	ctx.r3.s64 = ctx.r10.s64 + -22984;
	// bl 0x823d9a98
	ctx.lr = 0x827AFAC8;
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

__attribute__((alias("__imp__sub_827AFAD8"))) PPC_WEAK_FUNC(sub_827AFAD8);
PPC_FUNC_IMPL(__imp__sub_827AFAD8) {
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
	// addi r11,r11,-15548
	ctx.r11.s64 = ctx.r11.s64 + -15548;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x827bcff4
	ctx.lr = 0x827AFAF4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-22960
	ctx.r3.s64 = ctx.r11.s64 + -22960;
	// bl 0x823d9a98
	ctx.lr = 0x827AFB00;
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

__attribute__((alias("__imp__sub_827AFB10"))) PPC_WEAK_FUNC(sub_827AFB10);
PPC_FUNC_IMPL(__imp__sub_827AFB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,12280
	ctx.r3.s64 = ctx.r11.s64 + 12280;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823d9890
	sub_823D9890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AFB24"))) PPC_WEAK_FUNC(sub_827AFB24);
PPC_FUNC_IMPL(__imp__sub_827AFB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFB28"))) PPC_WEAK_FUNC(sub_827AFB28);
PPC_FUNC_IMPL(__imp__sub_827AFB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f4
	ctx.lr = 0x827AFB30;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// li r27,3
	ctx.r27.s64 = 3;
	// addi r11,r11,14576
	ctx.r11.s64 = ctx.r11.s64 + 14576;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-32115
	ctx.r29.s64 = -2104688640;
	// lfs f31,7444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7444);
	ctx.f31.f64 = double(temp.f32);
loc_827AFB5C:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r6,r11,20752
	ctx.r6.s64 = ctx.r11.s64 + 20752;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x821305f0
	ctx.lr = 0x827AFB74;
	sub_821305F0(ctx, base);
	// lwz r9,14568(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14568);
	// stfs f31,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r11,r31,45
	ctx.r11.s64 = ctx.r31.s64 + 45;
	// stb r28,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r28.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,14568(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14568, ctx.r9.u32);
loc_827AFB94:
	// stb r30,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r30.u8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bne 0x827afb94
	if (!ctx.cr0.eq) goto loc_827AFB94;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r31,r31,120
	ctx.r31.s64 = ctx.r31.s64 + 120;
	// bge 0x827afb5c
	if (!ctx.cr0.lt) goto loc_827AFB5C;
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-22936
	ctx.r3.s64 = ctx.r11.s64 + -22936;
	// bl 0x823d9a98
	ctx.lr = 0x827AFBD8;
	sub_823D9A98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823d9244
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AFBE4"))) PPC_WEAK_FUNC(sub_827AFBE4);
PPC_FUNC_IMPL(__imp__sub_827AFBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFBE8"))) PPC_WEAK_FUNC(sub_827AFBE8);
PPC_FUNC_IMPL(__imp__sub_827AFBE8) {
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
	// addi r31,r11,16112
	ctx.r31.s64 = ctx.r11.s64 + 16112;
	// addi r3,r31,2176
	ctx.r3.s64 = ctx.r31.s64 + 2176;
	// bl 0x821c8ed8
	ctx.lr = 0x827AFC08;
	sub_821C8ED8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821c9060
	ctx.lr = 0x827AFC10;
	sub_821C9060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// stw r11,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r11.u32);
	// bl 0x821c9060
	ctx.lr = 0x827AFC20;
	sub_821C9060(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r3.u32);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// stw r11,2216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2216, ctx.r11.u32);
	// stw r11,2212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2212, ctx.r11.u32);
	// addi r3,r10,-22928
	ctx.r3.s64 = ctx.r10.s64 + -22928;
	// stw r11,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827AFC40;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827AFC54"))) PPC_WEAK_FUNC(sub_827AFC54);
PPC_FUNC_IMPL(__imp__sub_827AFC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFC58"))) PPC_WEAK_FUNC(sub_827AFC58);
PPC_FUNC_IMPL(__imp__sub_827AFC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// addi r5,r11,15432
	ctx.r5.s64 = ctx.r11.s64 + 15432;
	// addi r4,r10,-21540
	ctx.r4.s64 = ctx.r10.s64 + -21540;
	// addi r3,r9,18340
	ctx.r3.s64 = ctx.r9.s64 + 18340;
	// li r6,3187
	ctx.r6.s64 = 3187;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AFC78"))) PPC_WEAK_FUNC(sub_827AFC78);
PPC_FUNC_IMPL(__imp__sub_827AFC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-22856
	ctx.r3.s64 = ctx.r11.s64 + -22856;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827AFC84"))) PPC_WEAK_FUNC(sub_827AFC84);
PPC_FUNC_IMPL(__imp__sub_827AFC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFC88"))) PPC_WEAK_FUNC(sub_827AFC88);
PPC_FUNC_IMPL(__imp__sub_827AFC88) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19332
	ctx.r3.s64 = ctx.r4.s64 + 19332;
	// addi r5,r5,-18524
	ctx.r5.s64 = ctx.r5.s64 + -18524;
	// li r9,60
	ctx.r9.s64 = 60;
	// addi r8,r11,-15840
	ctx.r8.s64 = ctx.r11.s64 + -15840;
	// addi r7,r10,-15928
	ctx.r7.s64 = ctx.r10.s64 + -15928;
	// addi r6,r6,-16056
	ctx.r6.s64 = ctx.r6.s64 + -16056;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8246a038
	ctx.lr = 0x827AFCC8;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22824
	ctx.r3.s64 = ctx.r3.s64 + -22824;
	// bl 0x823d9a98
	ctx.lr = 0x827AFCD4;
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

__attribute__((alias("__imp__sub_827AFCE4"))) PPC_WEAK_FUNC(sub_827AFCE4);
PPC_FUNC_IMPL(__imp__sub_827AFCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFCE8"))) PPC_WEAK_FUNC(sub_827AFCE8);
PPC_FUNC_IMPL(__imp__sub_827AFCE8) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19356
	ctx.r3.s64 = ctx.r4.s64 + 19356;
	// addi r5,r5,-16564
	ctx.r5.s64 = ctx.r5.s64 + -16564;
	// li r9,28
	ctx.r9.s64 = 28;
	// addi r8,r11,9816
	ctx.r8.s64 = ctx.r11.s64 + 9816;
	// addi r7,r10,9744
	ctx.r7.s64 = ctx.r10.s64 + 9744;
	// addi r6,r6,9600
	ctx.r6.s64 = ctx.r6.s64 + 9600;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x8246a038
	ctx.lr = 0x827AFD28;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22808
	ctx.r3.s64 = ctx.r3.s64 + -22808;
	// bl 0x823d9a98
	ctx.lr = 0x827AFD34;
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

__attribute__((alias("__imp__sub_827AFD44"))) PPC_WEAK_FUNC(sub_827AFD44);
PPC_FUNC_IMPL(__imp__sub_827AFD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFD48"))) PPC_WEAK_FUNC(sub_827AFD48);
PPC_FUNC_IMPL(__imp__sub_827AFD48) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19380
	ctx.r3.s64 = ctx.r4.s64 + 19380;
	// addi r5,r5,-16212
	ctx.r5.s64 = ctx.r5.s64 + -16212;
	// li r9,296
	ctx.r9.s64 = 296;
	// addi r8,r11,10296
	ctx.r8.s64 = ctx.r11.s64 + 10296;
	// addi r7,r10,10224
	ctx.r7.s64 = ctx.r10.s64 + 10224;
	// addi r6,r6,10088
	ctx.r6.s64 = ctx.r6.s64 + 10088;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x8246a038
	ctx.lr = 0x827AFD88;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22792
	ctx.r3.s64 = ctx.r3.s64 + -22792;
	// bl 0x823d9a98
	ctx.lr = 0x827AFD94;
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

__attribute__((alias("__imp__sub_827AFDA4"))) PPC_WEAK_FUNC(sub_827AFDA4);
PPC_FUNC_IMPL(__imp__sub_827AFDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFDA8"))) PPC_WEAK_FUNC(sub_827AFDA8);
PPC_FUNC_IMPL(__imp__sub_827AFDA8) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19404
	ctx.r3.s64 = ctx.r4.s64 + 19404;
	// addi r5,r5,-15860
	ctx.r5.s64 = ctx.r5.s64 + -15860;
	// li r9,44
	ctx.r9.s64 = 44;
	// addi r8,r11,11152
	ctx.r8.s64 = ctx.r11.s64 + 11152;
	// addi r7,r10,11136
	ctx.r7.s64 = ctx.r10.s64 + 11136;
	// addi r6,r6,11016
	ctx.r6.s64 = ctx.r6.s64 + 11016;
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x8246a038
	ctx.lr = 0x827AFDE8;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22776
	ctx.r3.s64 = ctx.r3.s64 + -22776;
	// bl 0x823d9a98
	ctx.lr = 0x827AFDF4;
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

__attribute__((alias("__imp__sub_827AFE04"))) PPC_WEAK_FUNC(sub_827AFE04);
PPC_FUNC_IMPL(__imp__sub_827AFE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFE08"))) PPC_WEAK_FUNC(sub_827AFE08);
PPC_FUNC_IMPL(__imp__sub_827AFE08) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19428
	ctx.r3.s64 = ctx.r4.s64 + 19428;
	// addi r5,r5,-15508
	ctx.r5.s64 = ctx.r5.s64 + -15508;
	// li r9,40
	ctx.r9.s64 = 40;
	// addi r8,r11,11768
	ctx.r8.s64 = ctx.r11.s64 + 11768;
	// addi r7,r10,11688
	ctx.r7.s64 = ctx.r10.s64 + 11688;
	// addi r6,r6,11536
	ctx.r6.s64 = ctx.r6.s64 + 11536;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8246a038
	ctx.lr = 0x827AFE48;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22760
	ctx.r3.s64 = ctx.r3.s64 + -22760;
	// bl 0x823d9a98
	ctx.lr = 0x827AFE54;
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

__attribute__((alias("__imp__sub_827AFE64"))) PPC_WEAK_FUNC(sub_827AFE64);
PPC_FUNC_IMPL(__imp__sub_827AFE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFE68"))) PPC_WEAK_FUNC(sub_827AFE68);
PPC_FUNC_IMPL(__imp__sub_827AFE68) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19452
	ctx.r3.s64 = ctx.r4.s64 + 19452;
	// addi r5,r5,-15156
	ctx.r5.s64 = ctx.r5.s64 + -15156;
	// li r9,52
	ctx.r9.s64 = 52;
	// addi r8,r11,12608
	ctx.r8.s64 = ctx.r11.s64 + 12608;
	// addi r7,r10,12592
	ctx.r7.s64 = ctx.r10.s64 + 12592;
	// addi r6,r6,12472
	ctx.r6.s64 = ctx.r6.s64 + 12472;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x8246a038
	ctx.lr = 0x827AFEA8;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22744
	ctx.r3.s64 = ctx.r3.s64 + -22744;
	// bl 0x823d9a98
	ctx.lr = 0x827AFEB4;
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

__attribute__((alias("__imp__sub_827AFEC4"))) PPC_WEAK_FUNC(sub_827AFEC4);
PPC_FUNC_IMPL(__imp__sub_827AFEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFEC8"))) PPC_WEAK_FUNC(sub_827AFEC8);
PPC_FUNC_IMPL(__imp__sub_827AFEC8) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19476
	ctx.r3.s64 = ctx.r4.s64 + 19476;
	// addi r5,r5,-14720
	ctx.r5.s64 = ctx.r5.s64 + -14720;
	// li r9,296
	ctx.r9.s64 = 296;
	// addi r8,r11,15072
	ctx.r8.s64 = ctx.r11.s64 + 15072;
	// addi r7,r10,15000
	ctx.r7.s64 = ctx.r10.s64 + 15000;
	// addi r6,r6,14864
	ctx.r6.s64 = ctx.r6.s64 + 14864;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8246a038
	ctx.lr = 0x827AFF08;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22728
	ctx.r3.s64 = ctx.r3.s64 + -22728;
	// bl 0x823d9a98
	ctx.lr = 0x827AFF14;
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

__attribute__((alias("__imp__sub_827AFF24"))) PPC_WEAK_FUNC(sub_827AFF24);
PPC_FUNC_IMPL(__imp__sub_827AFF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFF28"))) PPC_WEAK_FUNC(sub_827AFF28);
PPC_FUNC_IMPL(__imp__sub_827AFF28) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19500
	ctx.r3.s64 = ctx.r4.s64 + 19500;
	// addi r5,r5,-14372
	ctx.r5.s64 = ctx.r5.s64 + -14372;
	// li r9,36
	ctx.r9.s64 = 36;
	// addi r8,r11,15592
	ctx.r8.s64 = ctx.r11.s64 + 15592;
	// addi r7,r10,15512
	ctx.r7.s64 = ctx.r10.s64 + 15512;
	// addi r6,r6,15360
	ctx.r6.s64 = ctx.r6.s64 + 15360;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8246a038
	ctx.lr = 0x827AFF68;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22712
	ctx.r3.s64 = ctx.r3.s64 + -22712;
	// bl 0x823d9a98
	ctx.lr = 0x827AFF74;
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

__attribute__((alias("__imp__sub_827AFF84"))) PPC_WEAK_FUNC(sub_827AFF84);
PPC_FUNC_IMPL(__imp__sub_827AFF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFF88"))) PPC_WEAK_FUNC(sub_827AFF88);
PPC_FUNC_IMPL(__imp__sub_827AFF88) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19524
	ctx.r3.s64 = ctx.r4.s64 + 19524;
	// addi r5,r5,-14020
	ctx.r5.s64 = ctx.r5.s64 + -14020;
	// li r9,36
	ctx.r9.s64 = 36;
	// addi r8,r11,16320
	ctx.r8.s64 = ctx.r11.s64 + 16320;
	// addi r7,r10,16240
	ctx.r7.s64 = ctx.r10.s64 + 16240;
	// addi r6,r6,16096
	ctx.r6.s64 = ctx.r6.s64 + 16096;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8246a038
	ctx.lr = 0x827AFFC8;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22696
	ctx.r3.s64 = ctx.r3.s64 + -22696;
	// bl 0x823d9a98
	ctx.lr = 0x827AFFD4;
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

__attribute__((alias("__imp__sub_827AFFE4"))) PPC_WEAK_FUNC(sub_827AFFE4);
PPC_FUNC_IMPL(__imp__sub_827AFFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827AFFE8"))) PPC_WEAK_FUNC(sub_827AFFE8);
PPC_FUNC_IMPL(__imp__sub_827AFFE8) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19548
	ctx.r3.s64 = ctx.r4.s64 + 19548;
	// addi r5,r5,-13668
	ctx.r5.s64 = ctx.r5.s64 + -13668;
	// li r9,36
	ctx.r9.s64 = 36;
	// addi r8,r11,16968
	ctx.r8.s64 = ctx.r11.s64 + 16968;
	// addi r7,r10,16888
	ctx.r7.s64 = ctx.r10.s64 + 16888;
	// addi r6,r6,16736
	ctx.r6.s64 = ctx.r6.s64 + 16736;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8246a038
	ctx.lr = 0x827B0028;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22680
	ctx.r3.s64 = ctx.r3.s64 + -22680;
	// bl 0x823d9a98
	ctx.lr = 0x827B0034;
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

__attribute__((alias("__imp__sub_827B0044"))) PPC_WEAK_FUNC(sub_827B0044);
PPC_FUNC_IMPL(__imp__sub_827B0044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0048"))) PPC_WEAK_FUNC(sub_827B0048);
PPC_FUNC_IMPL(__imp__sub_827B0048) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19572
	ctx.r3.s64 = ctx.r4.s64 + 19572;
	// addi r5,r5,-13312
	ctx.r5.s64 = ctx.r5.s64 + -13312;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r11,17624
	ctx.r8.s64 = ctx.r11.s64 + 17624;
	// addi r7,r10,17552
	ctx.r7.s64 = ctx.r10.s64 + 17552;
	// addi r6,r6,17408
	ctx.r6.s64 = ctx.r6.s64 + 17408;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8246a038
	ctx.lr = 0x827B0088;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22664
	ctx.r3.s64 = ctx.r3.s64 + -22664;
	// bl 0x823d9a98
	ctx.lr = 0x827B0094;
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

__attribute__((alias("__imp__sub_827B00A4"))) PPC_WEAK_FUNC(sub_827B00A4);
PPC_FUNC_IMPL(__imp__sub_827B00A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B00A8"))) PPC_WEAK_FUNC(sub_827B00A8);
PPC_FUNC_IMPL(__imp__sub_827B00A8) {
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
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r6,-32185
	ctx.r6.s64 = -2109276160;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r3,r4,19596
	ctx.r3.s64 = ctx.r4.s64 + 19596;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// li r9,52
	ctx.r9.s64 = 52;
	// addi r8,r11,19648
	ctx.r8.s64 = ctx.r11.s64 + 19648;
	// addi r7,r10,19632
	ctx.r7.s64 = ctx.r10.s64 + 19632;
	// addi r6,r6,19504
	ctx.r6.s64 = ctx.r6.s64 + 19504;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8246a038
	ctx.lr = 0x827B00E8;
	sub_8246A038(ctx, base);
	// lis r3,-32132
	ctx.r3.s64 = -2105802752;
	// addi r3,r3,-22648
	ctx.r3.s64 = ctx.r3.s64 + -22648;
	// bl 0x823d9a98
	ctx.lr = 0x827B00F4;
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

__attribute__((alias("__imp__sub_827B0104"))) PPC_WEAK_FUNC(sub_827B0104);
PPC_FUNC_IMPL(__imp__sub_827B0104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0108"))) PPC_WEAK_FUNC(sub_827B0108);
PPC_FUNC_IMPL(__imp__sub_827B0108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-12044
	ctx.r5.s64 = ctx.r11.s64 + -12044;
	// addi r3,r10,19664
	ctx.r3.s64 = ctx.r10.s64 + 19664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0124"))) PPC_WEAK_FUNC(sub_827B0124);
PPC_FUNC_IMPL(__imp__sub_827B0124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0128"))) PPC_WEAK_FUNC(sub_827B0128);
PPC_FUNC_IMPL(__imp__sub_827B0128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-12032
	ctx.r5.s64 = ctx.r11.s64 + -12032;
	// addi r3,r10,19624
	ctx.r3.s64 = ctx.r10.s64 + 19624;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0144"))) PPC_WEAK_FUNC(sub_827B0144);
PPC_FUNC_IMPL(__imp__sub_827B0144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0148"))) PPC_WEAK_FUNC(sub_827B0148);
PPC_FUNC_IMPL(__imp__sub_827B0148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,13544
	ctx.r5.s64 = ctx.r11.s64 + 13544;
	// addi r3,r10,19644
	ctx.r3.s64 = ctx.r10.s64 + 19644;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0164"))) PPC_WEAK_FUNC(sub_827B0164);
PPC_FUNC_IMPL(__imp__sub_827B0164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0168"))) PPC_WEAK_FUNC(sub_827B0168);
PPC_FUNC_IMPL(__imp__sub_827B0168) {
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
	ctx.lr = 0x827B0190;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,20300
	ctx.r11.s64 = ctx.r7.s64 + 20300;
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

__attribute__((alias("__imp__sub_827B01DC"))) PPC_WEAK_FUNC(sub_827B01DC);
PPC_FUNC_IMPL(__imp__sub_827B01DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B01E0"))) PPC_WEAK_FUNC(sub_827B01E0);
PPC_FUNC_IMPL(__imp__sub_827B01E0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,20348
	ctx.r7.s64 = ctx.r8.s64 + 20348;
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

__attribute__((alias("__imp__sub_827B0200"))) PPC_WEAK_FUNC(sub_827B0200);
PPC_FUNC_IMPL(__imp__sub_827B0200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B020C"))) PPC_WEAK_FUNC(sub_827B020C);
PPC_FUNC_IMPL(__imp__sub_827B020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0210"))) PPC_WEAK_FUNC(sub_827B0210);
PPC_FUNC_IMPL(__imp__sub_827B0210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-22600
	ctx.r3.s64 = ctx.r11.s64 + -22600;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B021C"))) PPC_WEAK_FUNC(sub_827B021C);
PPC_FUNC_IMPL(__imp__sub_827B021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0220"))) PPC_WEAK_FUNC(sub_827B0220);
PPC_FUNC_IMPL(__imp__sub_827B0220) {
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
	ctx.lr = 0x827B0248;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,21064
	ctx.r11.s64 = ctx.r7.s64 + 21064;
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

__attribute__((alias("__imp__sub_827B0294"))) PPC_WEAK_FUNC(sub_827B0294);
PPC_FUNC_IMPL(__imp__sub_827B0294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0298"))) PPC_WEAK_FUNC(sub_827B0298);
PPC_FUNC_IMPL(__imp__sub_827B0298) {
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
	ctx.lr = 0x827B02C0;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,21112
	ctx.r11.s64 = ctx.r7.s64 + 21112;
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

__attribute__((alias("__imp__sub_827B030C"))) PPC_WEAK_FUNC(sub_827B030C);
PPC_FUNC_IMPL(__imp__sub_827B030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0310"))) PPC_WEAK_FUNC(sub_827B0310);
PPC_FUNC_IMPL(__imp__sub_827B0310) {
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
	ctx.lr = 0x827B0338;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,21160
	ctx.r11.s64 = ctx.r7.s64 + 21160;
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

__attribute__((alias("__imp__sub_827B0384"))) PPC_WEAK_FUNC(sub_827B0384);
PPC_FUNC_IMPL(__imp__sub_827B0384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0388"))) PPC_WEAK_FUNC(sub_827B0388);
PPC_FUNC_IMPL(__imp__sub_827B0388) {
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
	// addi r5,r11,-30904
	ctx.r5.s64 = ctx.r11.s64 + -30904;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827B03B0;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,21208
	ctx.r11.s64 = ctx.r7.s64 + 21208;
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

__attribute__((alias("__imp__sub_827B03FC"))) PPC_WEAK_FUNC(sub_827B03FC);
PPC_FUNC_IMPL(__imp__sub_827B03FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0400"))) PPC_WEAK_FUNC(sub_827B0400);
PPC_FUNC_IMPL(__imp__sub_827B0400) {
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
	// addi r5,r11,-17376
	ctx.r5.s64 = ctx.r11.s64 + -17376;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827B0428;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,21256
	ctx.r11.s64 = ctx.r7.s64 + 21256;
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

__attribute__((alias("__imp__sub_827B0474"))) PPC_WEAK_FUNC(sub_827B0474);
PPC_FUNC_IMPL(__imp__sub_827B0474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0478"))) PPC_WEAK_FUNC(sub_827B0478);
PPC_FUNC_IMPL(__imp__sub_827B0478) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,21304
	ctx.r7.s64 = ctx.r8.s64 + 21304;
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

__attribute__((alias("__imp__sub_827B0498"))) PPC_WEAK_FUNC(sub_827B0498);
PPC_FUNC_IMPL(__imp__sub_827B0498) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,21312
	ctx.r7.s64 = ctx.r8.s64 + 21312;
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

__attribute__((alias("__imp__sub_827B04B8"))) PPC_WEAK_FUNC(sub_827B04B8);
PPC_FUNC_IMPL(__imp__sub_827B04B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,21320
	ctx.r7.s64 = ctx.r8.s64 + 21320;
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

__attribute__((alias("__imp__sub_827B04D8"))) PPC_WEAK_FUNC(sub_827B04D8);
PPC_FUNC_IMPL(__imp__sub_827B04D8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// addi r7,r8,21328
	ctx.r7.s64 = ctx.r8.s64 + 21328;
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

__attribute__((alias("__imp__sub_827B04F8"))) PPC_WEAK_FUNC(sub_827B04F8);
PPC_FUNC_IMPL(__imp__sub_827B04F8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-31648
	ctx.r7.s64 = ctx.r8.s64 + -31648;
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

__attribute__((alias("__imp__sub_827B0518"))) PPC_WEAK_FUNC(sub_827B0518);
PPC_FUNC_IMPL(__imp__sub_827B0518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// addi r5,r11,21376
	ctx.r5.s64 = ctx.r11.s64 + 21376;
	// addi r4,r10,-8912
	ctx.r4.s64 = ctx.r10.s64 + -8912;
	// addi r3,r9,19756
	ctx.r3.s64 = ctx.r9.s64 + 19756;
	// li r6,3612
	ctx.r6.s64 = 3612;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0538"))) PPC_WEAK_FUNC(sub_827B0538);
PPC_FUNC_IMPL(__imp__sub_827B0538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// addi r5,r11,24992
	ctx.r5.s64 = ctx.r11.s64 + 24992;
	// addi r4,r10,-8880
	ctx.r4.s64 = ctx.r10.s64 + -8880;
	// addi r3,r9,19808
	ctx.r3.s64 = ctx.r9.s64 + 19808;
	// li r6,8133
	ctx.r6.s64 = 8133;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0558"))) PPC_WEAK_FUNC(sub_827B0558);
PPC_FUNC_IMPL(__imp__sub_827B0558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// addi r5,r11,-32408
	ctx.r5.s64 = ctx.r11.s64 + -32408;
	// addi r4,r10,-8848
	ctx.r4.s64 = ctx.r10.s64 + -8848;
	// addi r3,r9,19772
	ctx.r3.s64 = ctx.r9.s64 + 19772;
	// li r6,138
	ctx.r6.s64 = 138;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0578"))) PPC_WEAK_FUNC(sub_827B0578);
PPC_FUNC_IMPL(__imp__sub_827B0578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// addi r5,r11,-32264
	ctx.r5.s64 = ctx.r11.s64 + -32264;
	// addi r4,r10,-8824
	ctx.r4.s64 = ctx.r10.s64 + -8824;
	// addi r3,r9,19740
	ctx.r3.s64 = ctx.r9.s64 + 19740;
	// li r6,138
	ctx.r6.s64 = 138;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0598"))) PPC_WEAK_FUNC(sub_827B0598);
PPC_FUNC_IMPL(__imp__sub_827B0598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-8796
	ctx.r5.s64 = ctx.r11.s64 + -8796;
	// addi r3,r10,19824
	ctx.r3.s64 = ctx.r10.s64 + 19824;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B05B4"))) PPC_WEAK_FUNC(sub_827B05B4);
PPC_FUNC_IMPL(__imp__sub_827B05B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B05B8"))) PPC_WEAK_FUNC(sub_827B05B8);
PPC_FUNC_IMPL(__imp__sub_827B05B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-8780
	ctx.r5.s64 = ctx.r11.s64 + -8780;
	// addi r3,r10,19788
	ctx.r3.s64 = ctx.r10.s64 + 19788;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B05D4"))) PPC_WEAK_FUNC(sub_827B05D4);
PPC_FUNC_IMPL(__imp__sub_827B05D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B05D8"))) PPC_WEAK_FUNC(sub_827B05D8);
PPC_FUNC_IMPL(__imp__sub_827B05D8) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,20296
	ctx.r30.s64 = ctx.r31.s64 + 20296;
	// addi r5,r11,-7900
	ctx.r5.s64 = ctx.r11.s64 + -7900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824fa650
	ctx.lr = 0x827B060C;
	sub_824FA650(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B061C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B0624;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r11,r11,-7904
	ctx.r11.s64 = ctx.r11.s64 + -7904;
	// addi r3,r10,-22552
	ctx.r3.s64 = ctx.r10.s64 + -22552;
	// stw r11,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B063C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0654"))) PPC_WEAK_FUNC(sub_827B0654);
PPC_FUNC_IMPL(__imp__sub_827B0654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0658"))) PPC_WEAK_FUNC(sub_827B0658);
PPC_FUNC_IMPL(__imp__sub_827B0658) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,20168
	ctx.r30.s64 = ctx.r31.s64 + 20168;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7884
	ctx.r6.s64 = ctx.r10.s64 + -7884;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B0694;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20168, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B06A4;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B06AC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7888
	ctx.r11.s64 = ctx.r11.s64 + -7888;
	// addi r3,r9,-22464
	ctx.r3.s64 = ctx.r9.s64 + -22464;
	// stw r11,20168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20168, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B06C4;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B06DC"))) PPC_WEAK_FUNC(sub_827B06DC);
PPC_FUNC_IMPL(__imp__sub_827B06DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B06E0"))) PPC_WEAK_FUNC(sub_827B06E0);
PPC_FUNC_IMPL(__imp__sub_827B06E0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,20104
	ctx.r30.s64 = ctx.r31.s64 + 20104;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7856
	ctx.r6.s64 = ctx.r10.s64 + -7856;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B071C;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20104, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B072C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B0734;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7860
	ctx.r11.s64 = ctx.r11.s64 + -7860;
	// addi r3,r9,-22376
	ctx.r3.s64 = ctx.r9.s64 + -22376;
	// stw r11,20104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20104, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B074C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0764"))) PPC_WEAK_FUNC(sub_827B0764);
PPC_FUNC_IMPL(__imp__sub_827B0764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0768"))) PPC_WEAK_FUNC(sub_827B0768);
PPC_FUNC_IMPL(__imp__sub_827B0768) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,19944
	ctx.r30.s64 = ctx.r31.s64 + 19944;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7824
	ctx.r6.s64 = ctx.r10.s64 + -7824;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B07A4;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,19944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19944, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B07B4;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B07BC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7828
	ctx.r11.s64 = ctx.r11.s64 + -7828;
	// addi r3,r9,-22288
	ctx.r3.s64 = ctx.r9.s64 + -22288;
	// stw r11,19944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19944, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B07D4;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B07EC"))) PPC_WEAK_FUNC(sub_827B07EC);
PPC_FUNC_IMPL(__imp__sub_827B07EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B07F0"))) PPC_WEAK_FUNC(sub_827B07F0);
PPC_FUNC_IMPL(__imp__sub_827B07F0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,20232
	ctx.r30.s64 = ctx.r31.s64 + 20232;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7792
	ctx.r6.s64 = ctx.r10.s64 + -7792;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B082C;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20232, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B083C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B0844;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7796
	ctx.r11.s64 = ctx.r11.s64 + -7796;
	// addi r3,r9,-22200
	ctx.r3.s64 = ctx.r9.s64 + -22200;
	// stw r11,20232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20232, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B085C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0874"))) PPC_WEAK_FUNC(sub_827B0874);
PPC_FUNC_IMPL(__imp__sub_827B0874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0878"))) PPC_WEAK_FUNC(sub_827B0878);
PPC_FUNC_IMPL(__imp__sub_827B0878) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,19912
	ctx.r30.s64 = ctx.r31.s64 + 19912;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7764
	ctx.r6.s64 = ctx.r10.s64 + -7764;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B08B4;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,19912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19912, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B08C4;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B08CC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7768
	ctx.r11.s64 = ctx.r11.s64 + -7768;
	// addi r3,r9,-22112
	ctx.r3.s64 = ctx.r9.s64 + -22112;
	// stw r11,19912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19912, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B08E4;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B08FC"))) PPC_WEAK_FUNC(sub_827B08FC);
PPC_FUNC_IMPL(__imp__sub_827B08FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0900"))) PPC_WEAK_FUNC(sub_827B0900);
PPC_FUNC_IMPL(__imp__sub_827B0900) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,20008
	ctx.r30.s64 = ctx.r31.s64 + 20008;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7736
	ctx.r6.s64 = ctx.r10.s64 + -7736;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B093C;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20008, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B094C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B0954;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7740
	ctx.r11.s64 = ctx.r11.s64 + -7740;
	// addi r3,r9,-22024
	ctx.r3.s64 = ctx.r9.s64 + -22024;
	// stw r11,20008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20008, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B096C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0984"))) PPC_WEAK_FUNC(sub_827B0984);
PPC_FUNC_IMPL(__imp__sub_827B0984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0988"))) PPC_WEAK_FUNC(sub_827B0988);
PPC_FUNC_IMPL(__imp__sub_827B0988) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,19880
	ctx.r30.s64 = ctx.r31.s64 + 19880;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7708
	ctx.r6.s64 = ctx.r10.s64 + -7708;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B09C4;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,19880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19880, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B09D4;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B09DC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7712
	ctx.r11.s64 = ctx.r11.s64 + -7712;
	// addi r3,r9,-21936
	ctx.r3.s64 = ctx.r9.s64 + -21936;
	// stw r11,19880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19880, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B09F4;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0A0C"))) PPC_WEAK_FUNC(sub_827B0A0C);
PPC_FUNC_IMPL(__imp__sub_827B0A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0A10"))) PPC_WEAK_FUNC(sub_827B0A10);
PPC_FUNC_IMPL(__imp__sub_827B0A10) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,20136
	ctx.r30.s64 = ctx.r31.s64 + 20136;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7680
	ctx.r6.s64 = ctx.r10.s64 + -7680;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B0A4C;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20136, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B0A5C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B0A64;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7684
	ctx.r11.s64 = ctx.r11.s64 + -7684;
	// addi r3,r9,-21848
	ctx.r3.s64 = ctx.r9.s64 + -21848;
	// stw r11,20136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20136, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B0A7C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0A94"))) PPC_WEAK_FUNC(sub_827B0A94);
PPC_FUNC_IMPL(__imp__sub_827B0A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0A98"))) PPC_WEAK_FUNC(sub_827B0A98);
PPC_FUNC_IMPL(__imp__sub_827B0A98) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,20072
	ctx.r30.s64 = ctx.r31.s64 + 20072;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7648
	ctx.r6.s64 = ctx.r10.s64 + -7648;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B0AD4;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20072, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B0AE4;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B0AEC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7652
	ctx.r11.s64 = ctx.r11.s64 + -7652;
	// addi r3,r9,-21760
	ctx.r3.s64 = ctx.r9.s64 + -21760;
	// stw r11,20072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20072, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B0B04;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0B1C"))) PPC_WEAK_FUNC(sub_827B0B1C);
PPC_FUNC_IMPL(__imp__sub_827B0B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0B20"))) PPC_WEAK_FUNC(sub_827B0B20);
PPC_FUNC_IMPL(__imp__sub_827B0B20) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,20040
	ctx.r30.s64 = ctx.r31.s64 + 20040;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7620
	ctx.r6.s64 = ctx.r10.s64 + -7620;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B0B5C;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20040, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B0B6C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B0B74;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7624
	ctx.r11.s64 = ctx.r11.s64 + -7624;
	// addi r3,r9,-21672
	ctx.r3.s64 = ctx.r9.s64 + -21672;
	// stw r11,20040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20040, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B0B8C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0BA4"))) PPC_WEAK_FUNC(sub_827B0BA4);
PPC_FUNC_IMPL(__imp__sub_827B0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0BA8"))) PPC_WEAK_FUNC(sub_827B0BA8);
PPC_FUNC_IMPL(__imp__sub_827B0BA8) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,20200
	ctx.r30.s64 = ctx.r31.s64 + 20200;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7584
	ctx.r6.s64 = ctx.r10.s64 + -7584;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B0BE4;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20200, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B0BF4;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B0BFC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7588
	ctx.r11.s64 = ctx.r11.s64 + -7588;
	// addi r3,r9,-21584
	ctx.r3.s64 = ctx.r9.s64 + -21584;
	// stw r11,20200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20200, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B0C14;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0C2C"))) PPC_WEAK_FUNC(sub_827B0C2C);
PPC_FUNC_IMPL(__imp__sub_827B0C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0C30"))) PPC_WEAK_FUNC(sub_827B0C30);
PPC_FUNC_IMPL(__imp__sub_827B0C30) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,19976
	ctx.r30.s64 = ctx.r31.s64 + 19976;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7548
	ctx.r6.s64 = ctx.r10.s64 + -7548;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B0C6C;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,19976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19976, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B0C7C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B0C84;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7552
	ctx.r11.s64 = ctx.r11.s64 + -7552;
	// addi r3,r9,-21496
	ctx.r3.s64 = ctx.r9.s64 + -21496;
	// stw r11,19976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19976, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B0C9C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0CB4"))) PPC_WEAK_FUNC(sub_827B0CB4);
PPC_FUNC_IMPL(__imp__sub_827B0CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0CB8"))) PPC_WEAK_FUNC(sub_827B0CB8);
PPC_FUNC_IMPL(__imp__sub_827B0CB8) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,20264
	ctx.r30.s64 = ctx.r31.s64 + 20264;
	// addi r7,r11,20296
	ctx.r7.s64 = ctx.r11.s64 + 20296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-7512
	ctx.r6.s64 = ctx.r10.s64 + -7512;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B0CF4;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20264, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827B0D04;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B0D0C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-7516
	ctx.r11.s64 = ctx.r11.s64 + -7516;
	// addi r3,r9,-21408
	ctx.r3.s64 = ctx.r9.s64 + -21408;
	// stw r11,20264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20264, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B0D24;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B0D3C"))) PPC_WEAK_FUNC(sub_827B0D3C);
PPC_FUNC_IMPL(__imp__sub_827B0D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0D40"))) PPC_WEAK_FUNC(sub_827B0D40);
PPC_FUNC_IMPL(__imp__sub_827B0D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-6708
	ctx.r5.s64 = ctx.r11.s64 + -6708;
	// addi r3,r10,20336
	ctx.r3.s64 = ctx.r10.s64 + 20336;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0D5C"))) PPC_WEAK_FUNC(sub_827B0D5C);
PPC_FUNC_IMPL(__imp__sub_827B0D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0D60"))) PPC_WEAK_FUNC(sub_827B0D60);
PPC_FUNC_IMPL(__imp__sub_827B0D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,-6692
	ctx.r5.s64 = ctx.r11.s64 + -6692;
	// addi r3,r10,20356
	ctx.r3.s64 = ctx.r10.s64 + 20356;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0D7C"))) PPC_WEAK_FUNC(sub_827B0D7C);
PPC_FUNC_IMPL(__imp__sub_827B0D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0D80"))) PPC_WEAK_FUNC(sub_827B0D80);
PPC_FUNC_IMPL(__imp__sub_827B0D80) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-26604
	ctx.r7.s64 = ctx.r8.s64 + -26604;
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

__attribute__((alias("__imp__sub_827B0DA0"))) PPC_WEAK_FUNC(sub_827B0DA0);
PPC_FUNC_IMPL(__imp__sub_827B0DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-26596
	ctx.r7.s64 = ctx.r8.s64 + -26596;
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

__attribute__((alias("__imp__sub_827B0DC0"))) PPC_WEAK_FUNC(sub_827B0DC0);
PPC_FUNC_IMPL(__imp__sub_827B0DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-26588
	ctx.r7.s64 = ctx.r8.s64 + -26588;
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

__attribute__((alias("__imp__sub_827B0DE0"))) PPC_WEAK_FUNC(sub_827B0DE0);
PPC_FUNC_IMPL(__imp__sub_827B0DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,20412
	ctx.r3.s64 = ctx.r11.s64 + 20412;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821ce460
	sub_821CE460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B0DF4"))) PPC_WEAK_FUNC(sub_827B0DF4);
PPC_FUNC_IMPL(__imp__sub_827B0DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0DF8"))) PPC_WEAK_FUNC(sub_827B0DF8);
PPC_FUNC_IMPL(__imp__sub_827B0DF8) {
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
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25000
	ctx.r5.s64 = ctx.r11.s64 + 25000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827B0E20;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,-26028
	ctx.r11.s64 = ctx.r7.s64 + -26028;
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

__attribute__((alias("__imp__sub_827B0E6C"))) PPC_WEAK_FUNC(sub_827B0E6C);
PPC_FUNC_IMPL(__imp__sub_827B0E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0E70"))) PPC_WEAK_FUNC(sub_827B0E70);
PPC_FUNC_IMPL(__imp__sub_827B0E70) {
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
	ctx.lr = 0x827B0E98;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,-25980
	ctx.r11.s64 = ctx.r7.s64 + -25980;
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

__attribute__((alias("__imp__sub_827B0EE4"))) PPC_WEAK_FUNC(sub_827B0EE4);
PPC_FUNC_IMPL(__imp__sub_827B0EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B0EE8"))) PPC_WEAK_FUNC(sub_827B0EE8);
PPC_FUNC_IMPL(__imp__sub_827B0EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-25836
	ctx.r7.s64 = ctx.r8.s64 + -25836;
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

__attribute__((alias("__imp__sub_827B0F08"))) PPC_WEAK_FUNC(sub_827B0F08);
PPC_FUNC_IMPL(__imp__sub_827B0F08) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-25828
	ctx.r7.s64 = ctx.r8.s64 + -25828;
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

__attribute__((alias("__imp__sub_827B0F28"))) PPC_WEAK_FUNC(sub_827B0F28);
PPC_FUNC_IMPL(__imp__sub_827B0F28) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-25820
	ctx.r7.s64 = ctx.r8.s64 + -25820;
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

__attribute__((alias("__imp__sub_827B0F48"))) PPC_WEAK_FUNC(sub_827B0F48);
PPC_FUNC_IMPL(__imp__sub_827B0F48) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-25812
	ctx.r7.s64 = ctx.r8.s64 + -25812;
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

__attribute__((alias("__imp__sub_827B0F68"))) PPC_WEAK_FUNC(sub_827B0F68);
PPC_FUNC_IMPL(__imp__sub_827B0F68) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-25804
	ctx.r7.s64 = ctx.r8.s64 + -25804;
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

__attribute__((alias("__imp__sub_827B0F88"))) PPC_WEAK_FUNC(sub_827B0F88);
PPC_FUNC_IMPL(__imp__sub_827B0F88) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-25796
	ctx.r7.s64 = ctx.r8.s64 + -25796;
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

__attribute__((alias("__imp__sub_827B0FA8"))) PPC_WEAK_FUNC(sub_827B0FA8);
PPC_FUNC_IMPL(__imp__sub_827B0FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,-25632
	ctx.r7.s64 = ctx.r8.s64 + -25632;
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

__attribute__((alias("__imp__sub_827B0FC8"))) PPC_WEAK_FUNC(sub_827B0FC8);
PPC_FUNC_IMPL(__imp__sub_827B0FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,12628
	ctx.r7.s64 = ctx.r8.s64 + 12628;
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

__attribute__((alias("__imp__sub_827B0FE8"))) PPC_WEAK_FUNC(sub_827B0FE8);
PPC_FUNC_IMPL(__imp__sub_827B0FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,12636
	ctx.r7.s64 = ctx.r8.s64 + 12636;
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

__attribute__((alias("__imp__sub_827B1008"))) PPC_WEAK_FUNC(sub_827B1008);
PPC_FUNC_IMPL(__imp__sub_827B1008) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,12644
	ctx.r7.s64 = ctx.r8.s64 + 12644;
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

__attribute__((alias("__imp__sub_827B1028"))) PPC_WEAK_FUNC(sub_827B1028);
PPC_FUNC_IMPL(__imp__sub_827B1028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// addi r5,r11,-25368
	ctx.r5.s64 = ctx.r11.s64 + -25368;
	// addi r4,r10,-712
	ctx.r4.s64 = ctx.r10.s64 + -712;
	// addi r3,r9,20564
	ctx.r3.s64 = ctx.r9.s64 + 20564;
	// li r6,32280
	ctx.r6.s64 = 32280;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B1048"))) PPC_WEAK_FUNC(sub_827B1048);
PPC_FUNC_IMPL(__imp__sub_827B1048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// addi r5,r11,6912
	ctx.r5.s64 = ctx.r11.s64 + 6912;
	// addi r4,r10,-676
	ctx.r4.s64 = ctx.r10.s64 + -676;
	// addi r3,r9,20548
	ctx.r3.s64 = ctx.r9.s64 + 20548;
	// li r6,5713
	ctx.r6.s64 = 5713;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B1068"))) PPC_WEAK_FUNC(sub_827B1068);
PPC_FUNC_IMPL(__imp__sub_827B1068) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,13416
	ctx.r7.s64 = ctx.r8.s64 + 13416;
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

__attribute__((alias("__imp__sub_827B1088"))) PPC_WEAK_FUNC(sub_827B1088);
PPC_FUNC_IMPL(__imp__sub_827B1088) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,18196
	ctx.r7.s64 = ctx.r8.s64 + 18196;
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

__attribute__((alias("__imp__sub_827B10A8"))) PPC_WEAK_FUNC(sub_827B10A8);
PPC_FUNC_IMPL(__imp__sub_827B10A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// addi r5,r11,13632
	ctx.r5.s64 = ctx.r11.s64 + 13632;
	// addi r4,r10,160
	ctx.r4.s64 = ctx.r10.s64 + 160;
	// addi r3,r9,20596
	ctx.r3.s64 = ctx.r9.s64 + 20596;
	// li r6,4564
	ctx.r6.s64 = 4564;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B10C8"))) PPC_WEAK_FUNC(sub_827B10C8);
PPC_FUNC_IMPL(__imp__sub_827B10C8) {
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
	ctx.lr = 0x827B10F0;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,18304
	ctx.r11.s64 = ctx.r7.s64 + 18304;
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

__attribute__((alias("__imp__sub_827B113C"))) PPC_WEAK_FUNC(sub_827B113C);
PPC_FUNC_IMPL(__imp__sub_827B113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1140"))) PPC_WEAK_FUNC(sub_827B1140);
PPC_FUNC_IMPL(__imp__sub_827B1140) {
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
	// addi r31,r11,20720
	ctx.r31.s64 = ctx.r11.s64 + 20720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b5a70
	ctx.lr = 0x827B1160;
	sub_826B5A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// sth r9,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r9.u16);
	// addi r3,r10,-21320
	ctx.r3.s64 = ctx.r10.s64 + -21320;
	// bl 0x823d9a98
	ctx.lr = 0x827B1184;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1198"))) PPC_WEAK_FUNC(sub_827B1198);
PPC_FUNC_IMPL(__imp__sub_827B1198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,3708
	ctx.r5.s64 = ctx.r11.s64 + 3708;
	// addi r3,r10,20744
	ctx.r3.s64 = ctx.r10.s64 + 20744;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B11B4"))) PPC_WEAK_FUNC(sub_827B11B4);
PPC_FUNC_IMPL(__imp__sub_827B11B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B11B8"))) PPC_WEAK_FUNC(sub_827B11B8);
PPC_FUNC_IMPL(__imp__sub_827B11B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,4220
	ctx.r5.s64 = ctx.r11.s64 + 4220;
	// addi r3,r10,20804
	ctx.r3.s64 = ctx.r10.s64 + 20804;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B11D4"))) PPC_WEAK_FUNC(sub_827B11D4);
PPC_FUNC_IMPL(__imp__sub_827B11D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B11D8"))) PPC_WEAK_FUNC(sub_827B11D8);
PPC_FUNC_IMPL(__imp__sub_827B11D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,4232
	ctx.r5.s64 = ctx.r11.s64 + 4232;
	// addi r3,r10,20784
	ctx.r3.s64 = ctx.r10.s64 + 20784;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B11F4"))) PPC_WEAK_FUNC(sub_827B11F4);
PPC_FUNC_IMPL(__imp__sub_827B11F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B11F8"))) PPC_WEAK_FUNC(sub_827B11F8);
PPC_FUNC_IMPL(__imp__sub_827B11F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,4244
	ctx.r5.s64 = ctx.r11.s64 + 4244;
	// addi r3,r10,20764
	ctx.r3.s64 = ctx.r10.s64 + 20764;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B1214"))) PPC_WEAK_FUNC(sub_827B1214);
PPC_FUNC_IMPL(__imp__sub_827B1214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1218"))) PPC_WEAK_FUNC(sub_827B1218);
PPC_FUNC_IMPL(__imp__sub_827B1218) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19012
	ctx.r7.s64 = ctx.r8.s64 + 19012;
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

__attribute__((alias("__imp__sub_827B1238"))) PPC_WEAK_FUNC(sub_827B1238);
PPC_FUNC_IMPL(__imp__sub_827B1238) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19020
	ctx.r7.s64 = ctx.r8.s64 + 19020;
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

__attribute__((alias("__imp__sub_827B1258"))) PPC_WEAK_FUNC(sub_827B1258);
PPC_FUNC_IMPL(__imp__sub_827B1258) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19028
	ctx.r7.s64 = ctx.r8.s64 + 19028;
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

__attribute__((alias("__imp__sub_827B1278"))) PPC_WEAK_FUNC(sub_827B1278);
PPC_FUNC_IMPL(__imp__sub_827B1278) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19036
	ctx.r7.s64 = ctx.r8.s64 + 19036;
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

__attribute__((alias("__imp__sub_827B1298"))) PPC_WEAK_FUNC(sub_827B1298);
PPC_FUNC_IMPL(__imp__sub_827B1298) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19044
	ctx.r7.s64 = ctx.r8.s64 + 19044;
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

__attribute__((alias("__imp__sub_827B12B8"))) PPC_WEAK_FUNC(sub_827B12B8);
PPC_FUNC_IMPL(__imp__sub_827B12B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19052
	ctx.r7.s64 = ctx.r8.s64 + 19052;
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

__attribute__((alias("__imp__sub_827B12D8"))) PPC_WEAK_FUNC(sub_827B12D8);
PPC_FUNC_IMPL(__imp__sub_827B12D8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19060
	ctx.r7.s64 = ctx.r8.s64 + 19060;
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

__attribute__((alias("__imp__sub_827B12F8"))) PPC_WEAK_FUNC(sub_827B12F8);
PPC_FUNC_IMPL(__imp__sub_827B12F8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19068
	ctx.r7.s64 = ctx.r8.s64 + 19068;
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

__attribute__((alias("__imp__sub_827B1318"))) PPC_WEAK_FUNC(sub_827B1318);
PPC_FUNC_IMPL(__imp__sub_827B1318) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19076
	ctx.r7.s64 = ctx.r8.s64 + 19076;
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

__attribute__((alias("__imp__sub_827B1338"))) PPC_WEAK_FUNC(sub_827B1338);
PPC_FUNC_IMPL(__imp__sub_827B1338) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19156
	ctx.r7.s64 = ctx.r8.s64 + 19156;
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

__attribute__((alias("__imp__sub_827B1358"))) PPC_WEAK_FUNC(sub_827B1358);
PPC_FUNC_IMPL(__imp__sub_827B1358) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,19464
	ctx.r7.s64 = ctx.r8.s64 + 19464;
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

__attribute__((alias("__imp__sub_827B1378"))) PPC_WEAK_FUNC(sub_827B1378);
PPC_FUNC_IMPL(__imp__sub_827B1378) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,20568
	ctx.r7.s64 = ctx.r8.s64 + 20568;
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

__attribute__((alias("__imp__sub_827B1398"))) PPC_WEAK_FUNC(sub_827B1398);
PPC_FUNC_IMPL(__imp__sub_827B1398) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,21320
	ctx.r7.s64 = ctx.r8.s64 + 21320;
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

__attribute__((alias("__imp__sub_827B13B8"))) PPC_WEAK_FUNC(sub_827B13B8);
PPC_FUNC_IMPL(__imp__sub_827B13B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,21328
	ctx.r7.s64 = ctx.r8.s64 + 21328;
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

__attribute__((alias("__imp__sub_827B13D8"))) PPC_WEAK_FUNC(sub_827B13D8);
PPC_FUNC_IMPL(__imp__sub_827B13D8) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28360
	ctx.r5.s64 = ctx.r11.s64 + -28360;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827B1400;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,21704
	ctx.r11.s64 = ctx.r7.s64 + 21704;
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

__attribute__((alias("__imp__sub_827B144C"))) PPC_WEAK_FUNC(sub_827B144C);
PPC_FUNC_IMPL(__imp__sub_827B144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1450"))) PPC_WEAK_FUNC(sub_827B1450);
PPC_FUNC_IMPL(__imp__sub_827B1450) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,21752
	ctx.r7.s64 = ctx.r8.s64 + 21752;
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

__attribute__((alias("__imp__sub_827B1470"))) PPC_WEAK_FUNC(sub_827B1470);
PPC_FUNC_IMPL(__imp__sub_827B1470) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,21760
	ctx.r7.s64 = ctx.r8.s64 + 21760;
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

__attribute__((alias("__imp__sub_827B1490"))) PPC_WEAK_FUNC(sub_827B1490);
PPC_FUNC_IMPL(__imp__sub_827B1490) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,22232
	ctx.r7.s64 = ctx.r8.s64 + 22232;
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

__attribute__((alias("__imp__sub_827B14B0"))) PPC_WEAK_FUNC(sub_827B14B0);
PPC_FUNC_IMPL(__imp__sub_827B14B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// lfs f0,22228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31016);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,20944(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B14DC"))) PPC_WEAK_FUNC(sub_827B14DC);
PPC_FUNC_IMPL(__imp__sub_827B14DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B14E0"))) PPC_WEAK_FUNC(sub_827B14E0);
PPC_FUNC_IMPL(__imp__sub_827B14E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// addi r9,r11,20928
	ctx.r9.s64 = ctx.r11.s64 + 20928;
	// lfs f0,-12788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12788);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20928(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20928, temp.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B14FC"))) PPC_WEAK_FUNC(sub_827B14FC);
PPC_FUNC_IMPL(__imp__sub_827B14FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B1500"))) PPC_WEAK_FUNC(sub_827B1500);
PPC_FUNC_IMPL(__imp__sub_827B1500) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,24240
	ctx.r7.s64 = ctx.r8.s64 + 24240;
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

__attribute__((alias("__imp__sub_827B1520"))) PPC_WEAK_FUNC(sub_827B1520);
PPC_FUNC_IMPL(__imp__sub_827B1520) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,24248
	ctx.r7.s64 = ctx.r8.s64 + 24248;
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

__attribute__((alias("__imp__sub_827B1540"))) PPC_WEAK_FUNC(sub_827B1540);
PPC_FUNC_IMPL(__imp__sub_827B1540) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,24256
	ctx.r7.s64 = ctx.r8.s64 + 24256;
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

__attribute__((alias("__imp__sub_827B1560"))) PPC_WEAK_FUNC(sub_827B1560);
PPC_FUNC_IMPL(__imp__sub_827B1560) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,24988
	ctx.r7.s64 = ctx.r8.s64 + 24988;
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

__attribute__((alias("__imp__sub_827B1580"))) PPC_WEAK_FUNC(sub_827B1580);
PPC_FUNC_IMPL(__imp__sub_827B1580) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,24996
	ctx.r7.s64 = ctx.r8.s64 + 24996;
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

__attribute__((alias("__imp__sub_827B15A0"))) PPC_WEAK_FUNC(sub_827B15A0);
PPC_FUNC_IMPL(__imp__sub_827B15A0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,25004
	ctx.r7.s64 = ctx.r8.s64 + 25004;
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

__attribute__((alias("__imp__sub_827B15C0"))) PPC_WEAK_FUNC(sub_827B15C0);
PPC_FUNC_IMPL(__imp__sub_827B15C0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,25012
	ctx.r7.s64 = ctx.r8.s64 + 25012;
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

__attribute__((alias("__imp__sub_827B15E0"))) PPC_WEAK_FUNC(sub_827B15E0);
PPC_FUNC_IMPL(__imp__sub_827B15E0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,25020
	ctx.r7.s64 = ctx.r8.s64 + 25020;
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

__attribute__((alias("__imp__sub_827B1600"))) PPC_WEAK_FUNC(sub_827B1600);
PPC_FUNC_IMPL(__imp__sub_827B1600) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,25028
	ctx.r7.s64 = ctx.r8.s64 + 25028;
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

__attribute__((alias("__imp__sub_827B1620"))) PPC_WEAK_FUNC(sub_827B1620);
PPC_FUNC_IMPL(__imp__sub_827B1620) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22380
	ctx.r30.s64 = ctx.r31.s64 + 22380;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13068
	ctx.r5.s64 = ctx.r10.s64 + 13068;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1658;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22380, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1668;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1670;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13064
	ctx.r11.s64 = ctx.r11.s64 + 13064;
	// addi r3,r9,-21248
	ctx.r3.s64 = ctx.r9.s64 + -21248;
	// stw r11,22380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22380, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1688;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B16A0"))) PPC_WEAK_FUNC(sub_827B16A0);
PPC_FUNC_IMPL(__imp__sub_827B16A0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22508
	ctx.r30.s64 = ctx.r31.s64 + 22508;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13096
	ctx.r5.s64 = ctx.r10.s64 + 13096;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B16D8;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22508, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B16E8;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B16F0;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13092
	ctx.r11.s64 = ctx.r11.s64 + 13092;
	// addi r3,r9,-21160
	ctx.r3.s64 = ctx.r9.s64 + -21160;
	// stw r11,22508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22508, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1708;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1720"))) PPC_WEAK_FUNC(sub_827B1720);
PPC_FUNC_IMPL(__imp__sub_827B1720) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22092
	ctx.r30.s64 = ctx.r31.s64 + 22092;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13124
	ctx.r5.s64 = ctx.r10.s64 + 13124;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1758;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22092, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1768;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1770;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13120
	ctx.r11.s64 = ctx.r11.s64 + 13120;
	// addi r3,r9,-21072
	ctx.r3.s64 = ctx.r9.s64 + -21072;
	// stw r11,22092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22092, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1788;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B17A0"))) PPC_WEAK_FUNC(sub_827B17A0);
PPC_FUNC_IMPL(__imp__sub_827B17A0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22476
	ctx.r30.s64 = ctx.r31.s64 + 22476;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13144
	ctx.r5.s64 = ctx.r10.s64 + 13144;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B17D8;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22476, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B17E8;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B17F0;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13140
	ctx.r11.s64 = ctx.r11.s64 + 13140;
	// addi r3,r9,-20984
	ctx.r3.s64 = ctx.r9.s64 + -20984;
	// stw r11,22476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22476, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1808;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1820"))) PPC_WEAK_FUNC(sub_827B1820);
PPC_FUNC_IMPL(__imp__sub_827B1820) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22412
	ctx.r30.s64 = ctx.r31.s64 + 22412;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13172
	ctx.r5.s64 = ctx.r10.s64 + 13172;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1858;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22412, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1868;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1870;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13168
	ctx.r11.s64 = ctx.r11.s64 + 13168;
	// addi r3,r9,-20896
	ctx.r3.s64 = ctx.r9.s64 + -20896;
	// stw r11,22412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22412, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1888;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B18A0"))) PPC_WEAK_FUNC(sub_827B18A0);
PPC_FUNC_IMPL(__imp__sub_827B18A0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22156
	ctx.r30.s64 = ctx.r31.s64 + 22156;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13200
	ctx.r5.s64 = ctx.r10.s64 + 13200;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B18D8;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22156, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B18E8;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B18F0;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13196
	ctx.r11.s64 = ctx.r11.s64 + 13196;
	// addi r3,r9,-20808
	ctx.r3.s64 = ctx.r9.s64 + -20808;
	// stw r11,22156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22156, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1908;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1920"))) PPC_WEAK_FUNC(sub_827B1920);
PPC_FUNC_IMPL(__imp__sub_827B1920) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22316
	ctx.r30.s64 = ctx.r31.s64 + 22316;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13236
	ctx.r5.s64 = ctx.r10.s64 + 13236;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1958;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22316, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1968;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1970;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13232
	ctx.r11.s64 = ctx.r11.s64 + 13232;
	// addi r3,r9,-20720
	ctx.r3.s64 = ctx.r9.s64 + -20720;
	// stw r11,22316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22316, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1988;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B19A0"))) PPC_WEAK_FUNC(sub_827B19A0);
PPC_FUNC_IMPL(__imp__sub_827B19A0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22028
	ctx.r30.s64 = ctx.r31.s64 + 22028;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13424
	ctx.r5.s64 = ctx.r10.s64 + 13424;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B19D8;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22028, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B19E8;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B19F0;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13420
	ctx.r11.s64 = ctx.r11.s64 + 13420;
	// addi r3,r9,-20632
	ctx.r3.s64 = ctx.r9.s64 + -20632;
	// stw r11,22028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22028, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1A08;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1A20"))) PPC_WEAK_FUNC(sub_827B1A20);
PPC_FUNC_IMPL(__imp__sub_827B1A20) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22188
	ctx.r30.s64 = ctx.r31.s64 + 22188;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13276
	ctx.r5.s64 = ctx.r10.s64 + 13276;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1A58;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22188, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1A68;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1A70;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13272
	ctx.r11.s64 = ctx.r11.s64 + 13272;
	// addi r3,r9,-20544
	ctx.r3.s64 = ctx.r9.s64 + -20544;
	// stw r11,22188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22188, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1A88;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1AA0"))) PPC_WEAK_FUNC(sub_827B1AA0);
PPC_FUNC_IMPL(__imp__sub_827B1AA0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22540
	ctx.r30.s64 = ctx.r31.s64 + 22540;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13308
	ctx.r5.s64 = ctx.r10.s64 + 13308;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1AD8;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22540, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1AE8;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1AF0;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13304
	ctx.r11.s64 = ctx.r11.s64 + 13304;
	// addi r3,r9,-20456
	ctx.r3.s64 = ctx.r9.s64 + -20456;
	// stw r11,22540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22540, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1B08;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1B20"))) PPC_WEAK_FUNC(sub_827B1B20);
PPC_FUNC_IMPL(__imp__sub_827B1B20) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22348
	ctx.r30.s64 = ctx.r31.s64 + 22348;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13344
	ctx.r5.s64 = ctx.r10.s64 + 13344;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1B58;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22348, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1B68;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1B70;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13340
	ctx.r11.s64 = ctx.r11.s64 + 13340;
	// addi r3,r9,-20368
	ctx.r3.s64 = ctx.r9.s64 + -20368;
	// stw r11,22348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22348, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1B88;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1BA0"))) PPC_WEAK_FUNC(sub_827B1BA0);
PPC_FUNC_IMPL(__imp__sub_827B1BA0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22124
	ctx.r30.s64 = ctx.r31.s64 + 22124;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13384
	ctx.r5.s64 = ctx.r10.s64 + 13384;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1BD8;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22124, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1BE8;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1BF0;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13380
	ctx.r11.s64 = ctx.r11.s64 + 13380;
	// addi r3,r9,-20280
	ctx.r3.s64 = ctx.r9.s64 + -20280;
	// stw r11,22124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22124, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1C08;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1C20"))) PPC_WEAK_FUNC(sub_827B1C20);
PPC_FUNC_IMPL(__imp__sub_827B1C20) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22252
	ctx.r30.s64 = ctx.r31.s64 + 22252;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13452
	ctx.r5.s64 = ctx.r10.s64 + 13452;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1C58;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22252, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1C68;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1C70;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// addi r3,r9,-20192
	ctx.r3.s64 = ctx.r9.s64 + -20192;
	// stw r11,22252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22252, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1C88;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1CA0"))) PPC_WEAK_FUNC(sub_827B1CA0);
PPC_FUNC_IMPL(__imp__sub_827B1CA0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22060
	ctx.r30.s64 = ctx.r31.s64 + 22060;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13488
	ctx.r5.s64 = ctx.r10.s64 + 13488;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1CD8;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22060, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1CE8;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1CF0;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13484
	ctx.r11.s64 = ctx.r11.s64 + 13484;
	// addi r3,r9,-20104
	ctx.r3.s64 = ctx.r9.s64 + -20104;
	// stw r11,22060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22060, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1D08;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1D20"))) PPC_WEAK_FUNC(sub_827B1D20);
PPC_FUNC_IMPL(__imp__sub_827B1D20) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22444
	ctx.r30.s64 = ctx.r31.s64 + 22444;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13524
	ctx.r5.s64 = ctx.r10.s64 + 13524;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1D58;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22444, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1D68;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1D70;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13520
	ctx.r11.s64 = ctx.r11.s64 + 13520;
	// addi r3,r9,-20016
	ctx.r3.s64 = ctx.r9.s64 + -20016;
	// stw r11,22444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22444, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1D88;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1DA0"))) PPC_WEAK_FUNC(sub_827B1DA0);
PPC_FUNC_IMPL(__imp__sub_827B1DA0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22284
	ctx.r30.s64 = ctx.r31.s64 + 22284;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13564
	ctx.r5.s64 = ctx.r10.s64 + 13564;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1DD8;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22284, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1DE8;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1DF0;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13560
	ctx.r11.s64 = ctx.r11.s64 + 13560;
	// addi r3,r9,-19928
	ctx.r3.s64 = ctx.r9.s64 + -19928;
	// stw r11,22284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22284, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1E08;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1E20"))) PPC_WEAK_FUNC(sub_827B1E20);
PPC_FUNC_IMPL(__imp__sub_827B1E20) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,22220
	ctx.r30.s64 = ctx.r31.s64 + 22220;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,13596
	ctx.r5.s64 = ctx.r10.s64 + 13596;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B1E58;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22220, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B1E68;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B1E70;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,13592
	ctx.r11.s64 = ctx.r11.s64 + 13592;
	// addi r3,r9,-19840
	ctx.r3.s64 = ctx.r9.s64 + -19840;
	// stw r11,22220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22220, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B1E88;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1EA0"))) PPC_WEAK_FUNC(sub_827B1EA0);
PPC_FUNC_IMPL(__imp__sub_827B1EA0) {
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
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// li r30,63
	ctx.r30.s64 = 63;
	// addi r31,r11,22584
	ctx.r31.s64 = ctx.r11.s64 + 22584;
loc_827B1EC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82501b00
	ctx.lr = 0x827B1EC8;
	sub_82501B00(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8252fa48
	ctx.lr = 0x827B1ED0;
	sub_8252FA48(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// bge 0x827b1ec0
	if (!ctx.cr0.lt) goto loc_827B1EC0;
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-19752
	ctx.r3.s64 = ctx.r11.s64 + -19752;
	// bl 0x823d9a98
	ctx.lr = 0x827B1EE8;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1F00"))) PPC_WEAK_FUNC(sub_827B1F00);
PPC_FUNC_IMPL(__imp__sub_827B1F00) {
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
	// addi r31,r11,29868
	ctx.r31.s64 = ctx.r11.s64 + 29868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b5a70
	ctx.lr = 0x827B1F20;
	sub_826B5A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// sth r9,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r9.u16);
	// addi r3,r10,-19528
	ctx.r3.s64 = ctx.r10.s64 + -19528;
	// bl 0x823d9a98
	ctx.lr = 0x827B1F44;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1F58"))) PPC_WEAK_FUNC(sub_827B1F58);
PPC_FUNC_IMPL(__imp__sub_827B1F58) {
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
	// addi r31,r11,29848
	ctx.r31.s64 = ctx.r11.s64 + 29848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b5a70
	ctx.lr = 0x827B1F78;
	sub_826B5A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// sth r9,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r9.u16);
	// addi r3,r10,-19672
	ctx.r3.s64 = ctx.r10.s64 + -19672;
	// bl 0x823d9a98
	ctx.lr = 0x827B1F9C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B1FB0"))) PPC_WEAK_FUNC(sub_827B1FB0);
PPC_FUNC_IMPL(__imp__sub_827B1FB0) {
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
	// addi r31,r11,29888
	ctx.r31.s64 = ctx.r11.s64 + 29888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b5a70
	ctx.lr = 0x827B1FD0;
	sub_826B5A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// sth r9,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r9.u16);
	// addi r3,r10,-19600
	ctx.r3.s64 = ctx.r10.s64 + -19600;
	// bl 0x823d9a98
	ctx.lr = 0x827B1FF4;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B2008"))) PPC_WEAK_FUNC(sub_827B2008);
PPC_FUNC_IMPL(__imp__sub_827B2008) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12224
	ctx.r5.s64 = ctx.r11.s64 + 12224;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827B2030;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,27432
	ctx.r11.s64 = ctx.r7.s64 + 27432;
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

__attribute__((alias("__imp__sub_827B207C"))) PPC_WEAK_FUNC(sub_827B207C);
PPC_FUNC_IMPL(__imp__sub_827B207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2080"))) PPC_WEAK_FUNC(sub_827B2080);
PPC_FUNC_IMPL(__imp__sub_827B2080) {
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
	ctx.lr = 0x827B20A8;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,27480
	ctx.r11.s64 = ctx.r7.s64 + 27480;
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

__attribute__((alias("__imp__sub_827B20F4"))) PPC_WEAK_FUNC(sub_827B20F4);
PPC_FUNC_IMPL(__imp__sub_827B20F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B20F8"))) PPC_WEAK_FUNC(sub_827B20F8);
PPC_FUNC_IMPL(__imp__sub_827B20F8) {
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
	ctx.lr = 0x827B2120;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,27528
	ctx.r11.s64 = ctx.r7.s64 + 27528;
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

__attribute__((alias("__imp__sub_827B216C"))) PPC_WEAK_FUNC(sub_827B216C);
PPC_FUNC_IMPL(__imp__sub_827B216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2170"))) PPC_WEAK_FUNC(sub_827B2170);
PPC_FUNC_IMPL(__imp__sub_827B2170) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,27576
	ctx.r7.s64 = ctx.r8.s64 + 27576;
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

__attribute__((alias("__imp__sub_827B2190"))) PPC_WEAK_FUNC(sub_827B2190);
PPC_FUNC_IMPL(__imp__sub_827B2190) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,27584
	ctx.r7.s64 = ctx.r8.s64 + 27584;
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

__attribute__((alias("__imp__sub_827B21B0"))) PPC_WEAK_FUNC(sub_827B21B0);
PPC_FUNC_IMPL(__imp__sub_827B21B0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,27592
	ctx.r7.s64 = ctx.r8.s64 + 27592;
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

__attribute__((alias("__imp__sub_827B21D0"))) PPC_WEAK_FUNC(sub_827B21D0);
PPC_FUNC_IMPL(__imp__sub_827B21D0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,28756
	ctx.r7.s64 = ctx.r8.s64 + 28756;
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

__attribute__((alias("__imp__sub_827B21F0"))) PPC_WEAK_FUNC(sub_827B21F0);
PPC_FUNC_IMPL(__imp__sub_827B21F0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,28764
	ctx.r7.s64 = ctx.r8.s64 + 28764;
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

__attribute__((alias("__imp__sub_827B2210"))) PPC_WEAK_FUNC(sub_827B2210);
PPC_FUNC_IMPL(__imp__sub_827B2210) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,28772
	ctx.r7.s64 = ctx.r8.s64 + 28772;
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

__attribute__((alias("__imp__sub_827B2230"))) PPC_WEAK_FUNC(sub_827B2230);
PPC_FUNC_IMPL(__imp__sub_827B2230) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,28780
	ctx.r7.s64 = ctx.r8.s64 + 28780;
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

__attribute__((alias("__imp__sub_827B2250"))) PPC_WEAK_FUNC(sub_827B2250);
PPC_FUNC_IMPL(__imp__sub_827B2250) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,28788
	ctx.r7.s64 = ctx.r8.s64 + 28788;
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

__attribute__((alias("__imp__sub_827B2270"))) PPC_WEAK_FUNC(sub_827B2270);
PPC_FUNC_IMPL(__imp__sub_827B2270) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,28796
	ctx.r7.s64 = ctx.r8.s64 + 28796;
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

__attribute__((alias("__imp__sub_827B2290"))) PPC_WEAK_FUNC(sub_827B2290);
PPC_FUNC_IMPL(__imp__sub_827B2290) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,28804
	ctx.r7.s64 = ctx.r8.s64 + 28804;
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

__attribute__((alias("__imp__sub_827B22B0"))) PPC_WEAK_FUNC(sub_827B22B0);
PPC_FUNC_IMPL(__imp__sub_827B22B0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,28812
	ctx.r7.s64 = ctx.r8.s64 + 28812;
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

__attribute__((alias("__imp__sub_827B22D0"))) PPC_WEAK_FUNC(sub_827B22D0);
PPC_FUNC_IMPL(__imp__sub_827B22D0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,28820
	ctx.r7.s64 = ctx.r8.s64 + 28820;
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

__attribute__((alias("__imp__sub_827B22F0"))) PPC_WEAK_FUNC(sub_827B22F0);
PPC_FUNC_IMPL(__imp__sub_827B22F0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// addi r7,r8,28828
	ctx.r7.s64 = ctx.r8.s64 + 28828;
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

__attribute__((alias("__imp__sub_827B2310"))) PPC_WEAK_FUNC(sub_827B2310);
PPC_FUNC_IMPL(__imp__sub_827B2310) {
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
	ctx.lr = 0x827B2338;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32127
	ctx.r7.s64 = -2105475072;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,-9792
	ctx.r11.s64 = ctx.r7.s64 + -9792;
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

__attribute__((alias("__imp__sub_827B2384"))) PPC_WEAK_FUNC(sub_827B2384);
PPC_FUNC_IMPL(__imp__sub_827B2384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2388"))) PPC_WEAK_FUNC(sub_827B2388);
PPC_FUNC_IMPL(__imp__sub_827B2388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,1944
	ctx.r5.s64 = ctx.r11.s64 + 1944;
	// addi r3,r10,29968
	ctx.r3.s64 = ctx.r10.s64 + 29968;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B23A4"))) PPC_WEAK_FUNC(sub_827B23A4);
PPC_FUNC_IMPL(__imp__sub_827B23A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B23A8"))) PPC_WEAK_FUNC(sub_827B23A8);
PPC_FUNC_IMPL(__imp__sub_827B23A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-19456
	ctx.r3.s64 = ctx.r11.s64 + -19456;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B23B4"))) PPC_WEAK_FUNC(sub_827B23B4);
PPC_FUNC_IMPL(__imp__sub_827B23B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B23B8"))) PPC_WEAK_FUNC(sub_827B23B8);
PPC_FUNC_IMPL(__imp__sub_827B23B8) {
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
	ctx.lr = 0x827B23E0;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32127
	ctx.r7.s64 = -2105475072;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,-9480
	ctx.r11.s64 = ctx.r7.s64 + -9480;
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

__attribute__((alias("__imp__sub_827B242C"))) PPC_WEAK_FUNC(sub_827B242C);
PPC_FUNC_IMPL(__imp__sub_827B242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2430"))) PPC_WEAK_FUNC(sub_827B2430);
PPC_FUNC_IMPL(__imp__sub_827B2430) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,-9432
	ctx.r7.s64 = ctx.r8.s64 + -9432;
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

__attribute__((alias("__imp__sub_827B2450"))) PPC_WEAK_FUNC(sub_827B2450);
PPC_FUNC_IMPL(__imp__sub_827B2450) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,-8844
	ctx.r7.s64 = ctx.r8.s64 + -8844;
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

__attribute__((alias("__imp__sub_827B2470"))) PPC_WEAK_FUNC(sub_827B2470);
PPC_FUNC_IMPL(__imp__sub_827B2470) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,-8836
	ctx.r7.s64 = ctx.r8.s64 + -8836;
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

__attribute__((alias("__imp__sub_827B2490"))) PPC_WEAK_FUNC(sub_827B2490);
PPC_FUNC_IMPL(__imp__sub_827B2490) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,-8828
	ctx.r7.s64 = ctx.r8.s64 + -8828;
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

__attribute__((alias("__imp__sub_827B24B0"))) PPC_WEAK_FUNC(sub_827B24B0);
PPC_FUNC_IMPL(__imp__sub_827B24B0) {
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
	ctx.lr = 0x827B24D8;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32127
	ctx.r7.s64 = -2105475072;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,-7200
	ctx.r11.s64 = ctx.r7.s64 + -7200;
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

__attribute__((alias("__imp__sub_827B2524"))) PPC_WEAK_FUNC(sub_827B2524);
PPC_FUNC_IMPL(__imp__sub_827B2524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2528"))) PPC_WEAK_FUNC(sub_827B2528);
PPC_FUNC_IMPL(__imp__sub_827B2528) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8888
	ctx.r5.s64 = ctx.r11.s64 + -8888;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827B2550;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32127
	ctx.r7.s64 = -2105475072;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,-7152
	ctx.r11.s64 = ctx.r7.s64 + -7152;
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

__attribute__((alias("__imp__sub_827B259C"))) PPC_WEAK_FUNC(sub_827B259C);
PPC_FUNC_IMPL(__imp__sub_827B259C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B25A0"))) PPC_WEAK_FUNC(sub_827B25A0);
PPC_FUNC_IMPL(__imp__sub_827B25A0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,-7104
	ctx.r7.s64 = ctx.r8.s64 + -7104;
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

__attribute__((alias("__imp__sub_827B25C0"))) PPC_WEAK_FUNC(sub_827B25C0);
PPC_FUNC_IMPL(__imp__sub_827B25C0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,-7096
	ctx.r7.s64 = ctx.r8.s64 + -7096;
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

__attribute__((alias("__imp__sub_827B25E0"))) PPC_WEAK_FUNC(sub_827B25E0);
PPC_FUNC_IMPL(__imp__sub_827B25E0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,-7088
	ctx.r7.s64 = ctx.r8.s64 + -7088;
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

__attribute__((alias("__imp__sub_827B2600"))) PPC_WEAK_FUNC(sub_827B2600);
PPC_FUNC_IMPL(__imp__sub_827B2600) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,-7080
	ctx.r7.s64 = ctx.r8.s64 + -7080;
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

__attribute__((alias("__imp__sub_827B2620"))) PPC_WEAK_FUNC(sub_827B2620);
PPC_FUNC_IMPL(__imp__sub_827B2620) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,-7072
	ctx.r7.s64 = ctx.r8.s64 + -7072;
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

__attribute__((alias("__imp__sub_827B2640"))) PPC_WEAK_FUNC(sub_827B2640);
PPC_FUNC_IMPL(__imp__sub_827B2640) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,-6876
	ctx.r7.s64 = ctx.r8.s64 + -6876;
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

__attribute__((alias("__imp__sub_827B2660"))) PPC_WEAK_FUNC(sub_827B2660);
PPC_FUNC_IMPL(__imp__sub_827B2660) {
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
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,30036
	ctx.r3.s64 = ctx.r11.s64 + 30036;
	// bl 0x821973a8
	ctx.lr = 0x827B2678;
	sub_821973A8(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-19440
	ctx.r3.s64 = ctx.r10.s64 + -19440;
	// bl 0x823d9a98
	ctx.lr = 0x827B2684;
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

__attribute__((alias("__imp__sub_827B2694"))) PPC_WEAK_FUNC(sub_827B2694);
PPC_FUNC_IMPL(__imp__sub_827B2694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2698"))) PPC_WEAK_FUNC(sub_827B2698);
PPC_FUNC_IMPL(__imp__sub_827B2698) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,30340
	ctx.r30.s64 = ctx.r31.s64 + 30340;
	// addi r5,r11,26280
	ctx.r5.s64 = ctx.r11.s64 + 26280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824fa650
	ctx.lr = 0x827B26CC;
	sub_824FA650(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30340, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827B26DC;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B26E4;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r11,r11,26276
	ctx.r11.s64 = ctx.r11.s64 + 26276;
	// addi r3,r10,-19408
	ctx.r3.s64 = ctx.r10.s64 + -19408;
	// stw r11,30340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30340, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B26FC;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B2714"))) PPC_WEAK_FUNC(sub_827B2714);
PPC_FUNC_IMPL(__imp__sub_827B2714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2718"))) PPC_WEAK_FUNC(sub_827B2718);
PPC_FUNC_IMPL(__imp__sub_827B2718) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,30180
	ctx.r30.s64 = ctx.r31.s64 + 30180;
	// addi r7,r11,30340
	ctx.r7.s64 = ctx.r11.s64 + 30340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,26344
	ctx.r6.s64 = ctx.r10.s64 + 26344;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2754;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30180, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827B2764;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B276C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,26340
	ctx.r11.s64 = ctx.r11.s64 + 26340;
	// addi r3,r9,-19320
	ctx.r3.s64 = ctx.r9.s64 + -19320;
	// stw r11,30180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30180, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2784;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B279C"))) PPC_WEAK_FUNC(sub_827B279C);
PPC_FUNC_IMPL(__imp__sub_827B279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B27A0"))) PPC_WEAK_FUNC(sub_827B27A0);
PPC_FUNC_IMPL(__imp__sub_827B27A0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,30212
	ctx.r30.s64 = ctx.r31.s64 + 30212;
	// addi r7,r11,30340
	ctx.r7.s64 = ctx.r11.s64 + 30340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,26388
	ctx.r6.s64 = ctx.r10.s64 + 26388;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B27DC;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30212, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827B27EC;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B27F4;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,26384
	ctx.r11.s64 = ctx.r11.s64 + 26384;
	// addi r3,r9,-19232
	ctx.r3.s64 = ctx.r9.s64 + -19232;
	// stw r11,30212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30212, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B280C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B2824"))) PPC_WEAK_FUNC(sub_827B2824);
PPC_FUNC_IMPL(__imp__sub_827B2824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2828"))) PPC_WEAK_FUNC(sub_827B2828);
PPC_FUNC_IMPL(__imp__sub_827B2828) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,30404
	ctx.r30.s64 = ctx.r31.s64 + 30404;
	// addi r7,r11,30340
	ctx.r7.s64 = ctx.r11.s64 + 30340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,26304
	ctx.r6.s64 = ctx.r10.s64 + 26304;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2864;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30404, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827B2874;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B287C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,26300
	ctx.r11.s64 = ctx.r11.s64 + 26300;
	// addi r3,r9,-19144
	ctx.r3.s64 = ctx.r9.s64 + -19144;
	// stw r11,30404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30404, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2894;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B28AC"))) PPC_WEAK_FUNC(sub_827B28AC);
PPC_FUNC_IMPL(__imp__sub_827B28AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B28B0"))) PPC_WEAK_FUNC(sub_827B28B0);
PPC_FUNC_IMPL(__imp__sub_827B28B0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,30244
	ctx.r30.s64 = ctx.r31.s64 + 30244;
	// addi r7,r11,30340
	ctx.r7.s64 = ctx.r11.s64 + 30340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,26428
	ctx.r6.s64 = ctx.r10.s64 + 26428;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B28EC;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30244, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827B28FC;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2904;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,26424
	ctx.r11.s64 = ctx.r11.s64 + 26424;
	// addi r3,r9,-19056
	ctx.r3.s64 = ctx.r9.s64 + -19056;
	// stw r11,30244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30244, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B291C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B2934"))) PPC_WEAK_FUNC(sub_827B2934);
PPC_FUNC_IMPL(__imp__sub_827B2934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2938"))) PPC_WEAK_FUNC(sub_827B2938);
PPC_FUNC_IMPL(__imp__sub_827B2938) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,30308
	ctx.r30.s64 = ctx.r31.s64 + 30308;
	// addi r7,r11,30340
	ctx.r7.s64 = ctx.r11.s64 + 30340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,26472
	ctx.r6.s64 = ctx.r10.s64 + 26472;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2974;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30308, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827B2984;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B298C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,26468
	ctx.r11.s64 = ctx.r11.s64 + 26468;
	// addi r3,r9,-18968
	ctx.r3.s64 = ctx.r9.s64 + -18968;
	// stw r11,30308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30308, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B29A4;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B29BC"))) PPC_WEAK_FUNC(sub_827B29BC);
PPC_FUNC_IMPL(__imp__sub_827B29BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B29C0"))) PPC_WEAK_FUNC(sub_827B29C0);
PPC_FUNC_IMPL(__imp__sub_827B29C0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,30148
	ctx.r30.s64 = ctx.r31.s64 + 30148;
	// addi r7,r11,30340
	ctx.r7.s64 = ctx.r11.s64 + 30340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,26512
	ctx.r6.s64 = ctx.r10.s64 + 26512;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B29FC;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30148, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827B2A0C;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2A14;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,26508
	ctx.r11.s64 = ctx.r11.s64 + 26508;
	// addi r3,r9,-18880
	ctx.r3.s64 = ctx.r9.s64 + -18880;
	// stw r11,30148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30148, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2A2C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B2A44"))) PPC_WEAK_FUNC(sub_827B2A44);
PPC_FUNC_IMPL(__imp__sub_827B2A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2A48"))) PPC_WEAK_FUNC(sub_827B2A48);
PPC_FUNC_IMPL(__imp__sub_827B2A48) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,30276
	ctx.r30.s64 = ctx.r31.s64 + 30276;
	// addi r7,r11,30340
	ctx.r7.s64 = ctx.r11.s64 + 30340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,26556
	ctx.r6.s64 = ctx.r10.s64 + 26556;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2A84;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30276, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827B2A94;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2A9C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// addi r3,r9,-18792
	ctx.r3.s64 = ctx.r9.s64 + -18792;
	// stw r11,30276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30276, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2AB4;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B2ACC"))) PPC_WEAK_FUNC(sub_827B2ACC);
PPC_FUNC_IMPL(__imp__sub_827B2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2AD0"))) PPC_WEAK_FUNC(sub_827B2AD0);
PPC_FUNC_IMPL(__imp__sub_827B2AD0) {
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
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,30372
	ctx.r30.s64 = ctx.r31.s64 + 30372;
	// addi r7,r11,30340
	ctx.r7.s64 = ctx.r11.s64 + 30340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,26596
	ctx.r6.s64 = ctx.r10.s64 + 26596;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2B0C;
	sub_824FA688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30372, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827B2B1C;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2B24;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// addi r3,r9,-18704
	ctx.r3.s64 = ctx.r9.s64 + -18704;
	// stw r11,30372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30372, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2B3C;
	sub_823D9A98(ctx, base);
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

__attribute__((alias("__imp__sub_827B2B54"))) PPC_WEAK_FUNC(sub_827B2B54);
PPC_FUNC_IMPL(__imp__sub_827B2B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2B58"))) PPC_WEAK_FUNC(sub_827B2B58);
PPC_FUNC_IMPL(__imp__sub_827B2B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,30468
	ctx.r3.s64 = ctx.r11.s64 + 30468;
	// b 0x824e6310
	sub_824E6310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2B64"))) PPC_WEAK_FUNC(sub_827B2B64);
PPC_FUNC_IMPL(__imp__sub_827B2B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2B68"))) PPC_WEAK_FUNC(sub_827B2B68);
PPC_FUNC_IMPL(__imp__sub_827B2B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,27068
	ctx.r5.s64 = ctx.r11.s64 + 27068;
	// addi r3,r10,30448
	ctx.r3.s64 = ctx.r10.s64 + 30448;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2B84"))) PPC_WEAK_FUNC(sub_827B2B84);
PPC_FUNC_IMPL(__imp__sub_827B2B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

