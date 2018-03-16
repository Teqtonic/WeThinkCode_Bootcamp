/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 18:37:49 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/15 15:21:48 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char num1;
	char num2;
	char num3;

	num1 = '0' - 1;
	while (num1 <= '9')
	{
		num2 = ++num1;
		while (num2 <= '9')
		{
			num3 = ++num2 + 1;
			while (num3 <= '9')
			{
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3++);
				if (num1 != '7')
				{
					write(1, ", ", 2);
				}
			}
		}
	}
	ft_putchar('\n');
}
