section	.text
global	ft_isalpha
global	ft_isalpha

extern	ft_ctype

ft_isalpha:
ft_isalpha:
	push	rbp
	mov	rbp, rsp

	mov	rsi, 64
	call	ft_ctype
	leave
	ret
