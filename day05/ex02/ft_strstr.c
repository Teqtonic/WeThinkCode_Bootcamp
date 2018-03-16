/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:52:49 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/19 13:37:26 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *begin;
	char *pattern;

	while (*str)
	{
		begin = str;
		pattern = to_find;
		while (*str && *pattern && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		str = begin + 1;
	}
	return (0);
}

int		main(void)
{
	char *s1;

	s1 = "This is sparta";
	printf("Returned string is = %s\n", ft_strstr(s1, "h"));
	return (0);
}
