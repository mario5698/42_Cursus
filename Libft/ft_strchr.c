/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:08:14 by marancib          #+#    #+#             */
/*   Updated: 2023/05/05 21:24:29 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*dst;

	dst = (char *)s;
	if (c < 0)
		return (dst);
	while (*dst)
	{
		if (*dst == (char)c)
			return (dst);
		dst++;
	}
	if ((char) c == '\0')
		return (dst++);
	return (0);
}
