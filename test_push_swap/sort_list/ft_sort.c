#include "push_swap.h"

bool ft_sort_lst(char **av)
{
    t_list *a;
    int i;
    bool check;

    i = 0;
    a = NULL;
    if (!av)
        return ;
    while (av[i])
    {
        ft_lstadd_back(&a,ft_lstnew(ft_atoi(av[i])));
        i++;
    }
    if (ft_lstsize(a) < 4)
        check = ft_simplesort(a);
    else
        check = ft_complexsort(a);
    free_list(a);
    return(check);
}