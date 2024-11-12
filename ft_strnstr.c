/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:36:57 by username          #+#    #+#             */
/*   Updated: 2024/11/12 15:18:36 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (little[0] == '\0')
		return ((char *)big);
	size_t i;
	size_t j;
	i = 0;
	while ( i < len && big[i] != '\0')
	{
		j = 0;
		while((i + j) < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
