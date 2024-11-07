# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 11:30:10 by uschmidt          #+#    #+#              #
#    Updated: 2024/11/07 11:14:10 by uschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = \
ft_isalpha.c\
ft_isalnum.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memset.c\
ft_strlen.c\
ft_strcmp.c\
ft_substr.c

OFILES = $(CFILES:.c=.o) 

DEPS = libft.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME) 

$(NAME): $(OFILES) 
	ar rcs $(NAME) $(OFILES)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:	clean 
	rm -f $(NAME)

re: fclean all

test: $(NAME) unity_test.c libft.a
	cc -c unity_test.c -o testfile.o
	cc -o testfile unity_test.c ../Unity/src/unity.c -L. -lft
	./testfile

.PHONY: all clean fclean re
