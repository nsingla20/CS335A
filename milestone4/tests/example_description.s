	.file	".\\code.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
main:
	pushq	%rbp             	; push rbp to stack (implicitly subtracts 8 from rsp)
	movq	%rsp, %rbp			; move rsp to rbp (q = quad word = 64 bits)
	subq	$48, %rsp			; subtract 48 from rsp (to make room for local variables)
	call	__main				; call __main
	movl	$1, -4(%rbp)		; move 1 to rbp-4 i.e. a = 1 (rbp = base pointer)
	movl	$2, -8(%rbp)		; b = 2
	movl	$3, -16(%rbp)		; c = 3
	movl	-4(%rbp), %edx		; edx = a
	movl	%edx, %eax			; move edx to eax i.e. eax = edx (= a)
	sall	$2, %eax			; shift left 2 bits i.e. eax = eax * 4 (i.e. eax = a*4)
	addl	%edx, %eax			; eax = a*4 + a  = a*5
	addl	%eax, %eax			; eax = a*10
	leal	15(%rax), %edx		; edx = a*10 + 15 (lea = load effective address)
	movl	-16(%rbp), %eax		; eax = c
	addl	%edx, %eax			; eax = a*10 + 15 + c
	movl	%eax, -8(%rbp)		; b = a*10 + 15 + c
	movl	-4(%rbp), %eax		; eax = a
	cmpl	-8(%rbp), %eax		; compare b and a (eax) and set flags
	jle	.L2						; if a <= b, jump to .L2
	; b = a + (c % 10)
	movl	-16(%rbp), %edx		; edx = c
	movslq	%edx, %rax			; sign extend c to 64 bits and move to rax
	imulq	$1717986919, %rax, %rax		; rax = rax * 1717986919
	shrq	$32, %rax			; rax = rax >> 32
	sarl	$2, %eax			; eax = eax >> 2
	movl	%edx, %r8d			; r8d = c
	sarl	$31, %r8d			; r8d = r8d >> 31
	subl	%r8d, %eax			; eax = eax - r8d
	movl	%eax, %ecx			; ecx = eax
	movl	%ecx, %eax			; eax = ecx
	sall	$2, %eax			; eax = eax << 2
	addl	%ecx, %eax			; eax = eax + ecx
	addl	%eax, %eax			; eax = eax + eax
	movl	%edx, %ecx			; ecx = edx
	subl	%eax, %ecx			; ecx = edx - eax
	movl	-4(%rbp), %eax		; eax = a
	addl	%ecx, %eax			; eax = a + ecx
	movl	%eax, -8(%rbp)		; b = a + ecx
	jmp	.L3						; jump to .L3
.L2:
	movl	-4(%rbp), %eax		; eax = a
	addl	%eax, -8(%rbp)		; b = b + a
.L3:
	movl	$0, -12(%rbp)		; i = 0
	jmp	.L4						; jump to .L4
.L5:
	addl	$1, -12(%rbp)		; i = i + 1
	movl	-8(%rbp), %eax		; eax = b
	addl	%eax, -4(%rbp)		; a = a + b
	addl	$1, -12(%rbp)		; i = i + 1
.L4:
	cmpl	$14, -12(%rbp)		; compare i and 14 and set flags
	jle	.L5						; if i <= 14, jump to .L5
	movl	-8(%rbp), %eax		; eax = b
	movl	%eax, %edx			; edx = eax
	leaq	.LC0(%rip), %rax	; move address of .LC0 to rax
	movq	%rax, %rcx			; move rax to rcx
	call	printf				; call printf with arguments in rdi, rsi, rdx (b), rcx ("%d"), r8, r9
	movl	$0, %eax			; eax = 0 (return value)
	leave						; move rbp to rsp and pop rbp from stack
	ret							; return
	.ident	"GCC: (GNU) 11.3.0"
	.def	printf;	.scl	2;	.type	32;	.endef
