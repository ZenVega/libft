/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:57:02 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/16 13:49:03 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
		if (new && *lst)
		{
				new->next = *lst;
				*lst = new;
		}
}
