/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:32:34 by exam              #+#    #+#             */
/*   Updated: 2018/02/23 17:05:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(int argc, char *argv[])
{
	char	small_a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int		numbers[14] = {25,23,21,19,17,15,13,11,9,7,5,3,1,0};
	int		numbers2[13] = {1,3,5,7,9,11,13,15,17,19,21,13,15};
	int		i;
	int		j;
	char	mirror[200];
	int		index[200];

	i = 0;
	j = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			index[i] = ((argv[1][i] - 'a') % 26);
		if (index[i] <= 13)
			mirror[i] = small_a[index[i] + numbers[index[i]]];
		if (index[i] > 13)
			mirror[i] = small_a[index[i] - numbers2[index[i]]];
		i++;
	}
	mirror[i] = '\0';
	i = 0;
	while (mirror[i] != '\0')
	{
		printf("%i ", index[i]);
		printf("%c\n", mirror[i]);
		i++;
	}
	return (0);
}
