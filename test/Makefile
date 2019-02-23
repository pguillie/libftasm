# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/10 14:21:40 by pguillie          #+#    #+#              #
#    Updated: 2019/02/23 18:26:01 by pguillie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= test_libfts
CC	= gcc
CFLAGS	= -Wall -Werror -Wextra -I $(INCDIR)

LIBFTS := ../libfts.a

INCDIR := includes/
SRCDIR := sources/

INCLUDES = $(addprefix $(INCDIR), \
	libfts.h \
	ft_ctype.h \
	tests.h \
)

SOURCES = $(addprefix $(SRCDIR), \
	main.c \
	test_bzero.c \
	test_cat.c \
	test_ctype.c \
	test_isalnum.c \
	test_isalpha.c \
	test_isascii.c \
	test_isblank.c \
	test_iscntrl.c \
	test_isdigit.c \
	test_isgraph.c \
	test_islower.c \
	test_isprint.c \
	test_ispunct.c \
	test_isspace.c \
	test_isupper.c \
	test_isxdigit.c \
	test_memcpy.c \
	test_memset.c \
	test_puts.c \
	test_strcat.c \
	test_strchr.c \
	test_strdup.c \
	test_strlen.c \
	test_tolower.c \
	test_toupper.c \
)

OBJECTS = $(SOURCES:%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFTS)
	gcc -o $(NAME) $(OBJECTS) $(LIBFTS)

$(LIBFTS):
	make -C $(dir $(LIBFTS))

$(OBJECTS): $(INCLUDES) Makefile

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
