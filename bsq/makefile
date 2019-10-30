# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 13:54:24 by frfrance          #+#    #+#              #
#    Updated: 2019/10/30 13:54:33 by frfrance         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
FLAG = -Wall -Wextra -Werror
SRCS = sources/create_map.c sources/set_param.c sources/main.c sources/open_file.c sources/find_square.c sources/check_map.c sources/exec.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAG) $(OBJS) -o $(NAME)

c.o :
	gcc -c $(FLAGS) $< -o $(<:.c=.o)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f bsq

re : fclean all
