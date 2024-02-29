/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_for_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:24:11 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:25:43 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

//function that will rotate or reverse rotate when the abovemedian value
//differs between target node and current node
void	prep_for_push(t_list	**lst, t_list	*cheapest_node, bool	stack)
{
	while (*lst != cheapest_node)
	{
		if ((*lst)->abovemdeian)
			print_rotate(lst, stack);
		else if ((*lst)->abovemdeian)
			print_reverse_rotate(lst, stack);
	}
}
