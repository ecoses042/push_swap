#include "../test.h"

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
        tmp = tmp->next;
    }
}

void    ft_set_list(t_list  *a, t_list  *b)
{
    ft_init_list(a);
    ft_init_list(b);
    set_index(a);
    set_index(b);
    set_above_median(a);
    set_above_median(b);
    set_target_node_a(a,b);
    set_target_node_b(a,b);
    set_push_cost_a(a,b);
    set_push_cost_a(b,a);
}