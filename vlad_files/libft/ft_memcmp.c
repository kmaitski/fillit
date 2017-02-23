/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:54:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:03:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*char_str1;
	unsigned char	*char_str2;

	if (!str1 || !str2)
		return (0);
	char_str1 = (unsigned char *)str1;
	char_str2 = (unsigned char *)str2;
	while (n--)
	{
		if (*char_str1 != *char_str2)
			return (*char_str1 - *char_str2);
		char_str1++;
		char_str2++;
	}
	return (0);
}
