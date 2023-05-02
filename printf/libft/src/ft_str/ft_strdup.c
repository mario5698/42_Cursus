/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:49:08 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 15:49:09 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

const char	*ft_strdup(const char *src)
{
	char	*dest;
	int		lenght;

	lenght = ft_strlen(src);
	dest = (char *)malloc(lenght + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, (char *)src, lenght);
	return (dest);
}
