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

#include"../include/libft.h"
#include"../include/ft_printf.h"

int	ft_counternbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

void	ft_revstr(char *string, int len)
{
	int		i;
	char	tmp;

	tmp = 0;
	i = 0;
	len = len - 1;
	while (i <= (len / 2))
	{
		tmp = string[i];
		string[i] = string[len - i - 1];
		string[len - i - 1] = tmp;
		i++;
	}
}

int	ft_isuppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
