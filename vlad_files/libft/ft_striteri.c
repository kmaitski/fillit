/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:03:15 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:30:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	x;

	x = 0;
	if (s != NULL && f != NULL)
	{
		while (*s != '\0')
		{
			f(x, s);
			x++;
			s++;
		}
	}
}
