section	.text
global	ft_islower
extern	ft_ctype

ft_islower:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0x2
	call	ft_ctype
	leave
	ret
