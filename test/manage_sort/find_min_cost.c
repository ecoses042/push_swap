/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_cost.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:40:58 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:41:58 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

t_list	*find_min_cost(t_list	*lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->push_cost == 0)
			return (tmp);
		if (lst->push_cost > tmp->push_cost)
			lst = tmp;
		tmp = tmp->next;
	}
	return (lst);
}
