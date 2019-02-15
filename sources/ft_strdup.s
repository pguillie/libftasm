section	.text

global	ft_strdup

extern	_malloc
extern	ft_strlen
extern	ft_memcpy

ft_strdup:
	push	rbp
	mov	rbp, rsp
	push	rdi
	call	ft_strlen
	mov	rdi, rax
	push	rdi
	call	_malloc
	test	rax, rax
	je	return
	pop	rdx
	pop	rsi
	mov	rdi, rax
	call	ft_memcpy
return:
	leave
	ret
