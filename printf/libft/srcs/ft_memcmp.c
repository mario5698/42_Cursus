
#include "../sources/libft.h"

int	ft_memcmp(const void *s1, const void *s2, ft_size_t n)
{
	int	i ;
	char *st1;
	char *st2;

	st1 = (char *)s1; 
	st2 = (char *) s2;
	i = 0;
	if (n < 1)
		return (0);
	n--;
	while (st1[i] == st2[i] && st1[i] != '\0' && st2[i] != '\0' && n--)
		i++;
	return (st1[i] - st2[i]);
}
