/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:38:19 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/13 15:47:52 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_and_init(char const *s, int start, int end)
{
		char	*trimmed;
		int 	i;
		i = 0;
		trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!trimmed)
				return (NULL);
		while (start < end)
				trimmed[i++] = s[start++];
		trimmed[i] = '\0';
		return (trimmed);
}

static int	find_start(char const *s, char const *set)
{
		int	i;
		int	start;
		i = 0;
		start = 0;
		while (set[i])
		{
				if (set[i] == s[start])
				{
						start++;
						i = 0;
				}
				else
						i++;
		}
		return (start);
}

static int	find_end(char const *s, char const *set)
{
		int	i;
		int	end;
		i = 0;
		end = ft_strlen(s);
		while (set[i])
		{
				if (set[i] == s[end - 1])
				{
						end--;
						i = 0;
				}
				else
						i++;
		}
		return (end);
}
char	*ft_strtrim(char const *s1, char const *set)
{
		int		start;
		int		end;
		start = find_start(s1, set);
		end = find_end(s1, set);
		return (allocate_and_init(s1, start, end));
}
