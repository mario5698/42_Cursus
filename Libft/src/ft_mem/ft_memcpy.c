/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:40:10 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 15:40:10 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, ft_size_t n)
{
	ft_size_t	nb;
	char		*des;
	char		*sr;

	des = (char *)dest;
	sr = (char *)src;
	nb = 0;
	while (sr[nb] != '\0' && nb < n)
	{
		*(des + nb) = *(sr + nb);
		nb++;
	}
	return (des);
}
