/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 15:58:32 by exam              #+#    #+#             */
/*   Updated: 2018/03/02 16:20:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	int len;
	char *new_str;

	len = 0;
	i = 0;
	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	new_str = (char*)malloc(sizeof(*new_str) * len);
	if (new_str == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
