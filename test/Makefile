# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/10 14:21:40 by pguillie          #+#    #+#              #
#    Updated: 2019/02/21 20:17:05 by pguillie         ###   ########.fr        #
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
	test_ctype.c \
	test_isalnum.c \
	test_isalpha.c \
	test_isascii.c \
	test_isdigit.c \
	test_isprint.c \
	test_puts.c \
	test_strcat.c \
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
