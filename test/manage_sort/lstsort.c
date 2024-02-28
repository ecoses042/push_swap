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
#include <stdio.h>
void    print_list(t_list *lst)
{
    t_list *tmp;
    tmp = lst;
    while (tmp)
    {
        //printf("index:%d\n",tmp->index);
        printf("content:%d\n",tmp->content);
        //printf("push_cost:%d\n",tmp->push_cost);
        //printf("target_node:%d\n", tmp->target_node->content);
        printf("\n");
        tmp = tmp->next;
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
    i = 1;
    while (content[i])
    {
        ft_lstadd_back(&a,ft_lstnew(ft_atoi(content[i])));
        i++;
    }
    if (!a)
        return flag;
    printf("this is list before sorting:\n");
    print_list(a);
    if (ft_lstsize(a) <= 3)
        a = ft_simplesort(a);
    else
        a = ft_complexsort(a);
    flag = ft_check_sort(a);
    printf("this is list sorted:\n");
    print_list(a);
    free_list(a);
    return flag;
}


