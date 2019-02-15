section	.text

global	ft_toupper

extern	ft_islower

ft_toupper:
	push	rbp
	mov	rbp, rsp
	push	rdi
	call	ft_islower
	pop	rdi
	test	rax, rax
	je	return
	mov	rax, 0x20
	not	rax
	and	rdi, rax
return:
	mov	rax, rdi
	leave
	ret
