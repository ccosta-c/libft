# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 13:40:24 by ccosta-c          #+#    #+#              #
#    Updated: 2022/11/10 12:53:08 by ccosta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c ft_memmove.c main.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c

FLAGS = -Wall -Wextra -Werror -o

OBJS := $(SRC:.c=.o)

COMPILER = cc

all: $(NAME)

$(NAME):
	$(COMPILER) $(FLAGS) $(NAME) $(SRC) -lbsd

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

rre: fclean all
	./$(NAME)

## stuff for the tester

cfile:
	cc -Wall -Wextra -Werror -c ${SRC} main.c

ofile:
	cc -Wall -Wextra -Werror -o a.out ${OBJS} main.o

so:
	cc -nostartfiles -Wall -Wextra -Werror -fPIC $(SRC)
	cc -nostartfiles -shared -o libft.so $(OBJS)
	ar -cr libft.a *.o

## make cfile >> make ofile >> make so