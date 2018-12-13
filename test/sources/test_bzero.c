/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:48:19 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/11 21:00:04 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libfts.h"

static int	unit_bzero(char *buf, size_t n)
{
	char	*ptr;

	memset(buf, 42, n);
	ptr = ft_bzero(buf, n);
	if (ptr != buf)
		return (1);
	for (size_t i = 0; i < n; i++)
		if (buf[i])
			return (1);
	return (0);
}

int			test_bzero(void)
{
	char	buf[2048];
	int		ret;
	
	ret = 0;
	/* test 1 */
	ret |= unit_bzero(buf, 0);
	/* test 2 */
	ret |= (unit_bzero(buf, 1) << 1);
	/* test 3 */
	ret |= (unit_bzero(buf, 5) << 2);
	/* test 4 */
	ret |= (unit_bzero(buf, 8) << 3);
	/* test 5 */
	ret |= (unit_bzero(buf, 9) << 4);
	/* test 6 */
	ret |= (unit_bzero(buf, 20) << 5);
	/* test 7 */
	ret |= (unit_bzero(buf, 42) << 6);
	/* test 8 */
	ret |= (unit_bzero(buf, 1000) << 7);
	/* test 9 */
	ret |= (unit_bzero(buf, 1024) << 8);
	/* test 10 */
	ret |= (unit_bzero(buf, 1234) << 9);
	/* test 11 */
	ret |= (unit_bzero(buf, 2047) << 10);

	return (ret);
}
