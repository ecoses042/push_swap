#include "../push_swap.h"

void    ft_init_list(t_list *lst)
{
    t_list *tmp;

    tmp = lst;
    while (tmp)
    {
        tmp->target_node = NULL;
        tmp->abovemdeian = NULL;
        tmp->push_cost = INT_MAX;
        tmp->index = INT_MAX;
        tmp->cheapest = false;
        tmp = tmp->next;
    }
}

void    find_cheapest(t_list *a)
{
    int cheapest_value;
    t_list *cheapest_node;

    if (!a)
        return ;
    cheapest_value = INT_MAX;
    while (a)
    {
        if (a->push_cost < cheapest_value)
        {
            cheapest_value = a->push_cost;
            cheapest_node = a;
            if (cheapest_node == 0)
                break;
        }
        a = a->next;
    }
    cheapest_node->cheapest = true;
}

void    ft_set_list_a(t_list  *a, t_list  *b)
{
    ft_init_list(a);
    ft_init_list(b);
    set_index(a);
    set_index(b);
    set_above_median(a);
    set_above_median(b);
    set_target_node_a(a,b);
    set_push_cost(a,b);
    set_target_node_b(a,b);
    set_push_cost(b,a);
    find_cheapest(a);
    find_cheapest(b);

}

void ft_set_list_b(t_list *a, t_list *b)
{
    ft_init_list(a);
    ft_init_list(b);
    set_index(a);
    set_index(b);
    set_above_median(a);
    set_above_median(b);
    set_target_node_b(a,b);
    set_push_cost(b,a);
    find_cheapest(b);
}