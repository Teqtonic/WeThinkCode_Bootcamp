/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:14:37 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/28 18:35:24 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		valid(int argc)
{
	if (argc == 1)
	{
		ft_puterror("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_puterror("Too many arguments.\n");
		return (1);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &(str[i]), 1);
		i++;
	}
}

void	ft_puterror(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &(str[i]), 1);
		i++;
	}
}
