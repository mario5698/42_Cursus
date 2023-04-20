#include <stdio.h>
#include <ctype.h>
#include "../sources/libft.h"
#include "../sources/color.h"
#include "../sources/test.h"

void ft_memset	(void *s, int c , ft_size_t n)
	{
	char *local 

	ft_size_t  i ;
	local = (char *)s ;
	i=0;
	while (i < n)
		*(local + i++) = c;
}

void ft_bzero	(void *s, ft_size_t n)
	{
	char *local 

	ft_size_t  i ;
	local = (char *)s ;
	i=0;
	while (i < n)
		*(local + i++) = '\0';
}