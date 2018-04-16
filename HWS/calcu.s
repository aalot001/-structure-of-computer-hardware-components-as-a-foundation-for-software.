	.file	"calcu.c"
	.text
	.globl	calcu
	.type	calcu, @function
calcu:
.LFB39:
	.cfi_startproc
	movl	%edi, %eax
	notl	%eax
	movl	%esi, %ecx
	xorl	%edx, %ecx
	sall	%cl, %edi
	subl	%edi, %eax
	ret
	.cfi_endproc
.LFE39:
	.size	calcu, .-calcu
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
