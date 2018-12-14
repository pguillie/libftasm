section	.text
global	ft_isascii
global	_ft_isascii

ft_isascii:
_ft_isascii:
	push	rbp
	mov		rbp, rsp

	mov		rax, 0h
	cmp		rdi, 0h
	jl		return
	cmp		rdi, 7fh
	jg		return
	mov		rax, 1h

return:
	leave
	ret
