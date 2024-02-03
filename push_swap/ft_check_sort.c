#include "push_swap.h"

//there should be max value at head, min value at tail
//return false if not sorted and true if sorted
bool ft_check_sort(t_list *lst)
{
    int i;

    i = lst->content;
    while (lst)
    {
        lst = lst->next;
        if (i < lst->content)
            return false;
    }
    return true;
}