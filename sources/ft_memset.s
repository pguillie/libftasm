section	.text
global	ft_memset

ft_memset:
	push	rbp
	mov	rbp, rsp
	push	rdi
	mov	rcx, rdx
	mov	rax, rsi
	rep stosb
	pop	rax
	leave
	ret
