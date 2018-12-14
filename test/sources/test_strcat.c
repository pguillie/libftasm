/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:35:47 by pguillie          #+#    #+#             */
/*   Updated: 2018/12/14 14:39:22 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdint.h>
#include "libfts.h"

static int	unit_strcat(char *dest, const char *src, char *res)
{
	char	*ptr;

	ptr = ft_strcat(dest, src);
	if (ptr != dest)
		return (1);
	if (strcmp(ptr, res))
		return (1);
	return (0);
}

uint32_t	test_strcat(void)
{
	char		buf[2048];
	uint32_t	ret;

	ret = 0;
	/* test 1 */
	ret |= unit_strcat(buf, "", "");
	/* test 2 */
	ret |= (unit_strcat(buf, "foo", "foo") << 1);
	/* test 3 */
	ret |= (unit_strcat(buf, "", "foo") << 2);
	/* test 4 */
	ret |= (unit_strcat(buf, "bar", "foobar") << 3);
	/* test 5 */
	strcpy(buf, "hello");
	ret |= (unit_strcat(buf, " world!", "hello world!") << 4);
	/* test 6 */
	strcpy(buf, "hello world");
	buf[5] = '\0';
	ret |= (unit_strcat(buf, " foo", "hello foo") << 5);
	/* test 7 */
	strcpy(buf + 42, "aqNjkGeqPH2RSEn4iyN1halHhu3TPQC2no33SuisKi");
	ret |= (unit_strcat(buf + 42,
		"0EcGl8fO0xX69WLH1AM3rD+udrCv4UsmNVI+a5IVWF",
		"aqNjkGeqPH2RSEn4iyN1halHhu3TPQC2no33SuisKi0EcGl8fO0xX69WLH1AM3rD+udrCv"
		"4UsmNVI+a5IVWF")
		<< 6);
	/* test 8 */
	strcpy(buf,
		"nti0llbPgNeD5xjOM/68KzNbV1ojFKtP29Cb+809xdChlbCPqKtlyJoUwsnQ9f0Z");
	ret |= (unit_strcat(buf + 42, "42", "ChlbCPqKtlyJoUwsnQ9f0Z42") << 7);
	/* test 9 */
	strcpy(buf, "TwvyrcKXzoLm8I4hZfww1mezGvj0tMZuX0y1ba38VYTZXjO1KJZwHXbRW59/UJ"
		"luDMCugzVjmFAhl8nTDjcXA+U8cLxkrRCuGmB5VQFOe1LPVCOYk7iX5N2d0lU9JfiXavto"
		"fUb4Y7nOCMBSbLEn1svKBCu7BU9h1LXnUOIc8SD5TO5xkKX58+6NZT8+sA2m0OGIS7lE96"
		"f76yXn6RX+VEqPY4jsoSrZMo6IQNTlKnsbFz2iCh2AxmvFAvm31xIVxq0e0BV8l1r3uezH"
		"Zah17f46W8EKd05JS8W4HlMZLdAiEd1fAYxYctsQWY88WiypyfJF82oJ9Bh4FFege+b4bG"
		"HvOl75ljtN8Yij+P0bqRUz39Kcr4xeEG7rU+QesDCi97nYO2CwwT/F0iDu1oOAx6gbBggD"
		"m82z+EsRlK72nqE/V5r9U7tzwV5SqFR2sq4hphxxw/Itjelo/K+wTfTeA/LqMlPvGjtKsg"
		"SPp50IVgRp3I/fzNsKKdbsV8C8wRCPqJr21APCUx/wF7Nc9kHhBEMRNhZS7phfUW4YKNsM"
		"muzkVSXEmv5Cwh7xV2A6lNuf6R8iGmtAskgyUCn3S/0OfFYid/VbLoN5koUtqfsB6WJvNR"
		"47EqLejv/SMWNFTsYCX9vkBjeVNW8e1q9BiEGbd5ovtSWlo/3L1RWPPZ1V3GSjkRp2e/O2"
		"JIbn+nfqrE/yBm1BRBBeqWhOyK7//vXxfM0lV2YD3gXaqgVrUOyb22Vp2KeVyVc0F0P4dd"
		"P+uW9fDh+trOgpK8c1vJXRreZir6DMk7TyLNWCyyrmpMxO66xCCba/22KzxIrY4iLkcDBC"
		"4Tg0bOO3rI+Wsga4vnTxuVESQdYLeS09eL0ROEnhrXexj+PaikiKekOH2h9BsCyaaCkXEb"
		"len++I60RwI2ynBkdZcZAil2rcZy0fppkCfySBSvF7ZZ4LzUzXzG2Zqoh1I2zTuzv78jLS"
		"z1jki/VZVftTOl7Rndm0gzgk9I4vg2yvXyCge5UcTW2utJN/3fGE");
	ret |= (unit_strcat(buf,
		" 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 TtAZV2uh51w8vCDe+9xbDEElQ"
		"cuy/p+m9x6+A30lAQHO6TO90eIC1Ps6Aqza76TZqXJZZ4CkByrULr/vLth2QdWYdxs83eB"
		"WP9vtLIJQBW49csoanurJHsmn9rqrlRWgEHqJcjAUuHmBHXDi+neoD54clsuxmbvmLEAOW"
		"BQLhEUP1dsrzAgWKTcLcHaWnKxfczfv9cr40GYYVPWIVRQqDIyut2+QFh+RkS4g2/7POeY"
		"q5Hao9x4v+gvzWjYcA6mfLBEKMWF8E2ahy5jvwyyXzDxcK+0syjI5aUHwMAaCwOakmI1o1"
		"zmtIzB6tHyxC686pTA4UTjO51h64Bj+IoR9w8F1oX0SnuxOCh+/rNd1bozr/kcSjDt1Iqk"
		"w1Lb4ljVaUAWKa83imj5LeJ/48bj5htt5xfty+jVv4X/Z0Q7D57GxXUpjaNhqz+McwkrBz"
		"5zy4OYrzqU0fXyxmWwfvRjqBTh3E9sw1vgu+IKXvW+2UXX/VOYZ+6iMp94V352e85R5Q/K"
		"S8V416rJVRTIoE79NTdWc2R9IDAYs5fwai9EAZ1tMO9ngyUY2rF3pjoaMUgChh2lR+2qbT"
		"+gB23rxRuXAsgOk3bNSeaeCB1ztGVl/1Sggq08ZSJzy48NI3fKxs9zOxWqZ24mMzp2gNJQ"
		"dEd466UbtaETzn9uNKVg8DKZp3gxwXD2MgohDGioLLTC6paV5Be3dhyT03Ki5dXAJDhuC9"
		"NTjG6OiscWy3HEyG0N6g9w+FeGFw7t6bm9oibuqAz9Kdi2+8eMAraTgStmmDwLYML4xauI"
		"DYVxiyGIalA86NFxDXeg0ItCV1di9qUdSmgwPm8wCKruG1UH4R8iWxqMbL0K5T/Kc7A2OP"
		"27ru3vpPFLg5OAUuxq2o9JTGH57r0UZrDnpz/Ae59EPyUJsP+9lLtWy06X071oXpyh/Tal"
		"vukRn020E120BnLxNlipnunhJpcSDvFR+6+4UELOu1sz5jl3ir65YRVAP+4GWXt3V63DPK"
		"t2PcciuuJOJR+z7GQaR")
		<< 8);
	return (ret);
}
