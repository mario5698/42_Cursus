/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptinfxX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:54:18 by marancib          #+#    #+#             */
/*   Updated: 2023/05/26 14:54:19 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"ft_printf.h"

static int	ft_rev(char *arr, int size)
{
	size--;
	while (size >= 0)
	{
		if (write(1, &arr[size], 1) == -1)
			return (-1);
		size--;
	}
	return (1);
}

static int	ft_lenght_hexa(unsigned int n)
{
	unsigned int	lenght;

	lenght = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 16;
		lenght++;
	}
	return (lenght);
}

static int	ft_hex(unsigned int n, char *base)
{
	unsigned int		i;
	int					j;
	unsigned int		hexa_lenght;
	char				*out;

	i = 0;
	hexa_lenght = ft_lenght_hexa(n);
	out = malloc(sizeof(char) * (hexa_lenght + 1));
	if (out == NULL)
		return (-1);
	while (n)
	{
		out[i++] = base[n % 16];
		n /= 16;
	}
	out[hexa_lenght] = '\0';
	j = ft_rev(out, hexa_lenght);
	free(out);
	if (j == -1)
		return (-1);
	return (hexa_lenght);
}

int	ft_printnbr_hex(unsigned int n, char *base)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		return (1);
	}
	i += ft_hex(n, base);
	return (i);
}
