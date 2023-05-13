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

#include"libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t nb)
{
	size_t	j;
	int		i;
	char	*str1;

	str1 = (char *)str;
	j = 0;
	if (!*to_find)
		return (str1);
	while (*str1 && j < nb)
	{
		if (*str1 == *to_find)
		{
			i = 1;
			while (to_find[i] && str1[i] == to_find[i] && j < nb)
			{
				i++;
				j++;
			}
			if (!to_find[i])
				return (str1);
		}
		str1++;
		j++;
	}
	return (NULL);
}
