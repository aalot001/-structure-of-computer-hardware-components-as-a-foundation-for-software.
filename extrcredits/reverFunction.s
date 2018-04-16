	.file	"reverFunction.c"
	.text
	.globl	reverbits
	.type	reverbits, @function
reverbits:
.LFB39:
	.cfi_startproc
	movl	$32, %edx
	movl	$0, %eax
.L3:
	movl	%edi, %ecx
	andl	$1, %ecx
	addl	%eax, %eax
	orl	%eax, %ecx
	movl	%ecx, %eax
	shrl	%edi
	subl	$1, %edx
	cmpl	%edx, %ecx
	jne	.L3
	rep ret
	.cfi_endproc
.LFE39:
	.size	reverbits, .-reverbits
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
