/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:54:04 by marancib          #+#    #+#             */
/*   Updated: 2023/05/26 14:54:05 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"ft_printf.h"

static int	ft_icount(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_uitoa(unsigned int n)
{
	char				*arr;
	int					count;
	unsigned int		d;
	long int			nb;

	nb = n;
	count = ft_icount(nb);
	arr = ft_calloc(count + 1, sizeof(char));
	if (!arr)
		return (NULL);
	while (count--)
	{
		d = nb / 10;
		arr[count] = 48 + nb % 10;
		nb = d;
	}
	return (arr);
}

int	ft_printnbr_dec(unsigned int nb)
{
	char	*str;
	int		len;

	str = ft_uitoa(nb);
	if (str == NULL)
		return (-1);
	len = ft_printstr(str);
	free(str);
	if (len == -1)
		return (-1);
	return (len);
}
