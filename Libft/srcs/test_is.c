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

void	test_isalnum(int *letters)
{
	int	i;

	i = 0;
	printf(CYN"\n\nTEST ISALNUM"reset);
	while (letters[i] != '\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_isalnum);
		check(letters[i], &isalnum);
		i++;
	}
}

void	test_isalpha(int *letters)
{
	int	i;

	i = 0;
	printf(CYN"\n\nTEST ISALPHA"reset);
	while (letters[i] != '\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_isalpha);
		check(letters[i], &isalpha);
		i++;
	}
}

void	test_isascii(int *letters)
{
	int	i;

	i = 0;
	printf(CYN"\n\nTEST ISASCII"reset);
	while (letters[i] != '\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_isascii);
		check(letters[i], &isascii);
		i++;
	}
}

void	test_isdigit(int *letters)
{
	int	i;

	i = 0;
	printf(CYN"\n\nTEST ISDIGIT"reset);
	while (letters[i] != '\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_isdigit);
		check(letters[i], &isdigit);
		i++;
	}
}

void	test_isprint(int *letters)
{
	int	i;

	i = 0;
	printf(CYN"\n\nTEST ISPRINT"reset);
	while (letters[i] != '\0')
	{
		printf("\nCharacter Test %c", letters[i]);
		check(letters[i], &ft_isprint);
		check(letters[i], &isprint);
		i++;
	}
}
