#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*new_list;
	t_list	*new_elem;

	i = 1;
	new_list = NULL;
	while (i < ac)
	{
		new_elem = ft_create_elem(atoi(av[i]));
		new_elem->next = new_list;
		new_list = new_elem;
		i++;
	}
	return (new_list);
}

int		main(int argc, char **argv)
{
	t_list *temp;

	temp = ft_list_push_params(argc, argv);
	while (temp != NULL)
	{
		printf("%i, ",  temp->data);
		temp = temp->next;
	}
	return (0);
}
