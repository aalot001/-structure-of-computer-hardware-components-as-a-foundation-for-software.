	.file	"swit.c"
	.text
	.globl	switchSt
	.type	switchSt, @function
switchSt:
.LFB39:
	.cfi_startproc
.L3:
	subl	$100, %esi
	cmpl	$6, %esi
	jg	.L3
	cmpl	$6, %esi
	ja	.L10
	movl	%esi, %esi
	jmp	*.L6(,%rsi,8)
	.section	.rodata
	.align 8
	.align 4
.L6:
	.quad	.L5
	.quad	.L10
	.quad	.L7
	.quad	.L11
	.quad	.L11
	.quad	.L10
	.quad	.L8
	.text
.L5:
	leal	(%rdi,%rdi,2), %eax
	leal	(%rdi,%rax,4), %eax
	ret
.L7:
	leal	10(%rdi), %eax
	.p2align 4,,1
	ret
.L11:
	movl	%edi, %eax
.L8:
	imull	%eax, %eax
	ret
.L10:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE39:
	.size	switchSt, .-switchSt
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
