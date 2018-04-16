	.file	"sum_element.c"
	.text
	.p2align 4,,15
	.globl	sum_element
	.type	sum_element, @function
sum_element:
.LFB39:
	.cfi_startproc
	movslq	%edi, %rdi
	movslq	%esi, %rsi
	leaq	(%rdi,%rdi,2), %rax
	leaq	(%rdi,%rsi,2), %rdx
	leaq	(%rsi,%rax,2), %rax
	movl	mat1(,%rax,4), %eax
	addl	mat2(,%rdx,4), %eax
	ret
	.cfi_endproc
.LFE39:
	.size	sum_element, .-sum_element
	.comm	mat2,48,32
	.comm	mat1,48,32
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
