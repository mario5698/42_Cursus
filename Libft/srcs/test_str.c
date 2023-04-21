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
	printf(CYN"\n\nTEST STRLEN\n"reset);
	printf("\nPhrase Test: %s", s);
	printf("\nlenght %lu %lu ",ft_strlen(s), strlen(s));
	if ( ft_strlen(s) ==  strlen(s))
		check_comparations(1);
	else
		check_comparations(0);
}

void	test_strcat(char *s1, char *s2)
{
	printf(CYN"\n\nTEST STRCAT\n"reset);
	printf("Comparation\n%s\n%s", ft_strcat(s1, s2), strcat(s1, s2));
	if (ft_strcat(s1, s2) == strcat (s1, s2))
		check_comparations(1);
	else
		check_comparations(0);
}

void	test_strlcpy(char *dest, char *src)
{
	printf(CYN"\n\nTEST STRLCPY\n"reset);
	printf("Comparation\n%s -> %s", ft_strcpy(dest, src),
		strcpy(dest, src));
	if (ft_strcpy(dest, src) == strcpy(dest, src))
		check_comparations(1);
	else
		check_comparations(0);
}

void	test_strncmp(char *s1, char *s2, size_t n)
{
	printf(CYN"\n\nTEST STRNCMP\n"reset);
	printf("Comparation\n%d -> %d", ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
	if (ft_strncmp(s1, s2, n) == strncmp(s1, s2, n))
		check_comparations(1);
	else
		check_comparations(0);
}

void	test_strnstr(char *str, char *to_find, unsigned int nb)
{
	printf(CYN"\n\nTEST STRNSTR\n"reset);
	printf("Comparation\n%s -> %s", ft_strnstr(str, to_find, nb),
		strnstr(str, to_find, nb));
	if (ft_strnstr(str, to_find, nb) == strnstr(str, to_find, nb))
		check_comparations(1);
	else
		check_comparations(0);
}

void test_strchr(const char *str, int to_find)
{
	printf(CYN"\n\nTEST STRRCHR\n"reset);
	printf("Comparation\n%s -> %s", ft_strchr(str, to_find),
		strchr(str, to_find));
	if (ft_strchr(str, to_find) == strchr(str, to_find))
		check_comparations(1);
	else
		check_comparations(0);
}

void test_strrchr(const char *str, int to_find)
{
	printf(CYN"\n\nTEST STRCHR\n"reset);
	printf("Comparation\n%s -> %s", ft_strrchr(str, to_find),
		strrchr(str, to_find));
	if (ft_strrchr(str, to_find) == strrchr(str, to_find))
		check_comparations(1);
	else
		check_comparations(0);
}

void	test_strdup(const char *src)
{
	printf(CYN"\n\nTEST STRDUP\n"reset);
	printf("Comparation\n%s -> %s", ft_strdup(src),
		strdup(src));
	if (*ft_strdup(src) == *strdup(src))
		check_comparations(1);
	else
		check_comparations(0);
}