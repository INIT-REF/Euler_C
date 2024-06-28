	.file	"test.c"
	.text
	.section	.rodata
.LC2:
	.string	"%f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, -8(%rbp)
	movsd	.LC1(%rip), %xmm0
	movsd	%xmm0, -16(%rbp)
	movsd	-8(%rbp), %xmm0
	divsd	-16(%rbp), %xmm0
	movsd	%xmm0, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %xmm0
	movl	$.LC2, %edi
	movl	$1, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	-412316860
	.long	1074440699
	.align 8
.LC1:
	.long	-481036337
	.long	1075256229
	.ident	"GCC: (FreeBSD Ports Collection) 13.2.0"
	.section	.note.GNU-stack,"",@progbits
