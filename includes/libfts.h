/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 10:46:13 by pguillie          #+#    #+#             */
/*   Updated: 2019/02/14 22:00:28 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

#include <stddef.h>
#include "ft_ctype.h"

void	*ft_bzero(void *s, size_t n);
char	*ft_strcat(char *dest, const char *src);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_puts(const char *s);

size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s);

void	ft_cat(int fd);

#endif
