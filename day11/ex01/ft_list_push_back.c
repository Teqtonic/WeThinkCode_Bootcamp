/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 16:45:36 by dkolev            #+#    #+#             */
/*   Updated: 2018/02/28 16:48:16 by dkolev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, int data) //void *data)
{
	t_list	*list;

	list = *begin_list;
	if (list != NULL)
	{
		while (list->next != NULL)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}

int		main(void)
{
	t_list *head;
	t_list *temp;

	head = NULL;
	ft_list_push_back(&head, 5);
	ft_list_push_back(&head, 3);
	ft_list_push_back(&head, 6);

	temp = head;
	while (temp != NULL)
	{
		printf("%i, ", temp->data);
		temp = temp->next;
	}
	return (0);
}
