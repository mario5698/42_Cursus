#ifndef LIBFT_H
# define LIBFT_H
typedef unsigned long ft_size_t;
int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *s);
int		ft_strncmp(const char *s1, const char *s2, ft_size_t n);
const char	*ft_strnstr(const char *str, const char *to_find, ft_size_t nb);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	test_strlen(char *s);
char	*ft_strcpy(char *dest, const char *src);
void 	ft_memset	(void *s, int c , ft_size_t n);
const char	*ft_strchr(const char *s, int c);
#endif