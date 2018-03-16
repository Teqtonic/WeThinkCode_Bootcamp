/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:10:47 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/28 18:13:31 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <unistd.h>
# include <fcntl.h>
# define BUFF_SIZE 4096

void	ft_display_file(char *filename);
int		valid(int argc);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
#endif
