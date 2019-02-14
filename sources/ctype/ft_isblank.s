section	.text
global	ft_isblank
extern	ft_ctype

ft_isblank:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0x9
	call	ft_ctype
	leave
	ret
