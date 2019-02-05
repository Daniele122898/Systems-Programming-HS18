	.file	"callback.c"
	.text
	.globl	class
	.data
	.align 32
	.type	class, @object
	.size	class, 2080
class:
	.string	"Sean"
	.zero	95
	.string	"Penn"
	.zero	95
	.long	2
	.long	21
	.string	"Sean"
	.zero	95
	.string	"Connery"
	.zero	92
	.long	4
	.long	25
	.string	"Angelina"
	.zero	91
	.string	"Jolie"
	.zero	94
	.long	3
	.long	22
	.string	"Meryl"
	.zero	94
	.string	"Streep"
	.zero	93
	.long	4
	.long	29
	.string	"Robin"
	.zero	94
	.string	"Williams"
	.zero	91
	.long	3
	.long	32
	.string	"Bill"
	.zero	95
	.string	"Gates"
	.zero	94
	.long	3
	.long	17
	.string	"Jodie"
	.zero	94
	.string	"Foster"
	.zero	93
	.long	4
	.long	25
	.string	"John"
	.zero	95
	.string	"Travolta"
	.zero	91
	.long	1
	.long	17
	.string	"Isaac"
	.zero	94
	.string	"Newton"
	.zero	93
	.long	2
	.long	19
	.string	"Sarah"
	.zero	94
	.string	"Palin"
	.zero	94
	.long	2
	.long	19
	.text
	.globl	bubblesort
	.type	bubblesort, @function
bubblesort:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$88, %rsp
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	.cfi_offset 3, -56
	movq	%rdi, -104(%rbp)
	movq	%rsi, -112(%rbp)
	movq	%rdx, -120(%rbp)
	movq	%rcx, -128(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -56(%rbp)
	xorl	%eax, %eax
	movq	-112(%rbp), %rax
	movl	%eax, -92(%rbp)
	jmp	.L2
.L6:
	movl	$0, -96(%rbp)
	jmp	.L3
.L5:
	movl	-96(%rbp), %eax
	cltq
	imulq	-120(%rbp), %rax
	movq	%rax, %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -88(%rbp)
	movl	-96(%rbp), %eax
	addl	$1, %eax
	cltq
	imulq	-120(%rbp), %rax
	movq	%rax, %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, -80(%rbp)
	movq	-80(%rbp), %rcx
	movq	-88(%rbp), %rdx
	movq	-128(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rdx, %rdi
	call	*%rax
	testl	%eax, %eax
	jle	.L4
	movq	%rsp, %rax
	movq	%rax, %rbx
	movq	-120(%rbp), %rax
	movq	%rax, %rdx
	subq	$1, %rdx
	movq	%rdx, -72(%rbp)
	movq	%rax, %r12
	movl	$0, %r13d
	movq	%rax, %r14
	movl	$0, %r15d
	movl	$16, %edx
	subq	$1, %rdx
	addq	%rdx, %rax
	movl	$16, %esi
	movl	$0, %edx
	divq	%rsi
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$0, %rax
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	-120(%rbp), %rdx
	movq	-80(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	-120(%rbp), %rdx
	movq	-88(%rbp), %rcx
	movq	-80(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	-64(%rbp), %rcx
	movq	-120(%rbp), %rdx
	movq	-88(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	memcpy@PLT
	movq	%rbx, %rsp
.L4:
	addl	$1, -96(%rbp)
.L3:
	movl	-92(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -96(%rbp)
	jl	.L5
	subl	$1, -92(%rbp)
.L2:
	cmpl	$1, -92(%rbp)
	jg	.L6
	nop
	movq	-56(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	bubblesort, .-bubblesort
	.globl	compare_first_name
	.type	compare_first_name, @function
compare_first_name:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	compare_first_name, .-compare_first_name
	.globl	compare_last_name
	.type	compare_last_name, @function
compare_last_name:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	addq	$100, %rax
	movq	%rax, -16(%rbp)
	movq	-32(%rbp), %rax
	addq	$100, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	compare_last_name, .-compare_last_name
	.globl	apply
	.type	apply, @function
apply:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%rcx, -48(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L13
.L14:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-48(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rcx, %rdi
	call	*%rax
	addl	$1, -4(%rbp)
.L13:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L14
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	apply, .-apply
	.section	.rodata
.LC0:
	.string	"%-20s %-20s %2d %2d\n"
	.text
	.globl	printrec
	.type	printrec, @function
printrec:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	204(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	200(%rax), %edx
	movq	-8(%rbp), %rax
	leaq	100(%rax), %rsi
	movq	-8(%rbp), %rax
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movq	%rsi, %rdx
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	printrec, .-printrec
	.globl	isolder
	.type	isolder, @function
isolder:
.LFB10:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	204(%rax), %edx
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L18
	movq	-8(%rbp), %rax
	movl	204(%rax), %ecx
	movq	-8(%rbp), %rax
	movl	200(%rax), %edx
	movq	-8(%rbp), %rax
	leaq	100(%rax), %rsi
	movq	-8(%rbp), %rax
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movq	%rsi, %rdx
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L18:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	isolder, .-isolder
	.section	.rodata
.LC1:
	.string	"Raw records:"
	.align 8
.LC2:
	.string	"-------------------------------"
.LC3:
	.string	"Sorted by first name:"
	.align 8
.LC4:
	.string	"Sorted by first name BUBBLESORT:"
.LC5:
	.string	"Sorted by last name:"
.LC6:
	.string	"People older than 20:"
	.text
	.globl	main
	.type	main, @function
main:
.LFB11:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$10, -12(%rbp)
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	movl	-12(%rbp), %eax
	movl	$0, %ecx
	leaq	printrec(%rip), %rdx
	movl	%eax, %esi
	leaq	class(%rip), %rdi
	call	apply
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	movl	-12(%rbp), %eax
	cltq
	leaq	compare_first_name(%rip), %rcx
	movl	$208, %edx
	movq	%rax, %rsi
	leaq	class(%rip), %rdi
	call	qsort@PLT
	movl	-12(%rbp), %eax
	movl	$0, %ecx
	leaq	printrec(%rip), %rdx
	movl	%eax, %esi
	leaq	class(%rip), %rdi
	call	apply
	leaq	.LC4(%rip), %rdi
	call	puts@PLT
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	movl	-12(%rbp), %eax
	cltq
	leaq	compare_first_name(%rip), %rcx
	movl	$208, %edx
	movq	%rax, %rsi
	leaq	class(%rip), %rdi
	call	bubblesort
	movl	-12(%rbp), %eax
	movl	$0, %ecx
	leaq	printrec(%rip), %rdx
	movl	%eax, %esi
	leaq	class(%rip), %rdi
	call	apply
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	movl	-12(%rbp), %eax
	cltq
	leaq	compare_last_name(%rip), %rcx
	movl	$208, %edx
	movq	%rax, %rsi
	leaq	class(%rip), %rdi
	call	qsort@PLT
	movl	-12(%rbp), %eax
	movl	$0, %ecx
	leaq	printrec(%rip), %rdx
	movl	%eax, %esi
	leaq	class(%rip), %rdi
	call	apply
	leaq	.LC6(%rip), %rdi
	call	puts@PLT
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	movl	$20, -16(%rbp)
	leaq	-16(%rbp), %rdx
	movl	-12(%rbp), %eax
	movq	%rdx, %rcx
	leaq	isolder(%rip), %rdx
	movl	%eax, %esi
	leaq	class(%rip), %rdi
	call	apply
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L21
	call	__stack_chk_fail@PLT
.L21:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
