/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 13:54:14 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/20 11:24:32 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (0);
}

int		main(void)
{
	char	*string1;
	char	*string2;
	int		num;

	num = 3;
	string1 = "1234997";
	string2 = "1236608";
	printf("%i\n", ft_strncmp(string1, string2, num));
	return (0);
}
