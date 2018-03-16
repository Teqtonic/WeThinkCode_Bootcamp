/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 20:48:52 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/19 22:44:20 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	j;

	i = 0;
	k = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && k < size)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	while (src[j] != '\0')
		j++;
	return (j + size);
}

int		main(void)
{
	unsigned int num = 3;
	char destination[] = "Hellod";
	char source[] = "Kitty";
	printf("%i\n", ft_strlcat(destination, source, num));
	return (0);
}
