#include "push_swap.h"

bool ft_sort(char **av)
{
    t_list *a;
    int i;

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
        return (ft_simplesort(a));
    else
        return (ft_complexsort(a));
    
}