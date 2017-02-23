/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:33:14 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:10:59 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		s;
	size_t	c;

	s = ft_strlen(dest);
	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[s] = src[c];
		s++;
		c++;
	}
	dest[s] = '\0';
	return (dest);
}
