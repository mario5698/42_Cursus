/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:10:29 by marancib          #+#    #+#             */
/*   Updated: 2023/04/21 14:10:30 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../sources/libft.h"
#include "../sources/color.h"
#include "../sources/test.h"

void	check(int c, int (*f)(int), int (*h)(int))
{
	if (f(c) == h(c))
		printf(GRN" OK [✓]"reset);
	else
		printf(RED" KO [X]"reset);
}

void	check_comparations(int c)
{
	if (c)
		printf(GRN" OK [✓]"reset);
	else
		printf(RED" KO [X]"reset);
}
