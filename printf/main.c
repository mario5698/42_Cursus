#include"./include/ft_printf.h"
#include"./include/libft.h"
#include <stdio.h>

int	main(void)
{
	void *string= "1234";
	int ftprint;
	int prinf;
	   ftprint = ft_printf(" %p %p", (void *)1234, (void *)1234);
	   prinf = printf(" %p %p", (void *)1234, (void *)1234);

	   printf("\n%d   ->    %d", ftprint, prinf);
	return(0);
}
