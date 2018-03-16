/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 20:49:47 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/15 21:06:15 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int j;

	j = 0;
	while (*str != '\0')
	{
		j = j * 10 + *str - '0';
		str++;
	}
	return (j);
}

int		main(void)
{
	char *string;

	string = "9999";
	printf("The string in integers = %i\n", ft_atoi(string));
	return (0);
}
