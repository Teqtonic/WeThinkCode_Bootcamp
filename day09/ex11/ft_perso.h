/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 02:00:29 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/23 02:43:09 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PERSO_H
#define	FT_PERSO_H
#define SAVE_AUSTIN_POWERS "Save the world";

#include <string.h>

typedef struct s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}	t_perso;
#endif
