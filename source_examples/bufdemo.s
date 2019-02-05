	.file	"bufdemo.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"What are we doing here?\n"
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC1:
	.string	"Do something strange and unexpected...\n"
	.section	.rodata.str1.1
.LC2:
	.string	"Exit normally\n"
	.text
	.globl	something_unexpected
	.type	something_unexpected, @function
something_unexpected:
.LFB24:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$1, %edi
	call	sleep@PLT
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	movl	$1, %edi
	call	sleep@PLT
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	movl	$0, %edi
	call	exit@PLT
	.cfi_endproc
.LFE24:
	.size	something_unexpected, .-something_unexpected
	.globl	echo
	.type	echo, @function
echo:
.LFB25:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	subq	$16, %rsp
	.cfi_def_cfa_offset 32
	leaq	12(%rsp), %rbx
	movq	%rbx, %rdi
	movl	$0, %eax
	call	gets@PLT
	movq	%rbx, %rdi
	call	puts@PLT
	addq	$16, %rsp
	.cfi_def_cfa_offset 16
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE25:
	.size	echo, .-echo
	.section	.rodata.str1.1
.LC3:
	.string	"Type a string:"
	.text
	.globl	main
	.type	main, @function
main:
.LFB26:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	call	echo
	movl	$0, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE26:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
