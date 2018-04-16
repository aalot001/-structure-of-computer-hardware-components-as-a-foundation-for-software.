	.file	"xmaz.c"
	.text
	.globl	xmax
	.type	xmax, @function
xmax:
.LFB0:
	.cfi_startproc
	cmpl	%edi, %esi
	movl	%edi, %eax
	cmovge	%esi, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	xmax, .-xmax
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
