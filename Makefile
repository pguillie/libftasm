# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/09 10:05:42 by pguillie          #+#    #+#              #
#    Updated: 2019/02/09 11:00:36 by pguillie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

AS = nasm
ASFLAGS = -f$(ARCH)

ifeq ($(shell uname), Linux)
	ARCH := elf64
else
	ARCH := macho64
endif

SOURCES := $(addprefix sources/, \
	$(addprefix ctype/, \
		ft_ctype.s \
		ft_isalpha.s \
		ft_isdigit.s \
		ft_isalnum.s \
	) \
	ft_bzero.s \
	ft_strcat.s \
)

OBJECTS = $(SOURCES:%.s=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

test:
	make -C test

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
