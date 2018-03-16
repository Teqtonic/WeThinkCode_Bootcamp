/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 21:16:55 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/22 21:32:30 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (factory[a])
	{
		while (factory[a][b])
		{
			free(factory[a][b]);
			b++;
		}
		free(factory[a]);
		b = 0;
		a++;
	}
	free(factory);
}
