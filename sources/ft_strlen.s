section	.text

global	ft_strlen

ft_strlen:
	push	rbp
	mov	rbp, rsp
	push	rdi
	xor	al, al
	mov	rcx, -0x1
	repne scasb
	dec	rdi
	mov	rax, rdi
	pop	rdi
	sub	rax, rdi
	leave
	ret
