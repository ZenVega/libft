/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:34:27 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/15 16:31:30 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

typedef struct s_list
{
		void *content;
		struct s_list *next;
} t_list;

void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

#endif