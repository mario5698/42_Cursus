/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:38:06 by marancib          #+#    #+#             */
/*   Updated: 2023/04/19 18:38:07 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isscape(char str)
{
	int	val;

	val = 0;
	if (str == '\f' || str == '\n' || str == '\r'
		|| str == '\v' || str == '\t' || str == ' ')
		val = 1;
	return (val);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	negative;
	int	i;

	i = 0;
	n = 0;
	while (ft_isscape(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = 1;
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}
	while (ft_isdigit(str[i]))
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	if (negative)
		n = n * -1;
	return (n);
}
