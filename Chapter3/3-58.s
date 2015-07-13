	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_switch3
	.align	4, 0x90
_switch3:                               ## @switch3
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
	movl	%edx, %ecx
	cmpl	$4, %edx
	ja	LBB0_7
## BB#1:
	leaq	LJTI0_0(%rip), %rax
	movslq	(%rax,%rcx,4), %rcx
	addq	%rax, %rcx
	jmpq	*%rcx
LBB0_2:
	movl	(%rdi), %eax
	movl	(%rsi), %ecx
	movl	%ecx, (%rdi)
	popq	%rbp
	retq
LBB0_3:
	movl	(%rsi), %eax
	addl	(%rdi), %eax
	movl	%eax, (%rsi)
	popq	%rbp
	retq
LBB0_4:
	movl	$15, (%rsi)
	movl	(%rdi), %eax
	popq	%rbp
	retq
LBB0_5:
	movl	(%rdi), %eax
	movl	%eax, (%rsi)
LBB0_6:
	movl	$17, %eax
LBB0_7:
	popq	%rbp
	retq
	.cfi_endproc
	.align	2, 0x90
L0_0_set_2 = LBB0_2-LJTI0_0
L0_0_set_3 = LBB0_3-LJTI0_0
L0_0_set_4 = LBB0_4-LJTI0_0
L0_0_set_5 = LBB0_5-LJTI0_0
L0_0_set_6 = LBB0_6-LJTI0_0
LJTI0_0:
	.long	L0_0_set_2
	.long	L0_0_set_3
	.long	L0_0_set_4
	.long	L0_0_set_5
	.long	L0_0_set_6

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp5:
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc


.subsections_via_symbols
