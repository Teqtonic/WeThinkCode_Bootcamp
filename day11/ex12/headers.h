void	ft_list_push_front(t_list **begin_list, int data);
void	ft_list_push_back(t_list **begin_list, int data);
unsigned int	ft_list_size(t_list	*begin_list);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_at(t_list *begin_list, unsigned int);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_foreach(t_list *begin_list, void (*f)(int*));
void	plus_one(int*);
int		ft_strcmp(int, int);
void	ft_list_foreach_if(t_list *begin_list, void (*f)(int*),
		int data_ref, int (*cmp)(int, int));
void	ft_list_remove_if(t_list **begin_list, int,
		int (*cmp)(int, int));
