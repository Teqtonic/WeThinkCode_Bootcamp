/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:52:55 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/26 19:29:31 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new_array;

	i = 0;
	new_array = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		new_array[i] = (*f)(tab[i]);
		i++;
	}
	return (new_array);
}
