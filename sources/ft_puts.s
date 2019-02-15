section	.text

global	ft_puts

ft_puts:
	push	rbp
	mov	rbp, rsp
	test	rdi, rdi
	je	null_arg
	push	rdi
	call	ft_strlen
	mov	rdx, rax
	mov	rax, 0x2000004
	mov	rdi, 0x1
	pop	rsi
	syscall
	mov	rax, 0x2000004
	mov	rdi, 0x1
	lea	rsi, [rel nl]
	mov	rdx, 0x1
	syscall
	leave
	ret
null_arg:
	mov	rax, 0x2000004
	mov	rdi, 0x1
	lea	rsi, [rel null]
	mov	rdx, null.len
	syscall
	leave
	ret

; part 2
ft_strlen:
	push	rbp
	mov	rbp, rsp
	xor	rax, rax
not_null:
	mov	dl, BYTE [rdi + rax]
	test	dl, dl
	je	strlen_return
	inc	rax
	jmp	not_null
strlen_return:
	leave
	ret

section	.rodata
	null	db "(null)", 0xa
	.len	equ $ - null
	nl	db 0xa
