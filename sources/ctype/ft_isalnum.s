section	.text
global	ft_isalnum
extern	ft_ctype

ft_isalnum:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0x5
	call	ft_ctype
	leave
	ret
