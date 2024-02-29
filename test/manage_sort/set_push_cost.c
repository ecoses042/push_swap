/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_push_cost.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:04:26 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 16:49:07 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	int_compare(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

void	set_push_cost(t_list *a, t_list *b)
{
	int	a_size;
	int	b_size;

	a_size = ft_lstsize(a) - a->index;
	b_size = ft_lstsize(b) - a->target_node->index;
	while (a)
	{
		if (a->abovemdeian)
		{
			if (a->target_node->abovemdeian)
				a->push_cost = int_compare(a->index, a->target_node->index);
			else if (!a->target_node->abovemdeian)
				a->push_cost = int_compare(a->index, b_size);
		}
		else if (!a->abovemdeian)
		{
			if (a->target_node->abovemdeian)
				a->push_cost = int_compare(a_size, a->target_node->index);
			else if (!a->target_node->abovemdeian)
				a->push_cost = int_compare(a_size, b_size);
		}
		a = a->next;
	}
}
