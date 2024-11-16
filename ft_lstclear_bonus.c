/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:27:17 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/16 14:39:22 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
		t_list	*tmp;

		if (!lst || !del)
				return;
		while (*lst)
		{
				tmp = *lst;
				*lst = tmp->next;
				del(tmp->content);
				free(tmp);
		}
		*lst = NULL;
}
