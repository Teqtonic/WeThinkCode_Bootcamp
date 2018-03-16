/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 10:58:03 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/18 15:19:03 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int fac;

	i = 1;
	fac = nb;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	if (nb >= 2)
	{
		while (nb > 1)
		{
			fac = fac * (--nb);
		}
		return (fac);
	}
	else
	{
		return (1);
	}
}
