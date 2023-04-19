	.text
	.globl	main
Test1.sum:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$12, %rsp
	movq	%rsi, -4(%rbp)
	movq	%rdi, -8(%rbp)
	movq	$15, -12(%rbp)
	movq	-4(%rbp), t2
	movq	-8(%rbp), t3
	movq	t2, t4
	addq	t3, t4
	movq	t4, -12(%rbp)
	movq	-12(%rbp), t5
	movq	t5, %eax
	leave
	ret
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movq	$1, -4(%rbp)
	movq	$2, -8(%rbp)
	movq	$3, -12(%rbp)
	movq	-4(%rbp), t10
	movq	$15, t12
	addq	t11, t12
	movq	-12(%rbp), t13
	movq	t12, t14
	addq	t13, t14
	movq	t14, -8(%rbp)
	movq	-4(%rbp), t15
	movq	-8(%rbp), t16
	cmpq	t16, t15
	jle	.L1
	movq	-4(%rbp), t20
	movq	-12(%rbp), t21
	movq	t21, t22
	subq	$2, t22
	movq	t20, t23
	addq	t22, t23
	movq	t23, -8(%rbp)
	jmp	.L4
.L1:
	movq	-4(%rbp), t24
	movq	-8(%rbp), t25
	cmpq	t25, t24
	jne	.L3
	movq	-4(%rbp), t29
	movq	-8(%rbp), t30
	movq	t31, -8(%rbp)
	jmp	.L4
.L3:
	movq	-4(%rbp), t33
	movq	-8(%rbp), t34
	movq	t33, t35
	addq	t34, t35
	movq	t35, -8(%rbp)
.L4:
	movq	-4(%rbp), t37
	movq	-8(%rbp), t39
	movq	-12(%rbp), t40
	subq	$4, %rsp
	movq	t39, %rdi
	movq	t40, %rsi
	call sum
	movq	%eax, t41
	movq	t37, t42
	addq	t41, t42
	movq	t42, -4(%rbp)
	movq	$0, -16(%rbp)
.L5:
	movq	-16(%rbp), t43
	cmpq	$15, t43
	jge	.L6
	movq	-16(%rbp), t49
	addq	$1, t49
	movq	t49, -16(%rbp)
	movq	-4(%rbp), t51
	movq	-8(%rbp), t52
	movq	t51, t53
	addq	t52, t53
	movq	t53, -4(%rbp)
	jmp	.L5
.L6:
	movq	-8(%rbp), t55
	movq	t55, %rdi
	call print
	movq	$0, %eax
	leave
	ret
