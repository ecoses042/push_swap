#include "push_swap.h"


//function that sets index for all node in given list
void find_lst_index(t_list *head)
{
    int i;
    t_list *tmp;

    i = 1;
    tmp = head;
    while (tmp)
    {
        tmp->index = i;
        i++;
        tmp = head->next;
    }
    return ;
}

//sets median value of the structure. 
//if it is below median, return true, above false
bool lower_than_median(t_list *head)
{
    int len;
    t_list *tmp;    

    len = ft_lstsize(head);
    if (len / 2 > tmp->index)
        return true;
    else
        return false;
}

