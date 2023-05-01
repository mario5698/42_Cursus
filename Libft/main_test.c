/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:58:47 by marancib          #+#    #+#             */
/*   Updated: 2023/04/28 17:08:55 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "include/libft.h"
#include "include/color.h"
#include "include/test.h"

int main(void)
{
	int letters[]={'2','A','a','*','\200','\0'};
	char lettersChar[]={'2','A','a','*','\0'};
	char phrase1[6]={'a','d','i','o','s'};
	char phrase2[10]={'h','o','l','a',' '};
	char phrase3[6]={'a','d','i','o','s'};
	char str[]="hola que ho tal hola  ?!!";
	char to_find[2]="la";
	char to_compare[2]="la";
	char nums[]="-564654";
	char phrasestrcpy[16];
	int letter='a';
	
	char *dst;
	void *src;
	ft_size_t num = 5 ;
	printf(GRN"\n-------------TEST IS-------------\n"reset);
	test_funcions(letters, &ft_isascii, &isascii, "ISASCII");
	test_funcions(letters, &ft_isalpha, &isalpha, "ISALPHA");
	test_funcions(letters, &ft_isalnum, &isalnum, "ISALNUM");
	test_funcions(letters, &ft_isdigit, &isdigit, "ISDIGIT");
	test_funcions(letters, &ft_isprint, &isprint, "ISPRINT");
	test_funcions(letters, &ft_tolower, &tolower, "TOLOWER");
	test_funcions(letters, &ft_toupper, &toupper, "TOUPPER");
	/*printf(GRN"\n\n-------------TEST STR-------------"reset);
	test_strlen(str);
	test_strcat(phrase2, phrase1);
	test_strlcpy(phrase2, phrase1);
	test_strncmp(phrase1,phrase3, num);
	test_strnstr(str, to_find, num);
	test_strchr(str, letter);
	test_strrchr(str, letter);
	test_strdup(to_find);
	test_atoi(nums);
	test_strtrim(str, "hola");

	printf(GRN"\n-------------TEST MEM-------------"reset);
	test_memcpy(phrasestrcpy, str, num);
	test_memchr(str, letter, num);
	test_memcmp(to_find, to_compare, num);
	test_memset(phrasestrcpy, letter, num);
	test_memmove (&phrase1[0],&phrase1[2],6);
	test_calloc(num, num);
	test_substr(str, 0, 12);
	test_strjoin(str, ",");
	test_split(str, ' ');
	test_itoa(42);*/
	printf("\n");
	return(0);
}
