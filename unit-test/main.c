#include "main.h"

int	main(int argc, char **argv)
{
	(void)argv;
	int (*_isalnum)(int);
	int (*_isalpha)(int);
	int (*_isascii)(int);
	int (*_isblank)(int);
	int (*_isdigit)(int);
	int (*_islower)(int);
	int (*_ispolarity)(int);
	int (*_isprint)(int);
	int (*_ispunct)(int);
	int (*_isspace)(int);
	int (*_isupper)(int);
//	int	(*_atoi)(const char *);
//	long	(*_atol)(const char *);
//	long long	(*_atoll)(const char *);

	if (argc != 2)
	{
		ft_printf(2, "%s\n", strerror(EINVAL));
		return (1);
	}
	if (strcmp("0", argv[1]) >= 0)
	{
		_isalnum = &isalnum;
		_isalpha = &isalpha;
		_isascii = &isascii;
		_isblank = &isblank;
		_isdigit = &isdigit;
		_islower = &islower;
		_ispolarity = NULL;
		_isprint = &isprint;
		_ispunct = &ispunct;
		_isspace = &isspace;
		_isupper = &isupper;
	}
	else if (strcmp("1", argv[1]) >= 0)
	{
		_isalnum = &ft_isalnum;
		_isalpha = &ft_isalpha;
		_isascii = &ft_isascii;
		_isblank = &ft_isblank;
		_isdigit = &ft_isdigit;
		_islower = &ft_islower;
		_ispolarity = &ft_ispolarity;
		_isprint = &ft_isprint;
		_ispunct = &ft_ispunct;
		_isspace = &ft_isspace;
		_isupper = &ft_isupper;
	}
	else
	{
		ft_printf(2, "%s\n", strerror(EINVAL));
		return (2);
	}

	/***CHARTYPE***/

	/***CONVERT***/
	//char s[] = "-21474836491";
	//char s[] = "9223372036854775807";
	char s[] = "-20";
	int ori = atoi(s);
	int mft = ft_atoi(s);
	printf("%d\n", ori);
	printf("%d\n", mft);

	//char s2[] = "\tTest    \v\tft    \ttrim   ";
	//char s2[] = "Test";
	//char s2[] = "";
	char s2[] = "Q";
	printf("BEFORE: %c%s%c\n", '>', s2, '<');
	char *s3 = ft_strtrim(s2);
	printf("AFTER: %c%s%c\n", '>', s3, '<');
	free(s3);

	/***PRINTF***/

	/***PUT***/

	/***STRING***/

	return (0);
}
