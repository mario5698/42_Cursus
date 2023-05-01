/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:23:01 by marancib          #+#    #+#             */
/*   Updated: 2023/04/19 19:23:02 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

ft_size_t	ft_strlcpy(char *restrict dest, char *restrict src,
			unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	if (i + 1 < size)
	{
		j = -1;
		while (++j < i + 1)
			dest[j] = src[j];
	}
	else if (size)
	{
		j = -1;
		while (++j < size - 1)
			dest[j] = src[j];
		dest[j] = '\0';
	}
	return (i);
}
