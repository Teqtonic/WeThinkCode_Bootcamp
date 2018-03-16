/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create.elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 16:29:19 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/28 16:43:36 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(int data)//void *data)
{
	t_list *new_list;

	new_list = malloc(sizeof(t_list));
	if (new_list == NULL)
	{
		printf("%s\n", "Failed to create new node !");
		return (NULL);
	}
	if (new_list != NULL)
	{
		new_list->data = data;
		new_list->next = NULL;
	}
	return (new_list);
}
