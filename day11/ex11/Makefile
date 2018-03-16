# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkolev <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/28 11:14:53 by dkolev            #+#    #+#              #
#    Updated: 2018/02/28 18:23:53 by dkolev           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = main

SRCS = ft_create_elem.c ft_list_push_back.c ft_list_push_front.c main.c \
	   ft_list_size.c ft_list_last.c ft_list_at.c ft_list_reverse.c \
	   ft_list_foreach.c ft_list_foreach_if.c

C_FLAGS = -Wall -Wextra -Werror -o

all: $(NAME)

$(NAME):
	$(CC) $(SRCS) $(C_FLAGS) $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
