/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:30:51 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/14 11:43:04 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdint.h>
#include "libfts.h"

static int	unit_tolower(int c)
{
	return (!(tolower(c) == ft_tolower(c)));
}

uint32_t	test_tolower(void)
{
	uint32_t	ret;

	ret = 0;
	/* test 1 */
	ret |= (unit_tolower(0) << 0);
	/* test 2 */
	ret |= (unit_tolower('a') << 1);
	/* test 3 */
	ret |= (unit_tolower('S') << 2);
	/* test 4 */
	ret |= (unit_tolower('s') << 3);
	/* test 5 */
	ret |= (unit_tolower('3') << 4);
	/* test 6 */
	ret |= (unit_tolower('M') << 5);
	/* test 7 */
	ret |= (unit_tolower('b') << 6);
	/* test 8 */
	ret |= (unit_tolower('l') << 7);
	/* test 9 */
	ret |= (unit_tolower('Y') << 8);
	/* test 10 */
	ret |= (unit_tolower(42) << 9);
	/* test 11 */
	ret |= (unit_tolower(0x42) << 10);
	/* test 12 */
	ret |= (unit_tolower(0xff) << 11);
	/* test 13 */
	ret |= (unit_tolower(-1) << 12);
	/* test 14 */
	ret |= (unit_tolower(200) << 13);

	return (ret);
}
