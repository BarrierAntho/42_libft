#include "../include/ft_string.h"

char	**ft_split(const char *s, int c)
{
	char	**ptr;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * ((ft_strnchar(s, ' ') + 1) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j])
	{
		if (ft_strchr(s, c))
			j = ft_strchr(s, c) - &s[j];
		else
			j = ft_strlen(&s[j]);
		ptr[i] = ft_strndup(&s[i], j); 
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
