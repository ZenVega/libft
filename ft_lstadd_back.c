/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:57:43 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/18 16:44:43 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
		if (!new)
				return;
		if (!*lst)
		{
				*lst = new;
				return;
		}
		t_list	*tmp;
		if (!*lst && !new)
				return;
		tmp = ft_lstlast(*lst);
		tmp->next = new;
}
