/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:14:40 by marancib          #+#    #+#             */
/*   Updated: 2023/04/21 14:14:41 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../sources/libft.h"
#include "../sources/color.h"
#include "../sources/test.h"

void	test_strlen(const char *s)
{
	printf(CYN"\n\nTEST STRLEN"reset);
	if ( ft_strlen(s) ==  strlen(s))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nPhrase Test: %s\n", s);
	printf("lenght %lu %lu \n",ft_strlen(s), strlen(s));
}

void	test_str(char *s1, char *s2, char * (*f)(char *, char *), char * (*h)(char *, char *), char *name)
{
	printf(CYN"\nTEST %s"reset, name);
	if ( f(s1, s2) == h(s1, s2))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s\n", ft_strcat(s1, s2), strcat(s1, s2));
}

void	test_strcat(char *s1, char *s2)
{
	printf(CYN"\nTEST STRCAT"reset);
	if (ft_strcat(s1, s2) == strcat (s1, s2))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s\n", ft_strcat(s1, s2), strcat(s1, s2));
}

void	test_strlcpy(char *dest, char *src)
{
	printf(CYN"\nTEST STRLCPY"reset);
	if (ft_strcpy(dest, src) == strcpy(dest, src))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s\n", ft_strcpy(dest, src),
		strcpy(dest, src));
}

void	test_strncmp(char *s1, char *s2, size_t n)
{
	printf(CYN"\nTEST STRNCMP"reset);
	if (ft_strncmp(s1, s2, n) == strncmp(s1, s2, n))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %d -> %d\n", ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
}

void	test_strnstr(char *str, char *to_find, unsigned int nb)
{
	printf(CYN"\nTEST STRNSTR "reset);
	if (ft_strnstr(str, to_find, nb) == strnstr(str, to_find, nb))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s\n", ft_strnstr(str, to_find, nb),
		strnstr(str, to_find, nb));
}

void test_strchr(const char *str, int to_find)
{
	printf(CYN"\nTEST STRCHR"reset);
	if (ft_strchr(str, to_find) == strchr(str, to_find))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s\n", ft_strchr(str, to_find),
		strchr(str, to_find));
}

void test_strrchr(const char *str, int to_find)
{
	printf(CYN"\nTEST STRCHR"reset);
	if (ft_strrchr(str, to_find) == strrchr(str, to_find))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s\n", ft_strrchr(str, to_find),
		strrchr(str, to_find));
}

void	test_strdup(const char *src)
{
	printf(CYN"\nTEST STRDUP "reset);
	if (*ft_strdup(src) == *strdup(src))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s\n", ft_strdup(src),
		strdup(src));
}


void	test_substr(char const *s, unsigned int start , ft_size_t len)
{
	printf(CYN"\nTEST SUBSTR "reset);
	printf("\nComparation: %s ", ft_substr(s, start, len));

	if (sizeof(ft_substr(s, start, len)>0))
		check_comparations(1);
	else
		check_comparations(0);
	
	printf("\nComparation: %s ", ft_substr(s, start, len));
}