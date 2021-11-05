#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p = (unsigned char *)s;
	unsigned char *tofind = NULL;
	while ((s != NULL) && n--)
	{
		if(*p != (unsigned char)c)
			p++;
		else
		{
			tofind = p;
			break;
		}
	}
	return (tofind);
}
