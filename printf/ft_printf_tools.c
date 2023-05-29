/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptintf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:40:11 by marancib          #+#    #+#             */
/*   Updated: 2023/05/22 11:40:12 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"ft_printf.h"

int	ft_printchr(unsigned char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	ft_counternbr(unsigned int nbr)
{
	unsigned int	len;

	len = 0;
	if (nbr == 0)
		len = 1;
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

int	ft_revstr(char *string, unsigned int size)
{
	size--;
	while (size >= 0)
	{
		if (write(1, &string[size], 1) == -1)
			return (-1);
		size--;
	}
	return (1);
}

int	ft_isuppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
