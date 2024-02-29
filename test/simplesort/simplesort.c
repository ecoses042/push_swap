/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:06:25 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:06:26 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

t_list	*ft_simplesort(t_list	*lst)
{
	t_list	*max;

	max = lst_max(lst);
	if (!ft_check_sort(lst))
	{
		if (ft_lstsize(lst) == 2)
			print_swap(&lst, 0);
		if (ft_lstsize(lst) == 3)
		{
			if (max->content == lst->content)
				print_rotate(&lst, 0);
			else if (max->content == lst->next->content)
				print_reverse_rotate(&lst, 0);
			if (lst->content > lst->next->content)
				print_swap(&lst, 0);
		}
	}
	return (lst);
}
