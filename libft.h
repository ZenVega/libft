/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:53:04 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/05 17:16:09 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
	#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

void bzero(void *s, size_t n);
int	ft_isalpha(unsigned char c);
int	ft_isalnum(unsigned char c);
int	ft_isdigit(unsigned char c);
int	ft_isascii(unsigned char c);
int	ft_isprint(unsigned char c);
void  *ft_memset(void *s, int c, size_t n);
int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
