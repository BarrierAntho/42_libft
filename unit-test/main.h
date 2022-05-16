#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <errno.h>
# include <ctype.h>

# include "../libft/include/ft_libft.h"

void	chartype_is(int(*f)(int), int *input);
void	memory_cmp(int(*f)(const void *, const void *, size_t), const void *input1,
			const void *input2, size_t n);

#endif
