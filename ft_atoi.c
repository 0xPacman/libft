#include "libft.h"

int		ft_atoi(const char *str)
{
	long sum;
	size_t sign;
	size_t i;

	sum = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
	}
	while (ft_isdigit(str[i]))
	{
		sum = sum * 10 + str[i] - 48;
		i++;
	}
	return ((int)(sum * sign));
}
