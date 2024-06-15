#include "../test.h"

t_list  *ft_complexsort(t_list *a)
{
    int len_a;
    t_list *b;
    
    b = NULL;
    len_a = ft_lstsize(a);
    if (len_a-- > 3 && !ft_check_sort(a))
        ft_push(&a,&b,true);
    if (len_a-- > 3 && !ft_check_sort(a))
        ft_push(&a,&b,true);
    while (len_a-- > 3 && !ft_check_sort(a))
    {
        ft_set_list(a,b);
        ft_apushb(&a,&b);
    }
    a = ft_simplesort(a);
    while (b)
    {
        ft_set_list(a,b);
        ft_bpusha(&a,&b);
    }
    set_index(a);
    rotate_min_to_top(&a);
    return(a);
}