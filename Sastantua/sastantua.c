/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 17:15:28 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/18 18:08:12 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		baselayer(int size)
{
	int height;
	int width;
	int heightstep;

	height = 1;
	width = 1;
	heightstep = 4;
	while (height <= size)
	{
		width += 2 * (2 + height);
		height++;
		width += heightstep;
		if (height % 2 && height < size)
			heightstep += 2;
	}
	width -= heightstep;
	return (width);
}

void	printline(int space)
{
	int position;

	position = 0;
	while (position < space)
	{
		write(1, " ", 1);
		position++;
	}
}

void	printlevels(int size, int height, int width, int step)
{
	int door;
	int pos;

	door = 1 + 2 * ((height - 1) / 2);
	pos = 0;
	while (pos < width)
	{
		if (pos == 0)
			write(1, "/", 1);
		else if (pos == width - 1)
			write(1, "\\", 1);
		else
		{
			if (height == size && pos >= (width - door) / 2
					&& pos < (width + door) / 2 && 2 + height - step <= door)
				if (door >= 5 && step == 2 + height - door / 2 - 1
						&& pos == (width + door) / 2 - 2)
					write(1, "$", 1);
				else
					write(1, "|", 1);
			else
				write(1, "*", 1);
		}
		pos++;
	}
}

void	sastantua(int size)
{
	int base;
	int height;
	int step;
	int width;

	if (size < 1)
		return ;
	base = 1;
	width = 1;
	while (base <= size)
	{
		height = 2 + base;
		step = 0;
		while (step < height)
		{
			width += 2;
			printline((baselayer(size) - width) / 2);
			printlevels(size, base, width, step);
			write(1, "\n", 1);
			step++;
		}
		base++;
		width += 4 + 2 * ((base - 2) / 2);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		sastantua(atoi(argv[1]));
		return (0);
	}
	else
	{
		write(1, "\n", 1);
		return (1);
	}
}
