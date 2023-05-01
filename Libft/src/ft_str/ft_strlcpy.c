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

char	*ft_strlcpy(char *dest, const char *src, ft_size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && dstsize--)
	{
		dest[i] = src[i];
		i++;
	}
		dest[i++] = '\0';
	return (dest);
}
