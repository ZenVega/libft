/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:13:44 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/16 13:49:35 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list	*ft_lstnew(void *content)
{
		t_list	*newlist;
		newlist = (t_list *)malloc(sizeof(t_list));
		if(!newlist)
				return (NULL);
		newlist->content = content;
		newlist->next = NULL;
		return (newlist);
}
