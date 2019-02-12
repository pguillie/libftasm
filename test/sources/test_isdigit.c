/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 20:59:07 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/18 07:30:01 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include "libfts.h"

static int	unit_isdigit(int c)
{
	return (!(!isdigit(c) == !ft_isdigit(c)));
}

uint32_t			test_isdigit(void)
{
	uint32_t	ret;

	ret = 0;
	/* test 1 */
	ret |= (unit_isdigit('0') << 0);
	/* test 2 */
	ret |= (unit_isdigit('1') << 1);
	/* test 3 */
	ret |= (unit_isdigit('2') << 2);
	/* test 4 */
	ret |= (unit_isdigit('3') << 3);
	/* test 5 */
	ret |= (unit_isdigit('4') << 4);
	/* test 6 */
	ret |= (unit_isdigit('5') << 5);
	/* test 7 */
	ret |= (unit_isdigit('6') << 6);
	/* test 8 */
	ret |= (unit_isdigit('7') << 7);
	/* test 9 */
	ret |= (unit_isdigit('8') << 8);
	/* test 10 */
	ret |= (unit_isdigit('9') << 9);
	/* test 11 */
	ret |= (unit_isdigit(10) << 10);
	/* test 12 */
	ret |= (unit_isdigit(-1) << 11);
	/* test 13 */
	ret |= (unit_isdigit(127) << 12);
	/* test 14 */
	ret |= (unit_isdigit(42) << 13);
	/* test 15 */
	printf("EOF: %d\n", EOF);
	ret |= (unit_isdigit(EOF) << 14);
	/* test 16 */
	ret |= (unit_isdigit(256) << 15);
	/* test 17 */
	ret |= (unit_isdigit('A') << 16);
	/* test 18 */
	ret |= (unit_isdigit('$') << 17);
	/* test 19 */
	ret |= (unit_isdigit('~') << 18);

	return (ret);
}
