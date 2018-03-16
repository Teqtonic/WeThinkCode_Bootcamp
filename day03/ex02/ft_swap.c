/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:09:10 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/15 17:21:51 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(void)
{
	int x = 1;
	int y = 3;

	printf("x = %i and y = %i\n", x, y);
	ft_swap(&x, &y);
	printf("x = %i and y = %i\n", x, y);
	return (0);
}
