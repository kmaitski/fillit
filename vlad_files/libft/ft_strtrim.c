/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 18:19:36 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 19:57:27 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_before(char const *s)
{
	size_t	x;

	x = 0;
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
		x++;
	return (x);
}

static	size_t	count_after(char const *s)
{
	int		length;
	size_t	x;

	x = 0;
	length = ft_strlen(s);
	if (length > 0)
	{
		length--;
		while ((s[length] == ' ' || s[length] == '\n' || s[length] == '\t')
				&& length > 0)
		{
			length--;
			x++;
		}
	}
	return (x);
}

char			*ft_strtrim(char const *s)
{
	size_t		length;
	char		*copy;
	size_t		x;
	size_t		z;

	if (!s)
		return (NULL);
	x = count_before(s);
	z = ft_strlen(s);
	if ((x + count_after(s)) >= z)
		length = 0;
	else
		length = ft_strlen(s) - x - count_after(s);
	if (!(copy = ft_strnew(length)))
		return (NULL);
	z = 0;
	while (z < length)
	{
		copy[z] = s[x];
		x++;
		z++;
	}
	return (copy);
}
