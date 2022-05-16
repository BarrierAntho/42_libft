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

/***MEMORY***/
void	memory_cmp(int(*f)(const void *, const void *, size_t), const void *input1,
			const void *input2, size_t n);

/***STRING***/
void	string_strncmp(int(*f)(const char *, const char *, size_t),
		char **s1, char **s2, int *input);
void	string_strstr(char *(*f)(const char *, const char *),
		char **s1, char **s2);

#endif
