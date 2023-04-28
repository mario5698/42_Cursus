#include"../sources/libft.h"
void	*ft_memmove(void *dest, const void *src, ft_size_t n)
{
	ft_size_t	i;
	char *localdest;
	char *localsrc;

	localdest = (char*)dest;
	localsrc = (char *)src;
	i = 0;
	while (localsrc[i] != '\0' && n--)
	{
		localdest[i] = localsrc[i];
		i++;
	}
		localdest[i] = '\0';
	return (dest);
}