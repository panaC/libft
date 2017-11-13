# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleroux <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 20:45:55 by pleroux           #+#    #+#              #
#    Updated: 2017/11/10 20:47:18 by pleroux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
SOURCE=*.c
OBJECT=*.o
INCLUDE=includes/

all: $(NAME)

libft.a: libft.o
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

libft.o:
	$(CC) -c $(SOURCE) -I $(INCLUDE) $(CFLAGS)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJECT)

re: fclean $(NAME)
