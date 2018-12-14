/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:14:06 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/14 11:40:13 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdint.h>
#include "libfts.h"

static int	unit_isprint(int c)
{
	return (!(isprint(c) == ft_isprint(c)));
}

uint32_t	test_isprint(void)
{
	uint32_t	ret;

	ret = 0;
	/* test 1 */
	ret |= (unit_isprint(0) << 0);
	/* test 2 */
	ret |= (unit_isprint(1) << 1);
	/* test 3 */
	ret |= (unit_isprint(0x19) << 2);
	/* test 4 */
	ret |= (unit_isprint(0x20) << 3);
	/* test 5 */
	ret |= (unit_isprint(0x21) << 4);
	/* test 6 */
	ret |= (unit_isprint(0x42) << 5);
	/* test 7 */
	ret |= (unit_isprint(0x2a) << 6);
	/* test 8 */
	ret |= (unit_isprint(-0x1) << 7);
	/* test 9 */
	ret |= (unit_isprint(0x7e) << 8);
	/* test 10 */
	ret |= (unit_isprint(0x7f) << 9);
	/* test 11 */
	ret |= (unit_isprint(-0x42) << 10);
	/* test 12 */
	ret |= (unit_isprint(0xff) << 11);

	return (ret);
}
