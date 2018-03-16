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

NAME = ft_display_file

SRCS = ft_display_file.c funcs.c

C_FLAGS = -Wall -Wextra -Werror -o

all: $(NAME)

$(NAME):
	$(CC) $(SRCS) $(C_FLAGS) $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
