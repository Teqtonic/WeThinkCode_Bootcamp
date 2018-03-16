/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 15:06:21 by exam              #+#    #+#             */
/*   Updated: 2018/03/02 15:26:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	*replace(char *s1, char *s2, char *s3)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if(s1[i] == s2[0])
			s1[i] = s3[0];
		i++;
	}
	return (s1);
}

int		main(int argc, char **argv)
{
	char *string;
	int i;

	i = 0;
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			string = replace(argv[1], argv[2], argv[3]);
			while (string[i] != '\0')
			{
				write(1, &(string[i]), 1);
				i++;
			}
			write(1, "\n", 1);
		}
		else
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
