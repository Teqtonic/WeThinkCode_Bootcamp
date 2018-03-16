/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:33:04 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/22 13:22:48 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	else
		return (0);
}

int		num_words(char *str)
{
	int car;
	int i;
	int j;

	j = 0;
	i = 0;
	car = 0;
	if (*str == '\0')
		return (0);
	while (str[j] != '\0')
	{
		if (is_space(str[j]))
		{
			car = 0;
			j++;
		}
		else
		{
			if (car == 0)
				i++;
			car = 1;
			j++;
		}
	}
	return (i);
}

char	**allocate_memory(char *str, int word_count, int i, int j)
{
	char **array;

	array = (char**)malloc(sizeof(char) * (word_count + 1));
	if (*str == '\0' && ((array[0] || 1)))
		return (array);
	while (is_space(*str))
		str++;
	while (*str)
	{
		if (is_space(*str))
		{
			array[i++] = (char*)malloc(sizeof(char) * (j + 1));
			while ((j = 0) || is_space(*str))
				str++;
			str--;
		}
		else
			j++;
		if (*(str++ + 1) == '\0')
			array[i] = (char*)malloc(sizeof(char) * (j + 1));
	}
	if (!(is_space(*(str - 1))))
		i++;
	array[i] = 0;
	return (array);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		word_count;
	char	**array;

	i = 0;
	j = 0;
	word_count = num_words(str);
	array = allocate_memory(str, word_count, i, j);
	while (is_space(*str))
		str++;
	while (i < word_count)
	{
		if (is_space(*str))
		{
			while (is_space(*str))
				str++;
			array[i][j] = '\0';
			i += (j != 0) ? 1 : 0;
			j = 0;
		}
		else
			array[i][j++] = *str++;
	}
	return (array);
}
