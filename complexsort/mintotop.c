#include "../test.h"

void    rotate_min_to_top(t_list **a)
{
    t_list *min;

    min = lst_min(*a);
    if (!min)
        return ;
    while (*a != min)
    {
        if(min->abovemdeian)
            print_rotate(a,0);
        else if (!min->abovemdeian)
            print_reverse_rotate(a,0);
    }
}