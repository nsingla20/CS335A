.section    .rodata
.LC0:
	.string    "%d\n"
	.text
	.globl    main
GFG.main:

	pushq %rbp
	movq %rsp, %rbp 
	subq %rsp, 4
	movq 4, +0(%rbp) 
	subq %rsp, 4
	movq 3, +4(%rbp) 
	subq %rsp, 4
	movq 8, +8(%rbp) 
	subq %rsp, 4
	movq 7, +12(%rbp) 
	movq +0(%rbp), %rsi 
	movq %rsi > 2, %rdi 
	movq ! %rdi, %rdx 
	cmpq $0, %rdx
	je L1
	movq +4(%rbp), %rcx 
	movq %rcx +int 1, %r8 
	movq %r8, +4(%rbp) 
	
L1:
	subq %rsp, 4
	movq 8 % 3, %r9 
	movq %r9, +16(%rbp) 
	movq %rbp + 4, %rsp
	movq -4(%rbp), %rbp 
	ret
	
	
	
