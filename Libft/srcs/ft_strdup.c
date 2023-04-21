#include "../sources/libft.h"
#include<stdlib.h>

const char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *) malloc (ft_strlen(src));
	if (!dest)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}