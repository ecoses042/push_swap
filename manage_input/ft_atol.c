#include "../push_swap.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || \
			c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

bool	ft_check_atol_exception(const char *str, long long nbr)
{
	size_t	i;

	i = 0;
	while ((str[i]) && ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
		i++;
	if (!str[i])
		return false;
	while ((str[i]) && (str[i] >= '0') && (str[i] <= '9'))
		i++;
	if (str[i] || nbr > 2147483647 || nbr < -2147483648)
		return false;
	return true;
}
//오버,언더플로우 처리
//스트링의 마지막에 다른 기호가 추가되었을 때 걸려야됨(14-같은거)
bool	ft_atol(const char *str)
{
	long	long	nbr;
	int	sign;
	size_t	i;

	nbr = 0;
	sign = 1;
	i = 0;
	while ((str[i]) && ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((str[i]) && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	nbr = sign*nbr;
	return (ft_check_atol_exception(str,nbr));
}