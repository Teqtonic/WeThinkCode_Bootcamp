/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 12:58:50 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/21 11:03:16 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	swap(char *a[], char *b[])
{
	char *c;

	c = *b;
	*b = *a;
	*a = c;
}

int		strcompare(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	return (*--s1 - *--s2);
}

void	putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int j;

	j = 1;
	while (j < argc - 1)
	{
		if (strcompare(argv[j], argv[j + 1]) >= 1)
		{
			swap(&argv[j], &argv[j + 1]);
			j = 1;
		}
		else
			j++;
	}
	j = 1;
	while (j < argc)
	{
		putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
