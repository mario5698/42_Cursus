#include "libft.h"

void 	*ft_memchr(const void *s, int c, ft_size_t n)
{
	ft_size_t nb;
	char *des;
	
	des = (char *)s; 
	

	nb = 0;
	while(des[nb] !='\0' && nb < n)
	{
		if(*(des + nb ) == (char)c)
			return(des + nb);
		nb++;
	}
	return(0);
}
