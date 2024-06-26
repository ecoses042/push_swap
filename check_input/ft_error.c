#include "../test.h"
//function that checkes for duplicates. return 0 if duplicates exits
bool ft_check_dup(char **str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (ft_strcmp(str[i], str[j]) == 0) 
                return false;
            j++;
        }
        i++;
    }
    
    return true;
}

//return 0 if error, 1 if no error
bool ft_check_flow(char *str)  //atoi 변형해서 사용, 변형했을 때 숫자 넘어가거나 변형이 안되면 0 리턴
{
    int i;

    i = 0;
    
    while (str[i])
    {
        if ((str[i] < '0'|| str[i] > '9') && str[i] != '-')
            return false;
        i++;
    }
    if (!ft_atol(str))
        return false;
    return true;
}

//return 0 if error, 1 if no error
bool ft_check_error(char **str)
{
    int i;

    i = 0;
    if (!str)
        return false;
    if (!ft_check_dup(str))
        return false;
    while (str[i])
    {
        if (!ft_check_flow(str[i]))
            return false;
        i++;
    }
    return true;
}