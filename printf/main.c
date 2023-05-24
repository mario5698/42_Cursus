#include"./include/ft_printf.h"
#include"./include/libft.h"
#include <stdio.h>

int	main(void)
{
	void *string= "1234";
	int ftprint;
	int prinf;
	   ftprint = ft_printf("%x", 12345);
	   printf("\n");
	   prinf = printf("%x", 12345);

	   printf("\n%d   ->    %d", ftprint, prinf);
	return(0);
}
