#include "push_swap.h"

//this function will pass 2 node to stack b and organize them in descending order.

bool set_lst_init(t_list *a, t_list *b)
{
    if (!a)
        return false;
    print_push(a,b,1);
    print_push(a,b,1);
    if (b->content < b->next->content)
        print_swap(b,1);
    return true;
}

bool    set_med_index(t_list *lst)
{
    t_list *tmp;

    tmp = lst;
    if (!lst)
        return false;
    set_lst_index(lst);
    set_lower_than_median(lst);
    return true;
}

bool    init_target_node(t_list *lst)
{
    t_list *tmp;
    
    tmp = lst;
    while (tmp)
    {
        tmp->target_node = NULL;
        tmp = tmp->next;
    }
}

void    set_target_node_atob(t_list *set, t_list *ref)
{
    t_list *tmp;
    t_list *tmp2;

    init_target_node(set);
    tmp = set;
    while (tmp)
    {
        tmp->target_node = ref;
        tmp2 = ref;
        while (tmp2)
        {
            if ((ft_abs(tmp->content) - ft_abs(tmp->target_node->content))  > (ft_abs(tmp->content) - ft_abs(tmp2->content)))
                tmp->target_node = tmp2;
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
}

void    set_target_node_btoa(t_list *set, t_list *ref)
{
    t_list *tmp;
    t_list *tmp2;

    init_target_node(set);
    tmp = set;
    while (tmp)
    {
        tmp->target_node = ref;
        tmp2 = ref;
        while (tmp2)
        {
            if ((ft_abs(tmp->content) - ft_abs(tmp->target_node->content))  < (ft_abs(tmp->content) - ft_abs(tmp2->content)))
                tmp->target_node = tmp2;
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
}