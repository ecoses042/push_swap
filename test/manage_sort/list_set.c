/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:45:51 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:58:52 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	set_index(t_list	*lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}

void	set_above_median(t_list	*lst)
{
	int		len;
	t_list	*tmp;

	if (!lst)
		return ;
	len = ft_lstsize(lst);
	tmp = lst;
	while (tmp)
	{
		if (len / 2 >= tmp->index)
			tmp->abovemdeian = true;
		else
			tmp->abovemdeian = false;
		tmp = tmp->next;
	}
}

void	set_target_node_a(t_list	*a, t_list	*b)
{
	t_list	*tmp;
	t_list	*target;
	long	flag;

	while (a)
	{
		tmp = b;
		flag = LONG_MIN;
		while (tmp)
		{
			if (a->content > tmp->content && tmp->content > flag)
			{
				flag = tmp->content;
				target = tmp;
			}
			tmp = tmp->next;
		}
		if (flag == LONG_MIN)
			a->target_node = lst_max(b);
		else
			a->target_node = target;
		a = a->next;
	}
}

void	set_target_node_b(t_list	*a, t_list	*b)
{
	t_list	*tmp;
	t_list	*target;
	long	flag;

	while (b)
	{
		tmp = a;
		flag = LONG_MAX;
		while (tmp)
		{
			if (b->content < tmp->content && tmp->content < flag)
			{
				flag = tmp->content;
				target = tmp;
			}
			tmp = tmp->next;
		}
		if (flag == LONG_MAX)
			b->target_node = lst_min(a);
		else
			b->target_node = target;
		b = b->next;
	}
}
