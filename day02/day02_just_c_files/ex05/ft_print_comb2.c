/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 20:20:15 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/15 15:22:41 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = -1;
	while (num1 < 99)
	{
		num2 = ++num1 + 1;
		while (num2 < 100)
		{
			ft_putchar((num1 / 10) + '0');
			ft_putchar((num1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((num2 / 10) + '0');
			ft_putchar((num2++ % 10) + '0');
			if (num1 != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
	ft_putchar('\n');
}
