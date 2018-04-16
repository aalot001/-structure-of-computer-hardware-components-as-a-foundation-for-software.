	.file	"sumv.c"
	.text
	.globl	sumv
	.type	sumv, @function
sumv:
.LFB39:
	.cfi_startproc
	leal	(%rdi,%rsi), %eax
	ret
	.cfi_endproc
.LFE39:
	.size	sumv, .-sumv
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
