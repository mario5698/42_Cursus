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
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(char *str, char *to_find, unsigned int nb);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	test_strlen(char *s);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void memset	(void *s, int c , ft_size_t n);
#endif