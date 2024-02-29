/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mintotop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:22:38 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:23:32 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	rotate_min_to_top(t_list	**a)
{
	while ((*a)->content != lst_min(*a)->content)
	{
		if (lst_min(*a)->abovemdeian)
			print_rotate(a, 0);
		else if (!(lst_min(*a)->abovemdeian))
			print_reverse_rotate(a, 0);
	}
}
