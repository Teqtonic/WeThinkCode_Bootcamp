/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:57:59 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/22 13:22:16 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		arglen(char *str)
{
	int length;
	int i;

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*arguments;
	int		i;
	int		j;
	int		k;
	int		memory;

	i = 1;
	k = 0;
	memory = 0;
	while (i < argc)
		memory = memory + arglen(argv[i++]);
	arguments = (char*)malloc(sizeof(char) * (memory + 1));
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			arguments[k++] = argv[i][j++];
		if (i == argc - 1)
			arguments[k++] = '\0';
		else
			arguments[k++] = '\n';
		i++;
	}
	return (arguments);
}
