/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:13:15 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:15:56 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	ft_print_error(void)
{
	write(2, "Error\n", 6);
}
