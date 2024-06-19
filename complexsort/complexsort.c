#include "../push_swap.h"
/**#include <stdio.h>

void print_list(t_list *temp)
{
    t_list *lst = temp;
    while (lst)
    {
        printf("%d\n",lst->content);
        lst = lst->next;
    }
}*/
t_list  *ft_complexsort(t_list *a)
{
    int len_a;
    t_list *b;
    
    b = NULL;
    len_a = ft_lstsize(a);
    if (!ft_check_sort(a))
    {
        while(len_a-- > 3 && ft_lstsize(b) != 2)
            ft_push(&a,&b,true);
        while (len_a-- > 2)
        {
            ft_set_list_a(a,b);
            ft_apushb(&a,&b);
        }
        a = ft_simplesort(a);
        while (b)
        {
            ft_set_list_a(a,b);
            ft_bpusha(&a,&b);
        }
        set_index(a);
        rotate_min_to_top(&a);
        //print_list(a);
    }
    return(a);
}