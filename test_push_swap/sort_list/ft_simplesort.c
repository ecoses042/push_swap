#include "push_swap.h"

//function that sorts linked list size under 4. hard code the sorting process.

bool ft_simplesort(t_list *lst)
{
    t_list *max;

    max = lst_min(lst);
    if (!lst || !max)
        return (1);
    if (!ft_check_sort(lst))
    {
        if (ft_lstsize(lst) == 2)
            print_swap(lst,0);
        if (ft_lstsize(lst) == 3)
        {
            if (max == lst)
                print_rotate(lst, 0);
            else if (max = lst->next)
                print_reverse_rotate(lst,0);
            if (lst->content > lst->next->content)
                print_swap(lst,0);
        }
    }
    return true;
}