/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:37:36 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/16 15:37:43 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
		unsigned char *s;
		unsigned char *d;
		s = (unsigned char *)src;
		d = (unsigned char *)dest;
		size_t i;
				i = -1;
		if (d > s)
				while (n-- >= 0)
						d[n] = s[n];
		else
				while (++i <= n)
						d[i] = s[i];
		return (dest);
}
