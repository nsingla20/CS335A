	.text
	.globl	main
Test1.sum:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$12, %rsp
	movq	%rsi, -4(%rbp)
	movq	%rdi, -8(%rbp)
	movq	$15, -12(%rbp)
	movq	-4(%rbp), %rdi
	movq	-8(%rbp), %rsi
	movq	%rdi, %rdx
	addq	%rsi, %rdx
	movq	%rdx, -12(%rbp)
	movq	-12(%rbp), %rcx
	movq	%rcx, %eax
	leave
	ret
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movq	$1, -4(%rbp)
	movq	$2, -8(%rbp)
	movq	$3, -12(%rbp)
	movq	-4(%rbp), %rdi
	movq	$15, %rdx
	addq	%rsi, %rdx
	movq	-12(%rbp), %rcx
	movq	%rdx, %r8
	addq	%rcx, %r8
	movq	%r8, -8(%rbp)
	movq	-4(%rbp), %r9
	movq	-8(%rbp), %rdi
	cmpq	%rdi, %r9
	jle	.L1
	movq	-4(%rbp), %rdi
	movq	-12(%rbp), %rdi
	subq	$2, %rdi
	addq	%rdi, %rdi
	movq	%rdi, -8(%rbp)
	jmp	.L4
.L1:
	movq	-4(%rbp), %rdi
	movq	-8(%rbp), %rdi
	cmpq	%rdi, %rdi
	jne	.L3
	movq	-4(%rbp), %rdi
	movq	-8(%rbp), %rdi
	movq	%rdi, -8(%rbp)
	jmp	.L4
.L3:
	movq	-4(%rbp), %rdi
	movq	-8(%rbp), %rdi
	addq	%rdi, %rdi
	movq	%rdi, -8(%rbp)
.L4:
	movq	-4(%rbp), %rdi
	movq	-8(%rbp), %rdi
	movq	-12(%rbp), %rdi
	subq	$4, %rsp
	movq	%rdi, %rdi
	movq	%rdi, %rsi
	call sum
	movq	%eax, %rdi
	addq	%rdi, %rdi
	movq	%rdi, -4(%rbp)
	movq	$0, -16(%rbp)
.L5:
	movq	-16(%rbp), %rdi
	cmpq	$15, %rdi
	jge	.L6
	movq	-16(%rbp), %rdi
	addq	$1, %rdi
	movq	%rdi, -16(%rbp)
	movq	-4(%rbp), %rdi
	movq	-8(%rbp), %rdi
	addq	%rdi, %rdi
	movq	%rdi, -4(%rbp)
	jmp	.L5
.L6:
	movq	-8(%rbp), %rdi
	movq	%rdi, %rdi
	call print
	movq	$0, %eax
	leave
	ret
