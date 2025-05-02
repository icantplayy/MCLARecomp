#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827B2B88"))) PPC_WEAK_FUNC(sub_827B2B88);
PPC_FUNC_IMPL(__imp__sub_827B2B88) {
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
	// addi r30,r31,30480
	ctx.r30.s64 = ctx.r31.s64 + 30480;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,27432
	ctx.r5.s64 = ctx.r10.s64 + 27432;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B2BC0;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,30480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30480, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B2BD0;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2BD8;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27428
	ctx.r11.s64 = ctx.r11.s64 + 27428;
	// addi r3,r9,-18616
	ctx.r3.s64 = ctx.r9.s64 + -18616;
	// stw r11,30480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30480, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2BF0;
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

__attribute__((alias("__imp__sub_827B2C08"))) PPC_WEAK_FUNC(sub_827B2C08);
PPC_FUNC_IMPL(__imp__sub_827B2C08) {
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
	// addi r30,r31,32120
	ctx.r30.s64 = ctx.r31.s64 + 32120;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,27604
	ctx.r6.s64 = ctx.r10.s64 + 27604;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2C44;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32120, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B2C54;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2C5C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27600
	ctx.r11.s64 = ctx.r11.s64 + 27600;
	// addi r3,r9,-18448
	ctx.r3.s64 = ctx.r9.s64 + -18448;
	// stw r11,32120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32120, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2C74;
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

__attribute__((alias("__imp__sub_827B2C8C"))) PPC_WEAK_FUNC(sub_827B2C8C);
PPC_FUNC_IMPL(__imp__sub_827B2C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2C90"))) PPC_WEAK_FUNC(sub_827B2C90);
PPC_FUNC_IMPL(__imp__sub_827B2C90) {
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
	// addi r30,r31,31896
	ctx.r30.s64 = ctx.r31.s64 + 31896;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,27632
	ctx.r6.s64 = ctx.r10.s64 + 27632;
	// li r5,101
	ctx.r5.s64 = 101;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2CCC;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31896, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B2CDC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2CE4;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27628
	ctx.r11.s64 = ctx.r11.s64 + 27628;
	// addi r3,r9,-18360
	ctx.r3.s64 = ctx.r9.s64 + -18360;
	// stw r11,31896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31896, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2CFC;
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

__attribute__((alias("__imp__sub_827B2D14"))) PPC_WEAK_FUNC(sub_827B2D14);
PPC_FUNC_IMPL(__imp__sub_827B2D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2D18"))) PPC_WEAK_FUNC(sub_827B2D18);
PPC_FUNC_IMPL(__imp__sub_827B2D18) {
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
	// addi r30,r31,31960
	ctx.r30.s64 = ctx.r31.s64 + 31960;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,27672
	ctx.r6.s64 = ctx.r10.s64 + 27672;
	// li r5,102
	ctx.r5.s64 = 102;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2D54;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31960, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B2D64;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2D6C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27668
	ctx.r11.s64 = ctx.r11.s64 + 27668;
	// addi r3,r9,-18272
	ctx.r3.s64 = ctx.r9.s64 + -18272;
	// stw r11,31960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31960, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2D84;
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

__attribute__((alias("__imp__sub_827B2D9C"))) PPC_WEAK_FUNC(sub_827B2D9C);
PPC_FUNC_IMPL(__imp__sub_827B2D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2DA0"))) PPC_WEAK_FUNC(sub_827B2DA0);
PPC_FUNC_IMPL(__imp__sub_827B2DA0) {
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
	// addi r30,r31,31704
	ctx.r30.s64 = ctx.r31.s64 + 31704;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,27712
	ctx.r6.s64 = ctx.r10.s64 + 27712;
	// li r5,103
	ctx.r5.s64 = 103;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2DDC;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31704, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B2DEC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2DF4;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27708
	ctx.r11.s64 = ctx.r11.s64 + 27708;
	// addi r3,r9,-18184
	ctx.r3.s64 = ctx.r9.s64 + -18184;
	// stw r11,31704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31704, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2E0C;
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

__attribute__((alias("__imp__sub_827B2E24"))) PPC_WEAK_FUNC(sub_827B2E24);
PPC_FUNC_IMPL(__imp__sub_827B2E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2E28"))) PPC_WEAK_FUNC(sub_827B2E28);
PPC_FUNC_IMPL(__imp__sub_827B2E28) {
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
	// addi r30,r31,31576
	ctx.r30.s64 = ctx.r31.s64 + 31576;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,27752
	ctx.r6.s64 = ctx.r10.s64 + 27752;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2E64;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31576, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B2E74;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2E7C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27748
	ctx.r11.s64 = ctx.r11.s64 + 27748;
	// addi r3,r9,-18096
	ctx.r3.s64 = ctx.r9.s64 + -18096;
	// stw r11,31576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31576, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2E94;
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

__attribute__((alias("__imp__sub_827B2EAC"))) PPC_WEAK_FUNC(sub_827B2EAC);
PPC_FUNC_IMPL(__imp__sub_827B2EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2EB0"))) PPC_WEAK_FUNC(sub_827B2EB0);
PPC_FUNC_IMPL(__imp__sub_827B2EB0) {
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
	// addi r30,r31,31800
	ctx.r30.s64 = ctx.r31.s64 + 31800;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,27788
	ctx.r6.s64 = ctx.r10.s64 + 27788;
	// li r5,105
	ctx.r5.s64 = 105;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2EEC;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31800, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B2EFC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2F04;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27784
	ctx.r11.s64 = ctx.r11.s64 + 27784;
	// addi r3,r9,-18008
	ctx.r3.s64 = ctx.r9.s64 + -18008;
	// stw r11,31800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31800, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2F1C;
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

__attribute__((alias("__imp__sub_827B2F34"))) PPC_WEAK_FUNC(sub_827B2F34);
PPC_FUNC_IMPL(__imp__sub_827B2F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2F38"))) PPC_WEAK_FUNC(sub_827B2F38);
PPC_FUNC_IMPL(__imp__sub_827B2F38) {
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
	// addi r30,r31,30580
	ctx.r30.s64 = ctx.r31.s64 + 30580;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,27836
	ctx.r6.s64 = ctx.r10.s64 + 27836;
	// li r5,106
	ctx.r5.s64 = 106;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2F74;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,30580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30580, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B2F84;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B2F8C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r9,-17920
	ctx.r3.s64 = ctx.r9.s64 + -17920;
	// stw r11,30580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30580, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B2FA4;
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

__attribute__((alias("__imp__sub_827B2FBC"))) PPC_WEAK_FUNC(sub_827B2FBC);
PPC_FUNC_IMPL(__imp__sub_827B2FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2FC0"))) PPC_WEAK_FUNC(sub_827B2FC0);
PPC_FUNC_IMPL(__imp__sub_827B2FC0) {
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
	// addi r30,r31,32024
	ctx.r30.s64 = ctx.r31.s64 + 32024;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,27880
	ctx.r6.s64 = ctx.r10.s64 + 27880;
	// li r5,107
	ctx.r5.s64 = 107;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B2FFC;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32024, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B300C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3014;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27876
	ctx.r11.s64 = ctx.r11.s64 + 27876;
	// addi r3,r9,-17832
	ctx.r3.s64 = ctx.r9.s64 + -17832;
	// stw r11,32024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32024, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B302C;
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

__attribute__((alias("__imp__sub_827B3044"))) PPC_WEAK_FUNC(sub_827B3044);
PPC_FUNC_IMPL(__imp__sub_827B3044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3048"))) PPC_WEAK_FUNC(sub_827B3048);
PPC_FUNC_IMPL(__imp__sub_827B3048) {
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
	// addi r30,r31,31608
	ctx.r30.s64 = ctx.r31.s64 + 31608;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,27924
	ctx.r6.s64 = ctx.r10.s64 + 27924;
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B3084;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31608, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B3094;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B309C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27920
	ctx.r11.s64 = ctx.r11.s64 + 27920;
	// addi r3,r9,-17744
	ctx.r3.s64 = ctx.r9.s64 + -17744;
	// stw r11,31608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31608, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B30B4;
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

__attribute__((alias("__imp__sub_827B30CC"))) PPC_WEAK_FUNC(sub_827B30CC);
PPC_FUNC_IMPL(__imp__sub_827B30CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B30D0"))) PPC_WEAK_FUNC(sub_827B30D0);
PPC_FUNC_IMPL(__imp__sub_827B30D0) {
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
	// addi r30,r31,32184
	ctx.r30.s64 = ctx.r31.s64 + 32184;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,27968
	ctx.r6.s64 = ctx.r10.s64 + 27968;
	// li r5,109
	ctx.r5.s64 = 109;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B310C;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32184, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B311C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3124;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,27964
	ctx.r11.s64 = ctx.r11.s64 + 27964;
	// addi r3,r9,-17656
	ctx.r3.s64 = ctx.r9.s64 + -17656;
	// stw r11,32184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32184, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B313C;
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

__attribute__((alias("__imp__sub_827B3154"))) PPC_WEAK_FUNC(sub_827B3154);
PPC_FUNC_IMPL(__imp__sub_827B3154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3158"))) PPC_WEAK_FUNC(sub_827B3158);
PPC_FUNC_IMPL(__imp__sub_827B3158) {
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
	// addi r30,r31,31544
	ctx.r30.s64 = ctx.r31.s64 + 31544;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28012
	ctx.r6.s64 = ctx.r10.s64 + 28012;
	// li r5,110
	ctx.r5.s64 = 110;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B3194;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31544, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B31A4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B31AC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28008
	ctx.r11.s64 = ctx.r11.s64 + 28008;
	// addi r3,r9,-17568
	ctx.r3.s64 = ctx.r9.s64 + -17568;
	// stw r11,31544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31544, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B31C4;
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

__attribute__((alias("__imp__sub_827B31DC"))) PPC_WEAK_FUNC(sub_827B31DC);
PPC_FUNC_IMPL(__imp__sub_827B31DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B31E0"))) PPC_WEAK_FUNC(sub_827B31E0);
PPC_FUNC_IMPL(__imp__sub_827B31E0) {
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
	// addi r30,r31,31992
	ctx.r30.s64 = ctx.r31.s64 + 31992;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28056
	ctx.r6.s64 = ctx.r10.s64 + 28056;
	// li r5,111
	ctx.r5.s64 = 111;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B321C;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31992, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B322C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3234;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28052
	ctx.r11.s64 = ctx.r11.s64 + 28052;
	// addi r3,r9,-17480
	ctx.r3.s64 = ctx.r9.s64 + -17480;
	// stw r11,31992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31992, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B324C;
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

__attribute__((alias("__imp__sub_827B3264"))) PPC_WEAK_FUNC(sub_827B3264);
PPC_FUNC_IMPL(__imp__sub_827B3264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3268"))) PPC_WEAK_FUNC(sub_827B3268);
PPC_FUNC_IMPL(__imp__sub_827B3268) {
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
	// addi r30,r31,30612
	ctx.r30.s64 = ctx.r31.s64 + 30612;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28096
	ctx.r6.s64 = ctx.r10.s64 + 28096;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B32A4;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,30612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30612, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B32B4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B32BC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28092
	ctx.r11.s64 = ctx.r11.s64 + 28092;
	// addi r3,r9,-17392
	ctx.r3.s64 = ctx.r9.s64 + -17392;
	// stw r11,30612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30612, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B32D4;
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

__attribute__((alias("__imp__sub_827B32EC"))) PPC_WEAK_FUNC(sub_827B32EC);
PPC_FUNC_IMPL(__imp__sub_827B32EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B32F0"))) PPC_WEAK_FUNC(sub_827B32F0);
PPC_FUNC_IMPL(__imp__sub_827B32F0) {
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
	// addi r30,r31,32152
	ctx.r30.s64 = ctx.r31.s64 + 32152;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28132
	ctx.r6.s64 = ctx.r10.s64 + 28132;
	// li r5,113
	ctx.r5.s64 = 113;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B332C;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32152, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B333C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3344;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28128
	ctx.r11.s64 = ctx.r11.s64 + 28128;
	// addi r3,r9,-17304
	ctx.r3.s64 = ctx.r9.s64 + -17304;
	// stw r11,32152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32152, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B335C;
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

__attribute__((alias("__imp__sub_827B3374"))) PPC_WEAK_FUNC(sub_827B3374);
PPC_FUNC_IMPL(__imp__sub_827B3374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3378"))) PPC_WEAK_FUNC(sub_827B3378);
PPC_FUNC_IMPL(__imp__sub_827B3378) {
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
	// addi r30,r31,32056
	ctx.r30.s64 = ctx.r31.s64 + 32056;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28172
	ctx.r6.s64 = ctx.r10.s64 + 28172;
	// li r5,114
	ctx.r5.s64 = 114;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B33B4;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32056, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B33C4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B33CC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28168
	ctx.r11.s64 = ctx.r11.s64 + 28168;
	// addi r3,r9,-17216
	ctx.r3.s64 = ctx.r9.s64 + -17216;
	// stw r11,32056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32056, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B33E4;
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

__attribute__((alias("__imp__sub_827B33FC"))) PPC_WEAK_FUNC(sub_827B33FC);
PPC_FUNC_IMPL(__imp__sub_827B33FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3400"))) PPC_WEAK_FUNC(sub_827B3400);
PPC_FUNC_IMPL(__imp__sub_827B3400) {
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
	// addi r30,r31,30516
	ctx.r30.s64 = ctx.r31.s64 + 30516;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28208
	ctx.r6.s64 = ctx.r10.s64 + 28208;
	// li r5,115
	ctx.r5.s64 = 115;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B343C;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,30516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30516, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B344C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3454;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28204
	ctx.r11.s64 = ctx.r11.s64 + 28204;
	// addi r3,r9,-17128
	ctx.r3.s64 = ctx.r9.s64 + -17128;
	// stw r11,30516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30516, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B346C;
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

__attribute__((alias("__imp__sub_827B3484"))) PPC_WEAK_FUNC(sub_827B3484);
PPC_FUNC_IMPL(__imp__sub_827B3484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3488"))) PPC_WEAK_FUNC(sub_827B3488);
PPC_FUNC_IMPL(__imp__sub_827B3488) {
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
	// addi r30,r31,30548
	ctx.r30.s64 = ctx.r31.s64 + 30548;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28248
	ctx.r6.s64 = ctx.r10.s64 + 28248;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B34C4;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,30548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30548, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B34D4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B34DC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28244
	ctx.r11.s64 = ctx.r11.s64 + 28244;
	// addi r3,r9,-17040
	ctx.r3.s64 = ctx.r9.s64 + -17040;
	// stw r11,30548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30548, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B34F4;
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

__attribute__((alias("__imp__sub_827B350C"))) PPC_WEAK_FUNC(sub_827B350C);
PPC_FUNC_IMPL(__imp__sub_827B350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3510"))) PPC_WEAK_FUNC(sub_827B3510);
PPC_FUNC_IMPL(__imp__sub_827B3510) {
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
	// addi r30,r31,31736
	ctx.r30.s64 = ctx.r31.s64 + 31736;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28288
	ctx.r6.s64 = ctx.r10.s64 + 28288;
	// li r5,117
	ctx.r5.s64 = 117;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B354C;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31736, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B355C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3564;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28284
	ctx.r11.s64 = ctx.r11.s64 + 28284;
	// addi r3,r9,-16952
	ctx.r3.s64 = ctx.r9.s64 + -16952;
	// stw r11,31736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31736, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B357C;
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

__attribute__((alias("__imp__sub_827B3594"))) PPC_WEAK_FUNC(sub_827B3594);
PPC_FUNC_IMPL(__imp__sub_827B3594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3598"))) PPC_WEAK_FUNC(sub_827B3598);
PPC_FUNC_IMPL(__imp__sub_827B3598) {
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
	// addi r30,r31,31640
	ctx.r30.s64 = ctx.r31.s64 + 31640;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28328
	ctx.r6.s64 = ctx.r10.s64 + 28328;
	// li r5,118
	ctx.r5.s64 = 118;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B35D4;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31640, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B35E4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B35EC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28324
	ctx.r11.s64 = ctx.r11.s64 + 28324;
	// addi r3,r9,-16864
	ctx.r3.s64 = ctx.r9.s64 + -16864;
	// stw r11,31640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31640, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3604;
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

__attribute__((alias("__imp__sub_827B361C"))) PPC_WEAK_FUNC(sub_827B361C);
PPC_FUNC_IMPL(__imp__sub_827B361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3620"))) PPC_WEAK_FUNC(sub_827B3620);
PPC_FUNC_IMPL(__imp__sub_827B3620) {
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
	// addi r30,r31,31672
	ctx.r30.s64 = ctx.r31.s64 + 31672;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28364
	ctx.r6.s64 = ctx.r10.s64 + 28364;
	// li r5,119
	ctx.r5.s64 = 119;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B365C;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31672, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B366C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3674;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28360
	ctx.r11.s64 = ctx.r11.s64 + 28360;
	// addi r3,r9,-16776
	ctx.r3.s64 = ctx.r9.s64 + -16776;
	// stw r11,31672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31672, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B368C;
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

__attribute__((alias("__imp__sub_827B36A4"))) PPC_WEAK_FUNC(sub_827B36A4);
PPC_FUNC_IMPL(__imp__sub_827B36A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B36A8"))) PPC_WEAK_FUNC(sub_827B36A8);
PPC_FUNC_IMPL(__imp__sub_827B36A8) {
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
	// addi r30,r31,32088
	ctx.r30.s64 = ctx.r31.s64 + 32088;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28404
	ctx.r6.s64 = ctx.r10.s64 + 28404;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B36E4;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32088, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B36F4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B36FC;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28400
	ctx.r11.s64 = ctx.r11.s64 + 28400;
	// addi r3,r9,-16688
	ctx.r3.s64 = ctx.r9.s64 + -16688;
	// stw r11,32088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32088, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3714;
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

__attribute__((alias("__imp__sub_827B372C"))) PPC_WEAK_FUNC(sub_827B372C);
PPC_FUNC_IMPL(__imp__sub_827B372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3730"))) PPC_WEAK_FUNC(sub_827B3730);
PPC_FUNC_IMPL(__imp__sub_827B3730) {
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
	// addi r30,r31,31832
	ctx.r30.s64 = ctx.r31.s64 + 31832;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28444
	ctx.r6.s64 = ctx.r10.s64 + 28444;
	// li r5,121
	ctx.r5.s64 = 121;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B376C;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31832, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B377C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3784;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28440
	ctx.r11.s64 = ctx.r11.s64 + 28440;
	// addi r3,r9,-16600
	ctx.r3.s64 = ctx.r9.s64 + -16600;
	// stw r11,31832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31832, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B379C;
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

__attribute__((alias("__imp__sub_827B37B4"))) PPC_WEAK_FUNC(sub_827B37B4);
PPC_FUNC_IMPL(__imp__sub_827B37B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B37B8"))) PPC_WEAK_FUNC(sub_827B37B8);
PPC_FUNC_IMPL(__imp__sub_827B37B8) {
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
	// addi r30,r31,31864
	ctx.r30.s64 = ctx.r31.s64 + 31864;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28484
	ctx.r6.s64 = ctx.r10.s64 + 28484;
	// li r5,122
	ctx.r5.s64 = 122;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B37F4;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31864, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B3804;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B380C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28480
	ctx.r11.s64 = ctx.r11.s64 + 28480;
	// addi r3,r9,-16512
	ctx.r3.s64 = ctx.r9.s64 + -16512;
	// stw r11,31864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31864, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3824;
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

__attribute__((alias("__imp__sub_827B383C"))) PPC_WEAK_FUNC(sub_827B383C);
PPC_FUNC_IMPL(__imp__sub_827B383C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3840"))) PPC_WEAK_FUNC(sub_827B3840);
PPC_FUNC_IMPL(__imp__sub_827B3840) {
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
	// addi r30,r31,31768
	ctx.r30.s64 = ctx.r31.s64 + 31768;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28524
	ctx.r6.s64 = ctx.r10.s64 + 28524;
	// li r5,123
	ctx.r5.s64 = 123;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B387C;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31768, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B388C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3894;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28520
	ctx.r11.s64 = ctx.r11.s64 + 28520;
	// addi r3,r9,-16424
	ctx.r3.s64 = ctx.r9.s64 + -16424;
	// stw r11,31768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31768, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B38AC;
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

__attribute__((alias("__imp__sub_827B38C4"))) PPC_WEAK_FUNC(sub_827B38C4);
PPC_FUNC_IMPL(__imp__sub_827B38C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B38C8"))) PPC_WEAK_FUNC(sub_827B38C8);
PPC_FUNC_IMPL(__imp__sub_827B38C8) {
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
	// addi r30,r31,31928
	ctx.r30.s64 = ctx.r31.s64 + 31928;
	// addi r7,r11,32428
	ctx.r7.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,28568
	ctx.r6.s64 = ctx.r10.s64 + 28568;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B3904;
	sub_824FA688(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31928, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B3914;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B391C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,28564
	ctx.r11.s64 = ctx.r11.s64 + 28564;
	// addi r3,r9,-16336
	ctx.r3.s64 = ctx.r9.s64 + -16336;
	// stw r11,31928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31928, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3934;
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

__attribute__((alias("__imp__sub_827B394C"))) PPC_WEAK_FUNC(sub_827B394C);
PPC_FUNC_IMPL(__imp__sub_827B394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3950"))) PPC_WEAK_FUNC(sub_827B3950);
PPC_FUNC_IMPL(__imp__sub_827B3950) {
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
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r30,r11,30648
	ctx.r30.s64 = ctx.r11.s64 + 30648;
loc_827B3970:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82534b38
	ctx.lr = 0x827B3978;
	sub_82534B38(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// bge 0x827b3970
	if (!ctx.cr0.lt) goto loc_827B3970;
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-18528
	ctx.r3.s64 = ctx.r11.s64 + -18528;
	// bl 0x823d9a98
	ctx.lr = 0x827B3990;
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

__attribute__((alias("__imp__sub_827B39A8"))) PPC_WEAK_FUNC(sub_827B39A8);
PPC_FUNC_IMPL(__imp__sub_827B39A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,28956
	ctx.r5.s64 = ctx.r11.s64 + 28956;
	// addi r3,r10,32220
	ctx.r3.s64 = ctx.r10.s64 + 32220;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B39C4"))) PPC_WEAK_FUNC(sub_827B39C4);
PPC_FUNC_IMPL(__imp__sub_827B39C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B39C8"))) PPC_WEAK_FUNC(sub_827B39C8);
PPC_FUNC_IMPL(__imp__sub_827B39C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,29264
	ctx.r5.s64 = ctx.r11.s64 + 29264;
	// addi r3,r10,32280
	ctx.r3.s64 = ctx.r10.s64 + 32280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B39E4"))) PPC_WEAK_FUNC(sub_827B39E4);
PPC_FUNC_IMPL(__imp__sub_827B39E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B39E8"))) PPC_WEAK_FUNC(sub_827B39E8);
PPC_FUNC_IMPL(__imp__sub_827B39E8) {
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
	// addi r30,r31,32332
	ctx.r30.s64 = ctx.r31.s64 + 32332;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,29588
	ctx.r5.s64 = ctx.r10.s64 + 29588;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B3A20;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32332, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B3A30;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3A38;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,29584
	ctx.r11.s64 = ctx.r11.s64 + 29584;
	// addi r3,r9,-16248
	ctx.r3.s64 = ctx.r9.s64 + -16248;
	// stw r11,32332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32332, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3A50;
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

__attribute__((alias("__imp__sub_827B3A68"))) PPC_WEAK_FUNC(sub_827B3A68);
PPC_FUNC_IMPL(__imp__sub_827B3A68) {
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
	// addi r30,r31,32300
	ctx.r30.s64 = ctx.r31.s64 + 32300;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,29616
	ctx.r5.s64 = ctx.r10.s64 + 29616;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B3AA0;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32300, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B3AB0;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3AB8;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,29612
	ctx.r11.s64 = ctx.r11.s64 + 29612;
	// addi r3,r9,-16160
	ctx.r3.s64 = ctx.r9.s64 + -16160;
	// stw r11,32300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32300, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3AD0;
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

__attribute__((alias("__imp__sub_827B3AE8"))) PPC_WEAK_FUNC(sub_827B3AE8);
PPC_FUNC_IMPL(__imp__sub_827B3AE8) {
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
	// addi r30,r31,32364
	ctx.r30.s64 = ctx.r31.s64 + 32364;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,29928
	ctx.r5.s64 = ctx.r10.s64 + 29928;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B3B20;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32364, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B3B30;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3B38;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,29924
	ctx.r11.s64 = ctx.r11.s64 + 29924;
	// addi r3,r9,-16072
	ctx.r3.s64 = ctx.r9.s64 + -16072;
	// stw r11,32364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32364, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3B50;
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

__attribute__((alias("__imp__sub_827B3B68"))) PPC_WEAK_FUNC(sub_827B3B68);
PPC_FUNC_IMPL(__imp__sub_827B3B68) {
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
	// addi r30,r31,32396
	ctx.r30.s64 = ctx.r31.s64 + 32396;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,29960
	ctx.r5.s64 = ctx.r10.s64 + 29960;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B3BA0;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32396, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B3BB0;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3BB8;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,29956
	ctx.r11.s64 = ctx.r11.s64 + 29956;
	// addi r3,r9,-15984
	ctx.r3.s64 = ctx.r9.s64 + -15984;
	// stw r11,32396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32396, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3BD0;
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

__attribute__((alias("__imp__sub_827B3BE8"))) PPC_WEAK_FUNC(sub_827B3BE8);
PPC_FUNC_IMPL(__imp__sub_827B3BE8) {
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
	// addi r30,r31,32428
	ctx.r30.s64 = ctx.r31.s64 + 32428;
	// addi r5,r11,30016
	ctx.r5.s64 = ctx.r11.s64 + 30016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824fa650
	ctx.lr = 0x827B3C1C;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32428, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B3C2C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3C34;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r11,r11,30012
	ctx.r11.s64 = ctx.r11.s64 + 30012;
	// addi r3,r10,-15896
	ctx.r3.s64 = ctx.r10.s64 + -15896;
	// stw r11,32428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32428, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3C4C;
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

__attribute__((alias("__imp__sub_827B3C64"))) PPC_WEAK_FUNC(sub_827B3C64);
PPC_FUNC_IMPL(__imp__sub_827B3C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3C68"))) PPC_WEAK_FUNC(sub_827B3C68);
PPC_FUNC_IMPL(__imp__sub_827B3C68) {
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
	// addi r30,r31,32468
	ctx.r30.s64 = ctx.r31.s64 + 32468;
	// addi r6,r11,32428
	ctx.r6.s64 = ctx.r11.s64 + 32428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,31148
	ctx.r5.s64 = ctx.r10.s64 + 31148;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa650
	ctx.lr = 0x827B3CA0;
	sub_824FA650(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32468, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827B3CB0;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3CB8;
	sub_824FA6C0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,31144
	ctx.r11.s64 = ctx.r11.s64 + 31144;
	// addi r3,r9,-15808
	ctx.r3.s64 = ctx.r9.s64 + -15808;
	// stw r11,32468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32468, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3CD0;
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

__attribute__((alias("__imp__sub_827B3CE8"))) PPC_WEAK_FUNC(sub_827B3CE8);
PPC_FUNC_IMPL(__imp__sub_827B3CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,31864
	ctx.r5.s64 = ctx.r11.s64 + 31864;
	// addi r3,r10,32540
	ctx.r3.s64 = ctx.r10.s64 + 32540;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3D04"))) PPC_WEAK_FUNC(sub_827B3D04);
PPC_FUNC_IMPL(__imp__sub_827B3D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3D08"))) PPC_WEAK_FUNC(sub_827B3D08);
PPC_FUNC_IMPL(__imp__sub_827B3D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,31872
	ctx.r5.s64 = ctx.r11.s64 + 31872;
	// addi r3,r10,32520
	ctx.r3.s64 = ctx.r10.s64 + 32520;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3D24"))) PPC_WEAK_FUNC(sub_827B3D24);
PPC_FUNC_IMPL(__imp__sub_827B3D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3D28"))) PPC_WEAK_FUNC(sub_827B3D28);
PPC_FUNC_IMPL(__imp__sub_827B3D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// addi r5,r11,31884
	ctx.r5.s64 = ctx.r11.s64 + 31884;
	// addi r3,r10,32500
	ctx.r3.s64 = ctx.r10.s64 + 32500;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3D44"))) PPC_WEAK_FUNC(sub_827B3D44);
PPC_FUNC_IMPL(__imp__sub_827B3D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3D48"))) PPC_WEAK_FUNC(sub_827B3D48);
PPC_FUNC_IMPL(__imp__sub_827B3D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-15720
	ctx.r3.s64 = ctx.r11.s64 + -15720;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3D54"))) PPC_WEAK_FUNC(sub_827B3D54);
PPC_FUNC_IMPL(__imp__sub_827B3D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3D58"))) PPC_WEAK_FUNC(sub_827B3D58);
PPC_FUNC_IMPL(__imp__sub_827B3D58) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,32628
	ctx.r30.s64 = ctx.r31.s64 + 32628;
	// addi r5,r11,-30036
	ctx.r5.s64 = ctx.r11.s64 + -30036;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824fa650
	ctx.lr = 0x827B3D8C;
	sub_824FA650(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32628, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827B3D9C;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3DA4;
	sub_824FA6C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r11,r11,-30040
	ctx.r11.s64 = ctx.r11.s64 + -30040;
	// addi r3,r10,-15688
	ctx.r3.s64 = ctx.r10.s64 + -15688;
	// stw r11,32628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32628, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3DBC;
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

__attribute__((alias("__imp__sub_827B3DD4"))) PPC_WEAK_FUNC(sub_827B3DD4);
PPC_FUNC_IMPL(__imp__sub_827B3DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3DD8"))) PPC_WEAK_FUNC(sub_827B3DD8);
PPC_FUNC_IMPL(__imp__sub_827B3DD8) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r31,32724
	ctx.r30.s64 = ctx.r31.s64 + 32724;
	// addi r7,r11,32628
	ctx.r7.s64 = ctx.r11.s64 + 32628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-29976
	ctx.r6.s64 = ctx.r10.s64 + -29976;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B3E14;
	sub_824FA688(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32724, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827B3E24;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3E2C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-29980
	ctx.r11.s64 = ctx.r11.s64 + -29980;
	// addi r3,r9,-15600
	ctx.r3.s64 = ctx.r9.s64 + -15600;
	// stw r11,32724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32724, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3E44;
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

__attribute__((alias("__imp__sub_827B3E5C"))) PPC_WEAK_FUNC(sub_827B3E5C);
PPC_FUNC_IMPL(__imp__sub_827B3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3E60"))) PPC_WEAK_FUNC(sub_827B3E60);
PPC_FUNC_IMPL(__imp__sub_827B3E60) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r31,32660
	ctx.r30.s64 = ctx.r31.s64 + 32660;
	// addi r7,r11,32628
	ctx.r7.s64 = ctx.r11.s64 + 32628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-30016
	ctx.r6.s64 = ctx.r10.s64 + -30016;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B3E9C;
	sub_824FA688(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32660, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827B3EAC;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3EB4;
	sub_824FA6C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-30020
	ctx.r11.s64 = ctx.r11.s64 + -30020;
	// addi r3,r9,-15512
	ctx.r3.s64 = ctx.r9.s64 + -15512;
	// stw r11,32660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32660, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3ECC;
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

__attribute__((alias("__imp__sub_827B3EE4"))) PPC_WEAK_FUNC(sub_827B3EE4);
PPC_FUNC_IMPL(__imp__sub_827B3EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3EE8"))) PPC_WEAK_FUNC(sub_827B3EE8);
PPC_FUNC_IMPL(__imp__sub_827B3EE8) {
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
	// lis r31,-32114
	ctx.r31.s64 = -2104623104;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r31,-32716
	ctx.r30.s64 = ctx.r31.s64 + -32716;
	// addi r7,r11,32628
	ctx.r7.s64 = ctx.r11.s64 + 32628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-29940
	ctx.r6.s64 = ctx.r10.s64 + -29940;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B3F24;
	sub_824FA688(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,-32716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32716, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827B3F34;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3F3C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-29944
	ctx.r11.s64 = ctx.r11.s64 + -29944;
	// addi r3,r9,-15424
	ctx.r3.s64 = ctx.r9.s64 + -15424;
	// stw r11,-32716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32716, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3F54;
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

__attribute__((alias("__imp__sub_827B3F6C"))) PPC_WEAK_FUNC(sub_827B3F6C);
PPC_FUNC_IMPL(__imp__sub_827B3F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3F70"))) PPC_WEAK_FUNC(sub_827B3F70);
PPC_FUNC_IMPL(__imp__sub_827B3F70) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r31,32692
	ctx.r30.s64 = ctx.r31.s64 + 32692;
	// addi r7,r11,32628
	ctx.r7.s64 = ctx.r11.s64 + 32628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-29908
	ctx.r6.s64 = ctx.r10.s64 + -29908;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B3FAC;
	sub_824FA688(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827B3FBC;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B3FC4;
	sub_824FA6C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-29912
	ctx.r11.s64 = ctx.r11.s64 + -29912;
	// addi r3,r9,-15336
	ctx.r3.s64 = ctx.r9.s64 + -15336;
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B3FDC;
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

__attribute__((alias("__imp__sub_827B3FF4"))) PPC_WEAK_FUNC(sub_827B3FF4);
PPC_FUNC_IMPL(__imp__sub_827B3FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3FF8"))) PPC_WEAK_FUNC(sub_827B3FF8);
PPC_FUNC_IMPL(__imp__sub_827B3FF8) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r31,32596
	ctx.r30.s64 = ctx.r31.s64 + 32596;
	// addi r7,r11,32628
	ctx.r7.s64 = ctx.r11.s64 + 32628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-29872
	ctx.r6.s64 = ctx.r10.s64 + -29872;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B4034;
	sub_824FA688(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32596, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827B4044;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B404C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-29876
	ctx.r11.s64 = ctx.r11.s64 + -29876;
	// addi r3,r9,-15248
	ctx.r3.s64 = ctx.r9.s64 + -15248;
	// stw r11,32596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32596, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B4064;
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

__attribute__((alias("__imp__sub_827B407C"))) PPC_WEAK_FUNC(sub_827B407C);
PPC_FUNC_IMPL(__imp__sub_827B407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4080"))) PPC_WEAK_FUNC(sub_827B4080);
PPC_FUNC_IMPL(__imp__sub_827B4080) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r31,32756
	ctx.r30.s64 = ctx.r31.s64 + 32756;
	// addi r7,r11,32628
	ctx.r7.s64 = ctx.r11.s64 + 32628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-29840
	ctx.r6.s64 = ctx.r10.s64 + -29840;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B40BC;
	sub_824FA688(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32756, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827B40CC;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B40D4;
	sub_824FA6C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-29844
	ctx.r11.s64 = ctx.r11.s64 + -29844;
	// addi r3,r9,-15160
	ctx.r3.s64 = ctx.r9.s64 + -15160;
	// stw r11,32756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32756, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B40EC;
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

__attribute__((alias("__imp__sub_827B4104"))) PPC_WEAK_FUNC(sub_827B4104);
PPC_FUNC_IMPL(__imp__sub_827B4104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4108"))) PPC_WEAK_FUNC(sub_827B4108);
PPC_FUNC_IMPL(__imp__sub_827B4108) {
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
	// lis r31,-32114
	ctx.r31.s64 = -2104623104;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r31,-32684
	ctx.r30.s64 = ctx.r31.s64 + -32684;
	// addi r7,r11,32628
	ctx.r7.s64 = ctx.r11.s64 + 32628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-29812
	ctx.r6.s64 = ctx.r10.s64 + -29812;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B4144;
	sub_824FA688(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,-32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32684, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827B4154;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B415C;
	sub_824FA6C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-29816
	ctx.r11.s64 = ctx.r11.s64 + -29816;
	// addi r3,r9,-15072
	ctx.r3.s64 = ctx.r9.s64 + -15072;
	// stw r11,-32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32684, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B4174;
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

__attribute__((alias("__imp__sub_827B418C"))) PPC_WEAK_FUNC(sub_827B418C);
PPC_FUNC_IMPL(__imp__sub_827B418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4190"))) PPC_WEAK_FUNC(sub_827B4190);
PPC_FUNC_IMPL(__imp__sub_827B4190) {
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
	// lis r31,-32114
	ctx.r31.s64 = -2104623104;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r30,r31,-32748
	ctx.r30.s64 = ctx.r31.s64 + -32748;
	// addi r7,r11,32628
	ctx.r7.s64 = ctx.r11.s64 + 32628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-29776
	ctx.r6.s64 = ctx.r10.s64 + -29776;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824fa688
	ctx.lr = 0x827B41CC;
	sub_824FA688(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,-32748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32748, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827B41DC;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa6c0
	ctx.lr = 0x827B41E4;
	sub_824FA6C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32132
	ctx.r9.s64 = -2105802752;
	// addi r11,r11,-29780
	ctx.r11.s64 = ctx.r11.s64 + -29780;
	// addi r3,r9,-14984
	ctx.r3.s64 = ctx.r9.s64 + -14984;
	// stw r11,-32748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32748, ctx.r11.u32);
	// bl 0x823d9a98
	ctx.lr = 0x827B41FC;
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

__attribute__((alias("__imp__sub_827B4214"))) PPC_WEAK_FUNC(sub_827B4214);
PPC_FUNC_IMPL(__imp__sub_827B4214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4218"))) PPC_WEAK_FUNC(sub_827B4218);
PPC_FUNC_IMPL(__imp__sub_827B4218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// addi r5,r11,-29376
	ctx.r5.s64 = ctx.r11.s64 + -29376;
	// addi r3,r10,-32584
	ctx.r3.s64 = ctx.r10.s64 + -32584;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4234"))) PPC_WEAK_FUNC(sub_827B4234);
PPC_FUNC_IMPL(__imp__sub_827B4234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4238"))) PPC_WEAK_FUNC(sub_827B4238);
PPC_FUNC_IMPL(__imp__sub_827B4238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// addi r5,r11,-29360
	ctx.r5.s64 = ctx.r11.s64 + -29360;
	// addi r3,r10,-32644
	ctx.r3.s64 = ctx.r10.s64 + -32644;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4254"))) PPC_WEAK_FUNC(sub_827B4254);
PPC_FUNC_IMPL(__imp__sub_827B4254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4258"))) PPC_WEAK_FUNC(sub_827B4258);
PPC_FUNC_IMPL(__imp__sub_827B4258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// addi r5,r11,-29344
	ctx.r5.s64 = ctx.r11.s64 + -29344;
	// addi r3,r10,-32604
	ctx.r3.s64 = ctx.r10.s64 + -32604;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4274"))) PPC_WEAK_FUNC(sub_827B4274);
PPC_FUNC_IMPL(__imp__sub_827B4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4278"))) PPC_WEAK_FUNC(sub_827B4278);
PPC_FUNC_IMPL(__imp__sub_827B4278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// addi r5,r11,-29320
	ctx.r5.s64 = ctx.r11.s64 + -29320;
	// addi r3,r10,-32624
	ctx.r3.s64 = ctx.r10.s64 + -32624;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4294"))) PPC_WEAK_FUNC(sub_827B4294);
PPC_FUNC_IMPL(__imp__sub_827B4294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4298"))) PPC_WEAK_FUNC(sub_827B4298);
PPC_FUNC_IMPL(__imp__sub_827B4298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B42A4"))) PPC_WEAK_FUNC(sub_827B42A4);
PPC_FUNC_IMPL(__imp__sub_827B42A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B42A8"))) PPC_WEAK_FUNC(sub_827B42A8);
PPC_FUNC_IMPL(__imp__sub_827B42A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14872
	ctx.r3.s64 = ctx.r11.s64 + -14872;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B42B4"))) PPC_WEAK_FUNC(sub_827B42B4);
PPC_FUNC_IMPL(__imp__sub_827B42B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B42B8"))) PPC_WEAK_FUNC(sub_827B42B8);
PPC_FUNC_IMPL(__imp__sub_827B42B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14840
	ctx.r3.s64 = ctx.r11.s64 + -14840;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B42C4"))) PPC_WEAK_FUNC(sub_827B42C4);
PPC_FUNC_IMPL(__imp__sub_827B42C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B42C8"))) PPC_WEAK_FUNC(sub_827B42C8);
PPC_FUNC_IMPL(__imp__sub_827B42C8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32114
	ctx.r8.s64 = -2104623104;
	// addi r5,r9,-23692
	ctx.r5.s64 = ctx.r9.s64 + -23692;
	// addi r3,r8,-32536
	ctx.r3.s64 = ctx.r8.s64 + -32536;
	// addi r7,r11,-5392
	ctx.r7.s64 = ctx.r11.s64 + -5392;
	// addi r6,r10,-5520
	ctx.r6.s64 = ctx.r10.s64 + -5520;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8253da78
	ctx.lr = 0x827B42FC;
	sub_8253DA78(ctx, base);
	// lis r7,-32132
	ctx.r7.s64 = -2105802752;
	// addi r3,r7,-14808
	ctx.r3.s64 = ctx.r7.s64 + -14808;
	// bl 0x823d9a98
	ctx.lr = 0x827B4308;
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

__attribute__((alias("__imp__sub_827B4318"))) PPC_WEAK_FUNC(sub_827B4318);
PPC_FUNC_IMPL(__imp__sub_827B4318) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32114
	ctx.r8.s64 = -2104623104;
	// addi r5,r9,-23300
	ctx.r5.s64 = ctx.r9.s64 + -23300;
	// addi r3,r8,-32520
	ctx.r3.s64 = ctx.r8.s64 + -32520;
	// addi r7,r11,-1728
	ctx.r7.s64 = ctx.r11.s64 + -1728;
	// addi r6,r10,-1800
	ctx.r6.s64 = ctx.r10.s64 + -1800;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8253da78
	ctx.lr = 0x827B434C;
	sub_8253DA78(ctx, base);
	// lis r7,-32132
	ctx.r7.s64 = -2105802752;
	// addi r3,r7,-14792
	ctx.r3.s64 = ctx.r7.s64 + -14792;
	// bl 0x823d9a98
	ctx.lr = 0x827B4358;
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

__attribute__((alias("__imp__sub_827B4368"))) PPC_WEAK_FUNC(sub_827B4368);
PPC_FUNC_IMPL(__imp__sub_827B4368) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32114
	ctx.r8.s64 = -2104623104;
	// addi r5,r9,-22924
	ctx.r5.s64 = ctx.r9.s64 + -22924;
	// addi r3,r8,-32504
	ctx.r3.s64 = ctx.r8.s64 + -32504;
	// addi r7,r11,-368
	ctx.r7.s64 = ctx.r11.s64 + -368;
	// addi r6,r10,-1136
	ctx.r6.s64 = ctx.r10.s64 + -1136;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253da78
	ctx.lr = 0x827B439C;
	sub_8253DA78(ctx, base);
	// lis r7,-32132
	ctx.r7.s64 = -2105802752;
	// addi r3,r7,-14776
	ctx.r3.s64 = ctx.r7.s64 + -14776;
	// bl 0x823d9a98
	ctx.lr = 0x827B43A8;
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

__attribute__((alias("__imp__sub_827B43B8"))) PPC_WEAK_FUNC(sub_827B43B8);
PPC_FUNC_IMPL(__imp__sub_827B43B8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32114
	ctx.r8.s64 = -2104623104;
	// addi r5,r9,-22556
	ctx.r5.s64 = ctx.r9.s64 + -22556;
	// addi r3,r8,-32488
	ctx.r3.s64 = ctx.r8.s64 + -32488;
	// addi r7,r11,1400
	ctx.r7.s64 = ctx.r11.s64 + 1400;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253da78
	ctx.lr = 0x827B43EC;
	sub_8253DA78(ctx, base);
	// lis r7,-32132
	ctx.r7.s64 = -2105802752;
	// addi r3,r7,-14760
	ctx.r3.s64 = ctx.r7.s64 + -14760;
	// bl 0x823d9a98
	ctx.lr = 0x827B43F8;
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

__attribute__((alias("__imp__sub_827B4408"))) PPC_WEAK_FUNC(sub_827B4408);
PPC_FUNC_IMPL(__imp__sub_827B4408) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32114
	ctx.r8.s64 = -2104623104;
	// addi r5,r9,-19244
	ctx.r5.s64 = ctx.r9.s64 + -19244;
	// addi r3,r8,-32472
	ctx.r3.s64 = ctx.r8.s64 + -32472;
	// addi r7,r11,28904
	ctx.r7.s64 = ctx.r11.s64 + 28904;
	// addi r6,r10,28784
	ctx.r6.s64 = ctx.r10.s64 + 28784;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8253da78
	ctx.lr = 0x827B443C;
	sub_8253DA78(ctx, base);
	// lis r7,-32132
	ctx.r7.s64 = -2105802752;
	// addi r3,r7,-14744
	ctx.r3.s64 = ctx.r7.s64 + -14744;
	// bl 0x823d9a98
	ctx.lr = 0x827B4448;
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

__attribute__((alias("__imp__sub_827B4458"))) PPC_WEAK_FUNC(sub_827B4458);
PPC_FUNC_IMPL(__imp__sub_827B4458) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-18196
	ctx.r3.s64 = ctx.r11.s64 + -18196;
	// bl 0x821c9790
	ctx.lr = 0x827B4474;
	sub_821C9790(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// stw r3,-32452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B448C"))) PPC_WEAK_FUNC(sub_827B448C);
PPC_FUNC_IMPL(__imp__sub_827B448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4490"))) PPC_WEAK_FUNC(sub_827B4490);
PPC_FUNC_IMPL(__imp__sub_827B4490) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,3760
	ctx.r7.s64 = ctx.r8.s64 + 3760;
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

__attribute__((alias("__imp__sub_827B44B0"))) PPC_WEAK_FUNC(sub_827B44B0);
PPC_FUNC_IMPL(__imp__sub_827B44B0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,3768
	ctx.r7.s64 = ctx.r8.s64 + 3768;
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

__attribute__((alias("__imp__sub_827B44D0"))) PPC_WEAK_FUNC(sub_827B44D0);
PPC_FUNC_IMPL(__imp__sub_827B44D0) {
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
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r31,r11,3780
	ctx.r31.s64 = ctx.r11.s64 + 3780;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82550d08
	ctx.lr = 0x827B44F0;
	sub_82550D08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r10,-14728
	ctx.r3.s64 = ctx.r10.s64 + -14728;
	// bl 0x823d9a98
	ctx.lr = 0x827B4504;
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

__attribute__((alias("__imp__sub_827B4518"))) PPC_WEAK_FUNC(sub_827B4518);
PPC_FUNC_IMPL(__imp__sub_827B4518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// addi r5,r11,-16716
	ctx.r5.s64 = ctx.r11.s64 + -16716;
	// addi r3,r10,-32440
	ctx.r3.s64 = ctx.r10.s64 + -32440;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4534"))) PPC_WEAK_FUNC(sub_827B4534);
PPC_FUNC_IMPL(__imp__sub_827B4534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4538"))) PPC_WEAK_FUNC(sub_827B4538);
PPC_FUNC_IMPL(__imp__sub_827B4538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-32416
	ctx.r3.s64 = ctx.r11.s64 + -32416;
	// b 0x82549a28
	sub_82549A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4544"))) PPC_WEAK_FUNC(sub_827B4544);
PPC_FUNC_IMPL(__imp__sub_827B4544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4548"))) PPC_WEAK_FUNC(sub_827B4548);
PPC_FUNC_IMPL(__imp__sub_827B4548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14592
	ctx.r3.s64 = ctx.r11.s64 + -14592;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4554"))) PPC_WEAK_FUNC(sub_827B4554);
PPC_FUNC_IMPL(__imp__sub_827B4554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4558"))) PPC_WEAK_FUNC(sub_827B4558);
PPC_FUNC_IMPL(__imp__sub_827B4558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14560
	ctx.r3.s64 = ctx.r11.s64 + -14560;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4564"))) PPC_WEAK_FUNC(sub_827B4564);
PPC_FUNC_IMPL(__imp__sub_827B4564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4568"))) PPC_WEAK_FUNC(sub_827B4568);
PPC_FUNC_IMPL(__imp__sub_827B4568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14528
	ctx.r3.s64 = ctx.r11.s64 + -14528;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4574"))) PPC_WEAK_FUNC(sub_827B4574);
PPC_FUNC_IMPL(__imp__sub_827B4574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4578"))) PPC_WEAK_FUNC(sub_827B4578);
PPC_FUNC_IMPL(__imp__sub_827B4578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14648
	ctx.r3.s64 = ctx.r11.s64 + -14648;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4584"))) PPC_WEAK_FUNC(sub_827B4584);
PPC_FUNC_IMPL(__imp__sub_827B4584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4588"))) PPC_WEAK_FUNC(sub_827B4588);
PPC_FUNC_IMPL(__imp__sub_827B4588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14480
	ctx.r3.s64 = ctx.r11.s64 + -14480;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4594"))) PPC_WEAK_FUNC(sub_827B4594);
PPC_FUNC_IMPL(__imp__sub_827B4594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4598"))) PPC_WEAK_FUNC(sub_827B4598);
PPC_FUNC_IMPL(__imp__sub_827B4598) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,7540
	ctx.r7.s64 = ctx.r8.s64 + 7540;
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

__attribute__((alias("__imp__sub_827B45B8"))) PPC_WEAK_FUNC(sub_827B45B8);
PPC_FUNC_IMPL(__imp__sub_827B45B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,7548
	ctx.r7.s64 = ctx.r8.s64 + 7548;
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

__attribute__((alias("__imp__sub_827B45D8"))) PPC_WEAK_FUNC(sub_827B45D8);
PPC_FUNC_IMPL(__imp__sub_827B45D8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,7556
	ctx.r7.s64 = ctx.r8.s64 + 7556;
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

__attribute__((alias("__imp__sub_827B45F8"))) PPC_WEAK_FUNC(sub_827B45F8);
PPC_FUNC_IMPL(__imp__sub_827B45F8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,7660
	ctx.r7.s64 = ctx.r8.s64 + 7660;
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

__attribute__((alias("__imp__sub_827B4618"))) PPC_WEAK_FUNC(sub_827B4618);
PPC_FUNC_IMPL(__imp__sub_827B4618) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,7668
	ctx.r7.s64 = ctx.r8.s64 + 7668;
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

__attribute__((alias("__imp__sub_827B4638"))) PPC_WEAK_FUNC(sub_827B4638);
PPC_FUNC_IMPL(__imp__sub_827B4638) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,7676
	ctx.r7.s64 = ctx.r8.s64 + 7676;
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

__attribute__((alias("__imp__sub_827B4658"))) PPC_WEAK_FUNC(sub_827B4658);
PPC_FUNC_IMPL(__imp__sub_827B4658) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,7684
	ctx.r7.s64 = ctx.r8.s64 + 7684;
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

__attribute__((alias("__imp__sub_827B4678"))) PPC_WEAK_FUNC(sub_827B4678);
PPC_FUNC_IMPL(__imp__sub_827B4678) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,7692
	ctx.r7.s64 = ctx.r8.s64 + 7692;
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

__attribute__((alias("__imp__sub_827B4698"))) PPC_WEAK_FUNC(sub_827B4698);
PPC_FUNC_IMPL(__imp__sub_827B4698) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,7860
	ctx.r7.s64 = ctx.r8.s64 + 7860;
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

__attribute__((alias("__imp__sub_827B46B8"))) PPC_WEAK_FUNC(sub_827B46B8);
PPC_FUNC_IMPL(__imp__sub_827B46B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,8324
	ctx.r7.s64 = ctx.r8.s64 + 8324;
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

__attribute__((alias("__imp__sub_827B46D8"))) PPC_WEAK_FUNC(sub_827B46D8);
PPC_FUNC_IMPL(__imp__sub_827B46D8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,8340
	ctx.r7.s64 = ctx.r8.s64 + 8340;
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

__attribute__((alias("__imp__sub_827B46F8"))) PPC_WEAK_FUNC(sub_827B46F8);
PPC_FUNC_IMPL(__imp__sub_827B46F8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// addi r7,r8,8716
	ctx.r7.s64 = ctx.r8.s64 + 8716;
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

__attribute__((alias("__imp__sub_827B4718"))) PPC_WEAK_FUNC(sub_827B4718);
PPC_FUNC_IMPL(__imp__sub_827B4718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// addi r5,r11,-2284
	ctx.r5.s64 = ctx.r11.s64 + -2284;
	// addi r3,r10,-23428
	ctx.r3.s64 = ctx.r10.s64 + -23428;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4734"))) PPC_WEAK_FUNC(sub_827B4734);
PPC_FUNC_IMPL(__imp__sub_827B4734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4738"))) PPC_WEAK_FUNC(sub_827B4738);
PPC_FUNC_IMPL(__imp__sub_827B4738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// addi r5,r11,-2272
	ctx.r5.s64 = ctx.r11.s64 + -2272;
	// addi r3,r10,-23448
	ctx.r3.s64 = ctx.r10.s64 + -23448;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4754"))) PPC_WEAK_FUNC(sub_827B4754);
PPC_FUNC_IMPL(__imp__sub_827B4754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4758"))) PPC_WEAK_FUNC(sub_827B4758);
PPC_FUNC_IMPL(__imp__sub_827B4758) {
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
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-23388
	ctx.r3.s64 = ctx.r11.s64 + -23388;
	// bl 0x821c8ed8
	ctx.lr = 0x827B4770;
	sub_821C8ED8(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-14424
	ctx.r3.s64 = ctx.r10.s64 + -14424;
	// bl 0x823d9a98
	ctx.lr = 0x827B477C;
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

__attribute__((alias("__imp__sub_827B478C"))) PPC_WEAK_FUNC(sub_827B478C);
PPC_FUNC_IMPL(__imp__sub_827B478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4790"))) PPC_WEAK_FUNC(sub_827B4790);
PPC_FUNC_IMPL(__imp__sub_827B4790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,1976
	ctx.r5.s64 = ctx.r11.s64 + 1976;
	// addi r3,r10,-2208
	ctx.r3.s64 = ctx.r10.s64 + -2208;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B47AC"))) PPC_WEAK_FUNC(sub_827B47AC);
PPC_FUNC_IMPL(__imp__sub_827B47AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B47B0"))) PPC_WEAK_FUNC(sub_827B47B0);
PPC_FUNC_IMPL(__imp__sub_827B47B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,1988
	ctx.r5.s64 = ctx.r11.s64 + 1988;
	// addi r3,r10,-2228
	ctx.r3.s64 = ctx.r10.s64 + -2228;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B47CC"))) PPC_WEAK_FUNC(sub_827B47CC);
PPC_FUNC_IMPL(__imp__sub_827B47CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B47D0"))) PPC_WEAK_FUNC(sub_827B47D0);
PPC_FUNC_IMPL(__imp__sub_827B47D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,3624
	ctx.r5.s64 = ctx.r11.s64 + 3624;
	// addi r3,r10,-2144
	ctx.r3.s64 = ctx.r10.s64 + -2144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B47EC"))) PPC_WEAK_FUNC(sub_827B47EC);
PPC_FUNC_IMPL(__imp__sub_827B47EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B47F0"))) PPC_WEAK_FUNC(sub_827B47F0);
PPC_FUNC_IMPL(__imp__sub_827B47F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,3648
	ctx.r5.s64 = ctx.r11.s64 + 3648;
	// addi r3,r10,-2164
	ctx.r3.s64 = ctx.r10.s64 + -2164;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B480C"))) PPC_WEAK_FUNC(sub_827B480C);
PPC_FUNC_IMPL(__imp__sub_827B480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4810"))) PPC_WEAK_FUNC(sub_827B4810);
PPC_FUNC_IMPL(__imp__sub_827B4810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,3668
	ctx.r5.s64 = ctx.r11.s64 + 3668;
	// addi r3,r10,-2104
	ctx.r3.s64 = ctx.r10.s64 + -2104;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B482C"))) PPC_WEAK_FUNC(sub_827B482C);
PPC_FUNC_IMPL(__imp__sub_827B482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4830"))) PPC_WEAK_FUNC(sub_827B4830);
PPC_FUNC_IMPL(__imp__sub_827B4830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,3688
	ctx.r5.s64 = ctx.r11.s64 + 3688;
	// addi r3,r10,-2124
	ctx.r3.s64 = ctx.r10.s64 + -2124;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B484C"))) PPC_WEAK_FUNC(sub_827B484C);
PPC_FUNC_IMPL(__imp__sub_827B484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4850"))) PPC_WEAK_FUNC(sub_827B4850);
PPC_FUNC_IMPL(__imp__sub_827B4850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// addi r8,r9,-1984
	ctx.r8.s64 = ctx.r9.s64 + -1984;
	// lfs f0,10256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4878"))) PPC_WEAK_FUNC(sub_827B4878);
PPC_FUNC_IMPL(__imp__sub_827B4878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4884"))) PPC_WEAK_FUNC(sub_827B4884);
PPC_FUNC_IMPL(__imp__sub_827B4884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4888"))) PPC_WEAK_FUNC(sub_827B4888);
PPC_FUNC_IMPL(__imp__sub_827B4888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14384
	ctx.r3.s64 = ctx.r11.s64 + -14384;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4894"))) PPC_WEAK_FUNC(sub_827B4894);
PPC_FUNC_IMPL(__imp__sub_827B4894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4898"))) PPC_WEAK_FUNC(sub_827B4898);
PPC_FUNC_IMPL(__imp__sub_827B4898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14360
	ctx.r3.s64 = ctx.r11.s64 + -14360;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B48A4"))) PPC_WEAK_FUNC(sub_827B48A4);
PPC_FUNC_IMPL(__imp__sub_827B48A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B48A8"))) PPC_WEAK_FUNC(sub_827B48A8);
PPC_FUNC_IMPL(__imp__sub_827B48A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14336
	ctx.r3.s64 = ctx.r11.s64 + -14336;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B48B4"))) PPC_WEAK_FUNC(sub_827B48B4);
PPC_FUNC_IMPL(__imp__sub_827B48B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B48B8"))) PPC_WEAK_FUNC(sub_827B48B8);
PPC_FUNC_IMPL(__imp__sub_827B48B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14312
	ctx.r3.s64 = ctx.r11.s64 + -14312;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B48C4"))) PPC_WEAK_FUNC(sub_827B48C4);
PPC_FUNC_IMPL(__imp__sub_827B48C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B48C8"))) PPC_WEAK_FUNC(sub_827B48C8);
PPC_FUNC_IMPL(__imp__sub_827B48C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// addi r8,r9,-1952
	ctx.r8.s64 = ctx.r9.s64 + -1952;
	// lfs f0,8884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B48F0"))) PPC_WEAK_FUNC(sub_827B48F0);
PPC_FUNC_IMPL(__imp__sub_827B48F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r9,r11,-22976
	ctx.r9.s64 = ctx.r11.s64 + -22976;
	// addi r8,r10,-1904
	ctx.r8.s64 = ctx.r10.s64 + -1904;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B490C"))) PPC_WEAK_FUNC(sub_827B490C);
PPC_FUNC_IMPL(__imp__sub_827B490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4910"))) PPC_WEAK_FUNC(sub_827B4910);
PPC_FUNC_IMPL(__imp__sub_827B4910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r7,-32112
	ctx.r7.s64 = -2104492032;
	// lfs f0,14348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r6,r7,-1824
	ctx.r6.s64 = ctx.r7.s64 + -1824;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v62,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v59,v63,7,0
	_mm_store_ps(ctx.v59.f32, _mm_blend_ps(_mm_load_ps(ctx.v59.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 7));
	// vspltw128 v63,v61,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vrlimi128 v58,v59,11,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 11));
	// vrlimi128 v63,v58,13,0
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 228), 13));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4968"))) PPC_WEAK_FUNC(sub_827B4968);
PPC_FUNC_IMPL(__imp__sub_827B4968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r7,-32112
	ctx.r7.s64 = -2104492032;
	// lfs f0,19360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r6,r7,-1808
	ctx.r6.s64 = ctx.r7.s64 + -1808;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v62,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v59,v63,7,0
	_mm_store_ps(ctx.v59.f32, _mm_blend_ps(_mm_load_ps(ctx.v59.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 7));
	// vspltw128 v63,v61,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vrlimi128 v58,v59,11,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 11));
	// vrlimi128 v63,v58,13,0
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 228), 13));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B49C0"))) PPC_WEAK_FUNC(sub_827B49C0);
PPC_FUNC_IMPL(__imp__sub_827B49C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r9,r11,13752
	ctx.r9.s64 = ctx.r11.s64 + 13752;
	// addi r8,r10,-1840
	ctx.r8.s64 = ctx.r10.s64 + -1840;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v62,r0,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lvlx128 v58,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v58,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// vrlimi128 v61,v62,7,0
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 7));
	// vrlimi128 v59,v61,11,0
	_mm_store_ps(ctx.v59.f32, _mm_blend_ps(_mm_load_ps(ctx.v59.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 228), 11));
	// vrlimi128 v63,v59,13,0
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 13));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4A00"))) PPC_WEAK_FUNC(sub_827B4A00);
PPC_FUNC_IMPL(__imp__sub_827B4A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r7,-32112
	ctx.r7.s64 = -2104492032;
	// lfs f0,18612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r6,r7,-1856
	ctx.r6.s64 = ctx.r7.s64 + -1856;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v62,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v59,v63,7,0
	_mm_store_ps(ctx.v59.f32, _mm_blend_ps(_mm_load_ps(ctx.v59.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 7));
	// vspltw128 v63,v61,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vrlimi128 v58,v59,11,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 11));
	// vrlimi128 v63,v58,13,0
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 228), 13));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4A58"))) PPC_WEAK_FUNC(sub_827B4A58);
PPC_FUNC_IMPL(__imp__sub_827B4A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r7,-32112
	ctx.r7.s64 = -2104492032;
	// lfs f0,11360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r6,r7,-1792
	ctx.r6.s64 = ctx.r7.s64 + -1792;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v62,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v59,v63,7,0
	_mm_store_ps(ctx.v59.f32, _mm_blend_ps(_mm_load_ps(ctx.v59.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 7));
	// vspltw128 v63,v61,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vrlimi128 v58,v59,11,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 11));
	// vrlimi128 v63,v58,13,0
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 228), 13));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4AB0"))) PPC_WEAK_FUNC(sub_827B4AB0);
PPC_FUNC_IMPL(__imp__sub_827B4AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14288
	ctx.r3.s64 = ctx.r11.s64 + -14288;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4ABC"))) PPC_WEAK_FUNC(sub_827B4ABC);
PPC_FUNC_IMPL(__imp__sub_827B4ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4AC0"))) PPC_WEAK_FUNC(sub_827B4AC0);
PPC_FUNC_IMPL(__imp__sub_827B4AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14264
	ctx.r3.s64 = ctx.r11.s64 + -14264;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4ACC"))) PPC_WEAK_FUNC(sub_827B4ACC);
PPC_FUNC_IMPL(__imp__sub_827B4ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4AD0"))) PPC_WEAK_FUNC(sub_827B4AD0);
PPC_FUNC_IMPL(__imp__sub_827B4AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14240
	ctx.r3.s64 = ctx.r11.s64 + -14240;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4ADC"))) PPC_WEAK_FUNC(sub_827B4ADC);
PPC_FUNC_IMPL(__imp__sub_827B4ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4AE0"))) PPC_WEAK_FUNC(sub_827B4AE0);
PPC_FUNC_IMPL(__imp__sub_827B4AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14200
	ctx.r3.s64 = ctx.r11.s64 + -14200;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4AEC"))) PPC_WEAK_FUNC(sub_827B4AEC);
PPC_FUNC_IMPL(__imp__sub_827B4AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4AF0"))) PPC_WEAK_FUNC(sub_827B4AF0);
PPC_FUNC_IMPL(__imp__sub_827B4AF0) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,6556
	ctx.r3.s64 = ctx.r11.s64 + 6556;
	// bl 0x821c8ed8
	ctx.lr = 0x827B4B08;
	sub_821C8ED8(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-14216
	ctx.r3.s64 = ctx.r10.s64 + -14216;
	// bl 0x823d9a98
	ctx.lr = 0x827B4B14;
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

__attribute__((alias("__imp__sub_827B4B24"))) PPC_WEAK_FUNC(sub_827B4B24);
PPC_FUNC_IMPL(__imp__sub_827B4B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4B28"))) PPC_WEAK_FUNC(sub_827B4B28);
PPC_FUNC_IMPL(__imp__sub_827B4B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14104
	ctx.r3.s64 = ctx.r11.s64 + -14104;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4B34"))) PPC_WEAK_FUNC(sub_827B4B34);
PPC_FUNC_IMPL(__imp__sub_827B4B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4B38"))) PPC_WEAK_FUNC(sub_827B4B38);
PPC_FUNC_IMPL(__imp__sub_827B4B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// addi r5,r11,14600
	ctx.r5.s64 = ctx.r11.s64 + 14600;
	// addi r4,r10,25216
	ctx.r4.s64 = ctx.r10.s64 + 25216;
	// addi r3,r9,6636
	ctx.r3.s64 = ctx.r9.s64 + 6636;
	// li r6,5112
	ctx.r6.s64 = 5112;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4B58"))) PPC_WEAK_FUNC(sub_827B4B58);
PPC_FUNC_IMPL(__imp__sub_827B4B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// addi r5,r11,19712
	ctx.r5.s64 = ctx.r11.s64 + 19712;
	// addi r4,r10,25252
	ctx.r4.s64 = ctx.r10.s64 + 25252;
	// addi r3,r9,6652
	ctx.r3.s64 = ctx.r9.s64 + 6652;
	// li r6,4347
	ctx.r6.s64 = 4347;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4B78"))) PPC_WEAK_FUNC(sub_827B4B78);
PPC_FUNC_IMPL(__imp__sub_827B4B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// addi r5,r11,24136
	ctx.r5.s64 = ctx.r11.s64 + 24136;
	// addi r4,r10,26232
	ctx.r4.s64 = ctx.r10.s64 + 26232;
	// addi r3,r9,6684
	ctx.r3.s64 = ctx.r9.s64 + 6684;
	// li r6,18323
	ctx.r6.s64 = 18323;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4B98"))) PPC_WEAK_FUNC(sub_827B4B98);
PPC_FUNC_IMPL(__imp__sub_827B4B98) {
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
	ctx.lr = 0x827B4BC0;
	sub_821D4268(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r7,-22212
	ctx.r11.s64 = ctx.r7.s64 + -22212;
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

__attribute__((alias("__imp__sub_827B4C0C"))) PPC_WEAK_FUNC(sub_827B4C0C);
PPC_FUNC_IMPL(__imp__sub_827B4C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4C10"))) PPC_WEAK_FUNC(sub_827B4C10);
PPC_FUNC_IMPL(__imp__sub_827B4C10) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// addi r7,r8,-22164
	ctx.r7.s64 = ctx.r8.s64 + -22164;
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

__attribute__((alias("__imp__sub_827B4C30"))) PPC_WEAK_FUNC(sub_827B4C30);
PPC_FUNC_IMPL(__imp__sub_827B4C30) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32123
	ctx.r9.s64 = -2105212928;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// addi r7,r8,-22156
	ctx.r7.s64 = ctx.r8.s64 + -22156;
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

__attribute__((alias("__imp__sub_827B4C50"))) PPC_WEAK_FUNC(sub_827B4C50);
PPC_FUNC_IMPL(__imp__sub_827B4C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r10,95
	ctx.r10.s64 = 95;
	// addi r11,r11,20112
	ctx.r11.s64 = ctx.r11.s64 + 20112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
loc_827B4C64:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x827b4c64
	if (!ctx.cr0.lt) goto loc_827B4C64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4C7C"))) PPC_WEAK_FUNC(sub_827B4C7C);
PPC_FUNC_IMPL(__imp__sub_827B4C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4C80"))) PPC_WEAK_FUNC(sub_827B4C80);
PPC_FUNC_IMPL(__imp__sub_827B4C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14096
	ctx.r3.s64 = ctx.r11.s64 + -14096;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4C8C"))) PPC_WEAK_FUNC(sub_827B4C8C);
PPC_FUNC_IMPL(__imp__sub_827B4C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4C90"))) PPC_WEAK_FUNC(sub_827B4C90);
PPC_FUNC_IMPL(__imp__sub_827B4C90) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,30700
	ctx.r3.s64 = ctx.r11.s64 + 30700;
	// bl 0x821c9790
	ctx.lr = 0x827B4CAC;
	sub_821C9790(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-18432
	ctx.r9.s64 = ctx.r10.s64 + -18432;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4CD0"))) PPC_WEAK_FUNC(sub_827B4CD0);
PPC_FUNC_IMPL(__imp__sub_827B4CD0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,30708
	ctx.r3.s64 = ctx.r11.s64 + 30708;
	// bl 0x821c9790
	ctx.lr = 0x827B4CEC;
	sub_821C9790(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-18420
	ctx.r9.s64 = ctx.r10.s64 + -18420;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4D10"))) PPC_WEAK_FUNC(sub_827B4D10);
PPC_FUNC_IMPL(__imp__sub_827B4D10) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,28664
	ctx.r3.s64 = ctx.r11.s64 + 28664;
	// bl 0x821c9790
	ctx.lr = 0x827B4D2C;
	sub_821C9790(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-18408
	ctx.r9.s64 = ctx.r10.s64 + -18408;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4D50"))) PPC_WEAK_FUNC(sub_827B4D50);
PPC_FUNC_IMPL(__imp__sub_827B4D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14064
	ctx.r3.s64 = ctx.r11.s64 + -14064;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4D5C"))) PPC_WEAK_FUNC(sub_827B4D5C);
PPC_FUNC_IMPL(__imp__sub_827B4D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4D60"))) PPC_WEAK_FUNC(sub_827B4D60);
PPC_FUNC_IMPL(__imp__sub_827B4D60) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,31640
	ctx.r3.s64 = ctx.r11.s64 + 31640;
	// bl 0x821c9790
	ctx.lr = 0x827B4D7C;
	sub_821C9790(ctx, base);
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// stw r3,21304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4D94"))) PPC_WEAK_FUNC(sub_827B4D94);
PPC_FUNC_IMPL(__imp__sub_827B4D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4D98"))) PPC_WEAK_FUNC(sub_827B4D98);
PPC_FUNC_IMPL(__imp__sub_827B4D98) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,31648
	ctx.r3.s64 = ctx.r11.s64 + 31648;
	// bl 0x821c9790
	ctx.lr = 0x827B4DB4;
	sub_821C9790(ctx, base);
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// stw r3,21308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4DCC"))) PPC_WEAK_FUNC(sub_827B4DCC);
PPC_FUNC_IMPL(__imp__sub_827B4DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4DD0"))) PPC_WEAK_FUNC(sub_827B4DD0);
PPC_FUNC_IMPL(__imp__sub_827B4DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r11,r11,21384
	ctx.r11.s64 = ctx.r11.s64 + 21384;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r8,-30600
	ctx.r4.s64 = ctx.r8.s64 + -30600;
loc_827B4DF8:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// stb r9,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r9.u8);
	// stb r9,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r9.u8);
	// stb r9,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r9.u8);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827B4E20:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x827b4e20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B4E20;
	// sth r5,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r5.u16);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// sth r5,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r5.u16);
	// sth r5,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r5.u16);
	// sth r5,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r5.u16);
	// stb r6,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r6.u8);
	// stb r6,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r6.u8);
	// stb r6,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r6.u8);
	// sth r10,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r10.u16);
	// sth r10,50(r11)
	PPC_STORE_U16(ctx.r11.u32 + 50, ctx.r10.u16);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stb r10,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// stb r10,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
	// stb r6,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r6.u8);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bge 0x827b4df8
	if (!ctx.cr0.lt) goto loc_827B4DF8;
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-14048
	ctx.r3.s64 = ctx.r11.s64 + -14048;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4E7C"))) PPC_WEAK_FUNC(sub_827B4E7C);
PPC_FUNC_IMPL(__imp__sub_827B4E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4E80"))) PPC_WEAK_FUNC(sub_827B4E80);
PPC_FUNC_IMPL(__imp__sub_827B4E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32112
	ctx.r9.s64 = -2104492032;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17664
	ctx.r5.s64 = ctx.r11.s64 + -17664;
	// addi r4,r10,-27756
	ctx.r4.s64 = ctx.r10.s64 + -27756;
	// addi r3,r9,21696
	ctx.r3.s64 = ctx.r9.s64 + 21696;
	// ori r6,r6,38024
	ctx.r6.u64 = ctx.r6.u64 | 38024;
	// b 0x821d22e8
	sub_821D22E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4EA4"))) PPC_WEAK_FUNC(sub_827B4EA4);
PPC_FUNC_IMPL(__imp__sub_827B4EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4EA8"))) PPC_WEAK_FUNC(sub_827B4EA8);
PPC_FUNC_IMPL(__imp__sub_827B4EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,-27648
	ctx.r5.s64 = ctx.r11.s64 + -27648;
	// addi r3,r10,21676
	ctx.r3.s64 = ctx.r10.s64 + 21676;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4EC4"))) PPC_WEAK_FUNC(sub_827B4EC4);
PPC_FUNC_IMPL(__imp__sub_827B4EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4EC8"))) PPC_WEAK_FUNC(sub_827B4EC8);
PPC_FUNC_IMPL(__imp__sub_827B4EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,-27200
	ctx.r5.s64 = ctx.r11.s64 + -27200;
	// addi r3,r10,21724
	ctx.r3.s64 = ctx.r10.s64 + 21724;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4EE4"))) PPC_WEAK_FUNC(sub_827B4EE4);
PPC_FUNC_IMPL(__imp__sub_827B4EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4EE8"))) PPC_WEAK_FUNC(sub_827B4EE8);
PPC_FUNC_IMPL(__imp__sub_827B4EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,-27180
	ctx.r5.s64 = ctx.r11.s64 + -27180;
	// addi r3,r10,21744
	ctx.r3.s64 = ctx.r10.s64 + 21744;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4F04"))) PPC_WEAK_FUNC(sub_827B4F04);
PPC_FUNC_IMPL(__imp__sub_827B4F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4F08"))) PPC_WEAK_FUNC(sub_827B4F08);
PPC_FUNC_IMPL(__imp__sub_827B4F08) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,23584
	ctx.r3.s64 = ctx.r11.s64 + 23584;
	// bl 0x82618268
	ctx.lr = 0x827B4F20;
	sub_82618268(ctx, base);
	// lis r10,-32132
	ctx.r10.s64 = -2105802752;
	// addi r3,r10,-13976
	ctx.r3.s64 = ctx.r10.s64 + -13976;
	// bl 0x823d9a98
	ctx.lr = 0x827B4F2C;
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

__attribute__((alias("__imp__sub_827B4F3C"))) PPC_WEAK_FUNC(sub_827B4F3C);
PPC_FUNC_IMPL(__imp__sub_827B4F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4F40"))) PPC_WEAK_FUNC(sub_827B4F40);
PPC_FUNC_IMPL(__imp__sub_827B4F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r10,21088
	ctx.r8.s64 = ctx.r10.s64 + 21088;
	// li r7,16
	ctx.r7.s64 = 16;
	// lfs f0,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B4F70"))) PPC_WEAK_FUNC(sub_827B4F70);
PPC_FUNC_IMPL(__imp__sub_827B4F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-13960
	ctx.r3.s64 = ctx.r11.s64 + -13960;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4F7C"))) PPC_WEAK_FUNC(sub_827B4F7C);
PPC_FUNC_IMPL(__imp__sub_827B4F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4F80"))) PPC_WEAK_FUNC(sub_827B4F80);
PPC_FUNC_IMPL(__imp__sub_827B4F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-13944
	ctx.r3.s64 = ctx.r11.s64 + -13944;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4F8C"))) PPC_WEAK_FUNC(sub_827B4F8C);
PPC_FUNC_IMPL(__imp__sub_827B4F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4F90"))) PPC_WEAK_FUNC(sub_827B4F90);
PPC_FUNC_IMPL(__imp__sub_827B4F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4F9C"))) PPC_WEAK_FUNC(sub_827B4F9C);
PPC_FUNC_IMPL(__imp__sub_827B4F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4FA0"))) PPC_WEAK_FUNC(sub_827B4FA0);
PPC_FUNC_IMPL(__imp__sub_827B4FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,-4584
	ctx.r5.s64 = ctx.r11.s64 + -4584;
	// addi r3,r10,25020
	ctx.r3.s64 = ctx.r10.s64 + 25020;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c06c8
	sub_821C06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4FBC"))) PPC_WEAK_FUNC(sub_827B4FBC);
PPC_FUNC_IMPL(__imp__sub_827B4FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4FC0"))) PPC_WEAK_FUNC(sub_827B4FC0);
PPC_FUNC_IMPL(__imp__sub_827B4FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,27576
	ctx.r3.s64 = ctx.r11.s64 + 27576;
	// b 0x824f5c00
	sub_824F5C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4FCC"))) PPC_WEAK_FUNC(sub_827B4FCC);
PPC_FUNC_IMPL(__imp__sub_827B4FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4FD0"))) PPC_WEAK_FUNC(sub_827B4FD0);
PPC_FUNC_IMPL(__imp__sub_827B4FD0) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r31,15
	ctx.r31.s64 = 15;
	// addi r30,r11,25144
	ctx.r30.s64 = ctx.r11.s64 + 25144;
loc_827B4FF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f5c00
	ctx.lr = 0x827B4FF8;
	sub_824F5C00(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// bge 0x827b4ff0
	if (!ctx.cr0.lt) goto loc_827B4FF0;
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

__attribute__((alias("__imp__sub_827B501C"))) PPC_WEAK_FUNC(sub_827B501C);
PPC_FUNC_IMPL(__imp__sub_827B501C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B5020"))) PPC_WEAK_FUNC(sub_827B5020);
PPC_FUNC_IMPL(__imp__sub_827B5020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// addi r3,r11,-13912
	ctx.r3.s64 = ctx.r11.s64 + -13912;
	// b 0x823d9a98
	sub_823D9A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B502C"))) PPC_WEAK_FUNC(sub_827B502C);
PPC_FUNC_IMPL(__imp__sub_827B502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B5030"))) PPC_WEAK_FUNC(sub_827B5030);
PPC_FUNC_IMPL(__imp__sub_827B5030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32112
	ctx.r10.s64 = -2104492032;
	// addi r5,r11,10332
	ctx.r5.s64 = ctx.r11.s64 + 10332;
	// addi r3,r10,27808
	ctx.r3.s64 = ctx.r10.s64 + 27808;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82630ca0
	sub_82630CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B5048"))) PPC_WEAK_FUNC(sub_827B5048);
PPC_FUNC_IMPL(__imp__sub_827B5048) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r31,r11,27904
	ctx.r31.s64 = ctx.r11.s64 + 27904;
	// addi r5,r10,-5512
	ctx.r5.s64 = ctx.r10.s64 + -5512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82630ca0
	ctx.lr = 0x827B5074;
	sub_82630CA0(ctx, base);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r9,-4548
	ctx.r5.s64 = ctx.r9.s64 + -4548;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82630ca0
	ctx.lr = 0x827B5088;
	sub_82630CA0(ctx, base);
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

__attribute__((alias("__imp__sub_827B509C"))) PPC_WEAK_FUNC(sub_827B509C);
PPC_FUNC_IMPL(__imp__sub_827B509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B50A0"))) PPC_WEAK_FUNC(sub_827B50A0);
PPC_FUNC_IMPL(__imp__sub_827B50A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r7,r11,-28096
	ctx.r7.s64 = ctx.r11.s64 + -28096;
	// addi r6,r10,28244
	ctx.r6.s64 = ctx.r10.s64 + 28244;
	// lwz r11,-28096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28096);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r8,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r8.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B50DC"))) PPC_WEAK_FUNC(sub_827B50DC);
PPC_FUNC_IMPL(__imp__sub_827B50DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B50E0"))) PPC_WEAK_FUNC(sub_827B50E0);
PPC_FUNC_IMPL(__imp__sub_827B50E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r7,r11,-28076
	ctx.r7.s64 = ctx.r11.s64 + -28076;
	// addi r6,r10,28220
	ctx.r6.s64 = ctx.r10.s64 + 28220;
	// lwz r11,-28076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28076);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r8,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r8.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B511C"))) PPC_WEAK_FUNC(sub_827B511C);
PPC_FUNC_IMPL(__imp__sub_827B511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B5120"))) PPC_WEAK_FUNC(sub_827B5120);
PPC_FUNC_IMPL(__imp__sub_827B5120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r9,r11,28024
	ctx.r9.s64 = ctx.r11.s64 + 28024;
	// addi r8,r10,28268
	ctx.r8.s64 = ctx.r10.s64 + 28268;
	// lwz r11,28024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28024);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B5144"))) PPC_WEAK_FUNC(sub_827B5144);
PPC_FUNC_IMPL(__imp__sub_827B5144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B5148"))) PPC_WEAK_FUNC(sub_827B5148);
PPC_FUNC_IMPL(__imp__sub_827B5148) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,28388
	ctx.r31.s64 = ctx.r11.s64 + 28388;
	// addi r5,r10,-10492
	ctx.r5.s64 = ctx.r10.s64 + -10492;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82630ca0
	ctx.lr = 0x827B5174;
	sub_82630CA0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r9,-10336
	ctx.r5.s64 = ctx.r9.s64 + -10336;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82630ca0
	ctx.lr = 0x827B5188;
	sub_82630CA0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r5,r8,-11168
	ctx.r5.s64 = ctx.r8.s64 + -11168;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82630ca0
	ctx.lr = 0x827B519C;
	sub_82630CA0(ctx, base);
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

__attribute__((alias("__imp__sub_827B51B0"))) PPC_WEAK_FUNC(sub_827B51B0);
PPC_FUNC_IMPL(__imp__sub_827B51B0) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r31,r11,28004
	ctx.r31.s64 = ctx.r11.s64 + 28004;
	// addi r5,r10,3184
	ctx.r5.s64 = ctx.r10.s64 + 3184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82630ca0
	ctx.lr = 0x827B51DC;
	sub_82630CA0(ctx, base);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r9,-4548
	ctx.r5.s64 = ctx.r9.s64 + -4548;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82630ca0
	ctx.lr = 0x827B51F0;
	sub_82630CA0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r8,-11536
	ctx.r5.s64 = ctx.r8.s64 + -11536;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82630ca0
	ctx.lr = 0x827B5204;
	sub_82630CA0(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r5,r7,3160
	ctx.r5.s64 = ctx.r7.s64 + 3160;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82630ca0
	ctx.lr = 0x827B5218;
	sub_82630CA0(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r5,r6,3148
	ctx.r5.s64 = ctx.r6.s64 + 3148;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82630ca0
	ctx.lr = 0x827B522C;
	sub_82630CA0(ctx, base);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r5,3144
	ctx.r5.s64 = ctx.r5.s64 + 3144;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82630ca0
	ctx.lr = 0x827B5240;
	sub_82630CA0(ctx, base);
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

__attribute__((alias("__imp__sub_827B5254"))) PPC_WEAK_FUNC(sub_827B5254);
PPC_FUNC_IMPL(__imp__sub_827B5254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B5258"))) PPC_WEAK_FUNC(sub_827B5258);
PPC_FUNC_IMPL(__imp__sub_827B5258) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,28668
	ctx.r31.s64 = ctx.r11.s64 + 28668;
	// addi r5,r10,-10644
	ctx.r5.s64 = ctx.r10.s64 + -10644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82630ca0
	ctx.lr = 0x827B5284;
	sub_82630CA0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r9,-11108
	ctx.r5.s64 = ctx.r9.s64 + -11108;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82630ca0
	ctx.lr = 0x827B5298;
	sub_82630CA0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r8,-11096
	ctx.r5.s64 = ctx.r8.s64 + -11096;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82630ca0
	ctx.lr = 0x827B52AC;
	sub_82630CA0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r5,r7,-11080
	ctx.r5.s64 = ctx.r7.s64 + -11080;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82630ca0
	ctx.lr = 0x827B52C0;
	sub_82630CA0(ctx, base);
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

__attribute__((alias("__imp__sub_827B52D4"))) PPC_WEAK_FUNC(sub_827B52D4);
PPC_FUNC_IMPL(__imp__sub_827B52D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B52D8"))) PPC_WEAK_FUNC(sub_827B52D8);
PPC_FUNC_IMPL(__imp__sub_827B52D8) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r31,r11,28700
	ctx.r31.s64 = ctx.r11.s64 + 28700;
	// addi r5,r10,-4548
	ctx.r5.s64 = ctx.r10.s64 + -4548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82630ca0
	ctx.lr = 0x827B5304;
	sub_82630CA0(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r9,3200
	ctx.r5.s64 = ctx.r9.s64 + 3200;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82630ca0
	ctx.lr = 0x827B5318;
	sub_82630CA0(ctx, base);
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

__attribute__((alias("__imp__sub_827B532C"))) PPC_WEAK_FUNC(sub_827B532C);
PPC_FUNC_IMPL(__imp__sub_827B532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B5330"))) PPC_WEAK_FUNC(sub_827B5330);
PPC_FUNC_IMPL(__imp__sub_827B5330) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,28324
	ctx.r31.s64 = ctx.r11.s64 + 28324;
	// addi r5,r10,-11536
	ctx.r5.s64 = ctx.r10.s64 + -11536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82630ca0
	ctx.lr = 0x827B535C;
	sub_82630CA0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r9,-11108
	ctx.r5.s64 = ctx.r9.s64 + -11108;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82630ca0
	ctx.lr = 0x827B5370;
	sub_82630CA0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r5,r8,-11244
	ctx.r5.s64 = ctx.r8.s64 + -11244;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82630ca0
	ctx.lr = 0x827B5384;
	sub_82630CA0(ctx, base);
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

__attribute__((alias("__imp__sub_827B5398"))) PPC_WEAK_FUNC(sub_827B5398);
PPC_FUNC_IMPL(__imp__sub_827B5398) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r31,r11,28284
	ctx.r31.s64 = ctx.r11.s64 + 28284;
	// addi r5,r10,-4548
	ctx.r5.s64 = ctx.r10.s64 + -4548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82630ca0
	ctx.lr = 0x827B53C4;
	sub_82630CA0(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r9,3216
	ctx.r5.s64 = ctx.r9.s64 + 3216;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82630ca0
	ctx.lr = 0x827B53D8;
	sub_82630CA0(ctx, base);
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

__attribute__((alias("__imp__sub_827B53EC"))) PPC_WEAK_FUNC(sub_827B53EC);
PPC_FUNC_IMPL(__imp__sub_827B53EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B53F0"))) PPC_WEAK_FUNC(sub_827B53F0);
PPC_FUNC_IMPL(__imp__sub_827B53F0) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r31,r11,29276
	ctx.r31.s64 = ctx.r11.s64 + 29276;
	// addi r5,r10,3244
	ctx.r5.s64 = ctx.r10.s64 + 3244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82630ca0
	ctx.lr = 0x827B541C;
	sub_82630CA0(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r9,3232
	ctx.r5.s64 = ctx.r9.s64 + 3232;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82630ca0
	ctx.lr = 0x827B5430;
	sub_82630CA0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r8,-11548
	ctx.r5.s64 = ctx.r8.s64 + -11548;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82630ca0
	ctx.lr = 0x827B5444;
	sub_82630CA0(ctx, base);
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

__attribute__((alias("__imp__sub_827B5458"))) PPC_WEAK_FUNC(sub_827B5458);
PPC_FUNC_IMPL(__imp__sub_827B5458) {
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
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r31,r11,28124
	ctx.r31.s64 = ctx.r11.s64 + 28124;
	// addi r5,r10,3284
	ctx.r5.s64 = ctx.r10.s64 + 3284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82630ca0
	ctx.lr = 0x827B5484;
	sub_82630CA0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r9,-11548
	ctx.r5.s64 = ctx.r9.s64 + -11548;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82630ca0
	ctx.lr = 0x827B5498;
	sub_82630CA0(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r8,3232
	ctx.r5.s64 = ctx.r8.s64 + 3232;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82630ca0
	ctx.lr = 0x827B54AC;
	sub_82630CA0(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r7,3260
	ctx.r5.s64 = ctx.r7.s64 + 3260;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82630ca0
	ctx.lr = 0x827B54C0;
	sub_82630CA0(ctx, base);
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

