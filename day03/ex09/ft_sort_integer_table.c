/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 21:06:50 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/16 10:42:52 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int		main(void)
{
	int k;
	int array[7];
	int length;

	k = 0;
	length = 7;
	array[0] = 265;
	array[1] = 976;
	array[2] = 25;
	array[3] = 79;
	array[4] = 1;
	array[5] = 0;
	array[6] = 3688;
	ft_sort_integer_table(array, length);
	printf("Numbers are arranged:\n");
	while (k < length)
	{
		printf("%i\n", array[k]);
		k++;
	}
}
