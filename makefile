# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 16:44:03 by amessah           #+#    #+#              #
#    Updated: 2021/11/27 13:05:00 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =   ft_printf.c			  \
		ft_printf_function.c  \
		ft_printf_function2.c \
		ft_printf_function3.c \
		ft_printf_function4.c \
		ft_printf_function5.c \
			  

OBJECTS = $(SRC:.c=.o)

INCLUDES = ft_printf.h \

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<
	
clean:
	rm -rf $(OBJECTS) 

fclean: clean
	rm -rf $(NAME) 

re: fclean all