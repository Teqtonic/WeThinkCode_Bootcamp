/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 13:11:57 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/21 16:57:01 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;

	i = 0;
	if (min >= max)
		return (0);
	array = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

int		main(void)
{
	int a = 3;
	int b = 6;
	int *array2 = ft_range(a, b);
	printf("%i\n", array2[0]);
	printf("%i\n", array2[1]);
	printf("%i\n", array2[2]);
	return (0);
}
