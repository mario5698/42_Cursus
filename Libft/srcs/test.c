#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../sources/libft.h"
#include "../sources/color.h"
#include "../sources/test.h"

void test_isalnum(int *letters)
{
	int	i;
	i = 0;
	printf(CYN"\n\nTEST ISALNUM"reset);
	while(letters[i] !='\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_isalnum);
		check(letters[i], &isalnum);
		i++;
	}
}

void	test_isalpha(int *letters)
{
		int	i;
	i = 0;
	printf(CYN"\n\nTEST ISALPHA"reset);
	while(letters[i] !='\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_isalpha);
		check(letters[i], &isalpha);
		i++;
	}
}

void	test_isascii(int *letters)
{
	int	i;
	i = 0;
	printf(CYN"\n\nTEST ISASCII"reset);
	while(letters[i] !='\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_isascii);
		check(letters[i], &isascii);
		i++;
	}
}

void	test_isdigit(int *letters)
{
	int	i;
	i = 0;
	printf(CYN"\n\nTEST ISDIGIT"reset);
	while(letters[i] !='\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_isdigit);
		check(letters[i], &isdigit);
		i++;
	}
}

void	test_isprint(int *letters)
{
	int	i;
	i = 0;
	printf(CYN"\n\nTEST ISPRINT"reset);
	while(letters[i] !='\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_isprint);
		check(letters[i], &isprint);
		i++;
	}
}

void	test_tolower(int *letters)
{
	int	i;
	i = 0;
	printf(CYN"\n\nTEST TOLOWER"reset);
	while(letters[i] !='\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_tolower);
		check(letters[i], &tolower);
		i++;
	}
}

void	test_toupper(int *letters)
{
	int	i;
	i = 0;
	printf(CYN"\n\nTEST ISALNUM"reset);
	while(letters[i] !='\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_toupper);
		check(letters[i], &toupper);
		i++;
	}
}

void	test_strlen(char *s)
{
	int lenghtmy;
	int lenghtot;

	lenghtmy = ft_strlen(s);
	lenghtot= strlen(s);
	printf(CYN"\n\nTEST STRLEN\n"reset);
	printf("\nPhrase Test: %s",s);
	printf("\nlenght %d %d ",lenghtmy, lenghtot);	
	if(lenghtmy == lenghtot)
		check_comparations(1);
	else
		check_comparations(0);
}

void test_strcat(char *s1, char *s2)
{
	printf(CYN"\n\nTEST STRCAT\n"reset);
	printf("Comparation\n%s\n%s", ft_strcat(s1, s2), strcat(s1,s2));

	if (ft_strcat(s1, s2) == strcat(s1,s2))
		check_comparations(1);
	else
		check_comparations(0);
}

void test_strlcpy(char *dest, char *src, unsigned int size)
{
	printf(CYN"\n\nTEST STRLCPY\n"reset);
	printf("Comparation\n%u -> %lu", ft_strlcpy(dest, src, size), strlcpy(dest, src, size));

	if(ft_strlcpy(dest, src, size) == strlcpy(dest, src, size))
		check_comparations(1);
	else
		check_comparations(0);
}

void 	test_strncmp(char *s1,char *s2, size_t n )
{
	printf(CYN"\n\nTEST STRNCMP\n"reset);
	printf("Comparation\n%d -> %d", ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

	if(ft_strncmp(s1, s2, n) == strncmp(s1, s2, n))
		check_comparations(1);
	else
		check_comparations(0);
}

void test_strnstr (char *str, char *to_find, unsigned int nb) 
{
	printf(CYN"\n\nTEST STRNSTR\n"reset);
	printf("Comparation\n%s -> %s", ft_strnstr(str, to_find, nb), strnstr(str, to_find, nb));
	if(ft_strnstr(str, to_find, nb) == strnstr(str, to_find, nb))
		check_comparations(1);
	else
		check_comparations(0);
}

void test_atoi(char *str)
{
printf(CYN"\n\nTEST ATOI\n"reset);
	printf("Comparation\n%d -> %d", ft_atoi(str), atoi(str));
	if(ft_atoi(str) == atoi(str))
		check_comparations(1);
	else
		check_comparations(0);
}