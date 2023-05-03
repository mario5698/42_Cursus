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

#include "libft.h"
#include<stdlib.h>
#include<stdio.h>

char *ft_itoa(int n)
{
	char	*dst;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	while(n > 9)
	{
		//printf("%d\n", n);
		dst = (char *) malloc (sizeof(char));
		i = n / 10;
		n = n % 10;
		dst[j] = n + 48 ;
		printf(" %d",n);
		n = i;
		j++;
	}	
	printf(" -%d",n);
	dst[j] = n + 48 ;
	printf("\n%s\n",dst);
	return(dst);
}
