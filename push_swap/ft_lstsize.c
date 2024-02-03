#include "push_swap.h"

int ft_lstsize(t_list *head)
{
    int i;
    t_list *tmp;

    i = 0;
    tmp = head;
    while(tmp)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}