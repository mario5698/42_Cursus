#include <stdio.h>
#include <ctype.h>
#include <libft.h>
#include <color.h>
#include <test.h>


int main(void)
{
	int letters[]={'2','A','a','*','/200','\0'};
	char lettersChar[]={'2','A','a','*','/200','\0'};
	
	test_isalnum(letters);
	test_isalpha(letters);
	test_isascii(letters);
	test_isdigit(letters);
	test_isprint(letters);
	test_tolower(letters);
	test_toupper(letters);
	test_strlen(lettersChar);
	return(0);
}

/*

int		ft_strlen(char *s);
char	*ft_strcat(char *dest, char *src);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(char *str, char *to_find, unsigned int nb);
*/