	.file	"add.c"
	.text
	.globl	rsum
	.type	rsum, @function
rsum:
.LFB0:
	.cfi_startproc
	movl	$0, %eax
	testl	%esi, %esi
	jle	.L6
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	%rdi, %rbx
	subl	$1, %esi
	leaq	4(%rdi), %rdi
	call	rsum
	addl	(%rbx), %eax
	popq	%rbx
	.cfi_restore 3
	.cfi_def_cfa_offset 8
.L6:
	rep ret
	.cfi_endproc
.LFE0:
	.size	rsum, .-rsum
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
