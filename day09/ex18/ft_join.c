/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 09:11:42 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/23 09:27:39 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*combined_array;

	i = 0;
	j = 0;
	k = 0;
	combined_array = (char*)malloc((sizeof(**tab) + sizeof(*sep)) * (ft_strlen(*tab) + ft_strlen(sep) + 1));
	while (tab[i][0])
	{
		j = 0;
		while (tab[i][j])
		{
			combined_array[k] = tab[i][j];
			j++;
			k++;
		}
		i++;
	}
	free(combined_array);
	return (combined_array);
}

int		main(void)
{
	char string1[] = "Hello John";
	char glue[] = "glue";
	printf("Glued string: %s\n", ft_join(*string1, glue));
	return (0);
}
