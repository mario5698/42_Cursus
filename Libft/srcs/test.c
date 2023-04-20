#include <stdio.h>
#include <ctype.h>
#include "../sources/libft.h"
#include "../sources/color.h"
void check(int c, int(*f)(int))
{
	if(f(c))
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
