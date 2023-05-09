/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:08:18 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 16:08:19 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	getnums(char *dst, int n)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (n > 9)
	{
		i = n / 10;
		n = n % 10;
		dst[j] = (char) n + 48 ;
		n = i;
		j++;
	}
	dst[j] = n + 48 ;
}

void	changeorder(char *change, char *dst, int counter)
{
	int	i;

	i = 0;
	while (counter--)
	{
		change[i] = dst[counter];
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*dst;
	char	*change;
	int		i;
	int		counter;

	i = 1;
	counter = 0;
	dst = NULL;
	while (i < n)
	{
		i *= 10;
		counter++;
	}
	dst = (char *) malloc (sizeof(char) * counter);
	change = (char *) malloc (sizeof(char) * counter);
	getnums(dst, n);
	changeorder(change, dst, counter);
	return (change);
}
