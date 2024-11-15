# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 11:30:10 by uschmidt          #+#    #+#              #
#    Updated: 2024/11/15 12:46:27 by uschmidt         ###   ########.fr        #
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
ft_itoa.c\
ft_memchr.c\
ft_memcpy.c\
ft_memcmp.c\
ft_memmove.c\
ft_memset.c\
ft_putchar_fd.c\
ft_putnbr_fd.c\
ft_putstr_fd.c\
ft_split.c\
ft_strchr.c\
ft_strdup.c\
ft_striteri.c\
ft_strjoin.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_strlen.c\
ft_strmapi.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_strtrim.c\
ft_substr.c\
ft_tolower.c\
ft_toupper.c\

OFILES = $(CFILES:.c=.o)

DEPS = libft.h

CC = cc

CFLAGS = -Wall -Wextra -Werror -fsanitize=leak

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
	cc $(CFLAGS) -c unity_test.c -o testfile.o
	cc $(CFLAGS) -o testfile unity_test.c ../Unity/src/unity.c -L. -lft
	./testfile

.PHONY: all clean fclean re
