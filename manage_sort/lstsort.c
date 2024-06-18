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

//function that sends list to simple or complex sort depending on their size
bool    init_sort(char    **content)
{
    size_t  i;
    t_list  *a;
    bool    flag;

    flag = false;
    a = NULL;
    i = 0;
    while (content[i])
    {
        ft_lstadd_back(&a,ft_lstnew(ft_atoi(content[i])));
        i++;
    }
    if (!a)
        return flag;
    if (ft_lstsize(a) <= 3)
        a = ft_simplesort(a);
    else
        a = ft_complexsort(a);
    flag = ft_check_sort(a);
    free_list(a);
    return flag;
}


