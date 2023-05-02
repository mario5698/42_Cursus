/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:55:02 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 15:55:03 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdlib.h>
#include <stdio.h>

void	strtrim_str(char *str, char const *set)
{
	int i;
	int j;

	i = 0;
	while (str[i] && ft_strchr(set, str[i]))
		i++;
	j = ft_strlen(str) - 1;
	while (j > 0 && ft_strchr(set, str[j]))
		j--;
	if (i == 0 && j == (int)ft_strlen(str) - 1)
		return ;
	ft_memmove(str, str + i, j - i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	strtrim_str((char *)s1, set);
	if (len == 0)
		return (NULL);
	res = ft_substr(s1, 0, len);
	if (!res)
		return (NULL);
	return (res);
}
