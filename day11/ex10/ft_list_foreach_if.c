#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(int*), 
		int data_ref, int (*cmp)(int, int))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr != NULL)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
			(*f)(&list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

int		ft_strcmp(int s1, int s2)
{
	if (s1 == s2)
		return (0);
	else
		return (1);
}
