#include "main.h"

void	chartype_is(int(*f)(int), int *input)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (input[i])
	{
		printf("input: %c\n", input[i]);
		res = (*f)(input[i]);
		printf("res: %d\n", res);
		i++;
		printf("%s\n", SEP_S);
	}
}
