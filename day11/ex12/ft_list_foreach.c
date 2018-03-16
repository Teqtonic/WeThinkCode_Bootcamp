#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(int*))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr != NULL)
	{
		(*f)(&list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

void	plus_one(int *data)
{
	*data += 1;
}
