	.file	"Function.c"
	.text
	.globl	m12
	.type	m12, @function
m12:
.LFB39:
	.cfi_startproc
	leaq	(%rdi,%rdi,2), %rax
	salq	$2, %rax
	ret
	.cfi_endproc
.LFE39:
	.size	m12, .-m12
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
