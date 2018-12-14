/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:48:19 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/14 15:29:51 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdint.h>
#include "libfts.h"

static int	unit_memcpy(void *dest, const void *src, size_t n)
{
	void	*ptr;

	ptr = ft_memcpy(dest, src, n);
	if (ptr != dest)
		return (1);
	if (memcmp(dest, src, n))
		return (1);
	return (0);
}

uint32_t	test_memcpy(void)
{
	char		buf[512];
	uint32_t	ret;
	int			n;

	ret = 0;
	/* test 1 */
	n = 42;
	ret |= unit_memcpy(buf, &n, sizeof(int));
	/* test 2 */
	ret |= (unit_memcpy(buf, "hello world!", 5) << 1);
	/* test 3 */
	ret |= (unit_memcpy(buf, "hello world!", 12) << 2);
	/* test 4 */
	ret |= (unit_memcpy(buf, "foo", 0) << 3);
	/* test 5 */
	n = 0xffffffff;
	ret |= (unit_memcpy(buf, &n, 2) << 4);
	/* test 6 */
	n = 0;
	n |= ((int)'a' << 24);
	n |= ((int)'b' << 16);
	n |= ((int)'c' << 8);
	n |= 'd';
	ret |= (unit_memcpy(buf, &n, 4) << 5);
	/* test 7 */
	ret |= (unit_memcpy(buf, "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",
		16) << 6);
	/* test 8 */
	ret |= (unit_memcpy(buf, "jd6oQsXiw/VGgW6KcRIx+gsPc39n9CCOdzj/3iYgjeiF9RaS+"
		"5PybBUNB0Mb4hlI2WlTkgfSP+nhBs03OWPCRLPVlQei7FwKhFfUOQARZYwFAba94Hoih9Y"
		"21bjCDrhUJXBIF/dSWWUVnCHSYC78kWUSq8LImxIshGbyL/l7ZmtpnCbWgPBVu0PydwjZD"
		"lz1ldtBIiw91UXdS9F8x1QV15Cv/VbQqzoT3btYvCLrtJhETtYaWwWovsyZ4oF73I1wirD"
		"uwOcJMG2qGOt8KJaRdf7Dr95Ad9o/F56h5BeiPr9du5bWikgekF99odVO5Ru8uVKmkD+cN"
		"8ciTEDoC3SxGnoIjtSMnfHfCQs6odcSPSwpZ8THHzvjPqYym0Z6hNknQu3QwRCXxbz6+FK"
		"sIf50ZdprUxcZDfDjdzO++YLyEM3LZBYpwlTEB3kZpk5ykm3/nWOTaOYJkkWC0Tec5Lw0P"
		"o9CayuKYBYq1qZU2HH9/kGtJ1eNgCoQRzJkhjVRug5Q%", 512) << 7);

	return (ret);
}
