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

int getespace(int num)
{
	int		counter;

	counter = 0;
	if(num==0)
		return(counter+1);
	while (num > 0)
	{
		num /= 10;
		counter++;
	}
	return(counter);
}

int ft_isnegative(int nbr)
{
	int negative;

	negative = 0;
	if (nbr < 0)
		negative = 1;
	return(negative);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int 	i;
	int 	counter;
	int 	negative;

	dst = NULL;
	counter=0;
	i = 0;
	negative = ft_isnegative(n);
	if (negative)
	{
		counter++;
		n *= -1;
	}
	counter += getespace(n);
	dst = (char *) malloc (sizeof(char) * counter);
	
	if(counter==1)
		dst[counter-1] =(char) n + 48;
	while(--counter)
	{
		i = n % 10;
		n /= 10;
		dst[counter] =(char) i + 48;
	}
	if(negative)
		dst[counter] = '-';
	return (dst);
}
