/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 10:46:13 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/09 10:51:31 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

void	bzero(void *s, size_t n);
char	*strcat(char *dest, const char *src);
int		isdigit(int c);
int		isalnum(int c);
int		isascii(int c);
int		isprint(int c);
int		toupper(int c);
int		tolower(int c);
int		puts(const char *s);

size_t	strlen(const char *s);
void	*memset(void *s, int c, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
char	*strdup(const char *s);

void	ft_cat(int fd);

#endif
