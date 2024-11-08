/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:37:36 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/08 11:37:39 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
  unsigned char buffer[n];
  unsigned char *s;
  unsigned char *d;
  s = (unsigned char *)src;
  d = (unsigned char *)dest;
  size_t i;
  i = 0;

  while (i < n)
  {
    buffer[i] = s[i];
    i++;
  }
  i = 0;
  while (i < n)
  {
    d[i] = buffer[i];
    i++;
  }
  return (dest);
}
