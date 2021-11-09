#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s) - 1;
	while(s[i])
	{
		if(s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	if (!c)
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s[]="tfoo-bar-fix-i";
	char *s1=strrchr(s,'t'+256);
	char *s2=ft_strrchr(s,'t'+256);
	printf("%s\n",s1);
	printf("%s\n",s2);
	printf("cmp: %d",strcmp(s1,s2));
	}*/
/*
char *ft_strrchr(const char *s, int c)
{
	size_t i;
	char *str;

	str = NULL;
	i  = 0;
	while (s[i])
	{
		if (s[i++] == (char)c)
			str = (char *)str + i - 1;
	}
	if (!c)
		return ((char *)str + i);
	return(str);
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
