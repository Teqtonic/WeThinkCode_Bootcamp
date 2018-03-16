/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:56:06 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/19 18:34:33 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] <= 'Z' && str[i] >= 'A')
				   || (str[i] <= 'z' && str[i] >= 'a')))
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char example[] = "";
	printf("%i\n", ft_str_is_alpha(example));
	return (0);
}
