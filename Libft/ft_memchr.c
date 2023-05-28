/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:38:20 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 15:38:21 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		nb;
	char		*des;

	des = (char *)s;
	nb = 0;
	while (nb < n)
	{
		if (*(des + nb) == (char)c)
			return (des + nb);
		nb++;
	}
	return (0);
}
