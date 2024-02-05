#include "push_swap.h"

t_list	*ft_lstnew(int new)
{
	t_list	*a;
    
	a = (t_list *)malloc(sizeof(t_list));
	if (!a)
		return (0);
	a->content = ft_strdup(new);
    if (!a->content)
    {
        free(a);
        return (0);
    }
	a->next = 0;
	return (a);
}

//this function returns the last noed of the list
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*a;

	if (!lst)
		return (0);
	a = lst;
	while (lst->next)
	{
		lst = lst->next;
		a = lst;
	}
	return (a);
}

//this function addes node to the list at the first index
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

//this function adds new noed to the linked list at the last index
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	ft_lstlast(*lst)->next = new;
}