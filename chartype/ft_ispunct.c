#include "../include/ft_chartype.h"

int	ft_ispunct(int c)
{
	if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@')
		|| (c >= '[' && c <= '_') || c == '`'
		|| (c >= '{' && c <= '~'))
		return (1);
	else
		return (0);
}
