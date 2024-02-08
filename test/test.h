#ifndef test_h
#define test_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <unistd.h>

typedef struct s_list
{
    int content;
    int index;
    int push_cost;
    bool    abovemdeian;
    struct s_list *target_node;
    struct s_list *next;
}   t_list;

t_list	*ft_lstnew(int new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list *print_swap(t_list *lst, int stack);
void    print_list(t_list *lst);

#endif