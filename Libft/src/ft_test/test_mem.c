/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mem.c                                          :+:      :+:    :+:   */
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
#include "../../include/libft.h"
#include "../../include/color.h"
#include "../../include/test.h"

void test_memcpy(void *restrict dest, const void *restrict src, ft_size_t n)
{
	printf(CYN"\n\nTEST MEMCPY "reset);
	if (ft_memcpy(dest, src, n) == memcpy(dest, src, n))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s", ft_memcpy(dest, src, n),
		memcpy(dest, src, n));
}

void test_memset(void *s, int c, ft_size_t n)
{
	printf(CYN"\n\nTEST MEMSET "reset);
	

	if (ft_memset(s, c, n) == memset(s, c, n))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s",ft_memset(s, c, n), (char *)memset(s, c, n));

}

void 	test_memchr(const void *s, int c, ft_size_t n)
{
	printf(CYN"\n\nTEST MEMCHR "reset);
	if (ft_memchr(s, c, n) == memchr(s, c, n))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %s -> %s", (char *)ft_memchr(s, c, n),
	(char *)memchr(s, c, n));
}

void 	test_memcmp(const void *s, const void *c, ft_size_t n)
{
	printf(CYN"\n\nTEST MEMCMP "reset);
	if (ft_memcmp(s, c, n) == memcmp(s, c, n))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %d -> %d", ft_memcmp(s, c, n),
	memcmp(s, c, n));
}

void test_memmove(void *dest, void *src, ft_size_t n)
{
	printf(CYN"\n\nTEST MEMMOVE "reset);
	printf("\nComparation: %s -> %s", (char *) ft_memmove(dest, src, n),
	(char *) memmove(dest, src, n));
	if (ft_memmove(dest, src, n) == memmove(dest, src, n))
		check_comparations(1);
	else
		check_comparations(0);
}

void 	test_calloc(size_t count, size_t size)
{
	printf(CYN"\n\nTEST CALLOC "reset);
	if (sizeof(ft_calloc(count, size)) == sizeof(calloc(count, size)))
		check_comparations(1);
	else
		check_comparations(0);
	printf("\nComparation: %lu -> %lu", sizeof(ft_calloc(count, size)),
	sizeof(calloc(count, size)));
}













