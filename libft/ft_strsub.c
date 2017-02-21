/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:27:54 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/10 11:49:01 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	x;

	if (!s)
		return (NULL);
	new = (char *)malloc(len + 1);
	if (new == NULL)
		return (0);
	x = 0;
	while (x < len)
	{
		new[x] = s[start];
		x++;
		start++;
	}
	new[x] = '\0';
	return (new);
}
