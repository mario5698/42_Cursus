#include"libft.h"
#include<stdlib.h>

const char	*ft_strdup(const char *src)
{
	char	*dest;
	int		lenght;

	lenght=ft_strlen(src);
	dest = (char *) malloc (lenght+1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, src, lenght );
	return (dest);
}