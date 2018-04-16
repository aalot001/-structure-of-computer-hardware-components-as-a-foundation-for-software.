	.file	"function.c"
	.text
	.globl	decode2
	.type	decode2, @function
decode2:
.LFB39:
	.cfi_startproc
	subl	%edx, %esi
	movl	%esi, %eax
	sall	$31, %eax
	sarl	$31, %eax
	imull	%edi, %eax
	ret
	.cfi_endproc
.LFE39:
	.size	decode2, .-decode2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
