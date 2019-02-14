section	.text
global	ft_iscntrl
extern	ft_ctype

ft_iscntrl:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0xb
	call	ft_ctype
	leave
	ret
