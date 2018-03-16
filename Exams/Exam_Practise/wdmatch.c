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

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

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
			write(1, "\n", 1);
		else if (hidenp(argv[1], argv[2]) == 1)
		{
			ft_putstr(argv[1]);
			write(1, "\n", 1);
		}
		else
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
