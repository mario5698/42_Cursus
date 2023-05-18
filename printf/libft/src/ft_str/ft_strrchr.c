/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:08:14 by marancib          #+#    #+#             */
/*   Updated: 2023/05/13 13:43:24 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*dst;

	c = (unsigned char) c;
	dst = (char *)s;
	i = ft_strlen(dst);
	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (dst[i] == c)
			return (dst + i);
		i--;
	}
	return (NULL);
}
