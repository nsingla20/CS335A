.section    .rodata
.LC0:
	.string    "%d\n"
	.text
	.globl    main
GFG.main:

	pushq %rbp
	ebp =%rsp
	%rsp-= 4
	+0(%ebp) = 4
	%rsp-= 4
	+4(%ebp) = 3
	%rsp-= 4
	+8(%ebp) = 8
	%rsp-= 4
	+12(%ebp) = 7
	t1 = +0(%ebp)
	t2 = t1 > 2
	t3 = ! t2
	if t3 goto L1
	t5 = +4(%ebp)
	t6 = t5 +int 1
	+4(%ebp) = t6
	
L1:
%rsp-= 4
	t7 = 8 % 3
	+16(%ebp) = t7
	%rsp= ebp + 4
	ebp = -4(%ebp)
	ret
	
	
	
