#include "push_swap.h"


//function that sets index for all node in given list
void set_lst_index(t_list *head)
{
    int i;
    t_list *tmp;

    if (!head)
        return ;
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
void set_lower_than_median(t_list *head)
{
    int len;
    t_list *tmp;    

    if (!head)
        return ;
    tmp = head;
    len = ft_lstsize(head);
    while (tmp)
    {
        if (len / 2 >= tmp->index)
            tmp->abovemdeian = true;
        else
            tmp->abovemdeian = false;
        tmp = tmp->next;
    }
}

