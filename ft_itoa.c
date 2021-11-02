#include <stdlib.h>

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

char *ft_itoi(int nb)
{
	char *str;
	long n;
	int i;
	n = nb;
	i = intlen(n);
	str = (char *)malloc(sizeof(char)*(i + 1));
	if (!str)
			return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return str;
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= 1;
	}
	while(n > 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	printf("%d",itoa(1337));
}
