#include "../include/ft_convert.h"

long	ft_atol(const char *s)
{
	unsigned long long	n;
	int					sign;
	int					i;

	n = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	if (ft_ispolarity(s[i]))
	{
		if (s[i] == '-')
			sign *= (-1);
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		n = (n * 10) + (unsigned long long)(s[i] - '0');
		i++;
	}
	return (sign * (long)n);
}
