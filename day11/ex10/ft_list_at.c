#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	while (begin_list != NULL)
	{
		if (i == nbr)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	printf("Error !");
	return (NULL);
}
