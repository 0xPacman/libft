/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:41:16 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/05 09:59:05 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t l;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set,s1[i]))
		i++;
	l = ft_strlen(&s1[i]);
	if (l)
		while (s1[i + l - 1] && ft_strrchr(set, s1[i + l - 1]))
			l--;
	return (ft_substr(s1, i, l));
}
#include <stdio.h>
int main()
{
	//	char s[40]="xxxfoobarxxx";
	//char set[10]="xxx";
	//printf("%s",ft_strtrim(s,set));
	printf("%lu",ft_strlen("test"));
}
*/
