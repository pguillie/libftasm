# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/09 10:05:42 by pguillie          #+#    #+#              #
#    Updated: 2018/12/09 10:44:25 by pguillie         ###   ########.fr        #
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
	ft_bzero.s \
)

OBJECTS = $(SOURCES:%.s=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
