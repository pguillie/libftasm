/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:49:00 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/14 11:13:01 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

#include <stdint.h>

uint32_t	test_bzero(void);
uint32_t	test_strcat(void);
uint32_t	test_isalpha(void);
uint32_t	test_isdigit(void);
uint32_t	test_isalnum(void);
uint32_t	test_isascii(void);
uint32_t	test_isprint(void);
uint32_t	test_toupper(void);
uint32_t	test_tolower(void);
uint32_t	test_puts(void);

uint32_t	test_strlen(void);
uint32_t	test_memset(void);
uint32_t	test_memcpy(void);
uint32_t	test_strdup(void);

uint32_t	test_cat(void);

#endif
