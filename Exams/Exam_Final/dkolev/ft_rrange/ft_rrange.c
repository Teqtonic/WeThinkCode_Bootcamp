/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 10:26:08 by exam              #+#    #+#             */
/*   Updated: 2018/03/10 11:58:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*new_array = NULL;
	int		i;
	int		len;

	i = 0;
	if (start == end)
	{
		new_array = (int*)malloc(sizeof(int) * 1);
		new_array[0] = start;
	}
	else if ((end >= 0 && start >= 0) && end > start)
	{
		len = (end - start) + 1;
		new_array = (int*)malloc(sizeof(int) * len);
		while(i < len)
		{
			new_array[i] = end;
			end -= 1;
			i++;
		}
	}
	else if ((end >= 0 && start >= 0) && start > end)
	{
		len = (start - end) + 1;
		new_array = (int*)malloc(sizeof(int) * len);
		while(i < len)
		{
			new_array[i] = end;
			end += 1;
			i++;
		}
	}
	else if ((end >= 0 && start <= 0) && end > start)
	{
		len = (end - start) + 1;
		new_array = (int*)malloc(sizeof(int) * len);
		while(i < len)
		{
			new_array[i] = end;
			end -= 1;
			i++;
		}
	}
	else if ((end <= 0 && start >= 0) && end < start)
	{
		len = (start - end) + 1;
		new_array = (int*)malloc(sizeof(int) * len);
		while(i < len)
		{
			new_array[i] = end;
			end += 1;
			i++;
		}
	}
	else if ((end <= 0 && start <= 0) && end > start)
	{
		len = (-start + end) + 1;
		new_array = (int*)malloc(sizeof(int) * len);
		while(i < len)
		{
			new_array[i] = end;
			end -= 1;
			i++;
		}
	}
	else if ((end <= 0 && start <= 0) && end < start)
	{
		len = (-end + start) + 1;
		new_array = (int*)malloc(sizeof(int) * len);
		while(i < len)
		{
			new_array[i] = end;
			end += 1;
			i++;
		}
	}
	return (new_array);
}
