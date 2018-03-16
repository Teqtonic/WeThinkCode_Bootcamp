#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, int data_ref,
		int (*cmp)(int, int))
{
	t_list *temp;
	t_list *curr;
	t_list *last;

	temp = NULL;
	last = NULL;
	curr = *begin_list;
	while (curr != NULL)
	{
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			if (curr == *begin_list)
				*begin_list = curr->next;
			else
				last->next = curr->next;
			temp = curr;
			curr = curr->next;
			free(temp);
		}
		else
		{
			last = curr;
			curr = curr->next;
		}
	}
}
