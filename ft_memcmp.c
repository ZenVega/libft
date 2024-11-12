/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:00:52 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/12 14:40:04 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	unsigned char	*src_1;
	unsigned char	*src_2;
	size_t		i;
	src_1 = (unsigned char *)s1;
	src_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (src_1[i] != src_2[i])
			return (src_1[i] - src_2[i]);
		i++;
	}
	return (0);
}
