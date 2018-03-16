/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 16:06:55 by exam              #+#    #+#             */
/*   Updated: 2018/02/16 16:15:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{/*
	int		count;
	char	i;
	char	j;

	i = 'z';
	j = 'Y';
	count = 0;

	while (count <= 12)
	{
		write(1, &i, 1);
		write(1, &j, 1);
		i = i - 2;
		j = j - 2;
		count++;
	}
	write(1, "\n", 1);
	return (0);*/

	int		i;
	int		j;

	i = 'z';
	while (i >= 'a')
	{
		j = (i - ('a' - 'A'));
		(i % 2) ? write(1, &j, 1) : write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
	write(1, "\n", 1);

	i = 'a';
	while (i <= 'z')
	{
		j = (i - ('a' - 'A'));
		(i % 2) ? write(1, &j, 1) : write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
