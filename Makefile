# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 13:40:24 by ccosta-c          #+#    #+#              #
#    Updated: 2022/11/18 16:40:41 by ccosta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c

OBJS := $(SRC:.c=.o)

BOBJS := $(BONUS:.c=.o)

COMPILER = cc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

bonus: $(OBJS) $(BOBJS) 
	ar rcs $(NAME) $(OBJS) $(BOBJS) 

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME) a.out
#remove a.out before delivering
	
re: fclean all

run: fclean all
	$(COMPILER) $(FLAGS) -static main.c libft.a -lbsd
	./a.out
#delete run before delivering

runbonus: fclean bonus
	$(COMPILER) $(FLAGS) -static main.c libft.a -lbsd
	./a.out
#delete runbonus before delivering
	
so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BOBJS)
#delete so before delivering

.PHONY: all bonus clean fclean re run runbonus so