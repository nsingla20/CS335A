	.section .rdata
.LC0:
	.string	"%d\n"
	.text
	.globl	main
Test1.sum:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$24, %rsp
	movq	%rsi, -8(%rbp)
	movq	%rdi, -16(%rbp)
	movq	$15, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	addq	%rsi, %rdi
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	%rdi, %rax
	leave
	ret
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	movq	$1, -8(%rbp)
	movq	$2, -16(%rbp)
	movq	$3, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	$10, %r12
	movq	%rdi, %rax
	imulq	%r12
	movq	%rax, %rdi
	movq	$15, %rdi
	addq	%rdi, %rdi
	movq	-24(%rbp), %rsi
	addq	%rsi, %rdi
	movq	%rdi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rdx
	cmpq	%rdx, %rdi
	jle	.L1
	movq	-8(%rbp), %rdi
	movq	-24(%rbp), %rcx
	movq	%rcx, %rdi
	subq	$2, %rdi
	addq	%rdi, %rdi
	movq	%rdi, -16(%rbp)
	jmp	.L4
.L1:
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %r8
	cmpq	%r8, %rdi
	jne	.L3
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %r9
	movq	%r9, %r12
	movq	%rdi, %rax
	imulq	%r12
	movq	%rax, %rdi
	movq	%rdi, -16(%rbp)
	jmp	.L4
.L3:
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %r10
	addq	%r10, %rdi
	movq	%rdi, -16(%rbp)
.L4:
	movq	$0, -32(%rbp)
.L5:
	movq	-32(%rbp), %rdi
	cmpq	$15, %rdi
	jge	.L6
	movq	-32(%rbp), %rdi
	addq	$1, %rdi
	movq	%rdi, -32(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %r11
	addq	%r11, %rdi
	movq	%rdi, -8(%rbp)
	jmp	.L5
.L6:
	movq	$0, %rax
	leave
	ret
