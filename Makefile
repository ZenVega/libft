# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 11:30:10 by uschmidt          #+#    #+#              #
#    Updated: 2024/11/13 12:43:16 by username         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = \
ft_atoi.c\
ft_bzero.c\
ft_calloc.c\
ft_isalpha.c\
ft_isalnum.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memchr.c\
ft_memcpy.c\
ft_memcmp.c\
ft_memmove.c\
ft_memset.c\
ft_strdup.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_strlen.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_strnstr.c\
ft_substr.c\
ft_tolower.c\
ft_toupper.c\

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

test: $(NAME) unity_test.c 
	cc -c unity_test.c -o testfile.o
	cc -o testfile unity_test.c ../Unity/src/unity.c -L. -lft
	./testfile

.PHONY: all clean fclean re
