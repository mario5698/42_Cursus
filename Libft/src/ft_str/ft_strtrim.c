#include"libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*local;
	int	i;
	int	j;
	int	h;
	int	lenght;
	int back;
	i = 0;
	j = 0;
	h = 0;
	back=0;
	lenght = ft_strlen(s1);
	local = (char  *) malloc (sizeof(char) * lenght);
	printf("%s", s1);
	if (sizeof(local) < 1)
		return (NULL);
	while (i < lenght)
	{
		if (s1[i] == set[j])
		{
			while (s1[i] == set[j] )
			{
				i++;
				j++;
				back++;
			}
			j = 0;
		}
		local[h] = s1[i];
		i++;
		h++;
	}
	return(local);
}