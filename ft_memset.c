#include "libft.h"

void		*ft_memset(void *b, int c, size_t n)
{
	while (n--)
		((char *)b)[n] = c;
	return (b);
}
