#include "sources/libftprintf.h"
#include "libft/sources/libft.h"
#include "libft/sources/color.h"
#include<stdio.h>
#include<stdarg.h>

int main(void)
{
	printf(YEL"\n\nvariadic functions: \n\n "reset);

	printf("\nAddNumbers: 1+2= %d",AddNumbers(2, 1, 2));

	printf("\nAdd characters: %d\n",AddCharacters(3, 'a','b','c'));
	



	return (0);
}