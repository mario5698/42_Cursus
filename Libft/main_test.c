/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:58:47 by marancib          #+#    #+#             */
/*   Updated: 2023/04/21 13:58:48 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "sources/libft.h"
#include "sources/color.h"
#include "sources/test.h"

int main(void)
{
	int letters[]={'2','A','a','*','\200','\0'};
	char lettersChar[]={'2','A','a','*','\0'};
	char phrase1[6]={'a','d','i','o','s'};
	char phrase2[10]={'h','o','l','a',' '};
	char phrase3[6]={'a','d','i','o','s'};
	char str[]="hol a que tal \0";
	char to_find[2]="la";
	char to_compare[2]="la";
	char nums[]="-564654";
	char phrasestrcpy[16];
	int letter='a';
	char *dst;
	void *src;
	ft_size_t num = 5 ;
	
	printf(GRN"\n-------------TEST IS-------------\n"reset);
	test_isalnum(letters);
	test_isalpha(letters);
	test_isascii(letters);
	test_isdigit(letters);
	test_isprint(letters);
	test_tolower(letters);
	test_toupper(letters);

	printf(GRN"\n\n-------------TEST STR-------------"reset);
	test_strlen(str);
	test_strcat(phrase2, phrase1);
	test_strlcpy(phrase2, phrase1);
	test_strncmp(phrase1,phrase3, num);
	test_strnstr(str, to_find, num);
	test_strchr(str, letter);
	test_strrchr(str, letter);
	test_strdup(to_find);
	test_atoi(nums);

	printf(GRN"\n-------------TEST MEM-------------"reset);
	test_memcpy(phrasestrcpy, str, num);
	test_memchr(str, letter, num);
	test_memcmp(to_find, to_compare, num);
	test_memset(phrasestrcpy, letter, num);
	test_memmove (phrasestrcpy,phrase1, num);
	test_calloc(num, num);


	printf("\n\n");
	return(0);
}
