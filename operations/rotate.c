#include "../push_swap.h"

//first noed to last index

t_list *ft_rotate(t_list *lst) 
{
    t_list *firstNode; 
    t_list *currentNode;

    firstNode = lst;
    currentNode = lst;
    while (currentNode->next != NULL)
        currentNode = currentNode->next;
    currentNode->next = firstNode;
    lst = firstNode->next;
    firstNode->next = NULL;
    return (lst);
}

void    print_rotate(t_list **lst, int stack)
{
    if (ft_lstsize(*lst) == 1 || !ft_lstsize(*lst))
        return ;
    *lst = ft_rotate(*lst);
    if (!stack)
        write(1,"ra\n",3);
    if (stack)
        write(1,"rb\n",3);
}

void    print_rr(t_list **a, t_list **b)
{
    if (ft_lstsize(*a) < 2 || ft_lstsize(*b) < 2)
        return ;
    *a = ft_rotate(*a);
    *b = ft_rotate(*b);
    write(1, "rr\n", 3);
}

void    rr_cheapest(t_list **a, t_list **b, t_list *cheapest_node)
{
    while (*b != cheapest_node->target_node && *a != cheapest_node)
        print_rr(a,b);
}