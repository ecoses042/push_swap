#include "push_swap.h"

//abovemedian is true when index is lower than median, and false when higher
//so rotate if true, reverse rotate if false

//function that returns the index of min cost
int find_min_cost(t_list *lst)
{
    t_list *tmp;
    int low;
    int index;

    index = lst->index;
    low = lst->push_cost;
    tmp = lst;
    while (tmp || low != 0)
    {
        tmp = tmp->next;
        if (tmp->push_cost < low)
        {
            low = tmp->push_cost;
            index = tmp->index;
        }
    }
    return (index);
}

int find_cost_differnt(t_list *lst)
{
    if (lst->abovemdeian)
    {
        return (lst->index - 1);
    }
    if (!lst->abovemdeian)
        return (lst->index);
}

void find_cost(t_list *lst)
{
    t_list *tmp;

    tmp = lst;
    if (!lst)
        return ;
    while (tmp)
    {
        if (tmp->abovemdeian == tmp->target_node->abovemdeian)
            tmp->push_cost = ft_max(tmp->index, tmp->target_node->index);
        else
            tmp->push_cost = find_cost_different(tmp) + find_cost_different(lst->target_node);
        tmp = tmp->next;
    }
}
