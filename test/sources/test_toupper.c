/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:30:51 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/14 11:42:34 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdint.h>
#include "libfts.h"

static int	unit_toupper(int c)
{
	return (!(toupper(c) == ft_toupper(c)));
}

uint32_t	test_toupper(void)
{
	uint32_t	ret;

	ret = 0;
	/* test 1 */
	ret |= (unit_toupper(0) << 0);
	/* test 2 */
	ret |= (unit_toupper('a') << 1);
	/* test 3 */
	ret |= (unit_toupper('S') << 2);
	/* test 4 */
	ret |= (unit_toupper('s') << 3);
	/* test 5 */
	ret |= (unit_toupper('3') << 4);
	/* test 6 */
	ret |= (unit_toupper('M') << 5);
	/* test 7 */
	ret |= (unit_toupper('b') << 6);
	/* test 8 */
	ret |= (unit_toupper('l') << 7);
	/* test 9 */
	ret |= (unit_toupper('Y') << 8);
	/* test 10 */
	ret |= (unit_toupper(42) << 9);
	/* test 11 */
	ret |= (unit_toupper(0x42) << 10);
	/* test 12 */
	ret |= (unit_toupper(0xff) << 11);
	/* test 13 */
	ret |= (unit_toupper(-1) << 12);
	/* test 14 */
	ret |= (unit_toupper(200) << 13);

	return (ret);
}
