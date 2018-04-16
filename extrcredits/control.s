	.file	"control.c"
	.text
	.globl	test
	.type	test, @function
test:
.LFB39:
	.cfi_startproc
	cmpl	%esi, %edi
	je	.L2
	movl	%esi, %eax
	subl	%edi, %eax
	leal	(%rdi,%rsi), %edx
	cmpl	%esi, %edi
	cmovle	%edx, %eax
	ret
.L2:
	leal	(%rdi,%rdi), %edx
	cmpl	$6, %edi
	movl	$0, %eax
	cmovge	%edx, %eax
	ret
	.cfi_endproc
.LFE39:
	.size	test, .-test
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
