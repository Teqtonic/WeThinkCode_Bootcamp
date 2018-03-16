#include <stdio.h>
#include <stdlib.h>

#include "ft_list.h"
#include "headers.h"

int		main(void)
{
	t_list *head;
	t_list *temp;
	t_list *last_elem;

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
	printf("%s", "\n");
	printf("List size = %i\n", ft_list_size(head));
	last_elem = ft_list_last(head);
	printf("Last element = %i", last_elem->data);
	return (0);
}
