/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:32:59 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/02 14:45:45 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
				return (ft_strlen(src));
}

#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "hello there, 1337";
	char buff[19];
	int r;
	r = (int)ft_strlcpy(buff,s,5);
	printf("Copied '%s' into '%s', length %d\n",s,buff,r);
}
