/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 18:47:58 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/15 19:25:24 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int		main(void)
{
	int num1;
	int num2;

	num1 = 6;
	num2 = 3;
	printf("num1 = %i and num2 = %i\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("div = %i and mod = %i\n", num1, num2);
	return (0);
}
