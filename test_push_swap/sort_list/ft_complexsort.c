#include "push_swap.h"

//function that goes though the process of passing to stack b based on target node and push cost
bool    ft_complexsort_atob(t_list *a, t_list *b)
{
    while (ft_lstsize(a) > 3)
    {
        if (!init_target_node(a) || set_med_index(a) || set_med_index(b))
            return false;
        set_target_node_atob(a,b);
        find_cost(a);
        if (!push_with_cost(a,b,find_min_cost(a)))
            return false;
    }
}

//function that goes over process of pushing stack b to a
bool    ft_complexsort_btoa(t_list *a, t_list *b)
{
    if (!init_target_node(b) || set_med_index(a) || set_med_index(b))
        return false;
    set_target_node_btoa(a,b);
    find_cost(b);
    if (!push_with_cost(b,a),find_min_cost(b))
        return false;
}
bool ft_complexsort(t_list *lst)
{
    t_list *b;

    b = NULL;
    if (!ft_check_sort(lst))
    {  
        if (!ft_complexsort_atob(lst,b))
            return false;
        if (!ft_simplesort(lst))
            return false;
        if (!ft_complexsort_btoa(lst,b))
            return false;
        while (!ft_check_sort)
            print_rotate(lst, 0);
    }
    free_list(b);
    return true;
}