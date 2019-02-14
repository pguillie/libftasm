section	.text
global	ft_memcpy

ft_memcpy:
	push	rbp
	mov	rbp, rsp
	push	rdi
	mov	rcx, rdx
	and	rcx, -0x8
	shr	rcx, 0x3
	rep movsq
	mov	rcx, rdx
	and	rcx, 0x7
	rep movsb
	pop	rax
	leave
	ret
