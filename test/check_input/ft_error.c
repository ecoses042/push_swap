/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:06:55 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:13:03 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

//function that checkes for duplicates. return 0 if duplicates exits
bool	ft_check_dup(char	**str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_strcmp(str[i], str[j]) == 0)
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	ft_check_flow(char *str)
{
	int		i;
	long	intcheck;

	intcheck = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
			return (false);
		i++;
	}
	intcheck = ft_atoi(str);
	if (intcheck < INT_MIN || intcheck > INT_MAX)
		return (false);
	return (true);
}

bool	ft_check_error(char	**str)
{
	int	i;

	i = 0;
	if (!str)
		return (false);
	if (!ft_check_dup(str))
		return (false);
	while (str[i])
	{
		if (!ft_check_flow(str[i]))
			return (false);
		i++;
	}
	return (true);
}
