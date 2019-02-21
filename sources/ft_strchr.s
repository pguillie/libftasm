;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strchr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2019/02/21 18:57:16 by pguillie          #+#    #+#              ;
;    Updated: 2019/02/21 18:57:20 by pguillie         ###   ########.fr        ;
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
