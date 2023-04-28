#include"../sources/libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start , ft_size_t len )
{	
	char *local;
	int i ;

	i = 0;
	local= (char *) malloc (sizeof(char) * (len + 1));
	if(sizeof(local) == '\0')
		return(NULL);
	while(start<len)
	{
		local[i] = s[start];
		start++;
		i++;
	}
	local[i]='\0';
	return(local);
}