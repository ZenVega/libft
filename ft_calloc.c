/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:29:52 by username          #+#    #+#             */
/*   Updated: 2024/11/14 15:57:23 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
		size_t i;
		i = 0;
		if ((int)nmemb * (int)size < 0)
				return (NULL);
		int	*ptr;
		if (nmemb == 0 || size == 0)
		{
				ptr = (int *)malloc(sizeof(int));
						return ((void *)ptr);
		}
		ptr = (int *)malloc(nmemb * size);
		if (!ptr)
				return (NULL);
		return (ft_memset(ptr, 0, nmemb * size));
}
