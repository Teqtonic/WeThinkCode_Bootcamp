/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 15:30:40 by exam              #+#    #+#             */
/*   Updated: 2018/03/02 15:56:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	int		div;
	int		i;
	int array[10];

	i = 7;
	div = octet;
	while (i >= 0)
	{
		array[i] = div % 2;
		div /= 2;
		i--;
	}
	return (array);
}

int		main(void)
{
	int i;
	unsigned char c;

	c = '8';
	i = 0;
	w = swap_bits(c);
	while (i < 8)
	{
		printf("%c", w);
		i++;
	}
	return (0);
}
