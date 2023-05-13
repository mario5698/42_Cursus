/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:28:29 by marancib          #+#    #+#             */
/*   Updated: 2023/05/13 14:42:42 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*value;
	int		i;

	value = ft_itoa(n);
	i = 0;
	while (value[i] != '\0')
	{
		write(fd, &value[i], 1);
		i++;
	}
	free(value);
}
