# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleroux <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 20:45:55 by pleroux           #+#    #+#              #
#    Updated: 2017/11/16 10:18:39 by pleroux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
INCLUDE=libft.h
SOURCE= ft_atoi.c			\
		ft_bzero.c			\
		ft_isalnum.c			\
		ft_isalpha.c			\
		ft_isascii.c			\
		ft_isdigit.c			\
		ft_isnum.c			\
		ft_isprint.c			\
		ft_isspace.c			\
		ft_itoa.c			\
		ft_lstadd.c			\
		ft_lstaddtoend.c			\
		ft_lstdel.c			\
		ft_lstdelone.c			\
		ft_lstiter.c			\
		ft_lstlen.c			\
		ft_lstmap.c			\
		ft_lstnew.c			\
		ft_memalloc.c			\
		ft_memccpy.c			\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_memcpy.c			\
		ft_memdel.c			\
		ft_memdup.c			\
		ft_memmove.c			\
		ft_memset.c			\
		ft_putchar.c			\
		ft_putchar_fd.c			\
		ft_putendl.c			\
		ft_putendl_fd.c			\
		ft_putlst.c			\
		ft_putnbr.c			\
		ft_putnbr_fd.c			\
		ft_putstr.c			\
		ft_putstr_fd.c			\
		ft_strcat.c			\
		ft_strchr.c			\
		ft_strclr.c			\
		ft_strcmp.c			\
		ft_strcpy.c			\
		ft_strdel.c			\
		ft_strdup.c			\
		ft_strequ.c			\
		ft_striter.c			\
		ft_striteri.c			\
		ft_strjoin.c			\
		ft_strlcat.c			\
		ft_strlen.c			\
		ft_strmap.c			\
		ft_strmapi.c			\
		ft_strncat.c			\
		ft_strncmp.c			\
		ft_strncpy.c			\
		ft_strnequ.c			\
		ft_strnew.c			\
		ft_strnstr.c			\
		ft_strrchr.c			\
		ft_strsplit.c			\
		ft_strstr.c			\
		ft_strsub.c			\
		ft_strtrim.c			\
		ft_tolower.c			\
		ft_toupper.c			\

OBJECT=$(SOURCE:.c=.o)

all: $(NAME)

$(NAME): libft.o
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

libft.o:
	$(CC) -c $(SOURCE) -I $(INCLUDE) $(CFLAGS)

fclean: clean
	/bin/rm -f $(NAME)

clean:
	/bin/rm -f $(OBJECT)

re: fclean $(NAME)
