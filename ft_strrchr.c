/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:08:53 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/11 14:09:00 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int len;
	len = (int)ft_strlen((char *)s);
	while (len >= 0)
	{
		if (s[len - 1] == (unsigned char)c)
			return ((char *)&s[len - 1]);
		len--;
	}
	return (NULL);
}

