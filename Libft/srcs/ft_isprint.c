/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:24:43 by marancib          #+#    #+#             */
/*   Updated: 2023/04/19 19:24:44 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int letter)
{	
	int	isprint;

	isprint = 0 ;
	if (letter >= 32 && letter <= 126)
		isprint = 1;
	return (isprint);
}
