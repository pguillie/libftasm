section	.text

global	ft_ispunct

extern	ft_ctype

ft_ispunct:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0x6
	call	ft_ctype
	leave
	ret
