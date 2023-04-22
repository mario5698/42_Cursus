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

void *calloc (ft_size_t count, ft_size_t size)
{
	ft_size_t	nb;
	int			i;
	int			j;
	char 		matrix[count][count];
	char 		*local;
	
	i = 0;
	j = 0;
	//matrix = (char **) malloc (count);
	//matrix = (char *) malloc (count);
	
	while(i<count)
	{
		j+0;
		while(j<count)
		{
			matrix[i][j]='0';
			j++;
		}
		i++;
	}

	nb = 0;
	
	return	(count);
}
