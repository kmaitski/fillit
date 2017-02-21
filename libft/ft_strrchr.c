/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 12:46:09 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:14:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	l;

	l = ft_strlen(str);
	while (l && str[l] != c)
		l--;
	if (str[l] == c)
		return ((char *)&str[l]);
	return (NULL);
}
