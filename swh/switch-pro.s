	.file	"switch-pro.c"
	.text
	.globl	switch_prob
	.type	switch_prob, @function
switch_prob:
.LFB39:
	.cfi_startproc
	subl	$50, %esi
	cmpl	$5, %esi
	ja	.L2
	movl	%esi, %esi
	jmp	*.L4(,%rsi,8)
	.section	.rodata
	.align 8
	.align 4
.L4:
	.quad	.L3
	.quad	.L2
	.quad	.L3
	.quad	.L5
	.quad	.L6
	.quad	.L7
	.text
.L3:
	leal	(%rdi,%rdi,2), %edi
.L5:
	imull	%edi, %edi
.L6:
	leal	10(%rdi), %eax
	ret
.L7:
	movl	%edi, %eax
	sarl	$2, %eax
	ret
.L2:
	leal	(%rdi,%rdi), %eax
	ret
	.cfi_endproc
.LFE39:
	.size	switch_prob, .-switch_prob
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
