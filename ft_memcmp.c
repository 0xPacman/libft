/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:45:09 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/02 13:21:07 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *str1;
	char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
			i++;
		}
	} 
	return (0);
}
#include<string.h>
#include<stdio.h>
int main()
{
	char s[20] = "foo";
	char r[20] = "bar";
	printf("%d",memcmp(s,r,2));
}
