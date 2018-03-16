#include <stdio.h>
#include <stdlib.h>

#include "ft_list.h"
#include "headers.h"

int		main(void)
{
	t_list *head;
	t_list *temp;

	head = NULL;
	ft_list_push_front(&head, 11);
	ft_list_push_back(&head, 5);
	ft_list_push_back(&head, 3);
	ft_list_push_back(&head, 6);
	ft_list_push_front(&head, 0);
	ft_list_push_front(&head, 10);

	temp = head;
	while (temp != NULL)
	{
		printf("%i, ", temp->data);
		temp = temp->next;
	}
	return (0);
}
