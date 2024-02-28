#include "../test.h"

bool ft_check_sort(t_list *lst)
{
    while (lst->next)
    {
        if (lst->content > lst->next->content)
            return 0;
        lst = lst->next;
    }
    return 1;
}