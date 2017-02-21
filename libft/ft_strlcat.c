/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:46:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:11:38 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	int	c;
	size_t	dl;
	size_t	sl;
	int	a;

	c = 0;
	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	a = n - dl - 1;
	if (a < 0)
		return (sl + n);
	while (*dest)
		dest++;
	while (src[c] != '\0' && c < a)
	{
		*dest = src[c];
		c++;
		dest++;
	}
	*dest = '\0';
	return (sl + dl);
}
