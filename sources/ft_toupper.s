section	.text
global	ft_toupper
extern	ft_islower

ft_toupper:
	push	rbp
	mov	rbp, rsp
	push	rdi
	call	ft_islower
	test	rax, rax
	je	return
	pop	rax
	mov	rdi, 0x20
	not	rdi
	and	rax, rdi
return:
	leave
	ret
