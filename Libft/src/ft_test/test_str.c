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
#include "../../include/libft.h"
#include "../../include/color.h"
#include "../../include/test.h"

void	test_strlen(const char *s)
{
	printf(CYN"\n\nTEST STRLEN"reset);
	if (ft_strlen(s) == strlen(s))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nPhrase Test: %s\n", s);
	printf("lenght %lu %lu \n", ft_strlen(s), strlen(s));
}

void	test_strlcat(char *s1, char *s2, ft_size_t num)
{
	printf(CYN"\nTEST STRLCAT"reset);
	if (ft_strlcat(s1, s2, num) == strlcat(s1, s2, num))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %lu -> %lu\n", ft_strlcat(s1, s2, num),
		strlcat(s1, s2, num));
}

void	test_strlcpy(char *dest, char *src, ft_size_t num)
{
	printf(CYN"\nTEST STRLCPY"reset);
	if (ft_strlcpy(dest, src, num) == strlcpy(dest, src, num))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %lu -> %lu", ft_strlcpy(dest, src, num),
		strlcpy(dest, src, num));
}

void	test_strncmp(char *s1, char *s2, size_t n)
{
	printf(CYN"\nTEST STRNCMP"reset);
	if (ft_strncmp(s1, s2, n) == strncmp(s1, s2, n))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %d -> %d\n", ft_strncmp(s1, s2, n),
		strncmp(s1, s2, n));
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

void	test_strchr(const char *str, int to_find)
{
	printf(CYN"\nTEST STRCHR"reset);
	if (ft_strchr(str, to_find) == strchr(str, to_find))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s\n", ft_strchr(str, to_find),
		strchr(str, to_find));
}

void	test_strrchr(const char *str, int to_find)
{
	printf(CYN"\nTEST STRRCHR"reset);
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

void	test_substr(char const *s, unsigned int start, ft_size_t len)
{
	printf(CYN"\nTEST SUBSTR "reset);
	printf("\nParameters : %s %d %lu", s, start, len);
	if (sizeof(ft_substr(s, start, len) > 0))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s", ft_substr(s, start, len));
}

void	test_strjoin(char const *s1, char const *s2)
{
	printf(CYN"\nTEST STRJOIN"reset);
	if (sizeof(ft_strjoin(s1, s2)) > 0)
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s", ft_strjoin(s1, s2));
}

void	test_strtrim(char const *s1, char const *set)
{
	printf(CYN"\nTEST STRTRIM"reset);
	printf("\nPhrase: %s", s1);
	if (sizeof(ft_strtrim(s1, set)) > 0)
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nResult: %s", ft_strtrim(s1, set));
}

void	test_split(char const *s, char c)
{
	char	**local;
	int		i;
	int		j;

	i = 0;
	j = 0;
	printf("%s", s);
	printf(CYN"\nTEST SPLIT"reset);
	local = ft_split(s, c);
	if (sizeof(ft_split(s, c)) > 0)
		check_comparations(1);
	else
		check_comparations(0);
	while (*(local + i) != NULL)
	{
		printf("\n%d ->", i);
		j = 0;
		while (local[i][j])
		{
			printf("%c", local[i][j]);
			j++;
		}
		i++;
	}
}
