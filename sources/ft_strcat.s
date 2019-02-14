section	.text
global	ft_strcat

ft_strcat:
	push	rbp
	mov	rbp, rsp
	mov	rax, rdi
	xor	rcx, rcx
offset:
	mov	dl, BYTE [rdi]
	test	dl, dl
	je	copy
	inc	rdi
	jmp	offset
copy:
	mov	dl, BYTE [rsi + rcx]
	mov	BYTE [rdi], dl
	test	dl, dl
	je	return
	inc	rdi
	inc	rcx
	jmp	copy
return:
	leave
	ret
