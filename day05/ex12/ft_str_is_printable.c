/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:47:05 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/19 18:55:34 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 36 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char example[] = "HWEIJFADL/=/=-+f";
	printf("%i\n", ft_str_is_printable(example));
	return (0);
}
