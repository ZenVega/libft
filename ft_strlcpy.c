/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:35:50 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/11 09:35:52 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t     ft_strlcpy(char *dst, const char *src, size_t size)
{
  int     len;
  len = ft_strlen((char *)src);
  if (size <= 0)
    return (len);
  
  size_t i;
  i = 0;
  while (i < size - 1 && src[i])
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';

  return ((size_t)len);
}
