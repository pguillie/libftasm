#include "tests.h"

struct function {
	const char *name;
	int (*ptr)(int *);
};

struct function *get_next_function(void)
{
	static size_t i = 0;
	static struct function array[] = {
		{ "ft_bzero", test_bzero },
		{ "ft_strcat", test_strcat },
		{ "ft_isalpha", test_isalpha },
		{ "ft_isdigit", test_isdigit },
		{ "ft_isalnum", test_isalnum },
		{ "ft_isascii", test_isascii },
		{ "ft_isprint", test_isprint },
		{ "ft_toupper", test_toupper },
		{ "ft_tolower", test_tolower },
		{ "ft_puts", test_puts }
	};

	if (i < sizeof(array) / sizeof(array[0]))
		return (array + i++);
	return (NULL);
}

int main(void)
{
	struct function *f;
	int failure = 0;

	while ((f = get_next_function())) {
		printf("\e[1m- %s:\e[0m ", f->name);
		int nb, fail;
		fail = f->ptr(&nb);
		if (fail) {
			printf("\n\e[31m[%d ko]\e[0m (%d tests)\n", fail, nb);
			failure++;
		} else {
			printf("\e[32m[OK]\e[0m (%d tests)\n", nb);
		}
	}
	if (failure) {
		printf("\e[31;1m>>> %d failed function%c <<<\e[0m\n", failure,
		       (failure > 1 ? 's' : 0));
	} else {
		printf("\e[32;1m>>> All tests passed! <<<\n\e[0m");
	}
	return (failure);
}
