#include "push_swap.h"

bool    push_for_real(t_list *push,t_list *a, t_list *b)
{
     while (push != a && push->target_node != b)
    {
        if (push != a)
        {
            if (push->target_node = b)
            {
                if (push->abovemdeian)
                    print_reverse_rotate(a,0);
                if (!push->abovemdeian)
                    print_rotate(a,0);
            }
            else
            {
                if (push->abovemdeian && push->target_node->abovemdeian)
                    print_rrr(a,b);
                if (!push->abovemdeian && !push->target_node->abovemdeian)
                    print_rr(a,b);
            }
        }
        if (push = a)//push->target_node will always be != b because of while condition
        {
            if (push->target_node->abovemdeian)
                print_reverse_rotate(b,1);
            if (!push->target_node->abovemdeian)
                print_rotate(b,1);
        }
    }
}
//to rotate or reverse rotate each stack untill it is at index = 1.
bool    push_with_cost(t_list *a, t_list *b, int index)
{
    t_list *tmp;

    tmp = a;
    while (tmp->index != index)
        tmp = tmp->next;
    if (!push_for_real(tmp,a,b));
        return false;
    return true;
}