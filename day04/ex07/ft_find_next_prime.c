/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 16:34:17 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/17 19:31:36 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_find_next_prime(int nb)
{
	int i;
	int flag;

	i = 2;
	flag = 0;
	if (nb <= 1)
		return (0);
	while (i <= (nb - 1))
	{
		if ((nb % i) == 0)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 0)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

int		main(void)
{
	int num;

	num = 12;
	printf("Next prime = %i\n", ft_find_next_prime(num));
	return (0);
}
