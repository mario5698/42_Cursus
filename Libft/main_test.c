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
	int letters[]={'2','A','a','*','/200','\0'};
	char lettersChar[]={'2','A','a','*','\0'};
	char phrase1[6]={'a','d','i','o','s'};
	char phrase2[10]={'h','o','l','a',' '};
	char phrase3[6]={'a','d','i','o','s'};
	char str[]="ho la que tal";
	char to_find[]="la";
	char nums[]="-564654";
	ft_size_t num = 5 ;

	test_isalnum(letters);
	test_isalpha(letters);
	test_isascii(letters);
	test_isdigit(letters);
	test_isprint(letters);
	test_tolower(letters);
	test_toupper(letters);
	test_strlen(lettersChar);
	test_strcat(phrase2, phrase1);
	test_strlcpy(phrase2, phrase1);
	test_strncmp(phrase1,phrase3, num);
	test_strnstr(str, to_find, num);
	test_atoi(nums);

	return(0);
}
