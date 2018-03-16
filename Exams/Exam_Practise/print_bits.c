/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 17:19:42 by exam              #+#    #+#             */
/*   Updated: 2018/02/23 18:27:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;
	int		j;
	int		div;
	int		array[300];

	j = 0;
	i = 0;
	div = octet;
	while (div != 0)
	{
		array[i] = (div % 2);
		div /= 2;
		j++;
		i++;
	}
	i = 0;
	while (i < (8 - j))
	{
		write(1, "0", 1);
		i++;
	}
	while (j > 0)
	{
		if (array[j - 1] == 0)
			write(1, "0", 1);
		if (array[j - 1] == 1)
			write(1, "1", 1);
		j--;
	}
}
