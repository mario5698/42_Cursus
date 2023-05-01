/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:05:49 by marancib          #+#    #+#             */
/*   Updated: 2023/04/21 14:05:50 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources/libft.h"

void	*ft_memset(void *s, int c, ft_size_t n)
{
	char		*local;
	ft_size_t	i ;

	local = (char *)s ;
	i = 0;
	while (i < n)
		*(local + i++) = c;
	return(local);
}