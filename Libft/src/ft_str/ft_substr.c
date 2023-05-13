/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:55:36 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 15:55:37 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{	
	char	*local;
	size_t	i;

	i = 0;
	local = (char *)malloc(sizeof(char) * (len + 1));
	if (!(local))
		return (NULL);
	while (i < len)
	{
		local[i] = s[start];
		start++;
		i++;
	}
	local[i] = '\0';
	return (local);
}
