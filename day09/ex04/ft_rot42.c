/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:05:55 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/22 19:42:31 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_rot42(char *str)
{
	char	*rot;

	rot = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = (((*str - 'a' + 42) % 26) + 'a');
		if (*str >= 'A' && *str <= 'Z')
			*str = (((*str - 'A' + 42) % 26) + 'A');
		str++;
	}
	return (rot);
}

int		main(void)
{
	char string[] = "abcdef";

	printf("%s\n", ft_rot42(string));
	return (0);
}
