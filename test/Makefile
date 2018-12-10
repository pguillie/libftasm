# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/10 14:21:40 by pguillie          #+#    #+#              #
#    Updated: 2018/12/10 15:35:45 by pguillie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_libfts
CC = gcc
CFLAGS = -Wall -Werror -Wextra

LIBFTS := -L../ -lfts

SRCDIR := sources/
INCDIR := includes/

INCLUDES = $(addprefix $(INCDIR), \
	libfts.h \
	tests.h \
)

SOURCES = $(addprefix $(SRCDIR), \
	main.c \
	test_bzero.c \
	test_strcat.c \
)

OBJECTS = $(SOURCES:%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc -o $(NAME) $(OBJECTS) $(LIBFTS)

%.o: %.c $(INCLUDES)
	gcc -c -o $@ $< -I$(INCDIR)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all