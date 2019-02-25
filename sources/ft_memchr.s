;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memchr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2019/02/25 14:05:22 by pguillie          #+#    #+#              ;
;    Updated: 2019/02/25 14:31:32 by pguillie         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_memchr

section .text
ft_memchr:
	push	rbp
	mov	rbp, rsp
	mov	rcx, rdx
	mov	rax, rsi
	test	rcx, rcx
	je	endofmem
	repne scasb
	jne	endofmem
	dec	rdi
success:
	mov	rax, rdi
	leave
	ret
endofmem:
	cmp	al, byte [rdi]
	je	success
	xor	rax, rax
	leave
	ret
