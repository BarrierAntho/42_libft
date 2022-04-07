#include "../include/ft_chartype.h"

int	ft_isxdigit(int c)
{
	if (ft_isdigit(c) == 1 || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))
		return (1);
	else
		return (0);
}
