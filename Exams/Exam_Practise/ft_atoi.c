/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 16:50:52 by exam              #+#    #+#             */
/*   Updated: 2018/02/16 17:20:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int	j;
	int	count;

	count = 0;
	j = 0;
	if (str[0] == '-')
	{
		while (str[count+1] != '\0' && str[count + 1] <= '9' &&
				str[count + 1] >= '0')
		{
			j = j * 10 + (str[count + 1] - '0');
			count++;
		}
		return (j - 2*j);
	}
	else
	{
		while (str[count] != '\0' && str[count] <= '9' &&
				str[count] >= '0')
		{
			j = j * 10 + (str[count] - '0');
			count++;
		}
		return (j);
	}
}

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%i", ft_atoi(argv[1]));
	return (0);
}
