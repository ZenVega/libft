# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 11:30:10 by uschmidt          #+#    #+#              #
#    Updated: 2024/11/05 17:16:59 by uschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = \
ft_isalpha.c\
ft_isdigit.c\
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

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean:	clean 
	rm -f $(NAME)

re: fclean all

test:
	cc -c testfile.c -o testfile.o
	cc -o testfile testfile.o -L. -l ft
	./testfile

.PHONY: all clean fclean re
