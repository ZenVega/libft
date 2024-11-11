/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:22:38 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/11 10:22:39 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = 0;
    size_t src_len = 0;
    size_t i = 0;

    while (dst[dst_len] && dst_len < size) 
        dst_len++;

    while (src[src_len])  
        src_len++;

    if (size <= dst_len)
        return size + src_len;

    while (src[i] && dst_len + i < size - 1) {
        dst[dst_len + i] = src[i];
        i++;
    }

    if (dst_len + i < size)
        dst[dst_len + i] = '\0';

    return dst_len + src_len;
}

