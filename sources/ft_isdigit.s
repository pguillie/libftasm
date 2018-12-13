section	.text
global	_ft_isdigit

_ft_isdigit:
	push	rbp
	mov		rbp, rsp

	mov		rax, 0h
	cmp		rdi, 30h
	jl		return
	cmp		rdi, 39h
	jg		return
	mov		rax, 1h

return:
	leave
	ret
