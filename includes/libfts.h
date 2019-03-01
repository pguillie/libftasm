/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 10:46:13 by pguillie          #+#    #+#             */
/*   Updated: 2019/03/01 15:26:48 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

#include <stddef.h>
#include "ft_ctype.h"

void *ft_bzero(void *s, size_t n);
char *ft_strcat(char *dest, const char *src);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_puts(const char *s);

size_t ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
char *ft_strdup(const char *s);

void ft_cat(int fd);

char *ft_strchr(const char *s, int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
