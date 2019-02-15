%define size 0x1000
	
section	.text

global	ft_cat

ft_cat:
	push	rbp
	mov	rbp, rsp
	lea	rsi, [rel buf]
rw:
	mov	rax, 0x2000003
	mov	rdx, size
	syscall
	jc	return
	test	rax, rax
	je	return
	mov	rdx, rax
	mov	rax, 0x2000004
	push	rdi
	mov	rdi, 0x1
	syscall
	jc	return
	pop	rdi
	jmp	rw
return:
	leave
	ret	

section	.bss

	buf	resb size
