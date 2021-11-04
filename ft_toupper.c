//#include "libft.h"
/*
int ft_toupper(int c)
{
        if(c >= 'a' && c <= 'z')
                return (c - 32);
        return (c);
}*/
int ft_retard(int c)
{
	return((c >= 'a' && c <= 'z' )? c + 32 : c);
}
#include<stdio.h>
int main()
{
	printf("%c",ft_retard('a'));
}
