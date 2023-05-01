/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:41:38 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 15:41:39 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, ft_size_t n)
{
	ft_size_t	i;
	char		*localdest;
	char		*localsrc;

	localdest = (char *)dest;
	localsrc = (char *)src;
	i = 0;
	while (localsrc[i] != '\0' && n--)
	{
		localdest[i] = localsrc[i];
		i++;
	}
		localdest[i] = '\0';
	return (dest);
}
