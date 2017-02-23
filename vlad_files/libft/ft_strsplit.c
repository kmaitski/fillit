/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 15:54:57 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 20:10:10 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	int	x;
	int	w;

	x = 0;
	w = 0;
	while (s[x] != '\0')
	{
		if ((s[x] != c && s[x + 1] == c) || (s[x + 1] == '\0' && s[x] != c))
			w++;
		x++;
	}
	return (w);
}

static size_t	word_length(char const *s, char c)
{
	int	x;

	x = 0;
	while (s[x] != '\0' && s[x] != c)
		x++;
	return (x);
}

static char		**populate_2d(char const *s, char **arr, char c)
{
	size_t	x;
	size_t	l;
	size_t	w;

	x = 0;
	w = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			x++;
		else
		{
			l = word_length(&s[x], c);
			if (!(arr[w] = ft_strsub(s, x, l)))
				return (NULL);
			x = x + l;
			w++;
		}
	}
	arr[w] = NULL;
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	x;
	char	**fresh;

	if (!s || !c)
		return (NULL);
	x = word_count(s, c);
	if (!(fresh = (char **)malloc(sizeof(char*) * (x + 1))))
		return (NULL);
	populate_2d(s, fresh, c);
	return (fresh);
}
