#include "../include/ft_memory.h"

char	*ft_free_ptrptr_str(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}
