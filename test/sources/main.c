/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:44:55 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/14 14:27:24 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "tests.h"

static int	test(char *name, uint32_t (*f)(void))
{
	uint32_t	ret;
	int			i;

	printf("%s: ", name);
	if ((ret = f()))
	{
		printf("\e[31;1mKO\e[0m ( failed tests: ");
		i = 1;
		while (ret)
		{
			if (ret & 1)
				printf("%d ", i);
			i++;
			ret >>= 1;
		}
		printf(")\n");
		return (1);
	}
	printf("\e[32;1mOK\e[0m\n");
	return (0);
}

int 	    main(void)
{
	int		ret;

	ret = 0;
	printf("\t== Part 1 ==\n");
	ret += test("bzero", test_bzero);
	ret += test("strcat", test_strcat);
	ret += test("isalpha", test_isalpha);
	ret += test("isdigit", test_isdigit);
	ret += test("isalnum", test_isalnum);
	// ret += test("isascii", test_isprint);
	// ret += test("isprint", test_isprint);
	// ret += test("toupper", test_toupper);
	// ret += test("tolower", test_tolower);
	// ret += test("puts", test_puts);
	printf("\t== Part 2 ==\n");
	// ret += test("strlen", test_strlen);
	// ret += test("memset", test_memset);
	// ret += test("memcpy", test_memcpy);
	// ret += test("strdup", test_strdup);
	printf("\t== Part 3 ==\n");
	// ret += test("cat", test_cat);
	if (ret)
		printf("\e[31;1m%d function%s not working.\e[0m\n",
			ret, (ret > 1 ? "s are" : " is"));
	else
		printf("\e[32;1mAll functions passed the tests!\e[0m\n");
	return (ret);
}
