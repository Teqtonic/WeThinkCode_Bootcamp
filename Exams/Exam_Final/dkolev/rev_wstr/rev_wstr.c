/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 13:27:59 by exam              #+#    #+#             */
/*   Updated: 2018/03/10 14:01:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_str(char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (str[i + 1] != '\0')
		i++;
	j = i;
	while (i > 0)
	{
		while ((str[i - 1] != ' ' && str[i - 1] != '\t') && i != 0)
			i--;
		k = i;
		while (k <= j)
		{
			write(1, &str[k], 1);
			k++;
		}
		if (i != 0)
			write(1, " ", 1);
		i -= 2;
		j = i;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_str(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
