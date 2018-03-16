/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 10:08:37 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/23 10:51:38 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int match;

	i = 0;
	j = 0;
	match = 0;
	while (i < length)
	{
		while (j < length)
		{
			if (tab[i] == tab[j])
				match++;
			j++;
		}
		if (match != 2)
			return (tab[i]);
		j = 0;
		match = 0;
		i++;
	}
	return (0);
}
