/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:23:01 by marancib          #+#    #+#             */
/*   Updated: 2023/05/15 15:47:06 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = -1;
	i = ft_strlen(src);
	if (i + 1 < size)
	{
		while (++j < i + 1)
			dest[j] = src[j];
	}
	else if (size)
	{
		while (++j < size - 1)
			dest[j] = src[j];
		dest[j] = '\0';
	}
	return (i);
}
