#include "libft.h"

int intlen(long nb)
{
	int len;
	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while(nb > 0)
	{
		nb /= 10;
		len++;
	}
	return len;
}

char	*ft_itoa(int n)
{
	char *str;
	long nb;
	int i;
	nb = n;
	i = intlen(nb);
	str = (char *)malloc(sizeof(char)*(i + 1));
	if (!str)
			return (NULL);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb *= 1;
	}
	while(nb > 0)
	{
		str[i] = '0' + (nb % 10);
		nb /= 10;
		i--;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char s[30] = ft_ito
	printf("%s",ft_itoa(1337));
}
