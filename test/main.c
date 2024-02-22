#include "test.h"


#include <stdio.h>

/*int main(int ac, char **av)
{
    char    **result;


    if (ac < 2)
        return (1);
    if (!ft_merge(&result, av + 1))
        return (1);
    if (!ft_check_error(result))
    {
        ft_print_error();
        return (1);
    }
    init_sort(av);
    return (0);
}*/
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

int main(int    ac, char **av)
{
    t_list *lst;
    t_list *tmp;
    t_list  *lst2;


    int test[8] = {1,2,3,4,5,6,7,8};
    int test2[3] = {1,5,2};
    lst2 = NULL;
    lst = NULL;
    for (int i = 0; i<= 7; i++)
    {
        tmp =  ft_lstnew(test[i]);
        ft_lstadd_back(&lst,tmp);
    }
    for (int i = 0; i<= 2; i++)
    {
        tmp =  ft_lstnew(test2[i]);
        ft_lstadd_back(&lst2,tmp);
    }
    printf("stack a:\n");
    //printf("this is simple sort:\n");
    //lst = ft_simplesort(lst);
    //print_list(lst);
    //printf("this is pass function:\n");
    //ft_pushtob(&lst,&lst2,true);
    //print_list(lst);
    //printf("this is new list:\n");
    //print_list(lst2);
    printf("%d\n",ft_check_sort(lst2));
    print_list(lst2);
    printf("this is after sort:\n");
    lst2 = ft_simplesort(lst2);
    print_list(lst2);
    return (0);
}