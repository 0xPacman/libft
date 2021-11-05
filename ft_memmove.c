#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src > dst)
	{
		while(n--)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	else if (src > dst)
	{
		ft_memcpy(dest, src, len);
	}
	return (dst);
}
