/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:26:37 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:28:47 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(int ac, char **av)
{
	char	**result;

	if (ac < 2)
		return (1);
	if (!ft_merge(&result, av + 1))
		return (1);
	if (!ft_check_error(result))
	{
		ft_print_error();
		return (1);
	}
	if (init_sort(av))
		return (0);
	else
		ft_print_error();
	return (1);
}
