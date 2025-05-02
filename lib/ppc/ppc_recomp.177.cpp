#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827B9CA0"))) PPC_WEAK_FUNC(sub_827B9CA0);
PPC_FUNC_IMPL(__imp__sub_827B9CA0) {
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
	// addi r11,r11,-10092
	ctx.r11.s64 = ctx.r11.s64 + -10092;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9CC4:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9CD0;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9cc4
	if (!ctx.cr0.lt) goto loc_827B9CC4;
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

__attribute__((alias("__imp__sub_827B9CF0"))) PPC_WEAK_FUNC(sub_827B9CF0);
PPC_FUNC_IMPL(__imp__sub_827B9CF0) {
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
	// addi r11,r11,-11372
	ctx.r11.s64 = ctx.r11.s64 + -11372;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9D14:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9D20;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9d14
	if (!ctx.cr0.lt) goto loc_827B9D14;
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

__attribute__((alias("__imp__sub_827B9D40"))) PPC_WEAK_FUNC(sub_827B9D40);
PPC_FUNC_IMPL(__imp__sub_827B9D40) {
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
	// addi r11,r11,-10572
	ctx.r11.s64 = ctx.r11.s64 + -10572;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9D64:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9D70;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9d64
	if (!ctx.cr0.lt) goto loc_827B9D64;
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

__attribute__((alias("__imp__sub_827B9D90"))) PPC_WEAK_FUNC(sub_827B9D90);
PPC_FUNC_IMPL(__imp__sub_827B9D90) {
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
	// addi r11,r11,-11212
	ctx.r11.s64 = ctx.r11.s64 + -11212;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9DB4:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9DC0;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9db4
	if (!ctx.cr0.lt) goto loc_827B9DB4;
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

__attribute__((alias("__imp__sub_827B9DE0"))) PPC_WEAK_FUNC(sub_827B9DE0);
PPC_FUNC_IMPL(__imp__sub_827B9DE0) {
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
	// addi r11,r11,-10412
	ctx.r11.s64 = ctx.r11.s64 + -10412;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9E04:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9E10;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9e04
	if (!ctx.cr0.lt) goto loc_827B9E04;
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

__attribute__((alias("__imp__sub_827B9E30"))) PPC_WEAK_FUNC(sub_827B9E30);
PPC_FUNC_IMPL(__imp__sub_827B9E30) {
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
	// addi r11,r11,-8288
	ctx.r11.s64 = ctx.r11.s64 + -8288;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9E54:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9E60;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9e54
	if (!ctx.cr0.lt) goto loc_827B9E54;
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

__attribute__((alias("__imp__sub_827B9E80"))) PPC_WEAK_FUNC(sub_827B9E80);
PPC_FUNC_IMPL(__imp__sub_827B9E80) {
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
	// addi r11,r11,-9248
	ctx.r11.s64 = ctx.r11.s64 + -9248;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9EA4:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9EB0;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9ea4
	if (!ctx.cr0.lt) goto loc_827B9EA4;
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

__attribute__((alias("__imp__sub_827B9ED0"))) PPC_WEAK_FUNC(sub_827B9ED0);
PPC_FUNC_IMPL(__imp__sub_827B9ED0) {
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
	// addi r11,r11,-9568
	ctx.r11.s64 = ctx.r11.s64 + -9568;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9EF4:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9F00;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9ef4
	if (!ctx.cr0.lt) goto loc_827B9EF4;
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

__attribute__((alias("__imp__sub_827B9F20"))) PPC_WEAK_FUNC(sub_827B9F20);
PPC_FUNC_IMPL(__imp__sub_827B9F20) {
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
	// addi r11,r11,-9408
	ctx.r11.s64 = ctx.r11.s64 + -9408;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9F44:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9F50;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9f44
	if (!ctx.cr0.lt) goto loc_827B9F44;
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

__attribute__((alias("__imp__sub_827B9F70"))) PPC_WEAK_FUNC(sub_827B9F70);
PPC_FUNC_IMPL(__imp__sub_827B9F70) {
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
	// addi r11,r11,-8608
	ctx.r11.s64 = ctx.r11.s64 + -8608;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9F94:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9FA0;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9f94
	if (!ctx.cr0.lt) goto loc_827B9F94;
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

__attribute__((alias("__imp__sub_827B9FC0"))) PPC_WEAK_FUNC(sub_827B9FC0);
PPC_FUNC_IMPL(__imp__sub_827B9FC0) {
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
	// addi r11,r11,-8768
	ctx.r11.s64 = ctx.r11.s64 + -8768;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827B9FE4:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827B9FF0;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827b9fe4
	if (!ctx.cr0.lt) goto loc_827B9FE4;
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

__attribute__((alias("__imp__sub_827BA010"))) PPC_WEAK_FUNC(sub_827BA010);
PPC_FUNC_IMPL(__imp__sub_827BA010) {
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
	// addi r11,r11,-8448
	ctx.r11.s64 = ctx.r11.s64 + -8448;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827BA034:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827BA040;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827ba034
	if (!ctx.cr0.lt) goto loc_827BA034;
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

__attribute__((alias("__imp__sub_827BA060"))) PPC_WEAK_FUNC(sub_827BA060);
PPC_FUNC_IMPL(__imp__sub_827BA060) {
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
	// addi r11,r11,-9088
	ctx.r11.s64 = ctx.r11.s64 + -9088;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827BA084:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827BA090;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827ba084
	if (!ctx.cr0.lt) goto loc_827BA084;
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

__attribute__((alias("__imp__sub_827BA0B0"))) PPC_WEAK_FUNC(sub_827BA0B0);
PPC_FUNC_IMPL(__imp__sub_827BA0B0) {
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
	// addi r11,r11,-8928
	ctx.r11.s64 = ctx.r11.s64 + -8928;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827BA0D4:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827BA0E0;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827ba0d4
	if (!ctx.cr0.lt) goto loc_827BA0D4;
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

__attribute__((alias("__imp__sub_827BA100"))) PPC_WEAK_FUNC(sub_827BA100);
PPC_FUNC_IMPL(__imp__sub_827BA100) {
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
	// addi r11,r11,-9728
	ctx.r11.s64 = ctx.r11.s64 + -9728;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_827BA124:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82495d58
	ctx.lr = 0x827BA130;
	sub_82495D58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827ba124
	if (!ctx.cr0.lt) goto loc_827BA124;
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

__attribute__((alias("__imp__sub_827BA150"))) PPC_WEAK_FUNC(sub_827BA150);
PPC_FUNC_IMPL(__imp__sub_827BA150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-7680(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7680);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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

__attribute__((alias("__imp__sub_827BA170"))) PPC_WEAK_FUNC(sub_827BA170);
PPC_FUNC_IMPL(__imp__sub_827BA170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA174"))) PPC_WEAK_FUNC(sub_827BA174);
PPC_FUNC_IMPL(__imp__sub_827BA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA178"))) PPC_WEAK_FUNC(sub_827BA178);
PPC_FUNC_IMPL(__imp__sub_827BA178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x827BA180;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// addi r11,r11,7456
	ctx.r11.s64 = ctx.r11.s64 + 7456;
	// lhz r31,10(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827ba1c4
	if (ctx.cr6.eq) goto loc_827BA1C4;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x827ba1bc
	if (!ctx.cr6.gt) goto loc_827BA1BC;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
loc_827BA1A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2aa0
	ctx.lr = 0x827BA1B0;
	sub_821D2AA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x827ba1a8
	if (!ctx.cr0.eq) goto loc_827BA1A8;
loc_827BA1BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82130588
	ctx.lr = 0x827BA1C4;
	sub_82130588(ctx, base);
loc_827BA1C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA1CC"))) PPC_WEAK_FUNC(sub_827BA1CC);
PPC_FUNC_IMPL(__imp__sub_827BA1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA1D0"))) PPC_WEAK_FUNC(sub_827BA1D0);
PPC_FUNC_IMPL(__imp__sub_827BA1D0) {
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
	// li r30,95
	ctx.r30.s64 = 95;
	// addi r11,r11,3952
	ctx.r11.s64 = ctx.r11.s64 + 3952;
	// addi r31,r11,10752
	ctx.r31.s64 = ctx.r11.s64 + 10752;
loc_827BA1F4:
	// addi r31,r31,-112
	ctx.r31.s64 = ctx.r31.s64 + -112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2028
	ctx.lr = 0x827BA200;
	sub_821D2028(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827ba1f4
	if (!ctx.cr0.lt) goto loc_827BA1F4;
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

__attribute__((alias("__imp__sub_827BA220"))) PPC_WEAK_FUNC(sub_827BA220);
PPC_FUNC_IMPL(__imp__sub_827BA220) {
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
	// li r30,95
	ctx.r30.s64 = 95;
	// addi r11,r11,-7248
	ctx.r11.s64 = ctx.r11.s64 + -7248;
	// addi r31,r11,10752
	ctx.r31.s64 = ctx.r11.s64 + 10752;
loc_827BA244:
	// addi r31,r31,-112
	ctx.r31.s64 = ctx.r31.s64 + -112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2028
	ctx.lr = 0x827BA250;
	sub_821D2028(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827ba244
	if (!ctx.cr0.lt) goto loc_827BA244;
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

__attribute__((alias("__imp__sub_827BA270"))) PPC_WEAK_FUNC(sub_827BA270);
PPC_FUNC_IMPL(__imp__sub_827BA270) {
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
	// li r30,95
	ctx.r30.s64 = 95;
	// addi r11,r11,14704
	ctx.r11.s64 = ctx.r11.s64 + 14704;
	// addi r31,r11,32256
	ctx.r31.s64 = ctx.r11.s64 + 32256;
loc_827BA294:
	// addi r31,r31,-336
	ctx.r31.s64 = ctx.r31.s64 + -336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2028
	ctx.lr = 0x827BA2A0;
	sub_821D2028(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827ba294
	if (!ctx.cr0.lt) goto loc_827BA294;
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

__attribute__((alias("__imp__sub_827BA2C0"))) PPC_WEAK_FUNC(sub_827BA2C0);
PPC_FUNC_IMPL(__imp__sub_827BA2C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA2C4"))) PPC_WEAK_FUNC(sub_827BA2C4);
PPC_FUNC_IMPL(__imp__sub_827BA2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA2C8"))) PPC_WEAK_FUNC(sub_827BA2C8);
PPC_FUNC_IMPL(__imp__sub_827BA2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r11,r11,-18216
	ctx.r11.s64 = ctx.r11.s64 + -18216;
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

__attribute__((alias("__imp__sub_827BA2E4"))) PPC_WEAK_FUNC(sub_827BA2E4);
PPC_FUNC_IMPL(__imp__sub_827BA2E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA2E8"))) PPC_WEAK_FUNC(sub_827BA2E8);
PPC_FUNC_IMPL(__imp__sub_827BA2E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA2EC"))) PPC_WEAK_FUNC(sub_827BA2EC);
PPC_FUNC_IMPL(__imp__sub_827BA2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA2F0"))) PPC_WEAK_FUNC(sub_827BA2F0);
PPC_FUNC_IMPL(__imp__sub_827BA2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r11,r11,-10744
	ctx.r11.s64 = ctx.r11.s64 + -10744;
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

__attribute__((alias("__imp__sub_827BA30C"))) PPC_WEAK_FUNC(sub_827BA30C);
PPC_FUNC_IMPL(__imp__sub_827BA30C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA310"))) PPC_WEAK_FUNC(sub_827BA310);
PPC_FUNC_IMPL(__imp__sub_827BA310) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r31,r11,-9632
	ctx.r31.s64 = ctx.r11.s64 + -9632;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x824e0430
	ctx.lr = 0x827BA330;
	sub_824E0430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0430
	ctx.lr = 0x827BA338;
	sub_824E0430(ctx, base);
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

__attribute__((alias("__imp__sub_827BA34C"))) PPC_WEAK_FUNC(sub_827BA34C);
PPC_FUNC_IMPL(__imp__sub_827BA34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA350"))) PPC_WEAK_FUNC(sub_827BA350);
PPC_FUNC_IMPL(__imp__sub_827BA350) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r31,r11,-10352
	ctx.r31.s64 = ctx.r11.s64 + -10352;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x824e0430
	ctx.lr = 0x827BA370;
	sub_824E0430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0430
	ctx.lr = 0x827BA378;
	sub_824E0430(ctx, base);
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

__attribute__((alias("__imp__sub_827BA38C"))) PPC_WEAK_FUNC(sub_827BA38C);
PPC_FUNC_IMPL(__imp__sub_827BA38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA390"))) PPC_WEAK_FUNC(sub_827BA390);
PPC_FUNC_IMPL(__imp__sub_827BA390) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r31,r11,-9424
	ctx.r31.s64 = ctx.r11.s64 + -9424;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x824e0430
	ctx.lr = 0x827BA3B0;
	sub_824E0430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0430
	ctx.lr = 0x827BA3B8;
	sub_824E0430(ctx, base);
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

__attribute__((alias("__imp__sub_827BA3CC"))) PPC_WEAK_FUNC(sub_827BA3CC);
PPC_FUNC_IMPL(__imp__sub_827BA3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA3D0"))) PPC_WEAK_FUNC(sub_827BA3D0);
PPC_FUNC_IMPL(__imp__sub_827BA3D0) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r31,r11,-10096
	ctx.r31.s64 = ctx.r11.s64 + -10096;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x824e0430
	ctx.lr = 0x827BA3F0;
	sub_824E0430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0430
	ctx.lr = 0x827BA3F8;
	sub_824E0430(ctx, base);
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

__attribute__((alias("__imp__sub_827BA40C"))) PPC_WEAK_FUNC(sub_827BA40C);
PPC_FUNC_IMPL(__imp__sub_827BA40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA410"))) PPC_WEAK_FUNC(sub_827BA410);
PPC_FUNC_IMPL(__imp__sub_827BA410) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r31,r11,-9840
	ctx.r31.s64 = ctx.r11.s64 + -9840;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x824e0430
	ctx.lr = 0x827BA430;
	sub_824E0430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e0430
	ctx.lr = 0x827BA438;
	sub_824E0430(ctx, base);
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

__attribute__((alias("__imp__sub_827BA44C"))) PPC_WEAK_FUNC(sub_827BA44C);
PPC_FUNC_IMPL(__imp__sub_827BA44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA450"))) PPC_WEAK_FUNC(sub_827BA450);
PPC_FUNC_IMPL(__imp__sub_827BA450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r3,r11,-8296
	ctx.r3.s64 = ctx.r11.s64 + -8296;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA45C"))) PPC_WEAK_FUNC(sub_827BA45C);
PPC_FUNC_IMPL(__imp__sub_827BA45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA460"))) PPC_WEAK_FUNC(sub_827BA460);
PPC_FUNC_IMPL(__imp__sub_827BA460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r3,r11,-5856
	ctx.r3.s64 = ctx.r11.s64 + -5856;
	// b 0x823877f8
	sub_823877F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA46C"))) PPC_WEAK_FUNC(sub_827BA46C);
PPC_FUNC_IMPL(__imp__sub_827BA46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA470"))) PPC_WEAK_FUNC(sub_827BA470);
PPC_FUNC_IMPL(__imp__sub_827BA470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x827BA478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-13520
	ctx.r11.s64 = ctx.r11.s64 + -13520;
	// lhz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827ba4bc
	if (ctx.cr6.eq) goto loc_827BA4BC;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x827ba4b4
	if (!ctx.cr6.gt) goto loc_827BA4B4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_827BA4A0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82130588
	ctx.lr = 0x827BA4A8;
	sub_82130588(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x827ba4a0
	if (!ctx.cr0.eq) goto loc_827BA4A0;
loc_827BA4B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82130588
	ctx.lr = 0x827BA4BC;
	sub_82130588(ctx, base);
loc_827BA4BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA4C4"))) PPC_WEAK_FUNC(sub_827BA4C4);
PPC_FUNC_IMPL(__imp__sub_827BA4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA4C8"))) PPC_WEAK_FUNC(sub_827BA4C8);
PPC_FUNC_IMPL(__imp__sub_827BA4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x827BA4D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-12648
	ctx.r11.s64 = ctx.r11.s64 + -12648;
	// lhz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827ba514
	if (ctx.cr6.eq) goto loc_827BA514;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x827ba50c
	if (!ctx.cr6.gt) goto loc_827BA50C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_827BA4F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238a288
	ctx.lr = 0x827BA500;
	sub_8238A288(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// bne 0x827ba4f8
	if (!ctx.cr0.eq) goto loc_827BA4F8;
loc_827BA50C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82130588
	ctx.lr = 0x827BA514;
	sub_82130588(ctx, base);
loc_827BA514:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA51C"))) PPC_WEAK_FUNC(sub_827BA51C);
PPC_FUNC_IMPL(__imp__sub_827BA51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA520"))) PPC_WEAK_FUNC(sub_827BA520);
PPC_FUNC_IMPL(__imp__sub_827BA520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-12120
	ctx.r11.s64 = ctx.r11.s64 + -12120;
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

__attribute__((alias("__imp__sub_827BA53C"))) PPC_WEAK_FUNC(sub_827BA53C);
PPC_FUNC_IMPL(__imp__sub_827BA53C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA540"))) PPC_WEAK_FUNC(sub_827BA540);
PPC_FUNC_IMPL(__imp__sub_827BA540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-12168
	ctx.r11.s64 = ctx.r11.s64 + -12168;
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

__attribute__((alias("__imp__sub_827BA55C"))) PPC_WEAK_FUNC(sub_827BA55C);
PPC_FUNC_IMPL(__imp__sub_827BA55C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA560"))) PPC_WEAK_FUNC(sub_827BA560);
PPC_FUNC_IMPL(__imp__sub_827BA560) {
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
	// addi r31,r11,-12188
	ctx.r31.s64 = ctx.r11.s64 + -12188;
	// lwz r11,-12188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ba5a0
	if (ctx.cr6.eq) goto loc_827BA5A0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82130588
	ctx.lr = 0x827BA58C;
	sub_82130588(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ba5a0
	if (ctx.cr6.eq) goto loc_827BA5A0;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82130588
	ctx.lr = 0x827BA5A0;
	sub_82130588(ctx, base);
loc_827BA5A0:
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

__attribute__((alias("__imp__sub_827BA5B4"))) PPC_WEAK_FUNC(sub_827BA5B4);
PPC_FUNC_IMPL(__imp__sub_827BA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA5B8"))) PPC_WEAK_FUNC(sub_827BA5B8);
PPC_FUNC_IMPL(__imp__sub_827BA5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-12036
	ctx.r3.s64 = ctx.r11.s64 + -12036;
	// b 0x82608de8
	sub_82608DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA5C4"))) PPC_WEAK_FUNC(sub_827BA5C4);
PPC_FUNC_IMPL(__imp__sub_827BA5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA5C8"))) PPC_WEAK_FUNC(sub_827BA5C8);
PPC_FUNC_IMPL(__imp__sub_827BA5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-12016
	ctx.r3.s64 = ctx.r11.s64 + -12016;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA5D4"))) PPC_WEAK_FUNC(sub_827BA5D4);
PPC_FUNC_IMPL(__imp__sub_827BA5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA5D8"))) PPC_WEAK_FUNC(sub_827BA5D8);
PPC_FUNC_IMPL(__imp__sub_827BA5D8) {
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
	// addi r31,r11,-10744
	ctx.r31.s64 = ctx.r11.s64 + -10744;
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ba604
	if (ctx.cr6.eq) goto loc_827BA604;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82130588
	ctx.lr = 0x827BA604;
	sub_82130588(ctx, base);
loc_827BA604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6030
	ctx.lr = 0x827BA60C;
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

__attribute__((alias("__imp__sub_827BA620"))) PPC_WEAK_FUNC(sub_827BA620);
PPC_FUNC_IMPL(__imp__sub_827BA620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// addi r11,r11,-4368
	ctx.r11.s64 = ctx.r11.s64 + -4368;
	// stw r11,-15672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA634"))) PPC_WEAK_FUNC(sub_827BA634);
PPC_FUNC_IMPL(__imp__sub_827BA634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA638"))) PPC_WEAK_FUNC(sub_827BA638);
PPC_FUNC_IMPL(__imp__sub_827BA638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// addi r11,r11,-4368
	ctx.r11.s64 = ctx.r11.s64 + -4368;
	// stw r11,-15640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA64C"))) PPC_WEAK_FUNC(sub_827BA64C);
PPC_FUNC_IMPL(__imp__sub_827BA64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA650"))) PPC_WEAK_FUNC(sub_827BA650);
PPC_FUNC_IMPL(__imp__sub_827BA650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// addi r11,r11,6704
	ctx.r11.s64 = ctx.r11.s64 + 6704;
	// stw r11,-15548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA664"))) PPC_WEAK_FUNC(sub_827BA664);
PPC_FUNC_IMPL(__imp__sub_827BA664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA668"))) PPC_WEAK_FUNC(sub_827BA668);
PPC_FUNC_IMPL(__imp__sub_827BA668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA66C"))) PPC_WEAK_FUNC(sub_827BA66C);
PPC_FUNC_IMPL(__imp__sub_827BA66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA670"))) PPC_WEAK_FUNC(sub_827BA670);
PPC_FUNC_IMPL(__imp__sub_827BA670) {
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
	// lwz r3,2220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// bl 0x821c9158
	ctx.lr = 0x827BA690;
	sub_821C9158(ctx, base);
	// lwz r3,2224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// bl 0x821c9158
	ctx.lr = 0x827BA698;
	sub_821C9158(ctx, base);
	// addi r3,r31,2176
	ctx.r3.s64 = ctx.r31.s64 + 2176;
	// bl 0x82130000
	ctx.lr = 0x827BA6A0;
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

__attribute__((alias("__imp__sub_827BA6B4"))) PPC_WEAK_FUNC(sub_827BA6B4);
PPC_FUNC_IMPL(__imp__sub_827BA6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA6B8"))) PPC_WEAK_FUNC(sub_827BA6B8);
PPC_FUNC_IMPL(__imp__sub_827BA6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
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

__attribute__((alias("__imp__sub_827BA6D4"))) PPC_WEAK_FUNC(sub_827BA6D4);
PPC_FUNC_IMPL(__imp__sub_827BA6D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA6D8"))) PPC_WEAK_FUNC(sub_827BA6D8);
PPC_FUNC_IMPL(__imp__sub_827BA6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19332
	ctx.r3.s64 = ctx.r11.s64 + 19332;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA6E4"))) PPC_WEAK_FUNC(sub_827BA6E4);
PPC_FUNC_IMPL(__imp__sub_827BA6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA6E8"))) PPC_WEAK_FUNC(sub_827BA6E8);
PPC_FUNC_IMPL(__imp__sub_827BA6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19356
	ctx.r3.s64 = ctx.r11.s64 + 19356;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA6F4"))) PPC_WEAK_FUNC(sub_827BA6F4);
PPC_FUNC_IMPL(__imp__sub_827BA6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA6F8"))) PPC_WEAK_FUNC(sub_827BA6F8);
PPC_FUNC_IMPL(__imp__sub_827BA6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19380
	ctx.r3.s64 = ctx.r11.s64 + 19380;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA704"))) PPC_WEAK_FUNC(sub_827BA704);
PPC_FUNC_IMPL(__imp__sub_827BA704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA708"))) PPC_WEAK_FUNC(sub_827BA708);
PPC_FUNC_IMPL(__imp__sub_827BA708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19404
	ctx.r3.s64 = ctx.r11.s64 + 19404;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA714"))) PPC_WEAK_FUNC(sub_827BA714);
PPC_FUNC_IMPL(__imp__sub_827BA714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA718"))) PPC_WEAK_FUNC(sub_827BA718);
PPC_FUNC_IMPL(__imp__sub_827BA718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19428
	ctx.r3.s64 = ctx.r11.s64 + 19428;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA724"))) PPC_WEAK_FUNC(sub_827BA724);
PPC_FUNC_IMPL(__imp__sub_827BA724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA728"))) PPC_WEAK_FUNC(sub_827BA728);
PPC_FUNC_IMPL(__imp__sub_827BA728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19452
	ctx.r3.s64 = ctx.r11.s64 + 19452;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA734"))) PPC_WEAK_FUNC(sub_827BA734);
PPC_FUNC_IMPL(__imp__sub_827BA734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA738"))) PPC_WEAK_FUNC(sub_827BA738);
PPC_FUNC_IMPL(__imp__sub_827BA738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19476
	ctx.r3.s64 = ctx.r11.s64 + 19476;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA744"))) PPC_WEAK_FUNC(sub_827BA744);
PPC_FUNC_IMPL(__imp__sub_827BA744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA748"))) PPC_WEAK_FUNC(sub_827BA748);
PPC_FUNC_IMPL(__imp__sub_827BA748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19500
	ctx.r3.s64 = ctx.r11.s64 + 19500;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA754"))) PPC_WEAK_FUNC(sub_827BA754);
PPC_FUNC_IMPL(__imp__sub_827BA754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA758"))) PPC_WEAK_FUNC(sub_827BA758);
PPC_FUNC_IMPL(__imp__sub_827BA758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19524
	ctx.r3.s64 = ctx.r11.s64 + 19524;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA764"))) PPC_WEAK_FUNC(sub_827BA764);
PPC_FUNC_IMPL(__imp__sub_827BA764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA768"))) PPC_WEAK_FUNC(sub_827BA768);
PPC_FUNC_IMPL(__imp__sub_827BA768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19548
	ctx.r3.s64 = ctx.r11.s64 + 19548;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA774"))) PPC_WEAK_FUNC(sub_827BA774);
PPC_FUNC_IMPL(__imp__sub_827BA774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA778"))) PPC_WEAK_FUNC(sub_827BA778);
PPC_FUNC_IMPL(__imp__sub_827BA778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19572
	ctx.r3.s64 = ctx.r11.s64 + 19572;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA784"))) PPC_WEAK_FUNC(sub_827BA784);
PPC_FUNC_IMPL(__imp__sub_827BA784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA788"))) PPC_WEAK_FUNC(sub_827BA788);
PPC_FUNC_IMPL(__imp__sub_827BA788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19596
	ctx.r3.s64 = ctx.r11.s64 + 19596;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA794"))) PPC_WEAK_FUNC(sub_827BA794);
PPC_FUNC_IMPL(__imp__sub_827BA794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA798"))) PPC_WEAK_FUNC(sub_827BA798);
PPC_FUNC_IMPL(__imp__sub_827BA798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r11,r11,20356
	ctx.r11.s64 = ctx.r11.s64 + 20356;
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

__attribute__((alias("__imp__sub_827BA7B4"))) PPC_WEAK_FUNC(sub_827BA7B4);
PPC_FUNC_IMPL(__imp__sub_827BA7B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA7B8"))) PPC_WEAK_FUNC(sub_827BA7B8);
PPC_FUNC_IMPL(__imp__sub_827BA7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r11,r11,20368
	ctx.r11.s64 = ctx.r11.s64 + 20368;
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

__attribute__((alias("__imp__sub_827BA7D4"))) PPC_WEAK_FUNC(sub_827BA7D4);
PPC_FUNC_IMPL(__imp__sub_827BA7D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA7D8"))) PPC_WEAK_FUNC(sub_827BA7D8);
PPC_FUNC_IMPL(__imp__sub_827BA7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,19852
	ctx.r3.s64 = ctx.r11.s64 + 19852;
	// b 0x824fa9b0
	sub_824FA9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BA7E4"))) PPC_WEAK_FUNC(sub_827BA7E4);
PPC_FUNC_IMPL(__imp__sub_827BA7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA7E8"))) PPC_WEAK_FUNC(sub_827BA7E8);
PPC_FUNC_IMPL(__imp__sub_827BA7E8) {
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
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BA814;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BA81C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BA840"))) PPC_WEAK_FUNC(sub_827BA840);
PPC_FUNC_IMPL(__imp__sub_827BA840) {
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
	// addi r30,r31,20168
	ctx.r30.s64 = ctx.r31.s64 + 20168;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20168, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BA86C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BA874;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,20168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20168, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BA898"))) PPC_WEAK_FUNC(sub_827BA898);
PPC_FUNC_IMPL(__imp__sub_827BA898) {
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
	// addi r30,r31,20104
	ctx.r30.s64 = ctx.r31.s64 + 20104;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20104, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BA8C4;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BA8CC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,20104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BA8F0"))) PPC_WEAK_FUNC(sub_827BA8F0);
PPC_FUNC_IMPL(__imp__sub_827BA8F0) {
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
	// addi r30,r31,19944
	ctx.r30.s64 = ctx.r31.s64 + 19944;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,19944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19944, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BA91C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BA924;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,19944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19944, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BA948"))) PPC_WEAK_FUNC(sub_827BA948);
PPC_FUNC_IMPL(__imp__sub_827BA948) {
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
	// addi r30,r31,20232
	ctx.r30.s64 = ctx.r31.s64 + 20232;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20232, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BA974;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BA97C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,20232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20232, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BA9A0"))) PPC_WEAK_FUNC(sub_827BA9A0);
PPC_FUNC_IMPL(__imp__sub_827BA9A0) {
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
	// addi r30,r31,19912
	ctx.r30.s64 = ctx.r31.s64 + 19912;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,19912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19912, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BA9CC;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BA9D4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,19912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19912, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BA9F8"))) PPC_WEAK_FUNC(sub_827BA9F8);
PPC_FUNC_IMPL(__imp__sub_827BA9F8) {
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
	// addi r30,r31,20008
	ctx.r30.s64 = ctx.r31.s64 + 20008;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20008, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BAA24;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAA2C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,20008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20008, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAA50"))) PPC_WEAK_FUNC(sub_827BAA50);
PPC_FUNC_IMPL(__imp__sub_827BAA50) {
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
	// addi r30,r31,19880
	ctx.r30.s64 = ctx.r31.s64 + 19880;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,19880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19880, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BAA7C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAA84;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,19880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19880, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAAA8"))) PPC_WEAK_FUNC(sub_827BAAA8);
PPC_FUNC_IMPL(__imp__sub_827BAAA8) {
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
	// addi r30,r31,20136
	ctx.r30.s64 = ctx.r31.s64 + 20136;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20136, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BAAD4;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAADC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,20136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20136, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAB00"))) PPC_WEAK_FUNC(sub_827BAB00);
PPC_FUNC_IMPL(__imp__sub_827BAB00) {
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
	// addi r30,r31,20072
	ctx.r30.s64 = ctx.r31.s64 + 20072;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20072, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BAB2C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAB34;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,20072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20072, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAB58"))) PPC_WEAK_FUNC(sub_827BAB58);
PPC_FUNC_IMPL(__imp__sub_827BAB58) {
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
	// addi r30,r31,20040
	ctx.r30.s64 = ctx.r31.s64 + 20040;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20040, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BAB84;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAB8C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,20040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20040, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BABB0"))) PPC_WEAK_FUNC(sub_827BABB0);
PPC_FUNC_IMPL(__imp__sub_827BABB0) {
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
	// addi r30,r31,20200
	ctx.r30.s64 = ctx.r31.s64 + 20200;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20200, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BABDC;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BABE4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,20200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20200, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAC08"))) PPC_WEAK_FUNC(sub_827BAC08);
PPC_FUNC_IMPL(__imp__sub_827BAC08) {
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
	// addi r30,r31,19976
	ctx.r30.s64 = ctx.r31.s64 + 19976;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,19976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19976, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BAC34;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAC3C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,19976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19976, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAC60"))) PPC_WEAK_FUNC(sub_827BAC60);
PPC_FUNC_IMPL(__imp__sub_827BAC60) {
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
	// addi r30,r31,20264
	ctx.r30.s64 = ctx.r31.s64 + 20264;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// stw r11,20264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20264, ctx.r11.u32);
	// bl 0x824827b0
	ctx.lr = 0x827BAC8C;
	sub_824827B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAC94;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,20264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20264, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BACB8"))) PPC_WEAK_FUNC(sub_827BACB8);
PPC_FUNC_IMPL(__imp__sub_827BACB8) {
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
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827bace4
	if (ctx.cr6.eq) goto loc_827BACE4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82130588
	ctx.lr = 0x827BACE4;
	sub_82130588(ctx, base);
loc_827BACE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6030
	ctx.lr = 0x827BACEC;
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

__attribute__((alias("__imp__sub_827BAD00"))) PPC_WEAK_FUNC(sub_827BAD00);
PPC_FUNC_IMPL(__imp__sub_827BAD00) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22380
	ctx.r30.s64 = ctx.r31.s64 + 22380;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22380, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BAD2C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAD34;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22380, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAD58"))) PPC_WEAK_FUNC(sub_827BAD58);
PPC_FUNC_IMPL(__imp__sub_827BAD58) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22508
	ctx.r30.s64 = ctx.r31.s64 + 22508;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22508, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BAD84;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAD8C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22508, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BADB0"))) PPC_WEAK_FUNC(sub_827BADB0);
PPC_FUNC_IMPL(__imp__sub_827BADB0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22092
	ctx.r30.s64 = ctx.r31.s64 + 22092;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22092, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BADDC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BADE4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22092, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAE08"))) PPC_WEAK_FUNC(sub_827BAE08);
PPC_FUNC_IMPL(__imp__sub_827BAE08) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22476
	ctx.r30.s64 = ctx.r31.s64 + 22476;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22476, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BAE34;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAE3C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22476, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAE60"))) PPC_WEAK_FUNC(sub_827BAE60);
PPC_FUNC_IMPL(__imp__sub_827BAE60) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22412
	ctx.r30.s64 = ctx.r31.s64 + 22412;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22412, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BAE8C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAE94;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22412, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAEB8"))) PPC_WEAK_FUNC(sub_827BAEB8);
PPC_FUNC_IMPL(__imp__sub_827BAEB8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22156
	ctx.r30.s64 = ctx.r31.s64 + 22156;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22156, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BAEE4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAEEC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22156, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAF10"))) PPC_WEAK_FUNC(sub_827BAF10);
PPC_FUNC_IMPL(__imp__sub_827BAF10) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22316
	ctx.r30.s64 = ctx.r31.s64 + 22316;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22316, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BAF3C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAF44;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22316, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAF68"))) PPC_WEAK_FUNC(sub_827BAF68);
PPC_FUNC_IMPL(__imp__sub_827BAF68) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22028
	ctx.r30.s64 = ctx.r31.s64 + 22028;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22028, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BAF94;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAF9C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22028, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BAFC0"))) PPC_WEAK_FUNC(sub_827BAFC0);
PPC_FUNC_IMPL(__imp__sub_827BAFC0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22188
	ctx.r30.s64 = ctx.r31.s64 + 22188;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22188, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BAFEC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BAFF4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22188, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB018"))) PPC_WEAK_FUNC(sub_827BB018);
PPC_FUNC_IMPL(__imp__sub_827BB018) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22540
	ctx.r30.s64 = ctx.r31.s64 + 22540;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22540, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB044;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB04C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22540, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB070"))) PPC_WEAK_FUNC(sub_827BB070);
PPC_FUNC_IMPL(__imp__sub_827BB070) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22348
	ctx.r30.s64 = ctx.r31.s64 + 22348;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22348, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB09C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB0A4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22348, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB0C8"))) PPC_WEAK_FUNC(sub_827BB0C8);
PPC_FUNC_IMPL(__imp__sub_827BB0C8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22124
	ctx.r30.s64 = ctx.r31.s64 + 22124;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22124, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB0F4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB0FC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22124, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB120"))) PPC_WEAK_FUNC(sub_827BB120);
PPC_FUNC_IMPL(__imp__sub_827BB120) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22252
	ctx.r30.s64 = ctx.r31.s64 + 22252;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22252, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB14C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB154;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22252, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB178"))) PPC_WEAK_FUNC(sub_827BB178);
PPC_FUNC_IMPL(__imp__sub_827BB178) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22060
	ctx.r30.s64 = ctx.r31.s64 + 22060;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22060, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB1A4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB1AC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22060, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB1D0"))) PPC_WEAK_FUNC(sub_827BB1D0);
PPC_FUNC_IMPL(__imp__sub_827BB1D0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22444
	ctx.r30.s64 = ctx.r31.s64 + 22444;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22444, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB1FC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB204;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22444, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB228"))) PPC_WEAK_FUNC(sub_827BB228);
PPC_FUNC_IMPL(__imp__sub_827BB228) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22284
	ctx.r30.s64 = ctx.r31.s64 + 22284;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22284, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB254;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB25C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22284, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB280"))) PPC_WEAK_FUNC(sub_827BB280);
PPC_FUNC_IMPL(__imp__sub_827BB280) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,22220
	ctx.r30.s64 = ctx.r31.s64 + 22220;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,22220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22220, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB2AC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB2B4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,22220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22220, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB2D8"))) PPC_WEAK_FUNC(sub_827BB2D8);
PPC_FUNC_IMPL(__imp__sub_827BB2D8) {
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
	// addi r11,r11,22584
	ctx.r11.s64 = ctx.r11.s64 + 22584;
	// addi r31,r11,7204
	ctx.r31.s64 = ctx.r11.s64 + 7204;
loc_827BB2FC:
	// addi r31,r31,-112
	ctx.r31.s64 = ctx.r31.s64 + -112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f840
	ctx.lr = 0x827BB308;
	sub_8252F840(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827bb2fc
	if (!ctx.cr0.lt) goto loc_827BB2FC;
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

__attribute__((alias("__imp__sub_827BB328"))) PPC_WEAK_FUNC(sub_827BB328);
PPC_FUNC_IMPL(__imp__sub_827BB328) {
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
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827bb354
	if (ctx.cr6.eq) goto loc_827BB354;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82130588
	ctx.lr = 0x827BB354;
	sub_82130588(ctx, base);
loc_827BB354:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6030
	ctx.lr = 0x827BB35C;
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

__attribute__((alias("__imp__sub_827BB370"))) PPC_WEAK_FUNC(sub_827BB370);
PPC_FUNC_IMPL(__imp__sub_827BB370) {
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
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827bb39c
	if (ctx.cr6.eq) goto loc_827BB39C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82130588
	ctx.lr = 0x827BB39C;
	sub_82130588(ctx, base);
loc_827BB39C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6030
	ctx.lr = 0x827BB3A4;
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

__attribute__((alias("__imp__sub_827BB3B8"))) PPC_WEAK_FUNC(sub_827BB3B8);
PPC_FUNC_IMPL(__imp__sub_827BB3B8) {
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
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827bb3e4
	if (ctx.cr6.eq) goto loc_827BB3E4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82130588
	ctx.lr = 0x827BB3E4;
	sub_82130588(ctx, base);
loc_827BB3E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a6030
	ctx.lr = 0x827BB3EC;
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

__attribute__((alias("__imp__sub_827BB400"))) PPC_WEAK_FUNC(sub_827BB400);
PPC_FUNC_IMPL(__imp__sub_827BB400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-9628
	ctx.r3.s64 = ctx.r11.s64 + -9628;
	// b 0x821bbe30
	sub_821BBE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB40C"))) PPC_WEAK_FUNC(sub_827BB40C);
PPC_FUNC_IMPL(__imp__sub_827BB40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BB410"))) PPC_WEAK_FUNC(sub_827BB410);
PPC_FUNC_IMPL(__imp__sub_827BB410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,30036
	ctx.r3.s64 = ctx.r11.s64 + 30036;
	// b 0x82197448
	sub_82197448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB41C"))) PPC_WEAK_FUNC(sub_827BB41C);
PPC_FUNC_IMPL(__imp__sub_827BB41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BB420"))) PPC_WEAK_FUNC(sub_827BB420);
PPC_FUNC_IMPL(__imp__sub_827BB420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// b 0x824fa9b0
	sub_824FA9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB42C"))) PPC_WEAK_FUNC(sub_827BB42C);
PPC_FUNC_IMPL(__imp__sub_827BB42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BB430"))) PPC_WEAK_FUNC(sub_827BB430);
PPC_FUNC_IMPL(__imp__sub_827BB430) {
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
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30340, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827BB45C;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB464;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30340, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB488"))) PPC_WEAK_FUNC(sub_827BB488);
PPC_FUNC_IMPL(__imp__sub_827BB488) {
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
	// addi r30,r31,30180
	ctx.r30.s64 = ctx.r31.s64 + 30180;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30180, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827BB4B4;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB4BC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30180, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB4E0"))) PPC_WEAK_FUNC(sub_827BB4E0);
PPC_FUNC_IMPL(__imp__sub_827BB4E0) {
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
	// addi r30,r31,30212
	ctx.r30.s64 = ctx.r31.s64 + 30212;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30212, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827BB50C;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB514;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30212, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB538"))) PPC_WEAK_FUNC(sub_827BB538);
PPC_FUNC_IMPL(__imp__sub_827BB538) {
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
	// addi r30,r31,30404
	ctx.r30.s64 = ctx.r31.s64 + 30404;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30404, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827BB564;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB56C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30404, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB590"))) PPC_WEAK_FUNC(sub_827BB590);
PPC_FUNC_IMPL(__imp__sub_827BB590) {
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
	// addi r30,r31,30244
	ctx.r30.s64 = ctx.r31.s64 + 30244;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30244, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827BB5BC;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB5C4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30244, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB5E8"))) PPC_WEAK_FUNC(sub_827BB5E8);
PPC_FUNC_IMPL(__imp__sub_827BB5E8) {
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
	// addi r30,r31,30308
	ctx.r30.s64 = ctx.r31.s64 + 30308;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30308, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827BB614;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB61C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30308, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB640"))) PPC_WEAK_FUNC(sub_827BB640);
PPC_FUNC_IMPL(__imp__sub_827BB640) {
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
	// addi r30,r31,30148
	ctx.r30.s64 = ctx.r31.s64 + 30148;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30148, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827BB66C;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB674;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30148, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB698"))) PPC_WEAK_FUNC(sub_827BB698);
PPC_FUNC_IMPL(__imp__sub_827BB698) {
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
	// addi r30,r31,30276
	ctx.r30.s64 = ctx.r31.s64 + 30276;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30276, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827BB6C4;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB6CC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30276, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB6F0"))) PPC_WEAK_FUNC(sub_827BB6F0);
PPC_FUNC_IMPL(__imp__sub_827BB6F0) {
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
	// addi r30,r31,30372
	ctx.r30.s64 = ctx.r31.s64 + 30372;
	// addi r11,r11,26268
	ctx.r11.s64 = ctx.r11.s64 + 26268;
	// stw r11,30372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30372, ctx.r11.u32);
	// bl 0x824e7bc8
	ctx.lr = 0x827BB71C;
	sub_824E7BC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB724;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30372, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB748"))) PPC_WEAK_FUNC(sub_827BB748);
PPC_FUNC_IMPL(__imp__sub_827BB748) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,30480
	ctx.r30.s64 = ctx.r31.s64 + 30480;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,30480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30480, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB774;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB77C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30480, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB7A0"))) PPC_WEAK_FUNC(sub_827BB7A0);
PPC_FUNC_IMPL(__imp__sub_827BB7A0) {
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
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,30648
	ctx.r11.s64 = ctx.r11.s64 + 30648;
	// addi r31,r11,896
	ctx.r31.s64 = ctx.r11.s64 + 896;
loc_827BB7C4:
	// addi r31,r31,-224
	ctx.r31.s64 = ctx.r31.s64 + -224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82534698
	ctx.lr = 0x827BB7D0;
	sub_82534698(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827bb7c4
	if (!ctx.cr0.lt) goto loc_827BB7C4;
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

__attribute__((alias("__imp__sub_827BB7F0"))) PPC_WEAK_FUNC(sub_827BB7F0);
PPC_FUNC_IMPL(__imp__sub_827BB7F0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32120
	ctx.r30.s64 = ctx.r31.s64 + 32120;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32120, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB81C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB824;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB848"))) PPC_WEAK_FUNC(sub_827BB848);
PPC_FUNC_IMPL(__imp__sub_827BB848) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31896
	ctx.r30.s64 = ctx.r31.s64 + 31896;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31896, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB874;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB87C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31896, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB8A0"))) PPC_WEAK_FUNC(sub_827BB8A0);
PPC_FUNC_IMPL(__imp__sub_827BB8A0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31960
	ctx.r30.s64 = ctx.r31.s64 + 31960;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31960, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB8CC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB8D4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31960, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB8F8"))) PPC_WEAK_FUNC(sub_827BB8F8);
PPC_FUNC_IMPL(__imp__sub_827BB8F8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31704
	ctx.r30.s64 = ctx.r31.s64 + 31704;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31704, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB924;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB92C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31704, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB950"))) PPC_WEAK_FUNC(sub_827BB950);
PPC_FUNC_IMPL(__imp__sub_827BB950) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31576
	ctx.r30.s64 = ctx.r31.s64 + 31576;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31576, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB97C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB984;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31576, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BB9A8"))) PPC_WEAK_FUNC(sub_827BB9A8);
PPC_FUNC_IMPL(__imp__sub_827BB9A8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31800
	ctx.r30.s64 = ctx.r31.s64 + 31800;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31800, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BB9D4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BB9DC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31800, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBA00"))) PPC_WEAK_FUNC(sub_827BBA00);
PPC_FUNC_IMPL(__imp__sub_827BBA00) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,30580
	ctx.r30.s64 = ctx.r31.s64 + 30580;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,30580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30580, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBA2C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBA34;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30580, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBA58"))) PPC_WEAK_FUNC(sub_827BBA58);
PPC_FUNC_IMPL(__imp__sub_827BBA58) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32024
	ctx.r30.s64 = ctx.r31.s64 + 32024;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32024, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBA84;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBA8C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32024, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBAB0"))) PPC_WEAK_FUNC(sub_827BBAB0);
PPC_FUNC_IMPL(__imp__sub_827BBAB0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31608
	ctx.r30.s64 = ctx.r31.s64 + 31608;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31608, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBADC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBAE4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31608, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBB08"))) PPC_WEAK_FUNC(sub_827BBB08);
PPC_FUNC_IMPL(__imp__sub_827BBB08) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32184
	ctx.r30.s64 = ctx.r31.s64 + 32184;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32184, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBB34;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBB3C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32184, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBB60"))) PPC_WEAK_FUNC(sub_827BBB60);
PPC_FUNC_IMPL(__imp__sub_827BBB60) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31544
	ctx.r30.s64 = ctx.r31.s64 + 31544;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31544, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBB8C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBB94;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31544, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBBB8"))) PPC_WEAK_FUNC(sub_827BBBB8);
PPC_FUNC_IMPL(__imp__sub_827BBBB8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31992
	ctx.r30.s64 = ctx.r31.s64 + 31992;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31992, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBBE4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBBEC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31992, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBC10"))) PPC_WEAK_FUNC(sub_827BBC10);
PPC_FUNC_IMPL(__imp__sub_827BBC10) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,30612
	ctx.r30.s64 = ctx.r31.s64 + 30612;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,30612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30612, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBC3C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBC44;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30612, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBC68"))) PPC_WEAK_FUNC(sub_827BBC68);
PPC_FUNC_IMPL(__imp__sub_827BBC68) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32152
	ctx.r30.s64 = ctx.r31.s64 + 32152;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32152, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBC94;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBC9C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBCC0"))) PPC_WEAK_FUNC(sub_827BBCC0);
PPC_FUNC_IMPL(__imp__sub_827BBCC0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32056
	ctx.r30.s64 = ctx.r31.s64 + 32056;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32056, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBCEC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBCF4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32056, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBD18"))) PPC_WEAK_FUNC(sub_827BBD18);
PPC_FUNC_IMPL(__imp__sub_827BBD18) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,30516
	ctx.r30.s64 = ctx.r31.s64 + 30516;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,30516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30516, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBD44;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBD4C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30516, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBD70"))) PPC_WEAK_FUNC(sub_827BBD70);
PPC_FUNC_IMPL(__imp__sub_827BBD70) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,30548
	ctx.r30.s64 = ctx.r31.s64 + 30548;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,30548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30548, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBD9C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBDA4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,30548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30548, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBDC8"))) PPC_WEAK_FUNC(sub_827BBDC8);
PPC_FUNC_IMPL(__imp__sub_827BBDC8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31736
	ctx.r30.s64 = ctx.r31.s64 + 31736;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31736, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBDF4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBDFC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31736, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBE20"))) PPC_WEAK_FUNC(sub_827BBE20);
PPC_FUNC_IMPL(__imp__sub_827BBE20) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31640
	ctx.r30.s64 = ctx.r31.s64 + 31640;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31640, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBE4C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBE54;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31640, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBE78"))) PPC_WEAK_FUNC(sub_827BBE78);
PPC_FUNC_IMPL(__imp__sub_827BBE78) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31672
	ctx.r30.s64 = ctx.r31.s64 + 31672;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31672, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBEA4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBEAC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31672, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBED0"))) PPC_WEAK_FUNC(sub_827BBED0);
PPC_FUNC_IMPL(__imp__sub_827BBED0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32088
	ctx.r30.s64 = ctx.r31.s64 + 32088;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32088, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBEFC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBF04;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32088, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBF28"))) PPC_WEAK_FUNC(sub_827BBF28);
PPC_FUNC_IMPL(__imp__sub_827BBF28) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31832
	ctx.r30.s64 = ctx.r31.s64 + 31832;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31832, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBF54;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBF5C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31832, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBF80"))) PPC_WEAK_FUNC(sub_827BBF80);
PPC_FUNC_IMPL(__imp__sub_827BBF80) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31864
	ctx.r30.s64 = ctx.r31.s64 + 31864;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31864, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BBFAC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BBFB4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31864, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BBFD8"))) PPC_WEAK_FUNC(sub_827BBFD8);
PPC_FUNC_IMPL(__imp__sub_827BBFD8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31768
	ctx.r30.s64 = ctx.r31.s64 + 31768;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31768, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BC004;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC00C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31768, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC030"))) PPC_WEAK_FUNC(sub_827BC030);
PPC_FUNC_IMPL(__imp__sub_827BC030) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,31928
	ctx.r30.s64 = ctx.r31.s64 + 31928;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,31928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31928, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BC05C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC064;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,31928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31928, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC088"))) PPC_WEAK_FUNC(sub_827BC088);
PPC_FUNC_IMPL(__imp__sub_827BC088) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32332
	ctx.r30.s64 = ctx.r31.s64 + 32332;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32332, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BC0B4;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC0BC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32332, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC0E0"))) PPC_WEAK_FUNC(sub_827BC0E0);
PPC_FUNC_IMPL(__imp__sub_827BC0E0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32300
	ctx.r30.s64 = ctx.r31.s64 + 32300;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32300, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BC10C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC114;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32300, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC138"))) PPC_WEAK_FUNC(sub_827BC138);
PPC_FUNC_IMPL(__imp__sub_827BC138) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32364
	ctx.r30.s64 = ctx.r31.s64 + 32364;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32364, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BC164;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC16C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32364, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC190"))) PPC_WEAK_FUNC(sub_827BC190);
PPC_FUNC_IMPL(__imp__sub_827BC190) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32396
	ctx.r30.s64 = ctx.r31.s64 + 32396;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32396, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BC1BC;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC1C4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32396, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC1E8"))) PPC_WEAK_FUNC(sub_827BC1E8);
PPC_FUNC_IMPL(__imp__sub_827BC1E8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32428
	ctx.r30.s64 = ctx.r31.s64 + 32428;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32428, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BC214;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC21C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32428, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC240"))) PPC_WEAK_FUNC(sub_827BC240);
PPC_FUNC_IMPL(__imp__sub_827BC240) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32468
	ctx.r30.s64 = ctx.r31.s64 + 32468;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// stw r11,32468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32468, ctx.r11.u32);
	// bl 0x82273a60
	ctx.lr = 0x827BC26C;
	sub_82273A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC274;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32468, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC298"))) PPC_WEAK_FUNC(sub_827BC298);
PPC_FUNC_IMPL(__imp__sub_827BC298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-992
	ctx.r3.s64 = ctx.r11.s64 + -992;
	// b 0x821bbe30
	sub_821BBE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC2A4"))) PPC_WEAK_FUNC(sub_827BC2A4);
PPC_FUNC_IMPL(__imp__sub_827BC2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC2A8"))) PPC_WEAK_FUNC(sub_827BC2A8);
PPC_FUNC_IMPL(__imp__sub_827BC2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,32568
	ctx.r3.s64 = ctx.r11.s64 + 32568;
	// b 0x824fa9b0
	sub_824FA9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC2B4"))) PPC_WEAK_FUNC(sub_827BC2B4);
PPC_FUNC_IMPL(__imp__sub_827BC2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC2B8"))) PPC_WEAK_FUNC(sub_827BC2B8);
PPC_FUNC_IMPL(__imp__sub_827BC2B8) {
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
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32628, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827BC2E4;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC2EC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32628, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC310"))) PPC_WEAK_FUNC(sub_827BC310);
PPC_FUNC_IMPL(__imp__sub_827BC310) {
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
	// addi r30,r31,32724
	ctx.r30.s64 = ctx.r31.s64 + 32724;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32724, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827BC33C;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC344;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32724, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC368"))) PPC_WEAK_FUNC(sub_827BC368);
PPC_FUNC_IMPL(__imp__sub_827BC368) {
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
	// addi r30,r31,32660
	ctx.r30.s64 = ctx.r31.s64 + 32660;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32660, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827BC394;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC39C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32660, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC3C0"))) PPC_WEAK_FUNC(sub_827BC3C0);
PPC_FUNC_IMPL(__imp__sub_827BC3C0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,-32716
	ctx.r30.s64 = ctx.r31.s64 + -32716;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,-32716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32716, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827BC3EC;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC3F4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,-32716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32716, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC418"))) PPC_WEAK_FUNC(sub_827BC418);
PPC_FUNC_IMPL(__imp__sub_827BC418) {
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
	// addi r30,r31,32692
	ctx.r30.s64 = ctx.r31.s64 + 32692;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827BC444;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC44C;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32692, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC470"))) PPC_WEAK_FUNC(sub_827BC470);
PPC_FUNC_IMPL(__imp__sub_827BC470) {
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
	// addi r30,r31,32596
	ctx.r30.s64 = ctx.r31.s64 + 32596;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32596, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827BC49C;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC4A4;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32596, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC4C8"))) PPC_WEAK_FUNC(sub_827BC4C8);
PPC_FUNC_IMPL(__imp__sub_827BC4C8) {
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
	// addi r30,r31,32756
	ctx.r30.s64 = ctx.r31.s64 + 32756;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,32756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32756, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827BC4F4;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC4FC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,32756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32756, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC520"))) PPC_WEAK_FUNC(sub_827BC520);
PPC_FUNC_IMPL(__imp__sub_827BC520) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,-32684
	ctx.r30.s64 = ctx.r31.s64 + -32684;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,-32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32684, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827BC54C;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC554;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,-32684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32684, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC578"))) PPC_WEAK_FUNC(sub_827BC578);
PPC_FUNC_IMPL(__imp__sub_827BC578) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,-32748
	ctx.r30.s64 = ctx.r31.s64 + -32748;
	// addi r11,r11,-30048
	ctx.r11.s64 = ctx.r11.s64 + -30048;
	// stw r11,-32748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32748, ctx.r11.u32);
	// bl 0x82530238
	ctx.lr = 0x827BC5A4;
	sub_82530238(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa710
	ctx.lr = 0x827BC5AC;
	sub_824FA710(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// stw r11,-32748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32748, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC5D0"))) PPC_WEAK_FUNC(sub_827BC5D0);
PPC_FUNC_IMPL(__imp__sub_827BC5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-25536
	ctx.r11.s64 = ctx.r11.s64 + -25536;
	// stw r11,584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC5E4"))) PPC_WEAK_FUNC(sub_827BC5E4);
PPC_FUNC_IMPL(__imp__sub_827BC5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC5E8"))) PPC_WEAK_FUNC(sub_827BC5E8);
PPC_FUNC_IMPL(__imp__sub_827BC5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r11,r11,-32556
	ctx.r11.s64 = ctx.r11.s64 + -32556;
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

__attribute__((alias("__imp__sub_827BC604"))) PPC_WEAK_FUNC(sub_827BC604);
PPC_FUNC_IMPL(__imp__sub_827BC604) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC608"))) PPC_WEAK_FUNC(sub_827BC608);
PPC_FUNC_IMPL(__imp__sub_827BC608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r11,r11,-32544
	ctx.r11.s64 = ctx.r11.s64 + -32544;
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

__attribute__((alias("__imp__sub_827BC624"))) PPC_WEAK_FUNC(sub_827BC624);
PPC_FUNC_IMPL(__imp__sub_827BC624) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC628"))) PPC_WEAK_FUNC(sub_827BC628);
PPC_FUNC_IMPL(__imp__sub_827BC628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-32536
	ctx.r3.s64 = ctx.r11.s64 + -32536;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC634"))) PPC_WEAK_FUNC(sub_827BC634);
PPC_FUNC_IMPL(__imp__sub_827BC634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC638"))) PPC_WEAK_FUNC(sub_827BC638);
PPC_FUNC_IMPL(__imp__sub_827BC638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-32520
	ctx.r3.s64 = ctx.r11.s64 + -32520;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC644"))) PPC_WEAK_FUNC(sub_827BC644);
PPC_FUNC_IMPL(__imp__sub_827BC644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC648"))) PPC_WEAK_FUNC(sub_827BC648);
PPC_FUNC_IMPL(__imp__sub_827BC648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-32504
	ctx.r3.s64 = ctx.r11.s64 + -32504;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC654"))) PPC_WEAK_FUNC(sub_827BC654);
PPC_FUNC_IMPL(__imp__sub_827BC654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC658"))) PPC_WEAK_FUNC(sub_827BC658);
PPC_FUNC_IMPL(__imp__sub_827BC658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-32488
	ctx.r3.s64 = ctx.r11.s64 + -32488;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC664"))) PPC_WEAK_FUNC(sub_827BC664);
PPC_FUNC_IMPL(__imp__sub_827BC664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC668"))) PPC_WEAK_FUNC(sub_827BC668);
PPC_FUNC_IMPL(__imp__sub_827BC668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC674"))) PPC_WEAK_FUNC(sub_827BC674);
PPC_FUNC_IMPL(__imp__sub_827BC674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC678"))) PPC_WEAK_FUNC(sub_827BC678);
PPC_FUNC_IMPL(__imp__sub_827BC678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,3780
	ctx.r11.s64 = ctx.r11.s64 + 3780;
	// addi r9,r10,-17020
	ctx.r9.s64 = ctx.r10.s64 + -17020;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827bc6ac
	if (ctx.cr6.eq) goto loc_827BC6AC;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_827BC6AC:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r10,-30128
	ctx.r9.s64 = ctx.r10.s64 + -30128;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC6C4"))) PPC_WEAK_FUNC(sub_827BC6C4);
PPC_FUNC_IMPL(__imp__sub_827BC6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC6C8"))) PPC_WEAK_FUNC(sub_827BC6C8);
PPC_FUNC_IMPL(__imp__sub_827BC6C8) {
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
	// lis r31,-32114
	ctx.r31.s64 = -2104623104;
	// lwz r3,-23584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23584);
	// bl 0x82130588
	ctx.lr = 0x827BC6E4;
	sub_82130588(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-23584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23584, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC700"))) PPC_WEAK_FUNC(sub_827BC700);
PPC_FUNC_IMPL(__imp__sub_827BC700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r11,r11,-23608
	ctx.r11.s64 = ctx.r11.s64 + -23608;
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

__attribute__((alias("__imp__sub_827BC71C"))) PPC_WEAK_FUNC(sub_827BC71C);
PPC_FUNC_IMPL(__imp__sub_827BC71C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC720"))) PPC_WEAK_FUNC(sub_827BC720);
PPC_FUNC_IMPL(__imp__sub_827BC720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r11,r11,-23592
	ctx.r11.s64 = ctx.r11.s64 + -23592;
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

__attribute__((alias("__imp__sub_827BC73C"))) PPC_WEAK_FUNC(sub_827BC73C);
PPC_FUNC_IMPL(__imp__sub_827BC73C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC740"))) PPC_WEAK_FUNC(sub_827BC740);
PPC_FUNC_IMPL(__imp__sub_827BC740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r11,r11,-23600
	ctx.r11.s64 = ctx.r11.s64 + -23600;
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

__attribute__((alias("__imp__sub_827BC75C"))) PPC_WEAK_FUNC(sub_827BC75C);
PPC_FUNC_IMPL(__imp__sub_827BC75C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC760"))) PPC_WEAK_FUNC(sub_827BC760);
PPC_FUNC_IMPL(__imp__sub_827BC760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-23548
	ctx.r3.s64 = ctx.r11.s64 + -23548;
	// b 0x821d2aa0
	sub_821D2AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC76C"))) PPC_WEAK_FUNC(sub_827BC76C);
PPC_FUNC_IMPL(__imp__sub_827BC76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC770"))) PPC_WEAK_FUNC(sub_827BC770);
PPC_FUNC_IMPL(__imp__sub_827BC770) {
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
	// lis r31,-32127
	ctx.r31.s64 = -2105475072;
	// lwz r3,4404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4404);
	// bl 0x82130588
	ctx.lr = 0x827BC78C;
	sub_82130588(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4404, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC7A8"))) PPC_WEAK_FUNC(sub_827BC7A8);
PPC_FUNC_IMPL(__imp__sub_827BC7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r3,r11,-23388
	ctx.r3.s64 = ctx.r11.s64 + -23388;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC7B4"))) PPC_WEAK_FUNC(sub_827BC7B4);
PPC_FUNC_IMPL(__imp__sub_827BC7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC7B8"))) PPC_WEAK_FUNC(sub_827BC7B8);
PPC_FUNC_IMPL(__imp__sub_827BC7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// stw r11,13092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13092, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC7CC"))) PPC_WEAK_FUNC(sub_827BC7CC);
PPC_FUNC_IMPL(__imp__sub_827BC7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC7D0"))) PPC_WEAK_FUNC(sub_827BC7D0);
PPC_FUNC_IMPL(__imp__sub_827BC7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// stw r11,13096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC7E4"))) PPC_WEAK_FUNC(sub_827BC7E4);
PPC_FUNC_IMPL(__imp__sub_827BC7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC7E8"))) PPC_WEAK_FUNC(sub_827BC7E8);
PPC_FUNC_IMPL(__imp__sub_827BC7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// stw r11,13100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC7FC"))) PPC_WEAK_FUNC(sub_827BC7FC);
PPC_FUNC_IMPL(__imp__sub_827BC7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC800"))) PPC_WEAK_FUNC(sub_827BC800);
PPC_FUNC_IMPL(__imp__sub_827BC800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// stw r11,13204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC814"))) PPC_WEAK_FUNC(sub_827BC814);
PPC_FUNC_IMPL(__imp__sub_827BC814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC818"))) PPC_WEAK_FUNC(sub_827BC818);
PPC_FUNC_IMPL(__imp__sub_827BC818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// stw r11,13208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC82C"))) PPC_WEAK_FUNC(sub_827BC82C);
PPC_FUNC_IMPL(__imp__sub_827BC82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC830"))) PPC_WEAK_FUNC(sub_827BC830);
PPC_FUNC_IMPL(__imp__sub_827BC830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// stw r11,13992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC844"))) PPC_WEAK_FUNC(sub_827BC844);
PPC_FUNC_IMPL(__imp__sub_827BC844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC848"))) PPC_WEAK_FUNC(sub_827BC848);
PPC_FUNC_IMPL(__imp__sub_827BC848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// stw r11,13996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13996, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC85C"))) PPC_WEAK_FUNC(sub_827BC85C);
PPC_FUNC_IMPL(__imp__sub_827BC85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC860"))) PPC_WEAK_FUNC(sub_827BC860);
PPC_FUNC_IMPL(__imp__sub_827BC860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// stw r11,14000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC874"))) PPC_WEAK_FUNC(sub_827BC874);
PPC_FUNC_IMPL(__imp__sub_827BC874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC878"))) PPC_WEAK_FUNC(sub_827BC878);
PPC_FUNC_IMPL(__imp__sub_827BC878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,6556
	ctx.r3.s64 = ctx.r11.s64 + 6556;
	// b 0x82130000
	sub_82130000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC884"))) PPC_WEAK_FUNC(sub_827BC884);
PPC_FUNC_IMPL(__imp__sub_827BC884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC888"))) PPC_WEAK_FUNC(sub_827BC888);
PPC_FUNC_IMPL(__imp__sub_827BC888) {
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
	// lis r30,-32127
	ctx.r30.s64 = -2105475072;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r31,r30,14064
	ctx.r31.s64 = ctx.r30.s64 + 14064;
	// addi r11,r11,21260
	ctx.r11.s64 = ctx.r11.s64 + 21260;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,14064(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14064, ctx.r11.u32);
	// bl 0x825fc480
	ctx.lr = 0x827BC8B8;
	sub_825FC480(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825eea48
	ctx.lr = 0x827BC8C0;
	sub_825EEA48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,20884
	ctx.r11.s64 = ctx.r11.s64 + 20884;
	// stw r11,14064(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827BC8E4"))) PPC_WEAK_FUNC(sub_827BC8E4);
PPC_FUNC_IMPL(__imp__sub_827BC8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC8E8"))) PPC_WEAK_FUNC(sub_827BC8E8);
PPC_FUNC_IMPL(__imp__sub_827BC8E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC8EC"))) PPC_WEAK_FUNC(sub_827BC8EC);
PPC_FUNC_IMPL(__imp__sub_827BC8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC8F0"))) PPC_WEAK_FUNC(sub_827BC8F0);
PPC_FUNC_IMPL(__imp__sub_827BC8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,21264
	ctx.r3.s64 = ctx.r11.s64 + 21264;
	// lhz r5,6(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825fde48
	sub_825FDE48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC90C"))) PPC_WEAK_FUNC(sub_827BC90C);
PPC_FUNC_IMPL(__imp__sub_827BC90C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BC910"))) PPC_WEAK_FUNC(sub_827BC910);
PPC_FUNC_IMPL(__imp__sub_827BC910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// addi r3,r11,21312
	ctx.r3.s64 = ctx.r11.s64 + 21312;
	// b 0x822cdba0
	sub_822CDBA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BC91C"))) PPC_WEAK_FUNC(sub_827BC91C);
PPC_FUNC_IMPL(__imp__sub_827BC91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BC920"))) PPC_WEAK_FUNC(sub_827BC920);
PPC_FUNC_IMPL(__imp__sub_827BC920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91fc
	ctx.lr = 0x827BC928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,21384
	ctx.r11.s64 = ctx.r11.s64 + 21384;
	// addi r31,r11,256
	ctx.r31.s64 = ctx.r11.s64 + 256;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,-30600
	ctx.r29.s64 = ctx.r11.s64 + -30600;
loc_827BC944:
	// addi r31,r31,-64
	ctx.r31.s64 = ctx.r31.s64 + -64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x821d2028
	ctx.lr = 0x827BC954;
	sub_821D2028(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827bc944
	if (!ctx.cr0.lt) goto loc_827BC944;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823d924c
	__restgprlr_29(ctx, base);
	return;
}

