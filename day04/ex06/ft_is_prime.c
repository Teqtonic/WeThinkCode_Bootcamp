/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 13:51:32 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/17 19:39:01 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb)
{
	int i;
	int flag;

	i = 2;
	flag = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if ((nb % i) == 0)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 0)
		return (1);
	else
		return (0);
}

int		main(void)
{
	int num;
	int j;

	j = 0;
	num = 100;
	while (j <= num)
	{
		printf("%i is %i\n", j, ft_is_prime(j));
		j++;
	}
	return (0);
}
