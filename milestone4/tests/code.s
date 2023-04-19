	.file	"code.c"
	.text
	.globl	sum
	.type	sum, @function
sum:
	endbr64
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -28(%rbp)
	movl	%ecx, -32(%rbp)
	movl	%r8d, -36(%rbp)
	movl	%r9d, -40(%rbp)
	movl	$15, -4(%rbp)
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %eax
	addl	%eax, %edx
	movl	-32(%rbp), %eax
	addl	%eax, %edx
	movl	-36(%rbp), %eax
	addl	%eax, %edx
	movl	-40(%rbp), %eax
	addl	%eax, %edx
	movl	16(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	popq	%rbp
	ret
	.size	sum, .-sum
	.globl	my
	.type	my, @function
my:
	endbr64
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$8, %rsp
	movl	%edi, -4(%rbp)
	pushq	$7
	movl	$6, %r9d
	movl	$5, %r8d
	movl	$4, %ecx
	movl	$3, %edx
	movl	$2, %esi
	movl	$1, %edi
	call	sum
	addq	$8, %rsp
	movl	$0, %eax
	leave
	ret
	.size	my, .-my
	.globl	main
	.type	main, @function
main:
	endbr64
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movl	$1, -4(%rbp)
	movl	$2, -8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L6
	movl	-4(%rbp), %eax
	movl	%eax, -8(%rbp)
.L6:
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	call	my
	movl	-4(%rbp), %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
