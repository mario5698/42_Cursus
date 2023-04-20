#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../sources/libft.h"
#include "../sources/color.h"
void check(int c, int(*f)(int))
{
	if(f(c))
		printf(GRN"\nCheck OK [✓]"reset);
	else
		printf(RED"\nCheck KO [X]"reset);
}

void check_comparations(int c)
{
	if(c)
		printf(GRN"\nCheck OK [✓]"reset);
	else
		printf(RED"\nCheck KO [X]"reset);
}

void test_isalnum(int *letters)
{
	int	i;
	i = 0;
	printf(CYN"\nTEST ISALNUM"reset);
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
	printf(CYN"\nTEST ISALPHA"reset);
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
	printf(CYN"\nTEST ISASCII"reset);
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
	printf(CYN"\nTEST ISDIGIT"reset);
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
	printf(CYN"\nTEST ISPRINT"reset);
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
	printf(CYN"\nTEST TOLOWER"reset);
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
	printf(CYN"\nTEST ISALNUM"reset);
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
	printf(CYN"\nTEST STRLEN\n"reset);
	printf("\nPhrase Test: %s",s);
	printf("\nlenght %d %d ",lenghtmy, lenghtot);	
	if(lenghtmy == lenghtot)
		check_comparations(1);
	else
		check_comparations(0);
}

void test_strcat(char *s1, char *s2)
{
	printf(CYN"\nTEST STRCAT\n"reset);
	printf("Comparation\n%s\n%s", ft_strcat(s1, s2), strcat(s1,s2));

	if (ft_strcat(s1, s2) == strcat(s1,s2))
		check_comparations(1);
	else
		check_comparations(0);


}

void test_strlcpy(char *dest, char *src, unsigned int size)
{
	printf(CYN"\nTEST STRLCPY\n"reset);
	printf("Comparation\n%u -> %lu", ft_strlcpy(dest, src, size), strlcpy(dest, src, size));

	if(ft_strlcpy(dest, src, size) == strlcpy(dest, src, size))
		check_comparations(1);
	else
		check_comparations(0);
}
//unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
