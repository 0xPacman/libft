#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return ((char *)memchr(s,c,ft_strlen(s) + 1));
}
