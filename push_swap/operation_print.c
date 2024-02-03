#include "push_swap.h"

void print_swap(t_list *lst, int stack)
{
    ft_swap(lst);
    if (stack == 0)
        write(1,"sa\n",3);
    if (stack == 1)
        write(1,"sb\n",3);
}

void print_ss(t_list *a, t_list *b)
{
    ft_swap(a);
    ft_swap(b);
    write(1,"ss\n",3);
}

void    print_push(t_list *a, t_list *b, int stack)
{
    if (stack == 0)
    {
        ft_pusha(a,b);
        write(1,"pa\n",3);
    }
    if (stack == 1)
    {
        ft_pushb(a,b);
        write(1,"pb\n",3);
    }
}

void    print_rotate(t_list *lst, int stack)
{
    ft_rotate(lst);
     if (stack == 0)
        write(1,"ra\n",3);
    if (stack == 1)
        write(1,"rb\n",3);
}

void    print_rr(t_list *a, t_list *b)
{
    ft_rotate(a);
    ft_rotate(b);
    write(1,"rr\n",3);
}


void    print_reverse_rotate(t_list *lst, int stack)
{
    ft_reverse_roatete(lst);
     if (stack == 0)
        write(1,"rra\n",3);
    if (stack == 1)
        write(1,"rrb\n",3);
}

void    print_rrr(t_list *a, t_list *b)
{
    ft_reverse_rotate(a);
    ft_reverse_rotate(a);
    write(1,"rrr\n",4);
}