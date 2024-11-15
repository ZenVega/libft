# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 11:30:10 by uschmidt          #+#    #+#              #
#    Updated: 2024/11/15 16:59:24 by uschmidt         ###   ########.fr        #
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

CFILES_BONUS = \
ft_lstadd_back_bonus.c\
ft_lstadd_front_bonus.c\
ft_lstnew_bonus.c\
ft_lstlast_bonus.c\
ft_lstsize_bonus.c\

OFILES_BONUS = $(CFILES_BONUS:.c=.o)

DEPS = libft.h

DEPS_BONUS = libft_bonus.h

CC = cc

CFLAGS = -Wall -Wextra -Werror -fsanitize=leak

NAME = libft.a

all: $(NAME) 

$(NAME): $(OFILES) 
	ar rcs $(NAME) $(OFILES)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

%_bonus.o: %_bonus.c $(DEPS_BONUS)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(OFILES_BONUS)
	ar rcs $(NAME) $(OFILES_BONUS) $(OFILES) 

clean:
	rm -f $(OFILES) $(OFILES_BONUS)

fclean:	clean 
	rm -f $(NAME)

re: fclean all

test: bonus unity_test.c 
	cc $(CFLAGS) -c unity_test.c -o testfile.o
	cc $(CFLAGS) -o testfile unity_test.c ../Unity/src/unity.c -L. -lft 
	./testfile

.PHONY: all clean fclean re bonus
