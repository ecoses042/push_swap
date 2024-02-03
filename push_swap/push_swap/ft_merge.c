#include "push_swap.h"

int ft_merge(char ***result, char **av)
{
    int count;
    char *goal;

    count = 0;
    goal = 0;
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
    while ((*result)[count]) {
        count++;
    }

    return count;
}