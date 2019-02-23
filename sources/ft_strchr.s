;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strchr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2019/02/21 18:57:16 by pguillie          #+#    #+#              ;
;    Updated: 2019/02/23 19:06:46 by pguillie         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strchr
extern ft_strlen

section .text
ft_strchr:
	push	rbp
	mov	rbp, rsp
	push	rdi
	push	rsi
	call	ft_strlen
	mov	rcx, rax
	pop	rax
	pop	rdi
	test	rcx, rcx
	je	endofstr
	repne scasb
	jne	endofstr
	dec	rdi
success:
	mov	rax, rdi
	leave
	ret
endofstr:
	cmp	al, 0x0
	je	success
	xor	rax, rax
	leave
	ret
