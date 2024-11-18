# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 11:30:10 by uschmidt          #+#    #+#              #
#    Updated: 2024/11/18 16:35:29 by uschmidt         ###   ########.fr        #
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
ft_putendl_fd.c\
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
ft_lstadd_back.c\
ft_lstadd_front.c\
ft_lstclear.c\
ft_lstdelone.c\
ft_lstiter.c\
ft_lstnew.c\
ft_lstlast.c\
ft_lstmap.c\
ft_lstsize.c\

OFILES_BONUS = $(CFILES_BONUS:.c=.o)

DEPS = libft.h

CC = cc

CFLAGS = -Wall -Wextra -Werror -fsanitize=leak

NAME = libft.a

all: $(NAME) 

$(NAME): $(OFILES) 
	ar rcs $(NAME) $(OFILES)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

%_bonus.o: %_bonus.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(OFILES_BONUS) $(OFILES_BONUS)
	ar rcs $(NAME) $(OFILES) $(OFILES_BONUS)

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
