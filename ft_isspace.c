#include "libft.h"

int ft_isspace(int c)
{
	return((c == ' ' || c == '\n' || (c >= 9 && c <= 13)));
}
