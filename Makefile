# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 16:54:26 by amessah           #+#    #+#              #
#    Updated: 2021/11/17 15:09:03 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =   ft_memset.c     \
		ft_bzero.c      \
		ft_memcpy.c     \
		ft_memmove.c    \
		ft_strlen.c     \
		ft_isalpha.c    \
		ft_isdigit.c    \
		ft_isalnum.c    \
		ft_isascii.c    \
		ft_isprint.c    \
		ft_toupper.c    \
		ft_tolower.c    \
		ft_strchr.c     \
		ft_strrchr.c    \
		ft_strncmp.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c 	\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_strmapi.c 	\
		ft_itoa.c		\
		ft_split.c		\
		ft_striteri.c	\
		
BNS_SRCS = ft_lstnew.c \
			  ft_lstadd_front.c \
			  ft_lstsize.c \
			  ft_lstlast.c \
			  ft_lstadd_back.c \
			  ft_lstdelone.c \
			  ft_lstclear.c \
			  ft_lstiter.c \
			  ft_lstmap.c \
			  
BNS_OBJS = $(BNS_SRCS:.c=.o)

OBJECTS = $(SRC:.c=.o)

INCLUDES = libft.h \

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)

bonus: $(NAME) $(BNS_OBJS)
	ar rc $(NAME) $(BNS_OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<
	
clean:
	rm -rf $(OBJECTS) $(BNS_OBJS)

fclean: clean
	rm -rf $(NAME) $(BNS_OBJS)

re: fclean all
