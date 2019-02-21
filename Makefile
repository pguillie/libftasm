# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/09 10:05:42 by pguillie          #+#    #+#              #
#    Updated: 2019/02/21 18:28:12 by pguillie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

AS = nasm
ASFLAGS = $(ARCH)

ifeq ($(shell uname), Linux)
	ARCH := -felf64
else
	ARCH := -fmacho64 --prefix _
endif

INCLUDES = $(addprefix includes/, \
	ft_ctype.h \
	libfts.h \
)

SOURCES := $(addprefix sources/, \
	$(addprefix ctype/, \
		ft_ctype.s \
		ft_isalnum.s \
		ft_isalpha.s \
		ft_isascii.s \
		ft_isblank.s \
		ft_iscntrl.s \
		ft_isdigit.s \
		ft_isgraph.s \
		ft_islower.s \
		ft_isprint.s \
		ft_ispunct.s \
		ft_isspace.s \
		ft_isupper.s \
		ft_isxdigit.s \
	) \
	ft_bzero.s \
	ft_cat.s \
	ft_memcpy.s \
	ft_memset.s \
	ft_puts.s \
	ft_strcat.s \
	ft_strchr.s \
	ft_strdup.s \
	ft_strlen.s \
	ft_tolower.s \
	ft_toupper.s \
)

OBJECTS = $(SOURCES:%.s=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): $(INCLUDES) Makefile

test:
	make -C test

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
