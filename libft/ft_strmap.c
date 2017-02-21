/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:46:18 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/10 11:49:51 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		x;

	x = 0;
	if (s == NULL || f == NULL)
		return (0);
	new = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (new == NULL)
		return (0);
	while (s[x] != '\0')
	{
		new[x] = f(s[x]);
		x++;
	}
	new[x] = '\0';
	return (new);
}
