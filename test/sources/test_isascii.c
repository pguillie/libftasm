/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 20:59:07 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/14 14:29:02 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdint.h>
#include "libfts.h"

static int	unit_isascii(int c)
{
	return (!(isascii(c) == ft_isascii(c)));
}

uint32_t	test_isascii(void)
{
	uint32_t	ret;

	ret = 0;
	/* test 1 */
	ret |= (unit_isascii('A') << 0);
	/* test 2 */
	ret |= (unit_isascii('Z') << 1);
	/* test 3 */
	ret |= (unit_isascii('a') << 2);
	/* test 4 */
	ret |= (unit_isascii('z') << 3);
	/* test 5 */
	ret |= (unit_isascii('B') << 4);
	/* test 6 */
	ret |= (unit_isascii('c') << 5);
	/* test 7 */
	ret |= (unit_isascii('x') << 6);
	/* test 8 */
	ret |= (unit_isascii('Y') << 7);
	/* test 9 */
	ret |= (unit_isascii('$') << 8);
	/* test 10 */
	ret |= (unit_isascii('/') << 9);
	/* test 11 */
	ret |= (unit_isascii(42) << 10);
	/* test 12 */
	ret |= (unit_isascii(-1) << 11);
	/* test 13 */
	ret |= (unit_isascii('^') << 12);
	/* test 14 */
	ret |= (unit_isascii(42) << 13);
	/* test 15 */
	ret |= (unit_isascii(-2147483648) << 14);
	/* test 16 */
	ret |= (unit_isascii(256) << 15);
	/* test 17 */
	ret |= (unit_isascii('0') << 16);
	/* test 18 */
	ret |= (unit_isascii(0) << 17);
	/* test 19 */
	ret |= (unit_isascii('0') << 18);
	/* test 20 */
	ret |= (unit_isascii('1') << 19);
	/* test 21 */
	ret |= (unit_isascii('2') << 20);
	/* test 22 */
	ret |= (unit_isascii('3') << 21);
	/* test 23 */
	ret |= (unit_isascii('4') << 22);
	/* test 24 */
	ret |= (unit_isascii('5') << 23);
	/* test 25 */
	ret |= (unit_isascii('6') << 24);
	/* test 26 */
	ret |= (unit_isascii('7') << 25);
	/* test 27 */
	ret |= (unit_isascii('8') << 26);
	/* test 28 */
	ret |= (unit_isascii('9') << 27);
	/* test 29 */
	ret |= (unit_isascii('@') << 28);
	/* test 30 */
	ret |= (unit_isascii('[') << 29);
	/* test 31 */
	ret |= (unit_isascii('`') << 30);
	/* test 32 */
	ret |= (unit_isascii('{') << 31);

	return (ret);
}
