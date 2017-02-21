/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:56:14 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:05:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	s;

	s = ft_strlen(dest);
	while (*src)
	{
		dest[s] = *src;
		src++;
		s++;
	}
	dest[s] = '\0';
	return (dest);
}
