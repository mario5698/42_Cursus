/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:08:14 by marancib          #+#    #+#             */
/*   Updated: 2023/04/19 19:24:54 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t nb)
{
	size_t	j;
	int		i;
	char	*str1;

	str1 = (char *)str;
	i = 0;
	j = 0;
	if (!*to_find)
		return (str1);
	while (str1[i] && j < nb)
	{
		if (str1[i] == *to_find)
		{
			while (to_find[j] && str1[i + j] == to_find[j] && i + j < nb)
			{
				j++;
				if (!to_find[j])
					return (&str1[i]);
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}
