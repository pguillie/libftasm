section	.text

global	ft_isupper

extern	ft_ctype

ft_isupper:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0x3
	call	ft_ctype
	leave
	ret
