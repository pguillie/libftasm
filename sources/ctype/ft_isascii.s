section	.text
global	ft_isascii

ft_isascii:
	push	rbp
	mov	rbp, rsp

	mov	rax, 0x7f
	not	rax
	and	rdi, rax
	xor	rax, rax
	test	rdi, rdi
	sete	al

	leave
	ret
