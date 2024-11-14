/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:21:55 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/14 13:04:08 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		unsigned int	i;
		unsigned int	len;
		char			*res;
		if (!s || !f)
				return (NULL);
		i = 0;
		len = (unsigned int)ft_strlen(s);
		res = (char *)malloc(sizeof(char) * (len + 1));
		if (!res)
				return (NULL);
		while (s[i])
		{
				res[i] = f(i,s[i]);
				i++;
		}
		res[i] = '\0';
		return (res);
}
