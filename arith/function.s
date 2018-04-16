	.file	"function.c"
	.text
	.globl	arith1
	.type	arith1, @function
arith1:
.LFB24:
	.cfi_startproc
	leal	(%rdi,%rsi), %eax
	addl	%edx, %eax
	leal	(%rsi,%rsi,2), %edx
	sall	$4, %edx
	leal	4(%rdi,%rdx), %ecx
	imull	%ecx, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	arith1, .-arith1
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
