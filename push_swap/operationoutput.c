#include "push_swap.h"
//0 for testing
//1 for a stack
//2 for b stack
//3 for both stackes

void ft_swap_print(t_list **lst1, t_list **lst2, int mode)
{
    if (mode == 0 && ft_swap(&lst1))
        return ;
    if (mode == 1 && ft_swap(&lst1))
        write(1,"sa\n",3);
    if (mode == 2 && ft_swap(&lst2))
        write(1,"sb\n",3);
    if (mode == 3 && ft_swap(&lst1) && ft_swap(&lst2))
        write(1,"ss\n",3);
}

//1 for test push b
void ft_push_print(t_list **lst1, t_list **lst2, int mode)
{
    if (mode == 0 && ft_pusha(&lst1, &lst2))
        return ;
    if (mode == 1 && ft_pushb(&lst1, &lst2))
        return ;
    if (mode == 2 && ft_pusha(&lst1, &lst2))
        write(1,"pa\n",3);
    if (mode == 3 && ft_pushb(&lst1, &lst2))
        write(1,"pb\n",3);
}

void ft_rotate_print(t_list **lst1, t_list **lst2, int mode)
{
    if (mode == 0 && ft_rotate(&lst1))
        return ;
    if (mode == 1 && ft_rotate(&lst1))
        write(1,"ra\n",3);
    if (mode == 2 && ft_rotate(&lst2))
        write(1,"rb\n",3);
    if (mode == 3 && ft_rotate(&lst1) && ft_rotate(&lst2))
        write(1,"rr\n",3);
}

void ft_reverse_rotate_print(t_list **lst1, t_list **lst2, int mode)
{
    if (mode == 0 && ft_reverse_rotate(&lst1))
        return ;
    if (mode == 1 && ft_reverse_rotate(&lst1))
        write(1,"rra\n",3);
    if (mode == 2 && ft_reverse_rotate(&lst2))
        write(1,"rrb\n",3);
    if (mode == 3 && ft_swap(&lst1) && ft_reverse_rotate(&lst2))
        write(1,"rrr\n",3);
}