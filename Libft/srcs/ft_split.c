#include"../sources/libft.h"
#include <stdlib.h>
#include<stdio.h>

int nextc(char const *s1, char c, int position)
{
	while(s1[position]!=c)
		position++;
	return(position);
}

int counter_char(char const *s1, char c)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (s1[i] != '\0')
	{
		if(s1[i]==c)
			counter++;
		i++;
	}
	return(counter);
}

char **ft_split(char const *s, char c)
{
	char	**local;
	int position;
	int lastposition;
	int i;
	int counter; 
	//usar substr para alocar los separadores
	i = 0;
	lastposition=0;
	position=0;
	if(sizeof(s)=='\0')
		return(NULL);
	local = (char **)malloc(sizeof(char **)*ft_strlen(s));
	counter = counter_char(s, c);
	while(i < counter+1)
	{
		position = nextc(s, c, lastposition);
		*(local+i)= ft_substr(s, lastposition, position);
		lastposition = position+1;
		i++;
	}
	return(local);
}