# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pguillie <pguillie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/09 10:05:42 by pguillie          #+#    #+#              #
#    Updated: 2019/09/02 09:51:26 by pguillie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libfts.a
AS	:= nasm
AR	:= ar

ASFLAGS = -f$(arch)
ARFLAGS = cr

os != uname
ifeq ($(os), Linux)
	arch := elf64
	ARFLAGS += -U
else
	arch := macho64
	ASFLAGS += --prefix _
endif

incdir := ./include/
srcdir := ./src/

headers := libfts.h ft_ctype.h

sources := $(addprefix $(srcdir), \
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
	ft_memchr.s \
	ft_memcmp.s \
	ft_memcpy.s \
	ft_memset.s \
	ft_putchar.s \
	ft_puts.s \
	ft_strcat.s \
	ft_strchr.s \
	ft_strcmp.s \
	ft_strdup.s \
	ft_strlen.s \
	ft_tolower.s \
	ft_toupper.s \
)

objects = $(sources:%.s=%.o)

.PHONY: all clean fclean re
.SECONDARY: $(objects)

all: $(NAME)

$(NAME): $(NAME)($(objects))
	ranlib $@

$(objects): $(addprefix $(incdir), $(headers))

clean:
	$(RM) $(objects)

fclean: clean
	$(RM) $(NAME)

re: fclean all
