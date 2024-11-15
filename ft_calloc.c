/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:29:52 by username          #+#    #+#             */
/*   Updated: 2024/11/14 16:14:43 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
		size_t	i;
		void	*ptr;
		int		test;
		i = 0;
		test = nmemb * size;
		if (test/size != nmemb)
				return (NULL);
		if (nmemb == 0 || size == 0)
		{
				ptr = malloc(1);
						return (ptr);
		}
		ptr = (void *)malloc(nmemb * size);
		if (!ptr)
				return (NULL);
		return (ft_memset(ptr, 0, nmemb * size));
}
