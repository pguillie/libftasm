section	.text
global	ft_isalnum
global	_ft_isalnum

ft_isalnum:
_ft_isalnum:
	push	rbp
	mov		rbp, rsp

	mov		rax, 0h
	cmp		rdi, 30h
	jl		return
	cmp		rdi, 7Ah
	jg		return
	mov		rax, 1h
	cmp		rdi, 39h
	jle		return
	cmp		rdi, 61h
	jge		return
	mov		rax, 0h
	cmp		rdi, 41h
	jl		return
	cmp		rdi, 5Ah
	jg		return
	mov		rax, 1h

return:
	leave
	ret
