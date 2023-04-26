#include"../sources/libft.h"
#include <stdlib.h>
#include<stdio.h>

int nextc(char const *s1, char c, int position)
{
	while(s1[position]!=c)
	{
		position++;
	}
	return(position);
}


char **ft_split(char const *s, char c)
{
	char	**local;
	int position;
	int lastposition;
	int i = 0;
	//int j = 0;
	/*
	usar substr para alocar los separadores 
	*/
	position=0;
	local = (char **)malloc(sizeof(char **)*ft_strlen(s));
	while(i<4)
	{
		position =nextc(s, c, lastposition);
		*(local+i)= ft_substr(s, lastposition, position);
		printf("%s", ft_substr(s, lastposition, position));
		lastposition = position;
		i++;
	}
	i = 0;
	return(local);
}