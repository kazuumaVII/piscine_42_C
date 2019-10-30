# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 13:37:34 by frfrance          #+#    #+#              #
#    Updated: 2019/10/30 13:37:47 by frfrance         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRCS = ./srcs/
SRCS = ./srcs/ft_putchar.c\
		./srcs/ft_swap.c\
		./srcs/ft_putstr.c\
		./srcs/ft_strlen.c\
		./srcs/ft_strcmp.c\

OBJS = $(SRCS:.c=.o)
INCLUDES = ./includes/
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o :
	gcc -c $(CFLAGS) -I $(INCLUDES) $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)
	rm -f includes/ft.h.gh

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY = all clean fclean re
