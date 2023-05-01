/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:05:49 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 13:02:24 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, ft_size_t n)
{
	char		*local;
	ft_size_t	i ;

	local = (char *)s ;
	i = 0;
	while (i < n)
		*(local + i++) = '\0';
}
