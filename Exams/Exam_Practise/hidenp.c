/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 16:24:18 by exam              #+#    #+#             */
/*   Updated: 2018/03/02 17:03:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

int		hidenp(char *s1, char *s2)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s2[i] != '\0')
	{
		if (s1[j] == s2[i])
		{
			if (j == ft_strlen(s1) - 1)
			{
				return (1);
			}
			j++;
			i++;
		}
		else
			i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (ft_strlen(argv[1]) < 1)
			write(1, "1\n", 2);
		else if (hidenp(argv[1], argv[2]) == 1)
			write(1, "1\n", 2);
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "\n", 1);
	return (0);
}
