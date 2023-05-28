/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:37:46 by marancib          #+#    #+#             */
/*   Updated: 2023/05/12 18:37:47 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	value;
	char	*dst;

	dst = malloc(sizeof(char) * ft_strlen(s) + 1);
	value = '0';
	i = 0;
	if (!(dst))
		return (NULL);
	while (s[i] != '\0')
	{
		value = f(i, s[i]);
		dst[i] = value;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
