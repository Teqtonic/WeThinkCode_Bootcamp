/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:30:48 by exam              #+#    #+#             */
/*   Updated: 2018/02/23 18:51:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	count;

	i = 1;
	count = '0';
	j = 0;
	if(argc == 0)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
		return (0);
	}
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	write(1, &count, 1);
	write(1, "\n", 1);
	return (0);
}
