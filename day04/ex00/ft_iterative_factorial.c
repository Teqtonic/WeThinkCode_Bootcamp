/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 10:58:03 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/17 11:40:35 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int fac;

	i = 1;
	fac = nb;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	if (nb >= 2)
	{
		while (nb > 1)
		{
			fac = fac * (--nb);
		}
		return (fac);
	}
	else
	{
		return (1);
	}
}

int		main(void)
{
	printf("Fac is = %i\n", ft_iterative_factorial(13));
	return (0);
}
