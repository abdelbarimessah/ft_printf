# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 16:44:03 by amessah           #+#    #+#              #
#    Updated: 2021/11/18 16:47:52 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

src =	ft_printf.c \
		ft_printf_function.c \
		
objects = $(src:.o=.c)
