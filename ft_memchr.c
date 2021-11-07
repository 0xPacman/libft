#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n && (*(unsigned char *)s != (unsigned char)c))
	{
		s = (unsigned char *) s + 1;
		n--;
	}
	if (n)
		return ((void *)s);
	else
		return (NULL);
}
