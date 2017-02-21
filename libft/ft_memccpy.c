/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:49:34 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 14:54:33 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		index;
	char		*char_dest;
	const char	*char_src;

	index = 0;
	char_dest = dest;
	char_src = src;
	if (dest == src)
		return (dest);
	while (n-- && dest && src)
	{
		char_dest[index] = char_src[index];
		if (char_dest[index] == c)
			return (&char_dest[++index]);
		index++;
	}
	return (NULL);
}
