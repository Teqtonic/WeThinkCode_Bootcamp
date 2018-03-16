/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:21:33 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/28 18:05:41 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int fd;

	fd = open("alph", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("%s\n", "open() failed");
		return (1);
	}
	printf("%i\n", fd);
	if (close(fd) == -1)
	{
		printf("%s\n", "close() failed");
		return (1);
	}
	close(fd);
	return (0);
}
