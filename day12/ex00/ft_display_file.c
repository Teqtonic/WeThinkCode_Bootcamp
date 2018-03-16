/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:09:51 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/28 18:35:44 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	fd = open(filename, O_RDONLY);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	if (valid(argc) == 1)
		return (1);
	ft_display_file(argv[1]);
	return (0);
}
