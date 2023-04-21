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

char	*ft_strnstr(char *str, char *to_find, unsigned int nb)
{
	unsigned int	j;
	int				i;

	j = 0;
	if (!*to_find)
		return (str);
	while (*str && j < nb)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}
