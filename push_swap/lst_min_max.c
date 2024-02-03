#include "push_swap.h"

t_list *lst_min(t_list *lst)
{
    t_list *tmp;
    t_list *min;

    tmp = lst->next;
    min = lst;
    while (tmp)
    {
        if (min->content > tmp->content)
            min = tmp;
        tmp = tmp->next;
    }
    return (min);
}

t_list *lst_max(t_list *lst)
{
    t_list *tmp;
    t_list *max;

    tmp = lst->next;
    max = lst;
    while (tmp)
    {
        if (max->content > tmp->content)
            max = tmp;
        tmp = tmp->next;
    }
    return (max);
}