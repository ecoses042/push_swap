#include "../push_swap.h"
//function that will rotate or reverse rotate when the abovemedian value
//differs between target node and current node
void    prep_for_push(t_list **lst, t_list *cheapest_node, bool stack)
{
    while (cheapest_node != *lst)
    {
        if (cheapest_node->abovemdeian)
            print_rotate(lst, stack);
        else 
            print_reverse_rotate(lst,stack);
    }
}