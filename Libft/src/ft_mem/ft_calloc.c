/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:44:06 by marancib          #+#    #+#             */
/*   Updated: 2023/04/22 17:44:21 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*matrix;

	i = 0;
	matrix = (char *)malloc(sizeof(size) * count);
	if (size == 0)
		return (NULL);
	while (i < count)
	{
		ft_memset(matrix, 0, size);
		i++;
	}
	return (matrix);
}
