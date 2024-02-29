/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strutils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:33:59 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 15:39:59 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

size_t	ft_strlen(const char	*a)
{
	size_t	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*cpy;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	cpy = (char *)malloc(len + 1);
	if (!cpy)
		return (0);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!result)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = ' ';
	i = 0;
	while (i < ft_strlen(s2))
	{
		result[i + ft_strlen(s1) + 1] = s2[i];
		i++;
	}
	result[i + ft_strlen(s1) + 1] = '\0';
	return (result);
}

int	ft_strcmp(const char	*s1, const char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
