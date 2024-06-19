#include "../push_swap.h"

bool ft_check_sort(t_list *lst)
{
    if (!lst->next)
        return true;
    while (lst->next)
    {
        if (lst->content > lst->next->content)
            return false;
        lst = lst->next;
    }
    return true;
}