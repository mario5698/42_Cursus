#ifndef LIBFT_H
# define LIBFT_H
typedef unsigned long ft_size_t;
int			ft_atoi(char *str);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_strcat(char *dest, char *src);
int			ft_strncmp(const char *s1, const char *s2, ft_size_t n);
const char	*ft_strnstr(const char *str, const char *to_find, ft_size_t nb);
int			ft_tolower(int c);
int			ft_toupper(int c);
ft_size_t	ft_strlen(const char *s);
char		*ft_strcpy(char *dest, const char *src);
const char	*ft_strchr(const char *s, int c);
const char	*ft_strrchr(const char *s, int c);
const char	*ft_strdup(const char *src);
void 		*ft_memcpy(void *restrict dest, const void *restrict src, ft_size_t n);
void		*ft_memset(void *s, int c, ft_size_t n);
void	 	*ft_memchr(const void *s, int c, ft_size_t n);
int			ft_memcmp(const void *s1, const void *s2, ft_size_t n);

#endif