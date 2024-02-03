#include "push_swap.h"

int main(int ac, char **av)
{
    if (ac < 2)
        return (1);
    if (ac > 1)
    {
        ft_merge(&av, av);
        if (!ft_check_error(av))
        {
            ft_print_error();
            return (1);
        }
        if (ft_sort(av))
            ft_print_error();
        //function that sorts the given char ** using linked list
    }
    //there should be a code that turnes modified value to a linked list
    return (0);
}