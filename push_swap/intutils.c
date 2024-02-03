#include "push_swap.h"

int ft_abs(int  num)
{
    if (num > -1)
        return (num);
    else
        return (-1 * num);
}

int ft_max(int a, int b)
{
    if (a == b)
        return (a);
    if (a <b)
        return (b);
    else
        return (a);
}