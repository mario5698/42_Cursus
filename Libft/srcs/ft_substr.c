#include"../sources/libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start , ft_size_t len )
{	
	char *local;
	int length;
	int i ;

	i = 0;
	length = start - len;;
	local= (char *) malloc (sizeof(char) * (len + 1));

	while(start<len)
	{
		local[i] = s[start];
		start++;
		i++;
	}
	local[i]='\0';
	return(local);
}