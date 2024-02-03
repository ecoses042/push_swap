#include "push_swap.h"

bool ft_check_sort(t_list *lst)
{
    int i;

    i = lst->content;
    while (lst)
    {
        lst = lst->next;
        if (i > lst->content)
            return false;
    }
    return true;
}