section .text

global ft_strchr

extern ft_strlen

ft_strchr:
	push	rbp
	mov	rbp, rsp
	push	rdi
	push	rsi
	call	ft_strlen
	mov	rcx, rax
	pop	rax
	pop	rdi
	repne scasb
	; following is wrong
	dec	rdi
	cmp	dl, al
	jne	found
	xor	rax, rax
	leave
	ret
found:
	mov	rax, rdi
	leave
	ret
