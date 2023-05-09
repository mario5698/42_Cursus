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

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (dst1 == NULL && src1 == NULL)
		return (0);
	if (dst > src)
	{
		while (n)
		{
			dst1[n - 1] = src1[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
