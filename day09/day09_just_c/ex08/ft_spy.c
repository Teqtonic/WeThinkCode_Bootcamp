/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 23:04:55 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/22 23:58:09 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*make_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
		i++;
	}
	return (str);
}

int		str_compare(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	return (*--s1 - *--s2);
}

void	is_present(char *str)
{
	char	*attack;
	char	*powers;
	char	*president;
	int		i;
	int		j;

	i = 0;
	j = 0;
	attack = "attack";
	powers = "powers";
	president = "president";
	if (str_compare(str, attack) == 0)
		write(1, "Alert!!!\n", 9);
	if (str_compare(str, powers) == 0)
		write(1, "Alert!!!\n", 9);
	if (str_compare(str, president) == 0)
		write(1, "Alert!!!\n", 9);
}

int		main(int argc, char **argv)
{
	char	string[1000];
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] != ' ')
			{
				string[k] = argv[i][j];
				k++;
			}
			j++;
		}
		string[j] = '\0';
		make_lowercase(string);
		is_present(string);
		i++;
	}
	return (0);
}
