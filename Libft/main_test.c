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

	return(0);
}

/*
char	*ft_strcat(char *dest, char *src);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(char *str, char *to_find, unsigned int nb);
*/