section	.text

global	ft_tolower

extern	ft_isupper

ft_tolower:
	push	rbp
	mov	rbp, rsp
	push	rdi
	call	ft_isupper
	pop	rdi
	test	rax, rax
	jne	return
	or	rdi, 0x20
return:
	mov	rax, rdi
	leave
	ret
