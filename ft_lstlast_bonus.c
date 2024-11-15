/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:17:09 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/15 16:35:41 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft_bonus.h"
# include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
		t_list	*last;
		last = lst;
		if (!lst)
				return (NULL);
		while (last->next)
		{
				last = last->next;
		}
		return (last);
}