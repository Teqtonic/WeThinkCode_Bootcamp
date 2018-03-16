/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 17:20:47 by exam              #+#    #+#             */
/*   Updated: 2018/03/02 18:12:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	char	*str_num;
	int		nbr_copy;
	int		len_pos;
	int		len_neg;
	int		j;
	char	num_array[] = {'0','1','2','3','4','5','6','7','8','9'};
	char	num_array_neg[] = {'-'};
	int		min_int = INT_MAX;

	j = 11;
	len_pos = 0;
	len_neg = 0;
	nbr_copy = nbr;
	if (nbr == INT_MIN)
	{
		str_num = (char*)malloc(sizeof(*str_num) * j + 1);
		str_num[0] = num_array_neg[0];
		str_num[j] = '\0';
		j = j - 1;
		while (j > 0)
		{
			str_num[j] = num_array[(min_int % 10)];
			min_int /= 10;
			j--;
		}
		str_num[10] = num_array[8];
		return (str_num);
	}
	j = 0;
	if(nbr > 0)
	{
		while (nbr_copy != 0)
		{
			len_pos++;
			nbr_copy /= 10;
		}
	}
	nbr_copy = nbr;
	if (nbr == 0)
	{
		str_num = (char*)malloc(sizeof(*str_num) * 1 + 1);
		str_num[0] = '0';
		str_num[1] = '\0';
		return (str_num);
	}
	if(nbr < 0)
	{
		nbr_copy *= -1;
		while (nbr_copy != 0)
		{
			len_neg++;
			nbr_copy /= 10;
		}
		nbr_copy = -nbr;
	}
	if (nbr > 0)
	{
		str_num = (char*)malloc(sizeof(*str_num) * len_pos + 1);
		j = len_pos;
		str_num[j] = '\0';
		j = j - 1;
		while (j >= 0)
		{
			str_num[j] = num_array[(nbr % 10)];
			nbr /= 10;
			j--;
		}
	}
	if (nbr < 0)
	{
		str_num = (char*)malloc(sizeof(*str_num) * len_neg + 2);
		str_num[0] = num_array_neg[0];
		j = len_neg + 1;
		str_num[j] = '\0';
		j = j - 1;
		while (j > 0)
		{
			str_num[j] = num_array[(nbr_copy % 10)];
			nbr_copy /= 10;
			j--;
		}
	}
	return (str_num);
}

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_itoa(atoi(argv[1])));
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(INT_MIN));
	return (0);
}
