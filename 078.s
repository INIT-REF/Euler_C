	.file	"078.c"
	.text
	.section	.rodata
.LC0:
	.string	"%d\n"
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
	subq	$400032, %rsp
	leaq	-400032(%rbp), %rax
	movl	$400000, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset
	movl	$1, -400032(%rbp)
	movl	$0, -4(%rbp)
.L10:
	addl	$1, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$1, -12(%rbp)
	jmp	.L2
.L7:
	movl	-4(%rbp), %eax
	subl	-12(%rbp), %eax
	cltq
	movl	-400032(%rbp,%rax,4), %eax
	movl	%eax, -16(%rbp)
	movl	-8(%rbp), %eax
	andl	$2, %eax
	testl	%eax, %eax
	je	.L3
	movl	-4(%rbp), %eax
	cltq
	movl	-400032(%rbp,%rax,4), %eax
	subl	-16(%rbp), %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	cltq
	movl	%edx, -400032(%rbp,%rax,4)
	jmp	.L4
.L3:
	movl	-4(%rbp), %eax
	cltq
	movl	-400032(%rbp,%rax,4), %edx
	movl	-16(%rbp), %eax
	addl	%eax, %edx
	movl	-4(%rbp), %eax
	cltq
	movl	%edx, -400032(%rbp,%rax,4)
.L4:
	movl	-4(%rbp), %eax
	cltq
	movl	-400032(%rbp,%rax,4), %edx
	movslq	%edx, %rax
	imulq	$1125899907, %rax, %rax
	shrq	$32, %rax
	sarl	$18, %eax
	movl	%edx, %ecx
	sarl	$31, %ecx
	subl	%ecx, %eax
	imull	$1000000, %eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	movl	%eax, -400032(%rbp,%rdx,4)
	addl	$1, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	addl	$1, %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	imull	%eax, %eax
	movl	%eax, %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-8(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L5
	movl	-20(%rbp), %eax
	subl	%eax, -12(%rbp)
	jmp	.L6
.L5:
	movl	-20(%rbp), %eax
	addl	%eax, -12(%rbp)
.L6:
	movl	-12(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -12(%rbp)
.L2:
	movl	-12(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jle	.L7
	movl	-4(%rbp), %eax
	cltq
	movl	-400032(%rbp,%rax,4), %eax
	testl	%eax, %eax
	je	.L13
	jmp	.L10
.L13:
	nop
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (FreeBSD Ports Collection) 13.2.0"
	.section	.note.GNU-stack,"",@progbits
