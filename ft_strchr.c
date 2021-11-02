#include<stddef.h>
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
char    *ft_strchr(char *s, int c)
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
            return ((char*)(tmp + i));
        i = i + 1;
    }
    return (NULL);
}
#include<stdio.h>
int main()
{
	char x[10]="foobar";
	printf("%s",ft_strchr(x,'x'));
}
