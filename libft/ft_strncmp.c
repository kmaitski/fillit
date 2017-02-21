/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:34:23 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/03 13:14:21 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (0);
	while (c < n && c <= ft_strlen(str1) && c <= ft_strlen(str2))
	{
		if (str1[c] != str2[c])
			return ((unsigned char)str1[c] - (unsigned char)str2[c]);
		c++;
	}
	c--;
	return ((unsigned char)str1[c] - (unsigned char)str2[c]);
}
