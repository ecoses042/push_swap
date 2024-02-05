#include "push_swap.h"

bool free_list(t_list *head)
{
    t_list *tmp;

    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp);        
    }
    return true;
}