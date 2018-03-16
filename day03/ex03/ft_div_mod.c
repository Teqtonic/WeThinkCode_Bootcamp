/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:22:51 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/17 14:07:22 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int x;
	int y;
	int a;
	int b;

	x = 5;
	y = 3;
	ft_div_mod(x, y, &a, &b);
	printf("x = %i and y = %i\n", x, y);
	printf("div = %i and mod = %i\n", a, b);
}
