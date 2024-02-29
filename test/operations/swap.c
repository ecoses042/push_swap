/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:05:21 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:05:27 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

size_t	ft_lstsize(t_list *head)
{
	size_t	i;
	t_list	*tmp;

	i = 0;
	tmp = head;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

t_list	*ft_swap(t_list	*lst)
{
	t_list	*tmp;

	tmp = lst;
	tmp = lst->next;
	lst->next = lst->next->next;
	tmp->next = lst;
	lst = tmp;
	return (tmp);
}

void	print_swap(t_list **lst, int stack)
{
	if (ft_lstsize(*lst) == 1 || !ft_lstsize(*lst))
		return ;
	if (ft_lstsize(*lst) >= 2)
	{
		*lst = ft_swap(*lst);
		if (stack == 0)
			write(1, "sa\n", 3);
		if (stack == 1)
			write(1, "sb\n", 3);
	}
}
