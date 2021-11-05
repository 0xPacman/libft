#include "libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		((char *)s)[n] = c;
	return (s);
}
