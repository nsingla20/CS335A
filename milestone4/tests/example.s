	.file	"..\\tests\\example.c"
	.text
	.globl	_sum
	.def	_sum;	.scl	2;	.type	32;	.endef
_sum:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$20, %esp
	movl	$15, -4(%ebp)
	fildl	8(%ebp)
	fadds	12(%ebp)
	fstps	-20(%ebp)
	cvttss2sil	-20(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	leave
	ret
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ebx
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$1, 28(%esp)
	movl	$2, 24(%esp)
	movl	$3, 16(%esp)
	movl	28(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	leal	15(%eax), %edx
	movl	16(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 24(%esp)
	movl	28(%esp), %eax
	cmpl	24(%esp), %eax
	jle	L4
	movl	16(%esp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	movl	%edx, %eax
	sarl	$2, %eax
	movl	%ecx, %ebx
	sarl	$31, %ebx
	subl	%ebx, %eax
	movl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	movl	28(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 24(%esp)
	jmp	L5
L4:
	movl	28(%esp), %eax
	addl	%eax, 24(%esp)
L5:
	fildl	16(%esp)
	fstps	4(%esp)
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_sum
	addl	%eax, 28(%esp)
	movl	$0, 20(%esp)
	jmp	L6
L7:
	addl	$1, 20(%esp)
	movl	24(%esp), %eax
	addl	%eax, 28(%esp)
	addl	$1, 20(%esp)
L6:
	cmpl	$14, 20(%esp)
	jle	L7
	movl	$0, %eax
	movl	-4(%ebp), %ebx
	leave
	ret
	.ident	"GCC: (GNU) 11.3.0"
