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
# include <stdlib.h>

static int	get_element_count(char const *s, char c)
{
		int	i;
		int	count;
		i = 0;
		count = 0;
		while (s[i++])
		{
				if (s[i] == c)
						count++;
		}
		return (count + 1);
}

static int	get_str_len(char const *s, char c)
{
		int	i;
		i = 0;
		while (s[i] && s[i] != c)
				i++;
		printf("len: %d\n", i);
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
				len = get_str_len(s, c);
				arr[i++] = get_str(s, len);
				s += len + 1;
		}
		arr[i] = NULL;
		return (arr);
}
