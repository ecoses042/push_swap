#include "../test.h"

//function that sets index
void    set_index(t_list *lst)
{
    int i;
    t_list *tmp;

    i = 0;
    tmp = lst;
    while (tmp)
    {
        tmp->index = i;
        i++;
        tmp = tmp->next;
    }
    set_above_median(lst);
}

//function sets abovemedian
void set_above_median(t_list *lst)
{
    size_t len;
    t_list *tmp;    
    int median;

    if (!lst)
        return ;
    len = ft_lstsize(lst);
    median = len / 2;
    tmp = lst;
    while (tmp)
    {
        if (median >= tmp->index)
            tmp->abovemdeian = true;
        else
            tmp->abovemdeian = false;
        tmp = tmp->next;
    }
}

//function set targetnode
void    set_target_node_a(t_list *a, t_list *b)
{
    t_list  *tmp;
    t_list  *target;
    long    flag;

    while (a)
    {
        tmp = b;
        flag = LONG_MIN;
        while (tmp)
        {
            if (a->content > tmp->content && tmp->content > flag)
            {
                flag = tmp->content;
                target = tmp;
            }
            tmp = tmp->next;
        }
        if (flag == LONG_MIN)
            a->target_node = lst_max(b);
        else
            a->target_node = target;
        a = a->next;
    }

}

void    set_target_node_b(t_list *a, t_list *b)
{
    t_list  *tmp;
    t_list  *target;
    long    flag;

    while (b)
    {
        tmp = a;
        flag = LONG_MAX;
        while (tmp)
        {
            if (b->content < tmp->content && tmp->content < flag)
            {
                flag = tmp->content;
                target = tmp;
            }
            tmp = tmp->next;
        }
    if (flag == LONG_MAX)
        b->target_node = lst_min(a);
    else
        b->target_node = target;
    b = b->next;
    }
}

//function that returns a lager int value
int int_compare(int a, int b)
{
    if (a < b)
        return b;
    else
        return a;
}

//function set push_cost
void    set_push_cost(t_list *a, t_list *b)
{
    int a_size;
    int b_size;

    a_size = ft_lstsize(a);
    b_size = ft_lstsize(b);
    while (a)
    {
        if (a->abovemdeian)
        {
            if (a->target_node->abovemdeian)
                a->push_cost = int_compare(a->index, a->target_node->index);
            else if (!a->target_node->abovemdeian)
                a->push_cost = int_compare(a->index, b_size - a->target_node->index);
        }
        else if (!a->abovemdeian)
        {
            if (a->target_node->abovemdeian)
                a->push_cost = int_compare(a_size - a->index, a->target_node->index);
            else if (!a->target_node->abovemdeian)
                a->push_cost = int_compare(a_size - a->index, b_size - a->target_node->index);
        }
        a = a->next;
    }
}