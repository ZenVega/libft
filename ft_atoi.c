/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:31:03 by username          #+#    #+#             */
/*   Updated: 2024/11/13 10:24:47 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
		int	neg;
		int	result;
		neg = 1;
		result = 0;
		if (!ft_strncmp((unsigned char *)"-2147483648", (unsigned char *)nptr, 11))
				return (-2147483648);
		while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n'
						|| *nptr == '\r' || *nptr == '\t' || *nptr == '\v')
				nptr++;
		if (*nptr == '-' || *nptr == '+')
		{
				if (*nptr == '-')
						neg = -1;
				nptr++;
		}
		while (*nptr >= '0' && *nptr <= '9')
		{
				result = result * 10 + *nptr - '0';
				nptr++;
		}

		return (result * neg);
}
