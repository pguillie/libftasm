section	.text
global	ft_tolower
extern	ft_isupper

ft_tolower:
	push	rbp
	mov	rbp, rsp
	push	rdi
	call	ft_isupper
	test	rax, rax
	je	return
	pop	rax
	or	rax, 0x20
return:
	leave
	ret
