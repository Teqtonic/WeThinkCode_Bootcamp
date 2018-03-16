/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 20:42:29 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/16 11:08:25 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strrev(char *str)
{
	char	*res;
	char	*beg;
	char	*end;
	char	buf;

	res = str;
	beg = str;
	end = str;
	while (*end != '\0')
		end++;
	end--;
	while (beg < end)
	{
		buf = *beg;
		*beg = *end;
		*end = buf;
		beg++;
		end--;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	char *str;
	
	if (argc == 2)
	{
		str = ft_strrev(argv[1]);
		ft_putstr(str);
	}
	write(1, "\n", 1);
	return (0);
}
