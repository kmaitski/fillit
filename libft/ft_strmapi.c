/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:23:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/10 11:49:32 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*new;

	x = 0;
	if (!s || !f)
		return (0);
	new = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (new == NULL)
		return (0);
	while (s[x] != '\0')
	{
		new[x] = f(x, s[x]);
		x++;
	}
	new[x] = '\0';
	return (new);
}
