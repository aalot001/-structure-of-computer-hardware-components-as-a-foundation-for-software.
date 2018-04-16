	.file	"main.c"
	.text
	.globl	sum_element
	.type	sum_element, @function
sum_element:
.LFB39:
	.cfi_startproc
	movslq	%esi, %rsi
	movslq	%edi, %rdi
	leaq	(%rsi,%rdi,8), %rax
	subq	%rdi, %rax
	leaq	(%rsi,%rsi,4), %rdx
	addq	%rdx, %rdi
	movl	mat1(,%rax,4), %eax
	addl	mat2(,%rdi,4), %eax
	ret
	.cfi_endproc
.LFE39:
	.size	sum_element, .-sum_element
	.comm	mat2,140,32
	.comm	mat1,140,32
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
