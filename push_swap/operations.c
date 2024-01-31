#include "push_swap.h"

//function that swaps first and first second element on the list
bool ft_swap(t_list **lst) {
    int len;
    t_list *tmp;

    tmp = NULL;
    len = ft_lstsize(*lst);
    if (len < 2)
        return false;
    tmp = (*lst)->next;
    (*lst)->next = (*lst)->next->next;
    tmp->next = *lst;
    *lst = tmp;
    return true;
}

//function that passes lst b node to lst a node
void ft_pusha(t_list **a, t_list **b) 
{
    if (*b == NULL)
        return;

    t_list *tmp = *b;
    *b = (*b)->next;

    tmp->next = *a;
    *a = tmp;
}

//function that adds a lst node to b lst
void ft_pushb(t_list **a, t_list **b) 
{
    if (*a == NULL)
        return;

    t_list *tmp = *a;
    *a = (*a)->next;

    tmp->next = *b;
    *b = tmp;
}

//function that swaps first node to be last
void ft_rotate(t_list **lst) 
{
    if (ft_lstsize(*lst) == 1 || !ft_lstsize(*lst))
        return;

    t_list *firstNode; 
    t_list *currentNode;

    firstNode = *lst;
    currentNode = *lst;
    while (currentNode->next != NULL) {
        currentNode = currentNode->next;
    }
    currentNode->next = firstNode;
    *lst = firstNode->next;
    firstNode->next = NULL;
}

//function that swaps last node to be first
void ft_reverse_rotate(t_list **lst) 
{
    t_list *lastNode;
    t_list *secondtolastNode;

    lastNode = *lst;
    secondtolastNode = *lst;
    if (ft_lstsize(*lst) == 1 || !ft_lstsize(*lst))
        return;
    while (lastNode->next)
    {
        secondtolastNode = lastNode;
        lastNode = lastNode->next;
    }
    lastNode->next = *lst;
    *lst = lastNode;
    secondtolastNode->next = NULL;
    return ;
}