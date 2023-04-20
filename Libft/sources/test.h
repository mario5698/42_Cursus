#ifndef TEST_H
# define TEST_H
void 	check(int c, int(*f)(int));
void 	test_isalnum(int *letters);
void	test_isalpha(int *letters);
void	test_isascii(int *letters);
void	test_isdigit(int *letters);
void	test_isprint(int *letters);
void	test_tolower(int *letters);
void	test_toupper(int *letters);
void	test_strcat(char *s1, char *s2);
void 	test_strlcpy(char *dest, char *src, unsigned int size);

#endif