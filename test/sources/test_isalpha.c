/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 20:59:07 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/18 07:10:26 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdint.h>
#include "libfts.h"

static int	unit_isalpha(int c)
{
	return (!(!isalpha(c) == !ft_isalpha(c)));
}

uint32_t			test_isalpha(void)
{
	uint32_t	ret;

	ret = 0;
	/* test 1 */
	ret |= (unit_isalpha('A') << 0);
	/* test 2 */
	ret |= (unit_isalpha('Z') << 1);
	/* test 3 */
	ret |= (unit_isalpha('a') << 2);
	/* test 4 */
	ret |= (unit_isalpha('z') << 3);
	/* test 5 */
	ret |= (unit_isalpha('B') << 4);
	/* test 6 */
	ret |= (unit_isalpha('c') << 5);
	/* test 7 */
	ret |= (unit_isalpha('x') << 6);
	/* test 8 */
	ret |= (unit_isalpha('Y') << 7);
	/* test 9 */
	ret |= (unit_isalpha('$') << 8);
	/* test 10 */
	ret |= (unit_isalpha('/') << 9);
	/* test 11 */
	ret |= (unit_isalpha(42) << 10);
	/* test 12 */
	ret |= (unit_isalpha(-1) << 11);
	/* test 13 */
	ret |= (unit_isalpha('^') << 12);
	/* test 14 */
	ret |= (unit_isalpha(42) << 13);
	/* test 15 */
	ret |= (unit_isalpha(256) << 15);
	/* test 16 */
	ret |= (unit_isalpha('0') << 16);
	/* test 17 */
	ret |= (unit_isalpha(' ') << 17);
	/* test 18 */
	ret |= (unit_isalpha('@') << 18);
	/* test 19 */
	ret |= (unit_isalpha('[') << 19);
	/* test 20 */
	ret |= (unit_isalpha('`') << 20);
	/* test 21 */
	ret |= (unit_isalpha('{') << 21);

	return (ret);
}
