/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:57:43 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/15 17:56:41 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
		t_list	*tmp;
		if (!*lst && !new)
				return;
		tmp = ft_lstlast(*lst);
		tmp->next = new;
}
