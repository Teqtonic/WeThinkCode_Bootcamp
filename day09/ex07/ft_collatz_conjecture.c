/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 22:04:43 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/22 22:50:03 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if ((base % 2) == 0)
			return (1 + ft_collatz_conjecture(base / 2));
		else
			return (1 + ft_collatz_conjecture(3 * base + 1));
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	argc = 0;
	ft_collatz_conjecture(atoi(argv[1]));
	return (0);
}
