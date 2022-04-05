#include "../include/ft_string.h"

char	*ft_strchrset_exclude(const char *s, const char *chrset)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(chrset, s[i]) == NULL)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
