#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem;
	t_list *temp;

	elem = *begin_list;
	if (elem == NULL)
		return (NULL);
	while (elem != NULL)
	{
		temp = elem;
		free(elem);
		elem = temp->next;
	}
	*begin_list = NULL;
}
