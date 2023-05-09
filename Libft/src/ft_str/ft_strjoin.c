/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:50:25 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 15:50:26 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			lenght;
	char		*local;
	size_t		i;
	size_t		j;
	size_t		h;

	i = 0;
	j = 0;
	h = 0;
	lenght = ft_strlen(s1) * ft_strlen(s2)+ft_strlen(s1);
	local = (char *)malloc(sizeof(char) * lenght + 1);
	while (h < ft_strlen(s1))
	{
		local[i] = s1[h];
		j = 0;
		while (s2[j] != '\0' && h < ft_strlen(s1) - 1)
		{
			local[++i] = s2[j];
			j++;
		}
		i++;
		h++;
	}
	return (local);
}
