
#include "../test.h"

void    ft_free(char **str)
{
    int i;

    i = 0;
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}

void ft_print_error(char **str, int mode)
{
    if (mode == 1)
    {
        ft_free(str);
        write(2,"Error\n",6);
    }
    else if (mode == 0)
    {
        ft_free(str);
    }
}