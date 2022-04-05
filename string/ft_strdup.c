#include "../include/ft_string.h"

char	*ft_strdup(const char *s)
{
	char	*new;

	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	new = ft_strcpy(new, (char *)s);
	return (new);
}
