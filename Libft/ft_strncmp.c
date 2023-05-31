/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:08:14 by marancib          #+#    #+#             */
/*   Updated: 2023/04/19 19:24:54 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n < 1)
		return (0);
	n--;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n--)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
