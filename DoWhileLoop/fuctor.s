	.file	"fuctor.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"factorial using do-while loop"
	.text
	.globl	fcdw
	.type	fcdw, @function
fcdw:
.LFB24:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movl	%edi, %ebx
	movl	$.LC0, %edi
	call	puts
	movl	$1, %eax
.L3:
	imull	%ebx, %eax
	subl	$1, %ebx
	cmpl	$1, %ebx
	jg	.L3
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE24:
	.size	fcdw, .-fcdw
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
