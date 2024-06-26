#include "../push_swap.h"

//push a and b
//status false if b->a and true if a->b
void ft_push(t_list **remove, t_list **move_to, bool status) 
{
    t_list *tmp;

    if (!remove)
        return ;
    tmp = *remove;
    *remove = (*remove)->next;
    ft_lstadd_front(move_to,tmp); 
    if (!status)
        write(1,"pa\n",3);
    if (status)
        write(1, "pb\n",3);
}