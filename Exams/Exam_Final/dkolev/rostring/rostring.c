/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 12:02:20 by exam              #+#    #+#             */
/*   Updated: 2018/03/10 13:06:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rostring(char *str)
{
	int		j;
	int		end;
	int		w;
	int		k;

	j = 0;
	k = 0;
	w = 0;
	end = 0;
	while (str[j] == ' ' || str[j] == '\t')
		j++;
	end = j;
	while (str[end] > 32 && str[end] < 127)
		end++;
	end--;
	w = end;
	w++;
	while (str[w] == ' ' || str[w] == '\t')
		w++;
	while (str[w] != '\0')
	{
		while (str[w] > 32 && str[w] < 127)
		{
			write(1, &str[w], 1);
			w++;
		}
		while (str[w] == ' ' || str[w] == '\t')
			w++;
		write(1, " ", 1);
	}
	while (j <= end)
	{
		write(1, &str[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		rostring(argv[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
