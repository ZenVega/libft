/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:48:10 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/13 17:16:08 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
#include <stdlib.h>

static int	get_element_count(char const *s, char c)
{
		int	i;
		int	count;
		i = 0;
		count = 0;
		int	breaker;
		breaker = 1;
		while (s[i])
		{
				if (s[i] != c && breaker)
				{
						count++;
						breaker = 0;
				}
				else if (s[i] == c)
						breaker = 1;
				i++;
		}
		return (count);
}

static int	get_str_len(char const *s, char c)
{
		int	i;
		i = 0;
		while (s[i] && s[i] != c)
				i++;
		return (i);
}


static char	*get_str(char const *s, int l)
{
		int		j;
		char	*buffer;
		buffer = (char *)malloc(sizeof(char) * (l + 1));
		if (!buffer)
				return (NULL);
		j = 0;
		while (j < l)
		{
				buffer[j] = s[j];
				j++;
		}
		buffer[j] = '\0';
		return (buffer);
}

void	free_all(int i, char **arr)
{
		while ( i >= 0)
				free(arr[i--]);
		free(arr);
}

char	**ft_split(char const *s, char c)
{
		char	**arr;
		int		count;
		int		i;
		int		len;
		count = get_element_count(s,c);
		arr = (char **)malloc(sizeof(char *) * (count + 1));
		if (!arr)
				return (NULL);
		i = 0;
		while (i < count)
		{
				while(*s == c)
						s++;
				len = get_str_len(s, c);
				if (len)
						arr[i++] = get_str(s, len);
				if (arr[i-1] == NULL)
				{
						free_all((i - 1), arr);
						return (NULL);
				}
				s += len;
		}
		arr[i] = NULL;
		return (arr);
}