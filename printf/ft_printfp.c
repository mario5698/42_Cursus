/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:53:56 by marancib          #+#    #+#             */
/*   Updated: 2023/05/26 14:53:56 by marancib         ###   ########.fr       */
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

static int	ft_lenght_hexa(unsigned long ptr)
{
	int	lenght;

	lenght = 0;
	if (ptr == 0)
		return (1);
	while (ptr)
	{
		ptr = ptr / 16;
		lenght++;
	}
	return (lenght);
}

static int	ft_print_pointer_hexa(unsigned long ptr)
{
	unsigned long int	i;
	int					hexa_lenght;
	int					j;
	char				*out;

	i = 0;
	hexa_lenght = ft_lenght_hexa(ptr);
	out = malloc(sizeof(char) * (hexa_lenght + 1));
	if (out == NULL)
		return (-1);
	while (ptr)
	{
		out[i++] = "0123456789abcdef"[ptr % 16];
		ptr /= 16;
	}
	out[hexa_lenght] = '\0';
	j = ft_rev(out, hexa_lenght);
	free(out);
	if (j == -1)
		return (-1);
	return (hexa_lenght);
}

int	ft_printadrr_hex(unsigned long ptr)
{
	int	i;

	if (ptr == 0)
	{
		if (write(1, "0x0", 3) == -1)
			return (-1);
		return (3);
	}
	if (write(1, "0x", 2) == -1)
		return (-1);
	i = 2;
	i += ft_print_pointer_hexa(ptr);
	if (i == 1)
		return (-1);
	return (i);
}
