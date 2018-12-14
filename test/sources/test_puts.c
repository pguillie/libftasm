/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_puts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:53:22 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/14 13:52:35 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "libfts.h"

static int	unit_puts(const char *s)
{
	char	buf[1024];
	int		ret;
	size_t	len;

	setbuf(stdout, buf);
	if (ft_puts(s) == EOF) //test with real puts
	{
		write(2, "\nError returned ", 16);
		return (1);
	}
	len = strlen(s);
	if (strncmp(buf, s, len) || strncmp(buf + len + 1, "\n\0", 2))
		return (1);
	return (0);
}

uint32_t	test_puts(void)
{
	uint32_t	ret;

	freopen("/dev/null", "a", stdout);
	ret = 0;
	/* test 1 */
	ret |= (unit_puts("") << 0);
	/* test 2 */
	ret |= (unit_puts("hello world!") << 1);
	/* test 3 */
	ret |= (unit_puts("Foo Bar Baz") << 2);
	/* test 4 */
	ret |= (unit_puts("/A82lijPfGcM08l3vRh+5BQL/pvlEPER2hWNZF/8Oxe4p432p6VcgLts"
		"a7G9qqDUVuRZkVypGmNcrh2d8JJFiNbAXik7+sYbSQJ0nKTnaC3xksh+piomTsqght6ZMA"
		"ut8n9hoAk8gbuO//yBjfi7+M/HhqHy8UyitXoizEzdMxjeSJijo49T0LpocbibxxF8iNnY"
		"/QySMERnIlQu4sn4LtJ5nWAR6vk7gGps0Pj4IytNIzp1VV18m04bzguKuYQbWOnelbKUZT"
		"KpHMvssfDImI7utG+tRTzHEo43uaqRdpDQe0zb2aSN5thsrhSSPDJ4X4jrpahAaAdcC/NM"
		"/sv8KoX2m3R6PRjo/3TZviLD3CgpPyBZaFkztC/o+l2rLbzkcQkob03xGPqPU7Daxke3If"
		"6csZgaoIp4Il5iekYeVV/XbCUElmAzW8CeU7AgChaZfEl8F56ai+jmKEcn8gYgFlEjZK87"
		"Jd4cqAJLQ30GpkLBS7aOTDRRdHAv+argLcQlu576qy7eVj8y96HEhx6Ry6T25b1T4CTqrV"
		"3ZWqvsx2e0b8KUOF3m4tWaxuwSO+NQMdUqMa1e+HYZygLGXwSIdFxADIMEg5WmVQuJfCo5"
		"M6OPoiODyWJqmcg5DGeGj9L824ZZ6NV2aIAaS1PldT4FwptRBMc5h4Oana6DCj2azP07mf"
		"ZVRzjEOgeB0ftIvAABEWKInyjGkw6E1S3y/QkCUub9EvGpio7xnFY6uc9dQxOjC54dqNJD"
		"eqoDftgUnCvWLDXPOXKVHGxk3d5+HluVFEBhSRbQHwV50YwSMzM+JM7xQUDf7fYQA/pXiD"
		"C200a5B2PBmbj9kWLGHa+68FEPANBx3HcmTbC8IDWSfrieieLqo1ZOE+CzPJEjbaqXsXVg"
		"L3b0DtMSK7R5UovBqnmtZyUG2TjEqx7qHA3Ak/GC31XtXTmsFBeOEgDcpt8a3tbtKhTQET"
		"WmbuXSMJw1SvPE/mn54v9La/1ozhbEEiJc") << 3);
	/* test 5 */
	ret |= (unit_puts("\n\nnewlines!\n\n") << 4);
	/* test 6 */
	ret |= (unit_puts("\t!@#$%^&*()_+\r") << 5);
	/* test 7 */
	ret |= (unit_puts("\t\n\v\f\r ") << 6);
	/* test 8 */
	ret |= (unit_puts("qwertyuiopasdfghjklzxcvbnm") << 7);
	/* test 9 */
	ret |= (unit_puts("fake\0null-string!") << 8);
	/* test 10 */
	ret |= (unit_puts(NULL) << 9);
	freopen("/dev/tty", "a", stdout);

	return (ret);
}
