#include "main.h"
#include <limits.h>

int	main(int argc, char **argv)
{
	(void)argv;
	/***CHARTYPE***/
	int	(*_isalnum)(int);
	int	(*_isalpha)(int);
	int	(*_isascii)(int);
	int	(*_isblank)(int);
	int	(*_isdigit)(int);
	int	(*_islower)(int);
	int	(*_ispolarity)(int);
	int	(*_isprint)(int);
	int	(*_ispunct)(int);
	int	(*_isspace)(int);
	int	(*_isupper)(int);
	/***CONVERT***/
//	int	(*_atoi)(const char *);
//	long	(*_atol)(const char *);
//	long long	(*_atoll)(const char *);
	/***MEMORY***/
	int	(*_memcmp)(const void *, const void *, size_t);
	/***PRINTF***/
	int	(*_dprintf)(int, const char *, ...);	
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
	int	(*_strncmp)(const char *, const char *, size_t);

	if (argc != 2)
	{
		printf("%s\n", strerror(EINVAL));
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
		_memcmp = &memcmp;
		_dprintf = &dprintf;
		_strncmp = &strncmp;
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
		_memcmp = &ft_memcmp;
		_dprintf = &ft_dprintf;
		_strncmp = &ft_strncmp;
	}
	else
	{
		printf("%s\n", strerror(EINVAL));
		return (2);
	}

	/***CHARTYPE***/
	int	c[] = {'a', '1', '\n', ' ', 'Z', '!', '-', '\\', 0};
	int	i[] = {2, 1, 42, -1, -100, INT_MAX, INT_MIN, 0};
	long long int	lli[] = {0, 1, 42, -1, -100, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MIN, LLONG_MIN};
	char	*s1[] = {"test", "prout", NULL};
	char	*s2[] = {"test", "prout", NULL};


	printf("isalnum\n");
	chartype_is(_isalnum, c);
	printf("%s\n", SEP_P);
	/******************************/
	printf("isalpha\n");
	chartype_is(_isalpha, c);
	printf("%s\n", SEP_P);
	/******************************/
	printf("isascii\n");
	chartype_is(_isascii, c);
	printf("%s\n", SEP_P);
	/******************************/
	printf("isblank\n");
	chartype_is(_isblank, c);
	printf("%s\n", SEP_P);
	/******************************/
	printf("isdigit\n");
	chartype_is(_isdigit, c);
	printf("%s\n", SEP_P);
	/******************************/
	printf("islower\n");
	chartype_is(_islower, c);
	printf("%s\n", SEP_P);
	/******************************/
	printf("isprint\n");
	chartype_is(_isprint, c);
	printf("%s\n", SEP_P);
	/******************************/

	/***MEMORY***/
	//printf("memcmp\n");
	//char test[] = "yo hi hey hell bonjour hello";
	//char test2[] = "hello";
	//memory_cmp(_memcmp, (const void *)test, (const void *)test2, sizeof(test));

	/***PRINTF***/
	printf("dprintf\n");
	_dprintf(1, "Test:\nc: %c\ns: %s\np: %p\nu: %u\nx: %x\nX: %X\n%%: %%\n",
			c[0], s1[0], s1[0], lli[0], lli[0], lli[0]);
	printf("%s\n", SEP_P);
	_dprintf(1, "Test:\nc: %c\ns: %s\np: %p\nu: %u\nx: %x\nX: %X\n%%: %%\n",
			c[3], s1[1], s1[1], lli[5], lli[5], lli[5]);
	printf("%s\n", SEP_P);
	_dprintf(1, "Test:\nc: %c\ns: %s\np: %p\nu: %u\nx: %x\nX: %X\n%%: %%\n",
			c[3], NULL, NULL, lli[5], lli[5], lli[5]);
	printf("%s\n", SEP_P);

	/***CONVERT***/
	//char s[] = "-21474836491";
	//char s[] = "9223372036854775807";
	//char s[] = "-20";
	//int ori = atoi(s);
	//int mft = ft_atoi(s);
	//printf("%d\n", ori);
	//printf("%d\n", mft);

	//char s2[] = "\tTest    \v\tft    \ttrim   ";
	//char s2[] = "Test";
	//char s2[] = "";
	//char s2[] = "Q";
	//char s2[] = " R";
	//char s2[] = "P ";
	//char s2[] = "\t \n";
	//char s2[] = "\t1 2\n";
	//char s2[] = " ";
	//printf("BEFORE: %c%s%c\n", '>', s2, '<');
	//char *s3 = ft_strtrim(s2);
	//printf("AFTER: pointer = %p\n%c%s%c\n", s3, '>', s3, '<');
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

	//char	**sp1 = ft_split(s3, ' ');
	//int	k = 0;
	//while (sp1[k] != NULL)
	//{
	//	printf("split string : %s\n", sp1[k]);
	//	k++;
	//}

	/***PRINTF***/

	/***PUT***/

	/***STRING***/
	//char *test_strstr = strstr("HelHello World", "Hello");
	//char needle[] = "0x0";
	//char *test_strstr = strstr("HelHello World", needle);
	//printf("pointer: %p\ts: %s\n", test_strstr, test_strstr);
	printf("strncmp\n");
	string_strncmp(_strncmp, s1, s2, i);
	printf("%s\n", SEP_P);
/*
	int test_strncmp = _strncmp("Hello World", "Hello", 10);
	printf("pointer: %d\n", test_strncmp);
	int test_strncmp2 = _strncmp("hello", "hello world", 10);
	printf("pointer: %d\n", test_strncmp2);
	int test_strncmp3 = _strncmp("Hello world", "hello world", 10);
	printf("pointer: %d\n", test_strncmp3);
*/
	return (0);
}
