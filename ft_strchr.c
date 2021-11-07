
/*char *ft_strchr(char *s, int c)
{
	int i;
	char *tmp;
	i = 0;
	if(s == NULL)
		return NULL;
	if(s[0] == c)
		return s;
	tmp = s;
	while(tmp[i])
	{
		if(tmp[i] == c)
			return (tmp + i);
		i++;
	}
	return NULL;

}
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return ((char *)memchr(s,c,ft_strlen(s) + 1));
}

/*char    *ft_strchr(const char *s, int c)
{
    int    i;
    char    *tmp;

    i = 0;
    tmp = s;
    if (c == 0)
        return (s);
    while (tmp[i])
    {
        if (tmp[i] == (char)c)
            return ((char *)(tmp + i));
        i++;
    }
    return (NULL);
}
*/
