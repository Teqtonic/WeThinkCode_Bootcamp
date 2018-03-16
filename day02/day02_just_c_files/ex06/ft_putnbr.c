/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 21:22:56 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/15 15:23:12 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	int nb_copy;
	int mod;

	mod = 1;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	nb_copy = nb;
	while (nb_copy > 0)
	{
		nb_copy /= 10;
		mod *= 10;
	}
	mod /= 10;
	while (nb > 0)
	{
		ft_putchar((nb / mod) + '0');
		nb %= mod;
		mod /= 10;
	}
	ft_putchar('\n');
}
