#include "main.h"

int	main(int argc, char **argv)
{
	(void)argv;
	/***CHARTYPE***/
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
	int	(*_isupper)(int);
	/***STRING***/
//	int	(*_index)(const char *, int);
//	int	(*_rindex)(const char *, int);
//	char	(*_strchr)(const char *, int);
//	char	(*_strchrset_exclude)(const char *, const char *);
//	char	(*_strcpy)(char *, const char *);
//	char	(*_strdup)(const char *);
//	size_t	(*_strlen)(const char *);
//	size_t	(*_strlen_addr)(char *, char *);
//	int	(*_strnchar)(const char *, int);
//	char	(*_strncpy)(char *, const char *, size_t n);
//	char	(*_strrchr)(const char *, int);
//	char	(*_strrchrset_exclude)(const char *, const char *);
//	char	(*_strtrim)(const char *);
	/***CONVERT***/
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
	//char s2[] = "Q";
	//char s2[] = " R";
	//char s2[] = "P ";
	//char s2[] = "\t \n";
	//char s2[] = "\t1 2\n";
	char s2[] = " ";
	printf("BEFORE: %c%s%c\n", '>', s2, '<');
	char *s3 = ft_strtrim(s2);
	printf("AFTER: pointer = %p\n%c%s%c\n", s3, '>', s3, '<');
	//int	res = ft_strnchar(s3, ' ');
	//printf("strnchar = %d\n", res);
	//long	test = ft_strchr(s3, ' ') - s3;
	//printf("test int : %ld\n", test);
	//s3 = ft_strchr(s3, ' ');
	//printf("AFTER: %c%s%c\n", '>', s3, '<');

	//char	s4[] = "test";
	//const char	s5[] = "YO";
	//const char	*s5 = NULL;
	//strncpy(s4, s5, 4);
	//printf("strncpy: %s\n", s4);

	//char	s6[] = "test";
	//ft_strncpy(s6, s5, 4);
	//printf("ft_strncpy: %s\n", s6);

	char	**sp1 = ft_split(s3, ' ');
	int	k = 0;
	while (sp1[k] != NULL)
	{
		printf("split string : %s\n", sp1[k]);
		k++;
	}

	/***PRINTF***/

	/***PUT***/

	/***STRING***/

	return (0);
}
