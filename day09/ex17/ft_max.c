/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 08:02:47 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/23 08:12:32 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_max(int *tab, int length)
{
	int j;
	int i;

	j = 1;
	i = tab[0];
	while (j < length)
	{
		if (i < tab[j])
			i = tab[j];
		j++;
	}
	return (i);
}

int		main(void)
{
	int array[] = {1, 3, 56, 2, 67, 45, 89};
	printf("%i\n", ft_max(array, 7));
	return (0);
}
