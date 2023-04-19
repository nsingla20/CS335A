	.text
	.globl	main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movq	$1, -4(%rbp)
	movq	$2, -8(%rbp)
	movq	$3, -12(%rbp)
	movq	-4(%rbp), t5
	movq	$15, t7
	addq	t6, t7
	movq	-12(%rbp), t8
	movq	t7, t9
	addq	t8, t9
	movq	t9, -8(%rbp)
	movq	-4(%rbp), t10
	movq	-8(%rbp), t11
	movq	-4(%rbp), t15
	movq	t15, t18
	addq	, t18
	movq	t18, -8(%rbp)
	jmp	.L2
.L1:
	movq	-4(%rbp), t20
	movq	-8(%rbp), t21
	movq	t20, t22
	addq	t21, t22
	movq	t22, -8(%rbp)
.L2:
	movq	$0, -16(%rbp)
.L3:
	movq	-16(%rbp), t23
	movq	-16(%rbp), t29
	addq	$1, t29
	movq	t29, -16(%rbp)
	movq	-4(%rbp), t31
	movq	-8(%rbp), t32
	movq	t31, t33
	addq	t32, t33
	movq	t33, -4(%rbp)
	jmp	.L3
.L4:
	movq	$0, %eax
	leave
	ret
