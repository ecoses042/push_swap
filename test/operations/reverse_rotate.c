#include "../test.h"

//last to first change 그러면 바뀐 첫번째 원소를 리턴해줘야 되겠네
t_list *ft_reverse_rotate(t_list *lst)
{
    t_list *lastNode;
    t_list *secondtolastNode;

    lastNode = lst;
    secondtolastNode = lst;
    while (lastNode->next)
    {
        secondtolastNode = lastNode;
        lastNode = lastNode->next;
    }
    lastNode->next = lst;
    lst = lastNode;
    secondtolastNode->next = NULL;
    return (lst);
}

void    print_reverse_rotate(t_list **lst, int stack)
{
    if (ft_lstsize(*lst) < 2)
        return ;
    *lst = ft_reverse_rotate(*lst);
    if (stack == 0)
        write(1,"rra\n",4);
    if (stack == 1)
        write(1,"rrb\n",4);
}

void    print_rrr(t_list **a, t_list **b)
{
    if (!a || !b)
        return ;
    write(1,"rrr\n",4);
    *a = ft_reverse_rotate(*a);
    *b = ft_reverse_rotate(*b);
}

void    rrr_cheapest(t_list **a, t_list **b, t_list *cheapest_node)
{
    while (*b != cheapest_node->target_node && *a != cheapest_node)
        print_rrr(a,b);
}