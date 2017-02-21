/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:36:13 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:16:57 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	is_negative;

	nbr = 0;
	is_negative = 1;
	if (!str)
		return (0);
	while (*str > 0 && *str < 33 && *str != '\e')
		str++;
	if (*str == '-')
		is_negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (is_negative * nbr);
}
