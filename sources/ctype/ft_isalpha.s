section	.text
global	ft_isalpha
extern	ft_ctype

ft_isalpha:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0x4
	call	ft_ctype
	leave
	ret
