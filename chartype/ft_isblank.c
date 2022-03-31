#include "../include/ft_chartype.h"

int	ft_isblank(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	else
		return (0);
}
