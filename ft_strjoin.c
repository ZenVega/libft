/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:03:49 by username          #+#    #+#             */
/*   Updated: 2024/11/13 13:22:11 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
		size_t	len;
		int		i;
		int		j;
		char	*str_joined;
		len = ft_strlen(s1) + ft_strlen(s2);
		str_joined = (char *)malloc(sizeof(char) * (len + 1));
		if (!str_joined)
				return (NULL);
		i = 0;
		while (s1[i])
		{
				str_joined[i] = s1[i];
				i++;
		}
		j = i;
		i = 0;
		while (s2[i])
				str_joined[j++] = s2[i++];
		str_joined[j] = '\0';
		return (str_joined);
}
