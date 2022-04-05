#include "../include/ft_string.h"

char	*ft_strrchrset_exclude(const char *s, const char *chrset)
{
	int	i;

	i = (int)ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (ft_strchr(chrset, s[i]) == NULL)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
