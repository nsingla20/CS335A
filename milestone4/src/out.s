	.section .rdata
	.text
.LC0:
	.string	"%d\n"
	.globl	main
Test1.sum:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	$15, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	%rdi, %rdx
	addq	%rsi, %rdx
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	%rdi, %rax
	leave
	ret
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
	movq	$1, -8(%rbp)
	movq	$2, -16(%rbp)
	movq	$3, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	%rdi, %r12
	movq	$2, %rax
	imulq	%r12
	movq	%rax, %rsi
	movq	$15, %rdi
	addq	%rsi, %rdi
	movq	%rdi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	cmpq	%rsi, %rdi
	jle	.L1
	movq	-8(%rbp), %rdi
	movq	-24(%rbp), %rsi
	movq	%rsi, %rdx
	subq	$2, %rdx
	movq	%rdi, %rsi
	addq	%rdx, %rsi
	movq	%rsi, -16(%rbp)
	jmp	.L4
.L1:
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	cmpq	%rsi, %rdi
	jne	.L3
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	%rsi, %r12
	movq	%rdi, %rax
	imulq	%r12
	movq	%rax, %rdx
	movq	%rdx, -16(%rbp)
	jmp	.L4
.L3:
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	%rdi, %rdx
	addq	%rsi, %rdx
	movq	%rdx, -16(%rbp)
.L4:
	movq	-24(%rbp), %rdi
	movq	-8(%rbp), %rsi
	movq	-16(%rbp), %rdx
	movq	%rdi, %rcx
	movq	%rsi, %rdi
	movq	%rdx, %rsi
	call Test1.sum
	movq	%rax, %rdi
	movq	%rcx, %rsi
	addq	%rdi, %rsi
	movq	$10, %r12
	movq	$2, %rax
	imulq	%r12
	movq	%rax, %rdi
	movq	%rsi, %rdx
	addq	%rdi, %rdx
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdi
	movq	%rdi, %rsi
	leaq	.LC0(%rip), %rdi
	movq	$0, %rax
	call printf@PLT
	movq	$0, -32(%rbp)
.L5:
	movq	-32(%rbp), %rdi
	cmpq	$15, %rdi
	jge	.L6
	movq	-32(%rbp), %rdi
	addq	$1, %rdi
	movq	%rdi, -32(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	%rdi, %rdx
	addq	%rsi, %rdx
	movq	%rdx, -8(%rbp)
	incq	-32(%rbp)
	jmp	.L5
.L6:
	movq	$10, -24(%rbp)
.L8:
	movq	-24(%rbp), %rdi
	cmpq	$15, %rdi
	jge	.L9
	movq	-24(%rbp), %rdi
	movq	%rdi, %rsi
	leaq	.LC0(%rip), %rdi
	movq	$0, %rax
	call printf@PLT
	incq	-24(%rbp)
	jmp	.L8
.L9:
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	%rdi, %rdx
	movq	%rdx, %rdi
	movq	%rsi, %rdx
	movq	%rdx, %rsi
	call Test1.sum
	movq	%rax, %rdi
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	movq	%rdi, %rsi
	leaq	.LC0(%rip), %rdi
	movq	$0, %rax
	call printf@PLT
	movq	$0, %rax
	leave
	ret
