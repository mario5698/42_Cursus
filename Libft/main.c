/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:08:18 by marancib          #+#    #+#             */
/*   Updated: 2023/05/01 16:08:19 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

int	main(void)
{


int row, columns;
char **dst;

dst = ft_split("          ", ' ');
	for (row=0; row<5; row++)
	{
		for(columns=0; columns<10; columns++)
		{
			printf("-> %c",dst[row][columns]);
		}
	printf("\n");
}

	return (0);
}
