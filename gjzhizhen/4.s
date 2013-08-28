	.file	"4.c"
	.globl	msg
	.section	.rodata
.LC0:
	.string	"sunday"
.LC1:
	.string	"monday"
	.data
	.align 4
	.type	msg, @object
	.size	msg, 8
msg:
	.long	.LC0
	.long	.LC1
	.text
	.globl	get_a_day
	.type	get_a_day, @function
get_a_day:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	msg(,%eax,4), %eax
	movl	%eax, 4(%esp)
	movl	$buf.1854, (%esp)
	call	strcpy
	movl	$buf.1854, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	get_a_day, .-get_a_day
	.section	.rodata
.LC2:
	.string	"%s, %s\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$16, %esp
	movl	$1, (%esp)
	.cfi_offset 3, -12
	call	get_a_day
	movl	%eax, %ebx
	movl	$0, (%esp)
	call	get_a_day
	movl	$.LC2, %edx
	movl	%ebx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	printf
	movl	$0, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	.cfi_restore 3
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.local	buf.1854
	.comm	buf.1854,28,1
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
