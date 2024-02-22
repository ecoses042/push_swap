#include "../test.h"

//test function delete it after completition

void free_list(t_list *head)
{
    t_list *tmp;

    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp);        
    }
}

//3개보다 더 많은 원소들을 소팅해야 할 때
void    ft_complex_sort(t_list  *a,t_list   *b)
{
    while (ft_lstsize(a) > 3)
    {
        ft_set_list(a,b);
        a = push_atob(a,b, find_min_cost(a));
        //figure min push cost with min index
        //function that returns new a head and b head after the push of min push_cost node
            //call function for a and later functin for b.
    }
    a = ft_simplesort(a);
    while (b)
    {
        ft_set_list(a,b);
        //code that will move stack b to a according to push cost
    }
}

bool   ft_sort_list(t_list *a)
{
    t_list  *b;

    b = NULL;
    if (ft_lstsize(a) <= 3)
        a = ft_simplesort(a);
    else
    {
        ft_pushtob(&a, &b, true);
        if (ft_lstsize(a) > 3)
            ft_pushtob(&a, &b, true);
        if (ft_lstsize(b) == 2 && b->content < b->next->content)
            b = print_swap(b, 1);
        //ft_complex_sort(a,b);
    }
    return true;
}

bool    init_sort(char    **content)
{
    size_t  i;
    t_list  *a;
    bool    flag;

    flag = false;
    a = NULL;
    i = 1;
    while (content[i])
    {
        ft_lstadd_back(&a,ft_lstnew(ft_atoi(content[i])));
        i++;
    }
    if (!a)
        return flag;
    flag = ft_sort_list(a);
    free_list(a);
    return flag;
}


