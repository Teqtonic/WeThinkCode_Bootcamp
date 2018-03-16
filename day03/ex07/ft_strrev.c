/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 20:42:29 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/16 11:08:25 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int counter;
	int str_len;
	char temp;

	counter = 0;
	while (*str != '\0')
	{
		str_len++;
		str++;
	}
	while (counter < str_len)
	{
		temp = str[str_len];
		str[str_len] = str[counter];
		str[counter] = temp;
		counter++;
		str_len--;
	}
	return (str);
}

int		main(void)
{
	int k;
	char string;

	k = 0;
	string = "Hello John";
	**ft_strrev(string);
	while (k < str_len)
	{
		printf("%c", string[k]);
	}
	return (0);
}
