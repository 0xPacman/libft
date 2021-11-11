#include "libft.h"
/*
char *ft_strrchr(const char *s, int c)
{
	char *str;

	char ch;

	str = (char *)0;
	while (s)
	{
		ch = *s;
		if (ch == (char)c)
			str = (char *)s;
		s++;
	}
	return (str);
}
*//*
char * ft_strrchr(const char *cp, int ch)
{
    char *save;
    char c;
	save = (char *)0;
	if (ch == '\0')
		return ((char *)cp + ft_strlen(cp));
    while ((c = *cp)) {
	if (c == ch)
	    save = (char *) cp;
		cp++;
    }

    return save;
}
  */
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s[]="there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *s1=strrchr(s,'\0');
	char *s2=ft_strrchr(s,'\0');
	printf("%s\n",s1);
	printf("%s\n",s2);
	printf("cmp: %d",strcmp(s1,s2));
}


*/
char *ft_strrchr(const char *s, int c)
{
	long long i;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return(NULL);
}

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

*/
