/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:38:06 by marancib          #+#    #+#             */
/*   Updated: 2023/04/19 18:38:07 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{	
	int	isalpha;

	isalpha = 0 ;
	if ((c >= 'A' && c <= 'Z') || \
	(c >= 'a' && c <= 'z'))
		isalpha = 1;
	return (isalpha);
}