/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:09:49 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/08 11:09:53 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t i;
  i = 0;
  unsigned char *d;
  unsigned char *s;
  d = (unsigned char *)dest;
  s = (unsigned char *)src;
  while (i < n)
  {
    d[i] = s[i];
    i++;
  }
  return (dest);
}
