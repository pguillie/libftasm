/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:48:19 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/14 13:28:29 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libfts.h"

static int	unit_memset(void *buf, int c, size_t n)
{
	void	*ptr;
	char	*s;

	memset(buf, 1, n);
	ptr = ft_memset(buf, c, n);
	if (ptr != buf)
		return (1);
	s = (char *)buf;
	for (size_t i = 0; i < n; i++)
		if (s[i] != c)
			return (1);
	return (0);
}

int			test_memset(void)
{
	char	buf[2048];
	int		ret;
	
	ret = 0;
	/* test 1 */
	ret |= unit_memset(buf, 42, 0);
	/* test 2 */
	ret |= (unit_memset(buf, 0, 1) << 1);
	/* test 3 */
	ret |= (unit_memset(buf, ' ', 5) << 2);
	/* test 4 */
	ret |= (unit_memset(buf, '#', 8) << 3);
	/* test 5 */
	ret |= (unit_memset(buf, '{', 9) << 4);
	/* test 6 */
	ret |= (unit_memset(buf, 'Z', 20) << 5);
	/* test 7 */
	ret |= (unit_memset(buf, 100, 42) << 6);
	/* test 8 */
	ret |= (unit_memset(buf, '/', 1000) << 7);
	/* test 9 */
	ret |= (unit_memset(buf, 0xff, 1024) << 8);
	/* test 10 */
	ret |= (unit_memset(buf, ' ', 1234) << 9);
	/* test 11 */
	ret |= (unit_memset(buf, '.', 2047) << 10);

	return (ret);
}
