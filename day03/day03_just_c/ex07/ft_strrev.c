/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:55:49 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/16 12:08:29 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		counter;
	int		str_len;
	char	temp;

	counter = 0;
	while (*str != '\0')
	{
		str_len++;
		str++;
	}
	while (counter < str_len)
	{
		temp = str[str_len];
		str[str_len] = str[counter];
		str[counter] = temp;
		counter++;
		str_len--;
	}
	return (str);
}
