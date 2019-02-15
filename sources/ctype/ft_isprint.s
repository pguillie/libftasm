section	.text

global	ft_isprint

extern	ft_ctype

ft_isprint:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0x8
	call	ft_ctype
	leave
	ret
