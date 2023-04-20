/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:24:43 by marancib          #+#    #+#             */
/*   Updated: 2023/04/19 19:24:44 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int digit)
{	
	int	isdigit;

	isdigit = 0 ;
	if (digit >= '0' && digit <= '9')
		isdigit = 1;
	return (isdigit);
}