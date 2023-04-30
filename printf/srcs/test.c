#include<stdio.h>
#include<stdarg.h>


int AddNumbers(int n, ...)
{
	int	sum;
	int	i;
	
	i = 0;
	sum = 0;
	va_list ptr;
	va_start (ptr, n);
    for (int i = 0; i < n; i++)
        sum += va_arg (ptr, int);
	va_end (ptr);

	return(sum);
}
