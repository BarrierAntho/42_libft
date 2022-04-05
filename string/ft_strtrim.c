#include "../include/ft_string.h"

char	*ft_strtrim(const char *s)
{
	char	*new;
	char	*start;
	char	*end;
	int		j;

	if (!s)
		return (NULL);
	start = ft_strchrset_exclude(s, "\t\n\v\f\r ");
	end = ft_strrchrset_exclude(s, "\t\n\v\f\r ");
	new = (char *)malloc(sizeof(char) * (ft_strlen_addr(start, end) + 1));
	if (!new)
		return (NULL);
	j = 0;
	while (start && end && start <= end)
	{
		new[j] = *start;
		if (ft_isspace(*start))
		{
			new[j] = ' ';
			start++;
			while (ft_isspace(*start))
				start++;
		}
		else
			start++;
		j++;
	}
	new[j] = '\0';
	return (new);
}
