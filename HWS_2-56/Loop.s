	.file	"Loop.c"
	.text
	.globl	loop
	.type	loop, @function
loop:
.LFB39:
	.cfi_startproc
	movl	$8, %edx
	movl	$5, %eax
	movzbl	%sil, %ecx
.L3:
	movl	%edx, %r8d
	andl	%edi, %r8d
	xorl	%r8d, %eax
	shrl	%cl, %edx
	testl	%edx, %edx
	jne	.L3
	rep ret
	.cfi_endproc
.LFE39:
	.size	loop, .-loop
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
