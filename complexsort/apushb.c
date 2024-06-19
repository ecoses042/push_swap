#include "../push_swap.h"

t_list *get_cheapest(t_list *a)
{
    while (a)
    {
        if (a->cheapest)
            return (a);
        a = a->next;
    }
    return (a);
}

void    ft_apushb(t_list **a,t_list **b)
{
    t_list  *cheapest;
    cheapest = get_cheapest(*a);
    if (cheapest->abovemdeian && cheapest->target_node->abovemdeian)
        rr_cheapest(a,b,cheapest);
    else if (!(cheapest->abovemdeian) && !(cheapest->target_node->abovemdeian))
        rrr_cheapest(a,b,cheapest);
    prep_for_push(a,cheapest,false);
    prep_for_push(b,cheapest->target_node,true);
    ft_push(a,b,true);
}

void    ft_bpusha(t_list **a, t_list **b)
{
    prep_for_push(a, (*b)->target_node, false);
    ft_push(b, a, false);
}