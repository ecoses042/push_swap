#include "../push_swap.h"

t_list  *find_min_cost(t_list *lst)
{
    t_list  *tmp;
    
    tmp = lst;
    while (tmp)
    {
        if (tmp->push_cost == 0)
            return tmp;
        if (lst->push_cost > tmp->push_cost)
            lst = tmp;
        tmp = tmp->next;
    }
    return (lst);
}