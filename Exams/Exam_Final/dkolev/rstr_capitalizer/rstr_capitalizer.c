/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 09:20:54 by exam              #+#    #+#             */
/*   Updated: 2018/03/10 10:18:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		ft_min(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

void	capitalize(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0' || (str[i + 1] > 32 && str[i + 1] < 48)) 
					&& ft_maj(str[i]))
		{
			c = str[i];
			write(1, &c, 1);
		}
		else if ((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0' || (str[i + 1] > 32 && str[i + 1] < 48))
				&& ft_min(str[i]))
		{
			c = str[i] - 32;
			write(1, &c, 1);
		}
		else if ((str[i + 1] != ' ' || str[i + 1] != '\t' || str[i + 1] != '\0' || (str[i + 1] > 32 && str[i + 1] < 48))
				   	&& ft_maj(str[i]))
		{
			c = str[i] + 32;
			write(1, &c, 1);
		}
		else
			write(1, &(str[i]), 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < argc)
	{
		capitalize(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
