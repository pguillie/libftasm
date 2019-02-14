section	.text
global	ft_strlen

ft_strlen:
	push	rbp
	mov	rbp, rsp
	xor	rax, rax
	mov	rcx, -1
	rep scasb
	;
	leave
	ret
