/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:38:37 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/19 10:38:40 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clean_all(t_list *lst, void (*del)(void *))
{
	t_list	*buffer;

	while (lst)
	{
		if (lst->next)
		{
			buffer = lst->next;
			ft_lstdelone(lst, del);
		}
		lst = buffer;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*list_buffer;

	if (!lst || !f || !del)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	list_buffer = new_list;
	while (lst)
	{
		lst = lst->next;
		if (!lst)
			break ;
		list_buffer->next = ft_lstnew(f(lst->content));
		if (!list_buffer->next)
			clean_all(new_list, del);
		list_buffer = list_buffer->next;
	}
	return (new_list);
}
