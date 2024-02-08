#include "test.h"


void    print_list(t_list *lst)
{
    t_list *tmp;
    tmp = lst;
    while (tmp)
    {
        printf("content:%d\n",tmp->content);
        //printf("index:%d\n",tmp->index);
        //printf("push_cost:%d\n",tmp->push_cost);
        printf("\n");
        tmp = tmp->next;
    }
}


int main()
{
    t_list *lst;
    t_list *tmp;

    lst = NULL;
    for (int i = 0; i<= 0; i++)
    {
        tmp =  ft_lstnew(i);
        ft_lstadd_back(&lst,tmp);
    }
    printf("before:\n");
    print_list(lst);
    printf("list after the operation:\n");
    lst = print_swap(lst,0);
    print_list(lst);
}