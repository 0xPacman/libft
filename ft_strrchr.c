#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;

	i = 0;
	if (c == 0)
		return ((char *)s + i);
	while(s[i])
	{
		if(s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s[]="foo-bar-test-fix-it";
	printf("%s\n",strrchr(s,'-'));
	printf("%s",ft_strrchr(s,'-'));
}
*/
/*
char *xx_strrchr (const char *s, int c)
{
	char *rtnval = 0;

	while (*s++)
	{
		if (*s == c)
			rtnval = (char*) s;
	}
	return (rtnval);
}

#include <stdio.h>
#include <string.h>

int main () {
	int len;
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = xx_strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}
*/
