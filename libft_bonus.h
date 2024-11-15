/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:34:27 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/15 14:44:28 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

typedef struct s_list
{
		void *content;
		struct s_list *next;
} t_list;

t_list	*ft_lstnew(void *content);

#endif
