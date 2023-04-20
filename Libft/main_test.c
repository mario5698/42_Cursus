#include <stdio.h>
#include <ctype.h>
#include <libft.h>
#include <color.h>
#include <test.h>


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

	unsigned int num = 5 ;

	test_isalnum(letters);
	test_isalpha(letters);
	test_isascii(letters);
	test_isdigit(letters);
	test_isprint(letters);
	test_tolower(letters);
	test_toupper(letters);
	test_strlen(lettersChar);
	test_strcat(phrase2, phrase1);
	test_strlcpy(phrase2, phrase1, num);
	test_strncmp(phrase1,phrase3, num);
	test_strnstr(str, to_find, num);
	test_atoi(nums);

	return(0);
}
