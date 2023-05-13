/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:47:47 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 15:47:48 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	nextc(char const *s1, char c, int position)
{
	while (s1[position] != c)
		position++;
	return (position);
}

int	counter_char(char const *s1, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			counter++;
		i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**local;
	int		position;
	int		lastposition;
	int		i;
	int		counter;

	i = 0;
	lastposition = 0;
	position = 0;
	local = NULL;
	if (sizeof(s) == '\0')
		return (NULL);
	local = (char **)malloc(sizeof(char *) * ft_strlen(s));
	counter = counter_char(s, c);
	if (counter == (int)ft_strlen(s))
		return (local);
	while (i <= counter)
	{
		position = nextc(s, c, lastposition);
		*(local + i) = ft_substr(s, lastposition, position);
		lastposition = position + 1;
		i++;
	}
	*(local + i) = NULL;
	return (local);
}
