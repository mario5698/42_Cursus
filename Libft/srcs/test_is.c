/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:11:51 by marancib          #+#    #+#             */
/*   Updated: 2023/04/21 14:11:53 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../sources/libft.h"
#include "../sources/color.h"
#include "../sources/test.h"

void	test_funcions(int *letters,int (*f)(int), int (*h)(int), char *namefunction)
{
	int	i;
	int equal;

	i = 0;
	printf(CYN"\n\nTEST %s"reset, namefunction);

	equal = check_previus(letters, f, h);

	if(equal)
	{
		check_comparations(equal);
	}
	else
	{
		check_comparations(equal);
		while (letters[i] != '\0')
		{
			printf("\nCharacter Test %c", letters[i]);
			check(letters[i], f, h);
			i++;
		}
	}
}

