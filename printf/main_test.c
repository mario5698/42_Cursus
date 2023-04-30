#include "sources/libftprintf.h"
#include "libft/sources/libft.h"
#include "libft/sources/color.h"
#include<stdio.h>
#include<stdarg.h>

int main(void)
{
	printf(YEL"\n\nvariadic functions: \n\n "reset);
	printf("\nAddNumbers: 1+2= %d",AddNumbers(11, 1, 2,5,6,12,12,123,312,123,321,312));
	
	return (0);
}