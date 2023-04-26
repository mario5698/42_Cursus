#include"../sources/libft.h"
#include <stdlib.h>
#include<stdio.h>

int nextc(char const *s1, char c, int position)
{
	while(s1[position]==c)
	{
		position++;
	}
	return(position);
}


char **ft_split(char const *s, char c)
{
	char	**local;
	int position;
	int i=0;
	/*
	usar substr para alocar los separadores 
	*/
	position=0;
	local = (char **)malloc(sizeof(char **)*ft_strlen(s));
	position =nextc(s, c, position);
	while(i<4)
	{
		*local = ft_substr(s, 0, position);
		*local++;
		i++;
	}
	return(local);
}