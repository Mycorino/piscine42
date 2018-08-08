# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfontana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/24 10:46:02 by cfontana          #+#    #+#              #
#    Updated: 2018/07/24 10:46:08 by cfontana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_FILES = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

O_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : $(NAME)

$(NAME) :
	gcc -c -Wall -Werror -Wextra $(C_FILES)
	ar rc $(NAME) $(O_FILES)

clean :
	rm -f $(NAME)

fclean : clean
	rm -f $(O_FILES)

re : fclean all
