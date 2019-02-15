section	.text

global	ft_bzero

ft_bzero:
	push	rbp
	mov	rbp, rsp
	mov	rcx, rsi
	and	rsi, -0x8
small:
	cmp	rcx, rsi
	jle	large
	dec	rcx
	mov	BYTE [rdi + rcx], 0x0
	jmp	small
large:
	test	rcx, rcx
	je	return
	sub	rcx, 0x8
	mov	QWORD [rdi + rcx], 0x0
	jmp	large
return:
	mov	rax, rdi
	leave
	ret
