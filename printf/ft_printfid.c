/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:53:47 by marancib          #+#    #+#             */
/*   Updated: 2023/05/26 14:53:48 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"ft_printf.h"

int	ft_printnbr(int nbr)
{
	int		counter;
	char	*str;

	str = ft_itoa(nbr);
	if (str == NULL)
		return (-1);
	counter = ft_printstr(str);
	free(str);
	if (counter == -1)
		return (-1);
	return (counter);
}
