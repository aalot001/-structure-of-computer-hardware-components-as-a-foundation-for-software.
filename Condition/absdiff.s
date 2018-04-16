	.file	"absdiff.c"
	.text
	.globl	absdiff
	.type	absdiff, @function
absdiff:
.LFB39:
	.cfi_startproc
	movl	%edi, %eax
	subl	%esi, %eax
	movl	%esi, %edx
	subl	%edi, %edx
	cmpl	%esi, %edi
	cmovle	%edx, %eax
	ret
	.cfi_endproc
.LFE39:
	.size	absdiff, .-absdiff
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
