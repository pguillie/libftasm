section	.text
global	ft_isalpha
global	_ft_isalpha

ft_isalpha:
_ft_isalpha:
	push	rbp
	mov		rbp, rsp

	mov		rax, 0h
	cmp		rdi, 41h
	jl		return
	cmp		rdi, 7Ah
	jg		return
	mov		rax, 1h
	cmp		rdi, 5Ah
	jle		return
	cmp		rdi, 61h
	jge		return
	mov		rax, 0h

return:
	leave
	ret
