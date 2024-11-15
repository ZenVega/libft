/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:45:35 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/15 16:15:34 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
		int	i;
		t_list	*tmp;
		if(lst)
		{
				tmp = lst;
				i = 1;
				while (tmp->next)
				{
						tmp = tmp->next;
						i++;
				}
				return (i);
		}
		return (0);
}
