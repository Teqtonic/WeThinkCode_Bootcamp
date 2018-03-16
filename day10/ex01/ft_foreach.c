/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:50:30 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/27 16:34:02 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int*))
{
	int i;

	i = 0;
	while (i < length)
	{
		(*f)(&tab[i]);
		i++;
	}
}

void	ft_putnbr(int *num)
{
	*num += 1;
}

int		main(void)
{
	int i;

	i = 0;
	int	array[] = {13, 4, 5, 6};

	ft_foreach(array, 4, &ft_putnbr);
	while (i < 4)
	{
		printf("%i\n", array[i]);
		i++;
	}
	return (0);
}
