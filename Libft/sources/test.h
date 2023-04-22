#ifndef TEST_H
# define TEST_H
void 	check(int c, int(*f)(int), int(*h)(int));
void	check_comparations(int c);
void 	test_isalnum(int *letters);
void	test_strlen(const char *s);
void	test_isalpha(int *letters);
void	test_isascii(int *letters);
void	test_isdigit(int *letters);
void	test_isprint(int *letters);
void	test_tolower(int *letters);
void	test_toupper(int *letters);
void	test_strcat(char *s1, char *s2);
void 	test_strlcpy(char *dest, char *src);
void 	test_strncmp(char *s1,char *s2, size_t n );
void	test_strnstr (char *str, char *to_find, unsigned int nb);
void	test_atoi(char *str);
void 	test_strchr(const char *str, int to_find);
void	test_strrchr(const char *s, int c);
void	test_strdup(const char *src);
void	test_memcpy(void *restrict dest, const void *restrict src, ft_size_t n);
void 	test_memset(void *s, int c, ft_size_t n);
void 	test_memchr(const void *s, int c, ft_size_t n);
void	test_memcmp(const void *s1, const void *s2, ft_size_t n);

#endif