	.text
	.globl	main
GFG.sum:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$12, %rsp
	movq	%rsi, -4(%rbp)
	movq	%rdi, -8(%rbp)
	movq	$15, -12(%rbp)
	movq	-4(%rbp), %rsi
	movq	-8(%rbp), %rsi
	movq	%rsi, %rdi
	addq	%rsi, %rdi
	movq	%rsi, -12(%rbp)
	movq	-12(%rbp), %rsi
	movq	%rsi, %eax
	leave
	ret
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$20, %rsp
	movq	$69, -4(%rbp)
	movq	$12, -8(%rbp)
	movq	$12, -12(%rbp)
	movq	$2, -16(%rbp)
	subq	$4, %rsp
	movq	$1, %rdi
	movq	$2, %rsi
	call sum
	movq	%eax, %rsi
	movq	%rsi, -20(%rbp)
	leave
	ret
