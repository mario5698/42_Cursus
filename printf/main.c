#include"./include/ft_printf.h"
#include"./include/libft.h"
#include<stdio.h>
#include<stdarg.h>

int main(void)
{
	printf("\n\nvariadic functions: \n\n ");
	printf("\nAddNumbers: 1+2= %d",AddNumbers(2,1,2));
	return (0);
}