/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:45:09 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/09 16:30:12 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while(i < n)
	{
		if (*(str1 + i) != *(str2 + i))
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char*  p1   = s1;
    const unsigned char*  end1 = p1 + n;
    const unsigned char*  p2   = s2;
    int                   d = 0;
    while (1)
	{
        if (d || p1 >= end1) break;
        d = (int)*p1++ - (int)*p2++;
        if (d || p1 >= end1) break;
        d = (int)*p1++ - (int)*p2++;
        if (d || p1 >= end1) break;
        d = (int)*p1++ - (int)*p2++;
        if (d || p1 >= end1) break;
        d = (int)*p1++ - (int)*p2++;
    }
    return d;
}
*/
