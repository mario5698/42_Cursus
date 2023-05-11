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

static int	ft_len(int num)
{
	int		counter;

	counter = 0;
	if (num == 0)
		return (counter + 1);
	while (num > 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

static char	*ft_array(char *x, size_t number, int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		counter;

	counter = 0;
	counter = ft_len(n);
	dst = (char *) malloc (sizeof(char) * counter);
	if (n < 0)
	{
		n *= -1;
		dst[0] = '-';
	}
	dst = ft_array(dst, n, counter);
	return (dst);
}
