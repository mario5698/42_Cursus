#include "sources/libftprintf.h"
#include "libft/sources/libft.h"
#include "libft/sources/color.h"
#include<stdio.h>
#include<stdarg.h>

int main(void)
{
	printf(YEL"\n\nvariadic functions: \n\n "reset);
	printf("\n 1+2 = %d\n\n",AddNumbers(2, 1, 2));
	return (0);
}