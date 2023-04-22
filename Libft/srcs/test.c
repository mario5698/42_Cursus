/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:18:33 by marancib          #+#    #+#             */
/*   Updated: 2023/04/21 14:18:34 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../sources/libft.h"
#include "../sources/color.h"
#include "../sources/test.h"

void	test_tolower(int *letters)
{
	int	i;

	i = 0;
	printf(CYN"\n\nTEST TOLOWER"reset);
	while (letters[i] != '\0')
	{
		printf("\nCharacter Test %c ", letters[i]);
		check(letters[i], &ft_tolower, &tolower);
		i++;
	}
}

void	test_toupper(int *letters)
{
	int	i;

	i = 0;
	printf(CYN"\n\nTEST TOUPPER"reset);
	while (letters[i] != '\0')
	{
		printf("\nCharacter Test %c ", letters[i]);
		check(letters[i], &ft_toupper, &toupper);
		i++;
	}
}

void	test_atoi(char *str)
{
	printf(CYN"\nTEST ATOI "reset);
	if (ft_atoi(str) == atoi(str))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation %d -> %d\n", ft_atoi(str), atoi(str));
}
