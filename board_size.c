/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:22:56 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/22 16:11:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	get_board_size(int pieces)
{
	int	board_size;

	board_size = 2;
	while (board_size * board_size < pieces * 4)
		board_size++;
	return (board_size);
}
