/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 10:08:37 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/23 10:49:54 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int match;

	i = 0;
	j = 0;
	match = 0;
	while (i < length)
	{
		while (j < length)
		{
			if (tab[i] == tab[j])
				match++;
			j++;
		}
		if (match != 2)
			return (tab[i]);
		j = 0;
		match = 0;
		i++;
	}
	return (0);
}

int		main(void)
{
	int array[] = {1, 1, 2, 3, 4, 3, 4};
	printf("%i\n", ft_unmatch(array, 7));

	int array1[] = {2, 1, 2, 3, 4, 3, 4};
	printf("%i\n", ft_unmatch(array1, 7));

	int array2[] = {1, 1, 2, 2, 4, 3, 4};
	printf("%i\n", ft_unmatch(array2, 7));

	int array3[] = {1, 1, 2, 3, 2, 3, 4, 3, 4};
	printf("%i\n", ft_unmatch(array3, 9));
	return (0);
}
