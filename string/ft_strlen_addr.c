#include "../include/ft_string.h"

size_t	ft_strlen_addr(char *start, char *end)
{
	if (!start || !end)
		return (0);
	else if (start > end)
		return (0);
	else if (start == end)
		return (1);
	else
		return ((size_t)(end - start + 1));
}
