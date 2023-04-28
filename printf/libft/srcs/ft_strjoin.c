#include"../sources/libft.h"
#include <stdlib.h>
#include <stdio.h>
char *ft_strjoin(char const *s1, char const *s2)
{

	int lenght;
	char *local;
	ft_size_t i;
	ft_size_t j;
	ft_size_t h;

	i = 0;
	j = 0;
	h = 0;
	lenght = ft_strlen(s1) * ft_strlen(s2)+ft_strlen(s1);
	local= (char *) malloc (sizeof(char) * lenght+1);
	while(h < ft_strlen(s1))
	{
		local[i] = s1[h];
		j = 0;
		while(s2[j] != '\0'&& h < ft_strlen(s1)-1)
		{
			local[++i] = s2[j];
			j++;
		}
		i++;
		h++;
	}
	return(local);

}