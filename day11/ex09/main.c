#include <stdio.h>
#include <stdlib.h>

#include "ft_list.h"
#include "headers.h"

int		main(void)
{
	unsigned int nth_elem = 0;
	t_list *head;
	t_list *temp;
	t_list *last_elem;
	t_list *n_elem;
	t_list *temp_rev;

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
	printf("\n");

	printf("List size = %i\n", ft_list_size(head));
	last_elem = ft_list_last(head);

	printf("Last element = %i\n", last_elem->data);
	n_elem = ft_list_at(head, nth_elem);

	printf("Element at position %i = %i\n", nth_elem, n_elem->data);

	ft_list_reverse(&head);
	temp_rev = head;
	while (temp_rev != NULL)
	{
		printf("%i, ", temp_rev->data);
		temp_rev = temp_rev->next;
	}
	printf("\n");

	ft_list_foreach(head, &plus_one);
	temp_rev = head;
	while (temp_rev != NULL)
	{	
		printf("%i, ", temp_rev->data);
		temp_rev = temp_rev->next;
	}
	return (0);
}
