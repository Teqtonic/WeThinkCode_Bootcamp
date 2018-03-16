/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 11:14:05 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/17 11:39:44 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb >= 2)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}

int		main(void)
{
	printf("Fac recursion is = %i\n", ft_recursive_factorial(12));
	return (0);
}
