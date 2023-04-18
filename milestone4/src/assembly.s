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
	%rsp-= 4
	t1 = 8 % 3
	+16(%ebp) = t1
	t3 = +16(%ebp)
	push t3
	call print 1
	%rsp= ebp + 4
	ebp = -4(%ebp)
	ret
	
	
	
