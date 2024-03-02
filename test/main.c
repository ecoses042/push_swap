#include "test.h"

int main(int ac, char **av)
{
    char    **result;

    result = NULL;
    if (ac < 2)
        return (1);
    if (!ft_merge(&result, av + 1))
    {
        ft_print_error(result, 0);
        return (1);
    }
    if (!ft_check_error(result))
    {
        ft_print_error(result, 1);
        return (1);
    }
    if (init_sort(result))
        ft_print_error(result, 0);
    else if (!init_sort(result))
    {
        ft_print_error(result, 1);
        return (0);
    }
    return (0);
}