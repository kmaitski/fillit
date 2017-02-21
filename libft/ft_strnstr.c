/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:18:53 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/03 13:15:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_needle_in_haystack(const char *haystack, const char *needle,
		size_t l, size_t len)
{
	size_t	c;

	c = 0;
	while (needle[c] != '\0' && haystack[c] == needle[c])
		c++;
	if (c == l && c <= len)
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	l;

	c = 0;
	l = ft_strlen(needle);
	if (needle[0] == '\0' || haystack == needle)
		return ((char *)haystack);
	while (haystack[c] != '\0' && c + l <= len)
	{
		if (haystack[c] == needle[0])
			if (is_needle_in_haystack(&haystack[c], needle, l, len) == 1)
				return ((char *)&haystack[c]);
		c++;
	}
	return (NULL);
}
