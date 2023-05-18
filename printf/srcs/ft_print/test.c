#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

int AddNumbers(int n, ...)
{
	int	sum;
	int	i;
	
	i = 0;
	sum = 0;
	va_list ptr;
	va_start (ptr, n);
	while(i<n)
	{
		sum += va_arg (ptr, int);
		i++;
	}
	va_end (ptr);
	return (sum);
}

