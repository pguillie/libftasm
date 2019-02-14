section	.text
global	ft_isdigit
extern	ft_ctype

ft_isdigit:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0x1
	call	ft_ctype
	leave
	ret
