#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827B7F40"))) PPC_WEAK_FUNC(sub_827B7F40);
PPC_FUNC_IMPL(__imp__sub_827B7F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r5,r11,-5036
	ctx.r5.s64 = ctx.r11.s64 + -5036;
	// addi r3,r10,-21468
	ctx.r3.s64 = ctx.r10.s64 + -21468;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B7F5C"))) PPC_WEAK_FUNC(sub_827B7F5C);
PPC_FUNC_IMPL(__imp__sub_827B7F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B7F60"))) PPC_WEAK_FUNC(sub_827B7F60);
PPC_FUNC_IMPL(__imp__sub_827B7F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r5,r11,-5020
	ctx.r5.s64 = ctx.r11.s64 + -5020;
	// addi r3,r10,-21488
	ctx.r3.s64 = ctx.r10.s64 + -21488;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B7F7C"))) PPC_WEAK_FUNC(sub_827B7F7C);
PPC_FUNC_IMPL(__imp__sub_827B7F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B7F80"))) PPC_WEAK_FUNC(sub_827B7F80);
PPC_FUNC_IMPL(__imp__sub_827B7F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r5,r11,-3876
	ctx.r5.s64 = ctx.r11.s64 + -3876;
	// addi r3,r10,-21448
	ctx.r3.s64 = ctx.r10.s64 + -21448;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B7F9C"))) PPC_WEAK_FUNC(sub_827B7F9C);
PPC_FUNC_IMPL(__imp__sub_827B7F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B7FA0"))) PPC_WEAK_FUNC(sub_827B7FA0);
PPC_FUNC_IMPL(__imp__sub_827B7FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-13232
	ctx.r3.s64 = ctx.r11.s64 + -13232;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B7FAC"))) PPC_WEAK_FUNC(sub_827B7FAC);
PPC_FUNC_IMPL(__imp__sub_827B7FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B7FB0"))) PPC_WEAK_FUNC(sub_827B7FB0);
PPC_FUNC_IMPL(__imp__sub_827B7FB0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21256
	ctx.r5.s64 = ctx.r11.s64 + 21256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827B7FD8;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32125
	ctx.r7.s64 = -2105344000;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,-5296
	ctx.r11.s64 = ctx.r7.s64 + -5296;
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

__attribute__((alias("__imp__sub_827B8024"))) PPC_WEAK_FUNC(sub_827B8024);
PPC_FUNC_IMPL(__imp__sub_827B8024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8028"))) PPC_WEAK_FUNC(sub_827B8028);
PPC_FUNC_IMPL(__imp__sub_827B8028) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32125
	ctx.r8.s64 = -2105344000;
	// addi r7,r8,-5248
	ctx.r7.s64 = ctx.r8.s64 + -5248;
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

__attribute__((alias("__imp__sub_827B8048"))) PPC_WEAK_FUNC(sub_827B8048);
PPC_FUNC_IMPL(__imp__sub_827B8048) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,442
	ctx.r4.s64 = 442;
	// addi r3,r11,-23056
	ctx.r3.s64 = ctx.r11.s64 + -23056;
	// bl 0x8275c7b8
	ctx.lr = 0x827B8064;
	sub_8275C7B8(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-21200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B807C"))) PPC_WEAK_FUNC(sub_827B807C);
PPC_FUNC_IMPL(__imp__sub_827B807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8080"))) PPC_WEAK_FUNC(sub_827B8080);
PPC_FUNC_IMPL(__imp__sub_827B8080) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,520
	ctx.r4.s64 = 520;
	// addi r3,r11,-23056
	ctx.r3.s64 = ctx.r11.s64 + -23056;
	// bl 0x8275c7b8
	ctx.lr = 0x827B809C;
	sub_8275C7B8(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-21228(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B80B4"))) PPC_WEAK_FUNC(sub_827B80B4);
PPC_FUNC_IMPL(__imp__sub_827B80B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B80B8"))) PPC_WEAK_FUNC(sub_827B80B8);
PPC_FUNC_IMPL(__imp__sub_827B80B8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,642
	ctx.r4.s64 = 642;
	// addi r3,r11,17196
	ctx.r3.s64 = ctx.r11.s64 + 17196;
	// bl 0x8275c7b8
	ctx.lr = 0x827B80D4;
	sub_8275C7B8(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-21224(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B80EC"))) PPC_WEAK_FUNC(sub_827B80EC);
PPC_FUNC_IMPL(__imp__sub_827B80EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B80F0"))) PPC_WEAK_FUNC(sub_827B80F0);
PPC_FUNC_IMPL(__imp__sub_827B80F0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,643
	ctx.r4.s64 = 643;
	// addi r3,r11,17196
	ctx.r3.s64 = ctx.r11.s64 + 17196;
	// bl 0x8275c7b8
	ctx.lr = 0x827B810C;
	sub_8275C7B8(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-21204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8124"))) PPC_WEAK_FUNC(sub_827B8124);
PPC_FUNC_IMPL(__imp__sub_827B8124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8128"))) PPC_WEAK_FUNC(sub_827B8128);
PPC_FUNC_IMPL(__imp__sub_827B8128) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,644
	ctx.r4.s64 = 644;
	// addi r3,r11,17196
	ctx.r3.s64 = ctx.r11.s64 + 17196;
	// bl 0x8275c7b8
	ctx.lr = 0x827B8144;
	sub_8275C7B8(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-21196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B815C"))) PPC_WEAK_FUNC(sub_827B815C);
PPC_FUNC_IMPL(__imp__sub_827B815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8160"))) PPC_WEAK_FUNC(sub_827B8160);
PPC_FUNC_IMPL(__imp__sub_827B8160) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,645
	ctx.r4.s64 = 645;
	// addi r3,r11,17196
	ctx.r3.s64 = ctx.r11.s64 + 17196;
	// bl 0x8275c7b8
	ctx.lr = 0x827B817C;
	sub_8275C7B8(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-21212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8194"))) PPC_WEAK_FUNC(sub_827B8194);
PPC_FUNC_IMPL(__imp__sub_827B8194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8198"))) PPC_WEAK_FUNC(sub_827B8198);
PPC_FUNC_IMPL(__imp__sub_827B8198) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,646
	ctx.r4.s64 = 646;
	// addi r3,r11,17196
	ctx.r3.s64 = ctx.r11.s64 + 17196;
	// bl 0x8275c7b8
	ctx.lr = 0x827B81B4;
	sub_8275C7B8(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-21216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B81CC"))) PPC_WEAK_FUNC(sub_827B81CC);
PPC_FUNC_IMPL(__imp__sub_827B81CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B81D0"))) PPC_WEAK_FUNC(sub_827B81D0);
PPC_FUNC_IMPL(__imp__sub_827B81D0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,647
	ctx.r4.s64 = 647;
	// addi r3,r11,17196
	ctx.r3.s64 = ctx.r11.s64 + 17196;
	// bl 0x8275c7b8
	ctx.lr = 0x827B81EC;
	sub_8275C7B8(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-21220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8204"))) PPC_WEAK_FUNC(sub_827B8204);
PPC_FUNC_IMPL(__imp__sub_827B8204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8208"))) PPC_WEAK_FUNC(sub_827B8208);
PPC_FUNC_IMPL(__imp__sub_827B8208) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,648
	ctx.r4.s64 = 648;
	// addi r3,r11,17196
	ctx.r3.s64 = ctx.r11.s64 + 17196;
	// bl 0x8275c7b8
	ctx.lr = 0x827B8224;
	sub_8275C7B8(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-21208(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B823C"))) PPC_WEAK_FUNC(sub_827B823C);
PPC_FUNC_IMPL(__imp__sub_827B823C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8240"))) PPC_WEAK_FUNC(sub_827B8240);
PPC_FUNC_IMPL(__imp__sub_827B8240) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,649
	ctx.r4.s64 = 649;
	// addi r3,r11,17196
	ctx.r3.s64 = ctx.r11.s64 + 17196;
	// bl 0x8275c7b8
	ctx.lr = 0x827B825C;
	sub_8275C7B8(ctx, base);
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// stw r3,-21232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8274"))) PPC_WEAK_FUNC(sub_827B8274);
PPC_FUNC_IMPL(__imp__sub_827B8274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8278"))) PPC_WEAK_FUNC(sub_827B8278);
PPC_FUNC_IMPL(__imp__sub_827B8278) {
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
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-7912
	ctx.r5.s64 = ctx.r11.s64 + -7912;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827B82A0;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32125
	ctx.r7.s64 = -2105344000;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,-2776
	ctx.r11.s64 = ctx.r7.s64 + -2776;
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

__attribute__((alias("__imp__sub_827B82EC"))) PPC_WEAK_FUNC(sub_827B82EC);
PPC_FUNC_IMPL(__imp__sub_827B82EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B82F0"))) PPC_WEAK_FUNC(sub_827B82F0);
PPC_FUNC_IMPL(__imp__sub_827B82F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r5,r11,19048
	ctx.r5.s64 = ctx.r11.s64 + 19048;
	// addi r3,r10,-21152
	ctx.r3.s64 = ctx.r10.s64 + -21152;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B830C"))) PPC_WEAK_FUNC(sub_827B830C);
PPC_FUNC_IMPL(__imp__sub_827B830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8310"))) PPC_WEAK_FUNC(sub_827B8310);
PPC_FUNC_IMPL(__imp__sub_827B8310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r5,r11,19060
	ctx.r5.s64 = ctx.r11.s64 + 19060;
	// addi r3,r10,-21172
	ctx.r3.s64 = ctx.r10.s64 + -21172;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B832C"))) PPC_WEAK_FUNC(sub_827B832C);
PPC_FUNC_IMPL(__imp__sub_827B832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8330"))) PPC_WEAK_FUNC(sub_827B8330);
PPC_FUNC_IMPL(__imp__sub_827B8330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21096
	ctx.r3.s64 = ctx.r11.s64 + -21096;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821ce460
	sub_821CE460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8344"))) PPC_WEAK_FUNC(sub_827B8344);
PPC_FUNC_IMPL(__imp__sub_827B8344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8348"))) PPC_WEAK_FUNC(sub_827B8348);
PPC_FUNC_IMPL(__imp__sub_827B8348) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,-21076
	ctx.r3.s64 = ctx.r11.s64 + -21076;
	// bl 0x82763bb8
	ctx.lr = 0x827B8360;
	sub_82763BB8(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-13160
	ctx.r3.s64 = ctx.r10.s64 + -13160;
	// bl 0x823d9a98
	ctx.lr = 0x827B836C;
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

__attribute__((alias("__imp__sub_827B837C"))) PPC_WEAK_FUNC(sub_827B837C);
PPC_FUNC_IMPL(__imp__sub_827B837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8380"))) PPC_WEAK_FUNC(sub_827B8380);
PPC_FUNC_IMPL(__imp__sub_827B8380) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,-15952
	ctx.r3.s64 = ctx.r11.s64 + -15952;
	// bl 0x82763c68
	ctx.lr = 0x827B8398;
	sub_82763C68(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-13208
	ctx.r3.s64 = ctx.r10.s64 + -13208;
	// bl 0x823d9a98
	ctx.lr = 0x827B83A4;
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

__attribute__((alias("__imp__sub_827B83B4"))) PPC_WEAK_FUNC(sub_827B83B4);
PPC_FUNC_IMPL(__imp__sub_827B83B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B83B8"))) PPC_WEAK_FUNC(sub_827B83B8);
PPC_FUNC_IMPL(__imp__sub_827B83B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-15552
	ctx.r3.s64 = ctx.r11.s64 + -15552;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821ce460
	sub_821CE460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B83CC"))) PPC_WEAK_FUNC(sub_827B83CC);
PPC_FUNC_IMPL(__imp__sub_827B83CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B83D0"))) PPC_WEAK_FUNC(sub_827B83D0);
PPC_FUNC_IMPL(__imp__sub_827B83D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r9,r11,-160
	ctx.r9.s64 = ctx.r11.s64 + -160;
	// addi r3,r10,-13112
	ctx.r3.s64 = ctx.r10.s64 + -13112;
	// lbz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stb r11,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r11.u8);
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B83F0"))) PPC_WEAK_FUNC(sub_827B83F0);
PPC_FUNC_IMPL(__imp__sub_827B83F0) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,-15532
	ctx.r3.s64 = ctx.r11.s64 + -15532;
	// bl 0x82771588
	ctx.lr = 0x827B8408;
	sub_82771588(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-13040
	ctx.r3.s64 = ctx.r10.s64 + -13040;
	// bl 0x823d9a98
	ctx.lr = 0x827B8414;
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

__attribute__((alias("__imp__sub_827B8424"))) PPC_WEAK_FUNC(sub_827B8424);
PPC_FUNC_IMPL(__imp__sub_827B8424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8428"))) PPC_WEAK_FUNC(sub_827B8428);
PPC_FUNC_IMPL(__imp__sub_827B8428) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,-15272
	ctx.r3.s64 = ctx.r11.s64 + -15272;
	// bl 0x82771608
	ctx.lr = 0x827B8440;
	sub_82771608(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-13088
	ctx.r3.s64 = ctx.r10.s64 + -13088;
	// bl 0x823d9a98
	ctx.lr = 0x827B844C;
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

__attribute__((alias("__imp__sub_827B845C"))) PPC_WEAK_FUNC(sub_827B845C);
PPC_FUNC_IMPL(__imp__sub_827B845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8460"))) PPC_WEAK_FUNC(sub_827B8460);
PPC_FUNC_IMPL(__imp__sub_827B8460) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfd f1,27872(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 27872);
	// bl 0x823dbae8
	ctx.lr = 0x827B8478;
	sub_823DBAE8(ctx, base);
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r10,760
	ctx.r5.s64 = ctx.r10.s64 + 760;
	// lfs f11,11364(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11364);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,7444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14884(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14884);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,31492(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31492);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,12(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f11,16(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f13,24(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// stfs f13,28(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// stfs f10,32(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// stfs f0,36(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B84D0"))) PPC_WEAK_FUNC(sub_827B84D0);
PPC_FUNC_IMPL(__imp__sub_827B84D0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32125
	ctx.r8.s64 = -2105344000;
	// addi r7,r8,1136
	ctx.r7.s64 = ctx.r8.s64 + 1136;
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

__attribute__((alias("__imp__sub_827B84F0"))) PPC_WEAK_FUNC(sub_827B84F0);
PPC_FUNC_IMPL(__imp__sub_827B84F0) {
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
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7600
	ctx.r5.s64 = ctx.r11.s64 + 7600;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827B8518;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32125
	ctx.r7.s64 = -2105344000;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,1376
	ctx.r11.s64 = ctx.r7.s64 + 1376;
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

__attribute__((alias("__imp__sub_827B8564"))) PPC_WEAK_FUNC(sub_827B8564);
PPC_FUNC_IMPL(__imp__sub_827B8564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8568"))) PPC_WEAK_FUNC(sub_827B8568);
PPC_FUNC_IMPL(__imp__sub_827B8568) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32125
	ctx.r8.s64 = -2105344000;
	// addi r7,r8,1424
	ctx.r7.s64 = ctx.r8.s64 + 1424;
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

__attribute__((alias("__imp__sub_827B8588"))) PPC_WEAK_FUNC(sub_827B8588);
PPC_FUNC_IMPL(__imp__sub_827B8588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r5,r11,-28452
	ctx.r5.s64 = ctx.r11.s64 + -28452;
	// addi r3,r10,-3024
	ctx.r3.s64 = ctx.r10.s64 + -3024;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B85A4"))) PPC_WEAK_FUNC(sub_827B85A4);
PPC_FUNC_IMPL(__imp__sub_827B85A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B85A8"))) PPC_WEAK_FUNC(sub_827B85A8);
PPC_FUNC_IMPL(__imp__sub_827B85A8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15128
	ctx.r5.s64 = ctx.r11.s64 + 15128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4268
	ctx.lr = 0x827B85D0;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32125
	ctx.r7.s64 = -2105344000;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,1708
	ctx.r11.s64 = ctx.r7.s64 + 1708;
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

__attribute__((alias("__imp__sub_827B861C"))) PPC_WEAK_FUNC(sub_827B861C);
PPC_FUNC_IMPL(__imp__sub_827B861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8620"))) PPC_WEAK_FUNC(sub_827B8620);
PPC_FUNC_IMPL(__imp__sub_827B8620) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32125
	ctx.r8.s64 = -2105344000;
	// addi r7,r8,1756
	ctx.r7.s64 = ctx.r8.s64 + 1756;
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

__attribute__((alias("__imp__sub_827B8640"))) PPC_WEAK_FUNC(sub_827B8640);
PPC_FUNC_IMPL(__imp__sub_827B8640) {
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
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r3,r11,-2928
	ctx.r3.s64 = ctx.r11.s64 + -2928;
	// bl 0x82797680
	ctx.lr = 0x827B8658;
	sub_82797680(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-12936
	ctx.r3.s64 = ctx.r10.s64 + -12936;
	// bl 0x823d9a98
	ctx.lr = 0x827B8664;
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

__attribute__((alias("__imp__sub_827B8674"))) PPC_WEAK_FUNC(sub_827B8674);
PPC_FUNC_IMPL(__imp__sub_827B8674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8678"))) PPC_WEAK_FUNC(sub_827B8678);
PPC_FUNC_IMPL(__imp__sub_827B8678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32107
	ctx.r8.s64 = -2104164352;
	// lfs f0,2168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3804);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,30280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30280);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-23212(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -23212, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B86A4"))) PPC_WEAK_FUNC(sub_827B86A4);
PPC_FUNC_IMPL(__imp__sub_827B86A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B86A8"))) PPC_WEAK_FUNC(sub_827B86A8);
PPC_FUNC_IMPL(__imp__sub_827B86A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,2840
	ctx.r3.s64 = ctx.r11.s64 + 2840;
	// b 0x821c08c0
	sub_821C08C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B86B4"))) PPC_WEAK_FUNC(sub_827B86B4);
PPC_FUNC_IMPL(__imp__sub_827B86B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B86B8"))) PPC_WEAK_FUNC(sub_827B86B8);
PPC_FUNC_IMPL(__imp__sub_827B86B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32125
	ctx.r10.s64 = -2105344000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,2880
	ctx.r3.s64 = ctx.r10.s64 + 2880;
	// addi r11,r11,3236
	ctx.r11.s64 = ctx.r11.s64 + 3236;
	// stw r11,2880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2880, ctx.r11.u32);
	// b 0x821bbe30
	sub_821BBE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B86D0"))) PPC_WEAK_FUNC(sub_827B86D0);
PPC_FUNC_IMPL(__imp__sub_827B86D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x821c1008
	sub_821C1008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B86DC"))) PPC_WEAK_FUNC(sub_827B86DC);
PPC_FUNC_IMPL(__imp__sub_827B86DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B86E0"))) PPC_WEAK_FUNC(sub_827B86E0);
PPC_FUNC_IMPL(__imp__sub_827B86E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,3088
	ctx.r3.s64 = ctx.r11.s64 + 3088;
	// b 0x821c1008
	sub_821C1008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B86EC"))) PPC_WEAK_FUNC(sub_827B86EC);
PPC_FUNC_IMPL(__imp__sub_827B86EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B86F0"))) PPC_WEAK_FUNC(sub_827B86F0);
PPC_FUNC_IMPL(__imp__sub_827B86F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,3288
	ctx.r3.s64 = ctx.r11.s64 + 3288;
	// b 0x821c1ab8
	sub_821C1AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B86FC"))) PPC_WEAK_FUNC(sub_827B86FC);
PPC_FUNC_IMPL(__imp__sub_827B86FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8700"))) PPC_WEAK_FUNC(sub_827B8700);
PPC_FUNC_IMPL(__imp__sub_827B8700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,3568
	ctx.r4.s64 = ctx.r9.s64 + 3568;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827B8728"))) PPC_WEAK_FUNC(sub_827B8728);
PPC_FUNC_IMPL(__imp__sub_827B8728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,5628
	ctx.r3.s64 = ctx.r11.s64 + 5628;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8734"))) PPC_WEAK_FUNC(sub_827B8734);
PPC_FUNC_IMPL(__imp__sub_827B8734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8738"))) PPC_WEAK_FUNC(sub_827B8738);
PPC_FUNC_IMPL(__imp__sub_827B8738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// addi r11,r11,5608
	ctx.r11.s64 = ctx.r11.s64 + 5608;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// b 0x821362c0
	sub_821362C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8748"))) PPC_WEAK_FUNC(sub_827B8748);
PPC_FUNC_IMPL(__imp__sub_827B8748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,5924
	ctx.r3.s64 = ctx.r11.s64 + 5924;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8754"))) PPC_WEAK_FUNC(sub_827B8754);
PPC_FUNC_IMPL(__imp__sub_827B8754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8758"))) PPC_WEAK_FUNC(sub_827B8758);
PPC_FUNC_IMPL(__imp__sub_827B8758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,5892
	ctx.r3.s64 = ctx.r11.s64 + 5892;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8764"))) PPC_WEAK_FUNC(sub_827B8764);
PPC_FUNC_IMPL(__imp__sub_827B8764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8768"))) PPC_WEAK_FUNC(sub_827B8768);
PPC_FUNC_IMPL(__imp__sub_827B8768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,5976
	ctx.r3.s64 = ctx.r11.s64 + 5976;
	// b 0x82608de8
	sub_82608DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8774"))) PPC_WEAK_FUNC(sub_827B8774);
PPC_FUNC_IMPL(__imp__sub_827B8774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8778"))) PPC_WEAK_FUNC(sub_827B8778);
PPC_FUNC_IMPL(__imp__sub_827B8778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,5880
	ctx.r3.s64 = ctx.r11.s64 + 5880;
	// b 0x82138a18
	sub_82138A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8784"))) PPC_WEAK_FUNC(sub_827B8784);
PPC_FUNC_IMPL(__imp__sub_827B8784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8788"))) PPC_WEAK_FUNC(sub_827B8788);
PPC_FUNC_IMPL(__imp__sub_827B8788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r11,r11,6036
	ctx.r11.s64 = ctx.r11.s64 + 6036;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82130588
	sub_82130588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B87A4"))) PPC_WEAK_FUNC(sub_827B87A4);
PPC_FUNC_IMPL(__imp__sub_827B87A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B87A8"))) PPC_WEAK_FUNC(sub_827B87A8);
PPC_FUNC_IMPL(__imp__sub_827B87A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r11,r11,5988
	ctx.r11.s64 = ctx.r11.s64 + 5988;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82130588
	sub_82130588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B87C4"))) PPC_WEAK_FUNC(sub_827B87C4);
PPC_FUNC_IMPL(__imp__sub_827B87C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B87C8"))) PPC_WEAK_FUNC(sub_827B87C8);
PPC_FUNC_IMPL(__imp__sub_827B87C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B87D4"))) PPC_WEAK_FUNC(sub_827B87D4);
PPC_FUNC_IMPL(__imp__sub_827B87D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B87D8"))) PPC_WEAK_FUNC(sub_827B87D8);
PPC_FUNC_IMPL(__imp__sub_827B87D8) {
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
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r31,r11,19856
	ctx.r31.s64 = ctx.r11.s64 + 19856;
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// bl 0x82130000
	ctx.lr = 0x827B87F8;
	sub_82130000(ctx, base);
	// addi r3,r31,1300
	ctx.r3.s64 = ctx.r31.s64 + 1300;
	// bl 0x821362c0
	ctx.lr = 0x827B8800;
	sub_821362C0(ctx, base);
	// addi r3,r31,700
	ctx.r3.s64 = ctx.r31.s64 + 700;
	// bl 0x8214df00
	ctx.lr = 0x827B8808;
	sub_8214DF00(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// bl 0x8215ff40
	ctx.lr = 0x827B8810;
	sub_8215FF40(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x8214ced8
	ctx.lr = 0x827B8818;
	sub_8214CED8(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x821602f0
	ctx.lr = 0x827B8820;
	sub_821602F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821602f0
	ctx.lr = 0x827B8828;
	sub_821602F0(ctx, base);
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

__attribute__((alias("__imp__sub_827B883C"))) PPC_WEAK_FUNC(sub_827B883C);
PPC_FUNC_IMPL(__imp__sub_827B883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8840"))) PPC_WEAK_FUNC(sub_827B8840);
PPC_FUNC_IMPL(__imp__sub_827B8840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-27296
	ctx.r3.s64 = ctx.r11.s64 + -27296;
	// b 0x8218c6b0
	sub_8218C6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B884C"))) PPC_WEAK_FUNC(sub_827B884C);
PPC_FUNC_IMPL(__imp__sub_827B884C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8850"))) PPC_WEAK_FUNC(sub_827B8850);
PPC_FUNC_IMPL(__imp__sub_827B8850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8854"))) PPC_WEAK_FUNC(sub_827B8854);
PPC_FUNC_IMPL(__imp__sub_827B8854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8858"))) PPC_WEAK_FUNC(sub_827B8858);
PPC_FUNC_IMPL(__imp__sub_827B8858) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,-25200
	ctx.r31.s64 = ctx.r11.s64 + -25200;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8218c638
	ctx.lr = 0x827B8878;
	sub_8218C638(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8218c6b0
	ctx.lr = 0x827B8880;
	sub_8218C6B0(ctx, base);
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

__attribute__((alias("__imp__sub_827B8894"))) PPC_WEAK_FUNC(sub_827B8894);
PPC_FUNC_IMPL(__imp__sub_827B8894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8898"))) PPC_WEAK_FUNC(sub_827B8898);
PPC_FUNC_IMPL(__imp__sub_827B8898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B889C"))) PPC_WEAK_FUNC(sub_827B889C);
PPC_FUNC_IMPL(__imp__sub_827B889C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B88A0"))) PPC_WEAK_FUNC(sub_827B88A0);
PPC_FUNC_IMPL(__imp__sub_827B88A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,-25080
	ctx.r11.s64 = ctx.r11.s64 + -25080;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82130588
	sub_82130588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B88BC"))) PPC_WEAK_FUNC(sub_827B88BC);
PPC_FUNC_IMPL(__imp__sub_827B88BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B88C0"))) PPC_WEAK_FUNC(sub_827B88C0);
PPC_FUNC_IMPL(__imp__sub_827B88C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,-25072
	ctx.r11.s64 = ctx.r11.s64 + -25072;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82130588
	sub_82130588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B88DC"))) PPC_WEAK_FUNC(sub_827B88DC);
PPC_FUNC_IMPL(__imp__sub_827B88DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B88E0"))) PPC_WEAK_FUNC(sub_827B88E0);
PPC_FUNC_IMPL(__imp__sub_827B88E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-25044
	ctx.r3.s64 = ctx.r11.s64 + -25044;
	// b 0x8229d838
	sub_8229D838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B88EC"))) PPC_WEAK_FUNC(sub_827B88EC);
PPC_FUNC_IMPL(__imp__sub_827B88EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B88F0"))) PPC_WEAK_FUNC(sub_827B88F0);
PPC_FUNC_IMPL(__imp__sub_827B88F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-24892
	ctx.r3.s64 = ctx.r11.s64 + -24892;
	// b 0x82181a88
	sub_82181A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B88FC"))) PPC_WEAK_FUNC(sub_827B88FC);
PPC_FUNC_IMPL(__imp__sub_827B88FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8900"))) PPC_WEAK_FUNC(sub_827B8900);
PPC_FUNC_IMPL(__imp__sub_827B8900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8904"))) PPC_WEAK_FUNC(sub_827B8904);
PPC_FUNC_IMPL(__imp__sub_827B8904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8908"))) PPC_WEAK_FUNC(sub_827B8908);
PPC_FUNC_IMPL(__imp__sub_827B8908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-24772
	ctx.r3.s64 = ctx.r11.s64 + -24772;
	// b 0x8229d838
	sub_8229D838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8914"))) PPC_WEAK_FUNC(sub_827B8914);
PPC_FUNC_IMPL(__imp__sub_827B8914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8918"))) PPC_WEAK_FUNC(sub_827B8918);
PPC_FUNC_IMPL(__imp__sub_827B8918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B891C"))) PPC_WEAK_FUNC(sub_827B891C);
PPC_FUNC_IMPL(__imp__sub_827B891C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8920"))) PPC_WEAK_FUNC(sub_827B8920);
PPC_FUNC_IMPL(__imp__sub_827B8920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8924"))) PPC_WEAK_FUNC(sub_827B8924);
PPC_FUNC_IMPL(__imp__sub_827B8924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8928"))) PPC_WEAK_FUNC(sub_827B8928);
PPC_FUNC_IMPL(__imp__sub_827B8928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-14916
	ctx.r3.s64 = ctx.r11.s64 + -14916;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8934"))) PPC_WEAK_FUNC(sub_827B8934);
PPC_FUNC_IMPL(__imp__sub_827B8934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8938"))) PPC_WEAK_FUNC(sub_827B8938);
PPC_FUNC_IMPL(__imp__sub_827B8938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-17992
	ctx.r3.s64 = ctx.r11.s64 + -17992;
	// b 0x8218bc88
	sub_8218BC88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8944"))) PPC_WEAK_FUNC(sub_827B8944);
PPC_FUNC_IMPL(__imp__sub_827B8944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8948"))) PPC_WEAK_FUNC(sub_827B8948);
PPC_FUNC_IMPL(__imp__sub_827B8948) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,-13352
	ctx.r31.s64 = ctx.r11.s64 + -13352;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8990
	if (ctx.cr6.eq) goto loc_827B8990;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82194380
	ctx.lr = 0x827B8978;
	sub_82194380(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r31.u32);
	// stw r31,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_827B8990:
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

__attribute__((alias("__imp__sub_827B89A4"))) PPC_WEAK_FUNC(sub_827B89A4);
PPC_FUNC_IMPL(__imp__sub_827B89A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B89A8"))) PPC_WEAK_FUNC(sub_827B89A8);
PPC_FUNC_IMPL(__imp__sub_827B89A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// addi r3,r11,25480
	ctx.r3.s64 = ctx.r11.s64 + 25480;
	// b 0x821966b8
	sub_821966B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B89B4"))) PPC_WEAK_FUNC(sub_827B89B4);
PPC_FUNC_IMPL(__imp__sub_827B89B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B89B8"))) PPC_WEAK_FUNC(sub_827B89B8);
PPC_FUNC_IMPL(__imp__sub_827B89B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// addi r3,r11,25648
	ctx.r3.s64 = ctx.r11.s64 + 25648;
	// b 0x82199450
	sub_82199450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B89C4"))) PPC_WEAK_FUNC(sub_827B89C4);
PPC_FUNC_IMPL(__imp__sub_827B89C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B89C8"))) PPC_WEAK_FUNC(sub_827B89C8);
PPC_FUNC_IMPL(__imp__sub_827B89C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,-11804
	ctx.r3.s64 = ctx.r11.s64 + -11804;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B89D4"))) PPC_WEAK_FUNC(sub_827B89D4);
PPC_FUNC_IMPL(__imp__sub_827B89D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B89D8"))) PPC_WEAK_FUNC(sub_827B89D8);
PPC_FUNC_IMPL(__imp__sub_827B89D8) {
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
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r11,-27368
	ctx.r10.s64 = ctx.r11.s64 + -27368;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r31,r11,9256
	ctx.r31.s64 = ctx.r11.s64 + 9256;
loc_827B8A00:
	// addi r31,r31,-24948
	ctx.r31.s64 = ctx.r31.s64 + -24948;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x821c9158
	ctx.lr = 0x827B8A0C;
	sub_821C9158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130000
	ctx.lr = 0x827B8A14;
	sub_82130000(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b8a00
	if (!ctx.cr0.lt) goto loc_827B8A00;
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

__attribute__((alias("__imp__sub_827B8A34"))) PPC_WEAK_FUNC(sub_827B8A34);
PPC_FUNC_IMPL(__imp__sub_827B8A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8A38"))) PPC_WEAK_FUNC(sub_827B8A38);
PPC_FUNC_IMPL(__imp__sub_827B8A38) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r11,-11752
	ctx.r10.s64 = ctx.r11.s64 + -11752;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r31,r11,9256
	ctx.r31.s64 = ctx.r11.s64 + 9256;
loc_827B8A60:
	// addi r31,r31,-24948
	ctx.r31.s64 = ctx.r31.s64 + -24948;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x821c9158
	ctx.lr = 0x827B8A6C;
	sub_821C9158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130000
	ctx.lr = 0x827B8A74;
	sub_82130000(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b8a60
	if (!ctx.cr0.lt) goto loc_827B8A60;
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

__attribute__((alias("__imp__sub_827B8A94"))) PPC_WEAK_FUNC(sub_827B8A94);
PPC_FUNC_IMPL(__imp__sub_827B8A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8A98"))) PPC_WEAK_FUNC(sub_827B8A98);
PPC_FUNC_IMPL(__imp__sub_827B8A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// addi r11,r11,4388
	ctx.r11.s64 = ctx.r11.s64 + 4388;
	// stw r11,29952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8AAC"))) PPC_WEAK_FUNC(sub_827B8AAC);
PPC_FUNC_IMPL(__imp__sub_827B8AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8AB0"))) PPC_WEAK_FUNC(sub_827B8AB0);
PPC_FUNC_IMPL(__imp__sub_827B8AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,22936
	ctx.r3.s64 = ctx.r11.s64 + 22936;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8ABC"))) PPC_WEAK_FUNC(sub_827B8ABC);
PPC_FUNC_IMPL(__imp__sub_827B8ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8AC0"))) PPC_WEAK_FUNC(sub_827B8AC0);
PPC_FUNC_IMPL(__imp__sub_827B8AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8AC4"))) PPC_WEAK_FUNC(sub_827B8AC4);
PPC_FUNC_IMPL(__imp__sub_827B8AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8AC8"))) PPC_WEAK_FUNC(sub_827B8AC8);
PPC_FUNC_IMPL(__imp__sub_827B8AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,23016
	ctx.r3.s64 = ctx.r11.s64 + 23016;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8AD4"))) PPC_WEAK_FUNC(sub_827B8AD4);
PPC_FUNC_IMPL(__imp__sub_827B8AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8AD8"))) PPC_WEAK_FUNC(sub_827B8AD8);
PPC_FUNC_IMPL(__imp__sub_827B8AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,23052
	ctx.r3.s64 = ctx.r11.s64 + 23052;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8AE4"))) PPC_WEAK_FUNC(sub_827B8AE4);
PPC_FUNC_IMPL(__imp__sub_827B8AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8AE8"))) PPC_WEAK_FUNC(sub_827B8AE8);
PPC_FUNC_IMPL(__imp__sub_827B8AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r3,r11,24108
	ctx.r3.s64 = ctx.r11.s64 + 24108;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8AF4"))) PPC_WEAK_FUNC(sub_827B8AF4);
PPC_FUNC_IMPL(__imp__sub_827B8AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8AF8"))) PPC_WEAK_FUNC(sub_827B8AF8);
PPC_FUNC_IMPL(__imp__sub_827B8AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8AFC"))) PPC_WEAK_FUNC(sub_827B8AFC);
PPC_FUNC_IMPL(__imp__sub_827B8AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8B00"))) PPC_WEAK_FUNC(sub_827B8B00);
PPC_FUNC_IMPL(__imp__sub_827B8B00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8B04"))) PPC_WEAK_FUNC(sub_827B8B04);
PPC_FUNC_IMPL(__imp__sub_827B8B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8B08"))) PPC_WEAK_FUNC(sub_827B8B08);
PPC_FUNC_IMPL(__imp__sub_827B8B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// addi r3,r11,1812
	ctx.r3.s64 = ctx.r11.s64 + 1812;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8B14"))) PPC_WEAK_FUNC(sub_827B8B14);
PPC_FUNC_IMPL(__imp__sub_827B8B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8B18"))) PPC_WEAK_FUNC(sub_827B8B18);
PPC_FUNC_IMPL(__imp__sub_827B8B18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8B1C"))) PPC_WEAK_FUNC(sub_827B8B1C);
PPC_FUNC_IMPL(__imp__sub_827B8B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8B20"))) PPC_WEAK_FUNC(sub_827B8B20);
PPC_FUNC_IMPL(__imp__sub_827B8B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r11,r11,8300
	ctx.r11.s64 = ctx.r11.s64 + 8300;
	// stw r11,-31864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8B34"))) PPC_WEAK_FUNC(sub_827B8B34);
PPC_FUNC_IMPL(__imp__sub_827B8B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8B38"))) PPC_WEAK_FUNC(sub_827B8B38);
PPC_FUNC_IMPL(__imp__sub_827B8B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r11,r11,8300
	ctx.r11.s64 = ctx.r11.s64 + 8300;
	// stw r11,-31860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31860, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8B4C"))) PPC_WEAK_FUNC(sub_827B8B4C);
PPC_FUNC_IMPL(__imp__sub_827B8B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8B50"))) PPC_WEAK_FUNC(sub_827B8B50);
PPC_FUNC_IMPL(__imp__sub_827B8B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// addi r3,r11,2116
	ctx.r3.s64 = ctx.r11.s64 + 2116;
	// lhz r5,6(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821cb988
	sub_821CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8B6C"))) PPC_WEAK_FUNC(sub_827B8B6C);
PPC_FUNC_IMPL(__imp__sub_827B8B6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8B70"))) PPC_WEAK_FUNC(sub_827B8B70);
PPC_FUNC_IMPL(__imp__sub_827B8B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32122
	ctx.r11.s64 = -2105147392;
	// addi r3,r11,2772
	ctx.r3.s64 = ctx.r11.s64 + 2772;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8B7C"))) PPC_WEAK_FUNC(sub_827B8B7C);
PPC_FUNC_IMPL(__imp__sub_827B8B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8B80"))) PPC_WEAK_FUNC(sub_827B8B80);
PPC_FUNC_IMPL(__imp__sub_827B8B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r11,r11,8300
	ctx.r11.s64 = ctx.r11.s64 + 8300;
	// stw r11,-30668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8B94"))) PPC_WEAK_FUNC(sub_827B8B94);
PPC_FUNC_IMPL(__imp__sub_827B8B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8B98"))) PPC_WEAK_FUNC(sub_827B8B98);
PPC_FUNC_IMPL(__imp__sub_827B8B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// addi r11,r11,-30104
	ctx.r11.s64 = ctx.r11.s64 + -30104;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82130588
	sub_82130588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8BB4"))) PPC_WEAK_FUNC(sub_827B8BB4);
PPC_FUNC_IMPL(__imp__sub_827B8BB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8BB8"))) PPC_WEAK_FUNC(sub_827B8BB8);
PPC_FUNC_IMPL(__imp__sub_827B8BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r8,-29884
	ctx.r7.s64 = ctx.r8.s64 + -29884;
	// addi r10,r10,31476
	ctx.r10.s64 = ctx.r10.s64 + 31476;
	// lwz r9,-12720(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12720);
	// stw r10,-29884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29884, ctx.r10.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-12720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12720, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8BE8"))) PPC_WEAK_FUNC(sub_827B8BE8);
PPC_FUNC_IMPL(__imp__sub_827B8BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8BEC"))) PPC_WEAK_FUNC(sub_827B8BEC);
PPC_FUNC_IMPL(__imp__sub_827B8BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8BF0"))) PPC_WEAK_FUNC(sub_827B8BF0);
PPC_FUNC_IMPL(__imp__sub_827B8BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8BF4"))) PPC_WEAK_FUNC(sub_827B8BF4);
PPC_FUNC_IMPL(__imp__sub_827B8BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8BF8"))) PPC_WEAK_FUNC(sub_827B8BF8);
PPC_FUNC_IMPL(__imp__sub_827B8BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r11,r11,-21856
	ctx.r11.s64 = ctx.r11.s64 + -21856;
	// stw r11,-22444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8C0C"))) PPC_WEAK_FUNC(sub_827B8C0C);
PPC_FUNC_IMPL(__imp__sub_827B8C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8C10"))) PPC_WEAK_FUNC(sub_827B8C10);
PPC_FUNC_IMPL(__imp__sub_827B8C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// b 0x824e6b58
	sub_824E6B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8C1C"))) PPC_WEAK_FUNC(sub_827B8C1C);
PPC_FUNC_IMPL(__imp__sub_827B8C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8C20"))) PPC_WEAK_FUNC(sub_827B8C20);
PPC_FUNC_IMPL(__imp__sub_827B8C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-4336
	ctx.r3.s64 = ctx.r11.s64 + -4336;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8C2C"))) PPC_WEAK_FUNC(sub_827B8C2C);
PPC_FUNC_IMPL(__imp__sub_827B8C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8C30"))) PPC_WEAK_FUNC(sub_827B8C30);
PPC_FUNC_IMPL(__imp__sub_827B8C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-3040
	ctx.r3.s64 = ctx.r11.s64 + -3040;
	// b 0x824f0700
	sub_824F0700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8C3C"))) PPC_WEAK_FUNC(sub_827B8C3C);
PPC_FUNC_IMPL(__imp__sub_827B8C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8C40"))) PPC_WEAK_FUNC(sub_827B8C40);
PPC_FUNC_IMPL(__imp__sub_827B8C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-3348
	ctx.r3.s64 = ctx.r11.s64 + -3348;
	// b 0x824f0700
	sub_824F0700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8C4C"))) PPC_WEAK_FUNC(sub_827B8C4C);
PPC_FUNC_IMPL(__imp__sub_827B8C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8C50"))) PPC_WEAK_FUNC(sub_827B8C50);
PPC_FUNC_IMPL(__imp__sub_827B8C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-3404
	ctx.r3.s64 = ctx.r11.s64 + -3404;
	// b 0x824f0700
	sub_824F0700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8C5C"))) PPC_WEAK_FUNC(sub_827B8C5C);
PPC_FUNC_IMPL(__imp__sub_827B8C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8C60"))) PPC_WEAK_FUNC(sub_827B8C60);
PPC_FUNC_IMPL(__imp__sub_827B8C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-3096
	ctx.r3.s64 = ctx.r11.s64 + -3096;
	// b 0x824f0700
	sub_824F0700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8C6C"))) PPC_WEAK_FUNC(sub_827B8C6C);
PPC_FUNC_IMPL(__imp__sub_827B8C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8C70"))) PPC_WEAK_FUNC(sub_827B8C70);
PPC_FUNC_IMPL(__imp__sub_827B8C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-3232
	ctx.r3.s64 = ctx.r11.s64 + -3232;
	// b 0x824f0700
	sub_824F0700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8C7C"))) PPC_WEAK_FUNC(sub_827B8C7C);
PPC_FUNC_IMPL(__imp__sub_827B8C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8C80"))) PPC_WEAK_FUNC(sub_827B8C80);
PPC_FUNC_IMPL(__imp__sub_827B8C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-3500
	ctx.r3.s64 = ctx.r11.s64 + -3500;
	// b 0x824f0700
	sub_824F0700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8C8C"))) PPC_WEAK_FUNC(sub_827B8C8C);
PPC_FUNC_IMPL(__imp__sub_827B8C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8C90"))) PPC_WEAK_FUNC(sub_827B8C90);
PPC_FUNC_IMPL(__imp__sub_827B8C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-3556
	ctx.r3.s64 = ctx.r11.s64 + -3556;
	// b 0x824f0700
	sub_824F0700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8C9C"))) PPC_WEAK_FUNC(sub_827B8C9C);
PPC_FUNC_IMPL(__imp__sub_827B8C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8CA0"))) PPC_WEAK_FUNC(sub_827B8CA0);
PPC_FUNC_IMPL(__imp__sub_827B8CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// addi r11,r11,-2620
	ctx.r11.s64 = ctx.r11.s64 + -2620;
	// stw r11,-11588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8CB4"))) PPC_WEAK_FUNC(sub_827B8CB4);
PPC_FUNC_IMPL(__imp__sub_827B8CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8CB8"))) PPC_WEAK_FUNC(sub_827B8CB8);
PPC_FUNC_IMPL(__imp__sub_827B8CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,-2984
	ctx.r3.s64 = ctx.r11.s64 + -2984;
	// b 0x82489608
	sub_82489608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8CC4"))) PPC_WEAK_FUNC(sub_827B8CC4);
PPC_FUNC_IMPL(__imp__sub_827B8CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8CC8"))) PPC_WEAK_FUNC(sub_827B8CC8);
PPC_FUNC_IMPL(__imp__sub_827B8CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,8892
	ctx.r3.s64 = ctx.r11.s64 + 8892;
	// b 0x824fa9b0
	sub_824FA9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8CD4"))) PPC_WEAK_FUNC(sub_827B8CD4);
PPC_FUNC_IMPL(__imp__sub_827B8CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8CD8"))) PPC_WEAK_FUNC(sub_827B8CD8);
PPC_FUNC_IMPL(__imp__sub_827B8CD8) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,8796
	ctx.r30.s64 = ctx.r31.s64 + 8796;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,8796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8796, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B8D04;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B8D0C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,8796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8796, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B8D30"))) PPC_WEAK_FUNC(sub_827B8D30);
PPC_FUNC_IMPL(__imp__sub_827B8D30) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,8828
	ctx.r30.s64 = ctx.r31.s64 + 8828;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,8828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8828, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B8D5C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B8D64;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,8828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8828, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B8D88"))) PPC_WEAK_FUNC(sub_827B8D88);
PPC_FUNC_IMPL(__imp__sub_827B8D88) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,8860
	ctx.r30.s64 = ctx.r31.s64 + 8860;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,8860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8860, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B8DB4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B8DBC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,8860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8860, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B8DE0"))) PPC_WEAK_FUNC(sub_827B8DE0);
PPC_FUNC_IMPL(__imp__sub_827B8DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r9,8924
	ctx.r8.s64 = ctx.r9.s64 + 8924;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stw r10,8924(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8924, ctx.r10.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8E04"))) PPC_WEAK_FUNC(sub_827B8E04);
PPC_FUNC_IMPL(__imp__sub_827B8E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8E08"))) PPC_WEAK_FUNC(sub_827B8E08);
PPC_FUNC_IMPL(__imp__sub_827B8E08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B8E0C"))) PPC_WEAK_FUNC(sub_827B8E0C);
PPC_FUNC_IMPL(__imp__sub_827B8E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8E10"))) PPC_WEAK_FUNC(sub_827B8E10);
PPC_FUNC_IMPL(__imp__sub_827B8E10) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,15992
	ctx.r30.s64 = ctx.r31.s64 + 15992;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,15992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15992, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B8E3C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B8E44;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,15992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15992, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B8E68"))) PPC_WEAK_FUNC(sub_827B8E68);
PPC_FUNC_IMPL(__imp__sub_827B8E68) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16088
	ctx.r30.s64 = ctx.r31.s64 + 16088;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16088, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B8E94;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B8E9C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16088, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B8EC0"))) PPC_WEAK_FUNC(sub_827B8EC0);
PPC_FUNC_IMPL(__imp__sub_827B8EC0) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16376
	ctx.r30.s64 = ctx.r31.s64 + 16376;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16376, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B8EEC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B8EF4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16376, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B8F18"))) PPC_WEAK_FUNC(sub_827B8F18);
PPC_FUNC_IMPL(__imp__sub_827B8F18) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16664
	ctx.r30.s64 = ctx.r31.s64 + 16664;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16664, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B8F44;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B8F4C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16664, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B8F70"))) PPC_WEAK_FUNC(sub_827B8F70);
PPC_FUNC_IMPL(__imp__sub_827B8F70) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16312
	ctx.r30.s64 = ctx.r31.s64 + 16312;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16312, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B8F9C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B8FA4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16312, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B8FC8"))) PPC_WEAK_FUNC(sub_827B8FC8);
PPC_FUNC_IMPL(__imp__sub_827B8FC8) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16536
	ctx.r30.s64 = ctx.r31.s64 + 16536;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16536, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B8FF4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B8FFC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16536, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9020"))) PPC_WEAK_FUNC(sub_827B9020);
PPC_FUNC_IMPL(__imp__sub_827B9020) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16600
	ctx.r30.s64 = ctx.r31.s64 + 16600;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16600, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B904C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B9054;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16600, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9078"))) PPC_WEAK_FUNC(sub_827B9078);
PPC_FUNC_IMPL(__imp__sub_827B9078) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16152
	ctx.r30.s64 = ctx.r31.s64 + 16152;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16152, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B90A4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B90AC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B90D0"))) PPC_WEAK_FUNC(sub_827B90D0);
PPC_FUNC_IMPL(__imp__sub_827B90D0) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16408
	ctx.r30.s64 = ctx.r31.s64 + 16408;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16408, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B90FC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B9104;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16408, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9128"))) PPC_WEAK_FUNC(sub_827B9128);
PPC_FUNC_IMPL(__imp__sub_827B9128) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16280
	ctx.r30.s64 = ctx.r31.s64 + 16280;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16280, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B9154;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B915C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16280, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9180"))) PPC_WEAK_FUNC(sub_827B9180);
PPC_FUNC_IMPL(__imp__sub_827B9180) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16568
	ctx.r30.s64 = ctx.r31.s64 + 16568;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16568, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B91AC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B91B4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16568, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B91D8"))) PPC_WEAK_FUNC(sub_827B91D8);
PPC_FUNC_IMPL(__imp__sub_827B91D8) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16216
	ctx.r30.s64 = ctx.r31.s64 + 16216;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16216, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B9204;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B920C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16216, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9230"))) PPC_WEAK_FUNC(sub_827B9230);
PPC_FUNC_IMPL(__imp__sub_827B9230) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16440
	ctx.r30.s64 = ctx.r31.s64 + 16440;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B925C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B9264;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9288"))) PPC_WEAK_FUNC(sub_827B9288);
PPC_FUNC_IMPL(__imp__sub_827B9288) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16056
	ctx.r30.s64 = ctx.r31.s64 + 16056;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16056, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B92B4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B92BC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16056, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B92E0"))) PPC_WEAK_FUNC(sub_827B92E0);
PPC_FUNC_IMPL(__imp__sub_827B92E0) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16472
	ctx.r30.s64 = ctx.r31.s64 + 16472;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16472, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B930C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B9314;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16472, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9338"))) PPC_WEAK_FUNC(sub_827B9338);
PPC_FUNC_IMPL(__imp__sub_827B9338) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16120
	ctx.r30.s64 = ctx.r31.s64 + 16120;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16120, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B9364;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B936C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9390"))) PPC_WEAK_FUNC(sub_827B9390);
PPC_FUNC_IMPL(__imp__sub_827B9390) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16696
	ctx.r30.s64 = ctx.r31.s64 + 16696;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16696, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B93BC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B93C4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16696, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B93E8"))) PPC_WEAK_FUNC(sub_827B93E8);
PPC_FUNC_IMPL(__imp__sub_827B93E8) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16184
	ctx.r30.s64 = ctx.r31.s64 + 16184;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16184, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B9414;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B941C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16184, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9440"))) PPC_WEAK_FUNC(sub_827B9440);
PPC_FUNC_IMPL(__imp__sub_827B9440) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16248
	ctx.r30.s64 = ctx.r31.s64 + 16248;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16248, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B946C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B9474;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16248, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9498"))) PPC_WEAK_FUNC(sub_827B9498);
PPC_FUNC_IMPL(__imp__sub_827B9498) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16792
	ctx.r30.s64 = ctx.r31.s64 + 16792;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16792, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B94C4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B94CC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16792, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B94F0"))) PPC_WEAK_FUNC(sub_827B94F0);
PPC_FUNC_IMPL(__imp__sub_827B94F0) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16344
	ctx.r30.s64 = ctx.r31.s64 + 16344;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16344, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B951C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B9524;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16344, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9548"))) PPC_WEAK_FUNC(sub_827B9548);
PPC_FUNC_IMPL(__imp__sub_827B9548) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16504
	ctx.r30.s64 = ctx.r31.s64 + 16504;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16504, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B9574;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B957C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16504, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B95A0"))) PPC_WEAK_FUNC(sub_827B95A0);
PPC_FUNC_IMPL(__imp__sub_827B95A0) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16024
	ctx.r30.s64 = ctx.r31.s64 + 16024;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16024, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B95CC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B95D4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16024, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B95F8"))) PPC_WEAK_FUNC(sub_827B95F8);
PPC_FUNC_IMPL(__imp__sub_827B95F8) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16760
	ctx.r30.s64 = ctx.r31.s64 + 16760;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16760, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B9624;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B962C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16760, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9650"))) PPC_WEAK_FUNC(sub_827B9650);
PPC_FUNC_IMPL(__imp__sub_827B9650) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16728
	ctx.r30.s64 = ctx.r31.s64 + 16728;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16728, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B967C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B9684;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16728, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B96A8"))) PPC_WEAK_FUNC(sub_827B96A8);
PPC_FUNC_IMPL(__imp__sub_827B96A8) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16632
	ctx.r30.s64 = ctx.r31.s64 + 16632;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16632, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B96D4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B96DC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16632, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9700"))) PPC_WEAK_FUNC(sub_827B9700);
PPC_FUNC_IMPL(__imp__sub_827B9700) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16844
	ctx.r30.s64 = ctx.r31.s64 + 16844;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16844, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B972C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B9734;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16844, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9758"))) PPC_WEAK_FUNC(sub_827B9758);
PPC_FUNC_IMPL(__imp__sub_827B9758) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16896
	ctx.r30.s64 = ctx.r31.s64 + 16896;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16896, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B9784;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B978C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16896, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B97B0"))) PPC_WEAK_FUNC(sub_827B97B0);
PPC_FUNC_IMPL(__imp__sub_827B97B0) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16928
	ctx.r30.s64 = ctx.r31.s64 + 16928;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16928, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B97DC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B97E4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16928, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9808"))) PPC_WEAK_FUNC(sub_827B9808);
PPC_FUNC_IMPL(__imp__sub_827B9808) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16960
	ctx.r30.s64 = ctx.r31.s64 + 16960;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16960, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B9834;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B983C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16960, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9860"))) PPC_WEAK_FUNC(sub_827B9860);
PPC_FUNC_IMPL(__imp__sub_827B9860) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,17024
	ctx.r30.s64 = ctx.r31.s64 + 17024;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,17024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17024, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B988C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B9894;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,17024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17024, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B98B8"))) PPC_WEAK_FUNC(sub_827B98B8);
PPC_FUNC_IMPL(__imp__sub_827B98B8) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,16992
	ctx.r30.s64 = ctx.r31.s64 + 16992;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,16992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16992, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B98E4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B98EC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,16992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16992, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9910"))) PPC_WEAK_FUNC(sub_827B9910);
PPC_FUNC_IMPL(__imp__sub_827B9910) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,17056
	ctx.r30.s64 = ctx.r31.s64 + 17056;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,17056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17056, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B993C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827B9944;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,17056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17056, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B9968"))) PPC_WEAK_FUNC(sub_827B9968);
PPC_FUNC_IMPL(__imp__sub_827B9968) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r9,17088
	ctx.r8.s64 = ctx.r9.s64 + 17088;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stw r10,17088(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17088, ctx.r10.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B998C"))) PPC_WEAK_FUNC(sub_827B998C);
PPC_FUNC_IMPL(__imp__sub_827B998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B9990"))) PPC_WEAK_FUNC(sub_827B9990);
PPC_FUNC_IMPL(__imp__sub_827B9990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// addi r3,r11,17592
	ctx.r3.s64 = ctx.r11.s64 + 17592;
	// b 0x824e0430
	sub_824E0430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B999C"))) PPC_WEAK_FUNC(sub_827B999C);
PPC_FUNC_IMPL(__imp__sub_827B999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B99A0"))) PPC_WEAK_FUNC(sub_827B99A0);
PPC_FUNC_IMPL(__imp__sub_827B99A0) {
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
	// lis r31,-32121
	ctx.r31.s64 = -2105081856;
	// addi r30,r31,18180
	ctx.r30.s64 = ctx.r31.s64 + 18180;
	// lwz r3,18180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18180);
	// bl 0x82130588
	ctx.lr = 0x827B99C4;
	sub_82130588(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,18180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18180, ctx.r11.u32);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// sth r9,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r9.u16);
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

__attribute__((alias("__imp__sub_827B99F4"))) PPC_WEAK_FUNC(sub_827B99F4);
PPC_FUNC_IMPL(__imp__sub_827B99F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B99F8"))) PPC_WEAK_FUNC(sub_827B99F8);
PPC_FUNC_IMPL(__imp__sub_827B99F8) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r31,r11,-30432
	ctx.r31.s64 = ctx.r11.s64 + -30432;
	// lbz r11,410(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 410);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b9a24
	if (ctx.cr6.eq) goto loc_827B9A24;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82130588
	ctx.lr = 0x827B9A24;
	sub_82130588(ctx, base);
loc_827B9A24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130000
	ctx.lr = 0x827B9A2C;
	sub_82130000(ctx, base);
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

__attribute__((alias("__imp__sub_827B9A40"))) PPC_WEAK_FUNC(sub_827B9A40);
PPC_FUNC_IMPL(__imp__sub_827B9A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-14240
	ctx.r3.s64 = ctx.r11.s64 + -14240;
	// b 0x8217cb48
	sub_8217CB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B9A4C"))) PPC_WEAK_FUNC(sub_827B9A4C);
PPC_FUNC_IMPL(__imp__sub_827B9A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B9A50"))) PPC_WEAK_FUNC(sub_827B9A50);
PPC_FUNC_IMPL(__imp__sub_827B9A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-12976
	ctx.r3.s64 = ctx.r11.s64 + -12976;
	// b 0x8217cb48
	sub_8217CB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B9A5C"))) PPC_WEAK_FUNC(sub_827B9A5C);
PPC_FUNC_IMPL(__imp__sub_827B9A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B9A60"))) PPC_WEAK_FUNC(sub_827B9A60);
PPC_FUNC_IMPL(__imp__sub_827B9A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,-13248
	ctx.r3.s64 = ctx.r11.s64 + -13248;
	// b 0x822d8c78
	sub_822D8C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B9A6C"))) PPC_WEAK_FUNC(sub_827B9A6C);
PPC_FUNC_IMPL(__imp__sub_827B9A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B9A70"))) PPC_WEAK_FUNC(sub_827B9A70);
PPC_FUNC_IMPL(__imp__sub_827B9A70) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-11552
	ctx.r11.s64 = ctx.r11.s64 + -11552;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9A94:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9AA0;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9a94
	if (!ctx.cr0.lt) goto loc_827B9A94;
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

__attribute__((alias("__imp__sub_827B9AC0"))) PPC_WEAK_FUNC(sub_827B9AC0);
PPC_FUNC_IMPL(__imp__sub_827B9AC0) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-11712
	ctx.r11.s64 = ctx.r11.s64 + -11712;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9AE4:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9AF0;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9ae4
	if (!ctx.cr0.lt) goto loc_827B9AE4;
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

__attribute__((alias("__imp__sub_827B9B10"))) PPC_WEAK_FUNC(sub_827B9B10);
PPC_FUNC_IMPL(__imp__sub_827B9B10) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-11052
	ctx.r11.s64 = ctx.r11.s64 + -11052;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9B34:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9B40;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9b34
	if (!ctx.cr0.lt) goto loc_827B9B34;
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

__attribute__((alias("__imp__sub_827B9B60"))) PPC_WEAK_FUNC(sub_827B9B60);
PPC_FUNC_IMPL(__imp__sub_827B9B60) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-10252
	ctx.r11.s64 = ctx.r11.s64 + -10252;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9B84:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9B90;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9b84
	if (!ctx.cr0.lt) goto loc_827B9B84;
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

__attribute__((alias("__imp__sub_827B9BB0"))) PPC_WEAK_FUNC(sub_827B9BB0);
PPC_FUNC_IMPL(__imp__sub_827B9BB0) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-10892
	ctx.r11.s64 = ctx.r11.s64 + -10892;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9BD4:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9BE0;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9bd4
	if (!ctx.cr0.lt) goto loc_827B9BD4;
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

__attribute__((alias("__imp__sub_827B9C00"))) PPC_WEAK_FUNC(sub_827B9C00);
PPC_FUNC_IMPL(__imp__sub_827B9C00) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-9932
	ctx.r11.s64 = ctx.r11.s64 + -9932;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9C24:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9C30;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9c24
	if (!ctx.cr0.lt) goto loc_827B9C24;
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

__attribute__((alias("__imp__sub_827B9C50"))) PPC_WEAK_FUNC(sub_827B9C50);
PPC_FUNC_IMPL(__imp__sub_827B9C50) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-10732
	ctx.r11.s64 = ctx.r11.s64 + -10732;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9C74:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9C80;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9c74
	if (!ctx.cr0.lt) goto loc_827B9C74;
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

