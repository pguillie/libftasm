section	.text

global	ft_isxdigit

extern	ft_ctype

ft_isxdigit:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0x0
	call	ft_ctype
	leave
	ret
