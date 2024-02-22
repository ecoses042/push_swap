#include "../test.h"

int ft_count(char **str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_merge(char ***result, char **av)
{
    char *goal;

    goal = NULL;
    while (*av)
    {
        if (!goal)
            goal = ft_strdup(*av);
        else
        {
            char *temp = ft_strjoin(goal, *av);
            free(goal);
            goal = temp;
        }
        av++;
    }
    *result = ft_split(goal, ' ');
    free(goal);

    return (ft_count(*result));
}

