#include "../test.h"

size_t ft_lstsize(t_list *head)
{
    size_t i;
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

t_list *ft_swap(t_list *lst)
{
    int len;
    t_list *tmp;

    tmp = lst;
    len = ft_lstsize(tmp);
    tmp = lst->next;
    lst->next = lst->next->next;
    tmp->next = lst;
    lst = tmp; 
    return (tmp);
}


//if ss is used, call this function twice with stack = 2 and =3
void    print_swap(t_list **lst, int stack)
{
    if (ft_lstsize(*lst) == 1 || !ft_lstsize(*lst))
        return ;
    if (ft_lstsize(*lst) >= 2)
    {
        *lst = ft_swap(*lst);
        if (stack == 0)
            write(1,"sa\n",3);
        if (stack == 1)
            write(1,"sb\n",3);
    }
}



