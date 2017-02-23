/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 18:20:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:34:25 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_str_len(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		count++;
	while (n /= 10)
		count++;
	return (count);
}

char		*ft_itoa(int n)
{
	size_t	n_length;
	char	*new;

	n_length = int_str_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(new = ft_strnew(n_length)))
		return (NULL);
	if (n < 0)
	{
		new[0] = '-';
		n = n * -1;
	}
	n_length--;
	new[n_length] = n % 10 + '0';
	while (n /= 10)
	{
		n_length--;
		new[n_length] = n % 10 + '0';
	}
	return (new);
}
