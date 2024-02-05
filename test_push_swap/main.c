#include "push_swap.h"

/*int main(int ac, char **av)
{
    if (ac < 2)
        return (1);
    if (!ft_merge(&av, av))
        return (1);
    if (!ft_check_error(av))
    {
        ft_print_error();
        return (1);
    }
    if (ft_sort(av))
        ft_print_error();
    return (0);
}*/

//main function for test code
#include <stdio.h>

int main()
{
    char **result;
    char *av[] = {"2","1","3",NULL};
    ft_merge(&result,av);
    int i = 0;
    while (result[i])
    {
        printf("%s",result[i]);
        i++;
    }
    return (0);
}