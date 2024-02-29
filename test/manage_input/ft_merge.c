/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:30:27 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:32:22 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	ft_count(char	**str)
{
	int	i;

	i = 0;
	while (str[i])
			i++;
	return (i);
}

int	ft_merge(char	***result, char	**av)
{
	char	*goal;

	goal = NULL;
	while (*av)
	{
		if (!goal)
			goal = ft_strdup(*av++);
		else
		{
			goal = ft_strjoin(goal, " ");
			goal = ft_strjoin(goal, *av++);
		}
	}
	*result = ft_split(goal, ' ');
	free (goal);
	return (ft_count(*result));
}
