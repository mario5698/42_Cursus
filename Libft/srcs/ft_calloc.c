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

#include "../sources/libft.h"
#include <stdlib.h>
void	*ft_calloc(ft_size_t count, ft_size_t size)
{
	ft_size_t			i;
	char 		**matrix;
	
	i = 0;
	
	matrix = (char **)malloc(count);
	if(matrix == NULL)
		return(NULL);
	while(i<count)
	{
		matrix[i] = (char *)malloc(size);
		if(matrix[i] == NULL)
			return(NULL);
		ft_memset(matrix, 0,size);
		i++;
	}
	return	(matrix);
}
