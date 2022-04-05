#include "../include/ft_string.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int	i;

	i = 0;
	while (dst[i] && src[i] && n > 0)
	{
		dst[i] = src[i];
		i++;
		n--;
	}
	if (src[i] == '\0')
		dst[i] = '\0';
	return (dst);
}
