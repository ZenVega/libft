/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:08:03 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/16 15:43:48 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
		if (!lst || !f)
				return;
		while (lst)
		{
				f(lst->content);
				lst = lst->next;
		}
}
