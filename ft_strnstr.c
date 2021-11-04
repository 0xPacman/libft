/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:15:21 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/02 19:27:32 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j] && s2[j])
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}

#include<stdio.h>
int main()
{
	char *searchingFor = "stackdummy";
	char *in = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n";
	printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    return 0;
}
