#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = begin_list;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
