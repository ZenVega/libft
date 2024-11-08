/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:13:32 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/08 10:13:35 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memset(void *s, int c, size_t n)
{
  size_t i;
  i = 0;
  unsigned char *dest =(unsigned char *)s;

  while (i < n)
    dest[i++] = (unsigned char)c;
  return s;
}
