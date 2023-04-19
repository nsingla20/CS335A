	.text
	.globl	main
sum:
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
	movq	t20, t23
	addq	, t23
	movq	t23, -8(%rbp)
	jmp	.L2
.L1:
	movq	-4(%rbp), t25
	movq	-8(%rbp), t26
	movq	t25, t27
	addq	t26, t27
	movq	t27, -8(%rbp)
.L2:
	movq	-4(%rbp), t29
	movq	-8(%rbp), t31
	movq	-12(%rbp), t32
	subq	$4, %rsp
	movq	t31, %rdi
	movq	t32, %rsi
	call	sum
	movq	%eax, t33
	movq	t29, t34
	addq	t33, t34
	movq	t34, -4(%rbp)
	movq	$0, -16(%rbp)
.L3:
	movq	-16(%rbp), t35
	cmpq	$15, t35
	jge	.L4
	movq	-16(%rbp), t41
	addq	$1, t41
	movq	t41, -16(%rbp)
	movq	-4(%rbp), t43
	movq	-8(%rbp), t44
	movq	t43, t45
	addq	t44, t45
	movq	t45, -4(%rbp)
	jmp	.L3
.L4:
	movq	$0, %eax
	leave
	ret
