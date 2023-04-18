.section .rodata.LC0:	.string "%d\n"	.text	.globl mainGFG.main:	pushq %rbp	movq rsp, ebp 
	SUB %rsp, 4
	movq 4, +0(%ebp) 
	SUB %rsp, 4
	movq 3, +4(%ebp) 
	SUB %rsp, 4
	movq 8, +8(%ebp) 
	SUB %rsp, 4
	movq 7, +12(%ebp) 
	SUB %rsp, 4
	movq 8 % 3, t1 
	movq t1, +16(%ebp) 
	movq +16(%ebp), t3 
	push t3	call print 1	movq ebp + 4, %rsp
	movq -4(%ebp), ebp 
	ret			