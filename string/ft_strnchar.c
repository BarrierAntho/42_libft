#include "../include/ft_string.h"

int	ft_strnchar(const char *s, int c)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			res++;
		i++;
	}
	return (res);
}
