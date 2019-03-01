;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memcmp.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2019/03/01 15:07:32 by pguillie          #+#    #+#              ;
;    Updated: 2019/03/01 16:38:28 by pguillie         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_memcmp

section .text
ft_memcmp:
	push	rbp
	mov	rbp, rsp
	mov	rcx, rdx
	xor	rax, rax
	repz cmpsb
	jz	return
	xor	rdx, rdx
	mov	dl, byte [rdi - 1]
	xor	rcx, rcx
	mov	cl, byte [rsi - 1]
	mov	rax, rdx
	sub	rax, rcx
return:
	leave
	ret
