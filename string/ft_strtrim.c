#include "../include/ft_string.h"

static size_t	ft_strtrim_len(const char *s, size_t *start)
{
	size_t	res;
	size_t	len_s;

	res = 0;
	*start = 0;
	len_s = ft_strlen(s);
	if ((int)len_s <= 0)
		return (0);
	while (s[*start] && ft_isspace(s[*start]))
		*start = *start + 1;
	while (s[len_s] && ft_isspace(s[len_s]))
		len_s--;
	res = len_s - *start + 1;
	return (res);
}

char	*ft_strtrim(const char *s)
{
	char	*new;
	size_t	i;
	size_t	len_s;
	int		j;

	len_s = ft_strtrim_len(s, &i);
	new = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!new)
		return (0);
	j = 0;
	while (i < len_s)
	{
		new[j] = s[i];
		if (ft_isspace(s[i]))
		{
			new[j] = ' ';
			i++;
			while (ft_isspace(s[i]))
				i++;
		}
		else
			i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}
