	.arch armv7-a
	.fpu vfpv3-d16
	.eabi_attribute 28, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"6-size.c"
	.text
	.section	.rodata
	.align	2
.LC0:
	.ascii	"Size of a char: %d byte(s)\012\000"
	.align	2
.LC1:
	.ascii	"Size of a int: %d byte(s)\012\000"
	.align	2
.LC2:
	.ascii	"Size of a long: %d byte(s)\012\000"
	.align	2
.LC3:
	.ascii	"Size of a long long: %d byte(s)\012\000"
	.align	2
.LC4:
	.ascii	"Size of a float: %d byte(s)\012\000"
	.text
	.align	1
	.global	main
	.syntax unified
	.thumb
	.thumb_func
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{r7, lr}
	add	r7, sp, #0
	movs	r1, #1
	ldr	r3, .L3
.LPIC0:
	add	r3, pc
	mov	r0, r3
	bl	printf(PLT)
	movs	r1, #4
	ldr	r3, .L3+4
.LPIC1:
	add	r3, pc
	mov	r0, r3
	bl	printf(PLT)
	movs	r1, #4
	ldr	r3, .L3+8
.LPIC2:
	add	r3, pc
	mov	r0, r3
	bl	printf(PLT)
	movs	r1, #8
	ldr	r3, .L3+12
.LPIC3:
	add	r3, pc
	mov	r0, r3
	bl	printf(PLT)
	movs	r1, #4
	ldr	r3, .L3+16
.LPIC4:
	add	r3, pc
	mov	r0, r3
	bl	printf(PLT)
	movs	r3, #0
	mov	r0, r3
	pop	{r7, pc}
.L4:
	.align	2
.L3:
	.word	.LC0-(.LPIC0+4)
	.word	.LC1-(.LPIC1+4)
	.word	.LC2-(.LPIC2+4)
	.word	.LC3-(.LPIC3+4)
	.word	.LC4-(.LPIC4+4)
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",%progbits
