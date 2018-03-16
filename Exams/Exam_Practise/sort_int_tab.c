/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 18:17:33 by exam              #+#    #+#             */
/*   Updated: 2018/03/02 18:45:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int temp;
	unsigned int k;

	i = 1;
	j = 0;
	k = 0;
	while (k < size)
	{
		while (j < size - 1)
		{
			if (tab[j] > tab[i])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
				j++;
				i++;
			}
			else if (tab[j] <= tab[i])
			{
				j++;
				i++;
			}
			else
				i++;
		}
		i = 1;
		j = 0;
		k++;
	}
}
