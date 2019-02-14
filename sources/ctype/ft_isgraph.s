section	.text
global	ft_isgraph
extern	ft_ctype

ft_isgraph:
	push	rbp
	mov	rbp, rsp
	mov	rsi, 0x1
	shl	rsi, 0x7
	call	ft_ctype
	leave
	ret
