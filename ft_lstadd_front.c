/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:57:02 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/18 16:58:55 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
		if (!new)
				return;
		if (!*lst)
		{
				*lst = new;
				return;
		}
		new->next = *lst;
		*lst = new;
}
