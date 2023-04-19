	.file	"code.c"
	.text
	.globl	main
	.type	main, @function
main:
	endbr64
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$4, -20(%rbp)
	movl	$3, -16(%rbp)
	movl	$8, -12(%rbp)
	movl	$7, -8(%rbp)
	cmpl	$2, -20(%rbp)
	jle	.L2
	addl	$1, -16(%rbp)
.L2:
	movl	$2, -4(%rbp)
	movl	$0, %eax
	popq	%rbp
	ret
	