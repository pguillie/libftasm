section	.text
global	ft_isspace
extern	ft_ctype

ft_isspace:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0xa
	call	ft_ctype
	leave
	ret
