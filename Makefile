# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 13:40:24 by ccosta-c          #+#    #+#              #
#    Updated: 2022/11/14 12:16:56 by ccosta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c

OBJS := $(SRC:.c=.o)

COMPILER = gcc

FLAGS = -Wall -Wextra -Werror -static

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) a.out 
#remove a.out before delivering
	
re: fclean all

run: fclean all
	$(COMPILER) $(FLAGS)  main.c libft.a -lbsd
	./a.out