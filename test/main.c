#include "test.h"

int main(int ac, char **av)
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
    if (init_sort(av))
        return (0);
    else
        ft_print_error();
    return (1);
}


/*int main(int    ac, char **av)
{
    t_list *lst;
    t_list *tmp;
    t_list  *lst2;


    int test[8] = {8,7,6,5,4,3,2,1};
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
    lst = ft_complexsort(lst);
    //testing complex sort with lst
    printf("this is after complex sort:\n");
    print_list(lst);
    return (0);
}*/