	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_sum
	.align	4, 0x90
_sum:                                   ## @sum
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp2:
	.cfi_def_cfa_register rbp
	add	edi, esi
	add	dword ptr [rip + _accum], edi
	mov	eax, edi
	pop	rbp
	ret
	.cfi_endproc

	.globl	_accum                  ## @accum
.zerofill __DATA,__common,_accum,4,2

.subsections_via_symbols
