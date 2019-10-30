# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 13:40:34 by frfrance          #+#    #+#              #
#    Updated: 2019/10/30 13:40:40 by frfrance         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = ft_display_file
CFLAGS = -Wall -Wextra -Werror
SRCS_PATH = srcs

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRCS_PATH)/*.c -o $(NAME)

clean :
	rm $(NAME)

fclean : clean

re : fclean all
