#include "push_swap.h"

//function that sorts linked list size under 4. hard code the sorting process.
bool ft_simplesort(t_list *lst)
{
    t_list *b;

    b = NULL;
    if (!lst)
        return (1);
    if (ft_check_sort(lst))
        return (0);
    if (ft_lstsize(lst) == 2)
        ft_swap_print(&lst, &b, 1);
    if (ft_lstsize(lst) == 3)
    {
        b = lst->next;
        if (lst->content > b->content)
            ft_swap_print(&lst, NULL, 1);
        
    }
}