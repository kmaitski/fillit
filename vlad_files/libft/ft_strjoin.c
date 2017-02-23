/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 19:07:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/10 11:50:14 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		x;
	int		y;

	if (!s1 || !s2)
		return (0);
	fresh = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (fresh == NULL)
		return (0);
	x = 0;
	y = 0;
	while (s1[x] != '\0')
	{
		fresh[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		fresh[x] = s2[y];
		x++;
		y++;
	}
	fresh[x] = '\0';
	return (fresh);
}
