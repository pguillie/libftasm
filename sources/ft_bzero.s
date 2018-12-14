section	.text
global	ft_bzero
global	_ft_bzero

ft_bzero:
_ft_bzero:
	push	rbp
	mov		rbp, rsp

	mov		rcx, rsi	
	and		rsi, 8h

small:
	cmp		rcx, rsi
	jle		large
	dec		rcx
	mov		BYTE [rdi + rcx], 0h
	jmp		small

large:
	test	rcx, rcx
	je		return
	sub		rcx, 8h
	mov		QWORD [rdi + rcx], 0h
	jmp		large

return:
	mov		rax, rdi
	leave
	ret
