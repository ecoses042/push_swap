/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmin_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:06:16 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:06:18 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

t_list	*lst_min(t_list	*lst)
{
	t_list	*tmp;
	t_list	*min;

	if (!lst)
		return (NULL);
	tmp = lst->next;
	min = lst;
	while (tmp)
	{
		if (min->content > tmp->content)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

t_list	*lst_max(t_list	*lst)
{
	t_list	*max;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	max = lst;
	tmp = lst->next;
	while (tmp)
	{
		if (max->content < tmp->content)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}
