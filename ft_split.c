/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:48:10 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/18 19:35:34 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_element_count(char const *s, char c)
{
	int	i;
	int	count;
	int	breaker;

	i = 0;
	count = 0;
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
	while (i >= 0)
		free(arr[i--]);
	free(arr);
}

typedef struct s_split
{
	char	**arr;
	int		count;
	int		i;
	int		len;
}	t_split;

char	**ft_split(char const *s, char c)
{
	t_split	so;

	so.count = get_element_count(s, c);
	so.arr = (char **)malloc(sizeof(char *) * (so.count + 1));
	if (!so.arr)
		return (NULL);
	so.i = 0;
	while (so.i < so.count)
	{
		while (*s == c)
			s++;
		so.len = get_str_len(s, c);
		if (so.len)
			so.arr[so.i++] = get_str(s, so.len);
		if (so.arr[so.i - 1] == NULL)
		{
			free_all((so.i - 1), so.arr);
			return (NULL);
		}
		s += so.len;
	}
	so.arr[so.i] = NULL;
	return (so.arr);
}
