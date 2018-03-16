/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:43:22 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/19 17:55:26 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] <= '9' && str[i] >= '0') ||
				(str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (flag && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= ('a' - 'A');
			if (!flag && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += ('a' - 'A');
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}

int		main(void)
{
	char example[] = "salut, comment tu vas ? 42mots quWETRante-deux; cinquant+et+un";
	printf("First letter cap = %s\n", ft_strcapitalize(example));
	return (0);
}
