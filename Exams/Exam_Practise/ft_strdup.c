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
#include <unistd.h>

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
	new_str = (char*)malloc(sizeof(*new_str) * len + 1);
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

int		main(void)
{
	int i = 0;
	char *string = "Hello John!";
	char *new_str = ft_strdup(string);
	while (new_str[i] != '\0')
	{
		write(1, &new_str[i], 1);
		i++;
	}
	free(new_str);
	return (0);
}
