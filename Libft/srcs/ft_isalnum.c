/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:24:43 by marancib          #+#    #+#             */
/*   Updated: 2023/04/19 19:24:44 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int alnum)
{	
	int	isalnum;

	isalnum = 0 ;
	if ((alnum >= '0' && alnum <= '9')||(alnum >= 'A' && alnum <= 'Z')||(alnum >= 'a' && alnum <= 'z'))
		isalnum = 1;
	return (isalnum);
	}