/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:41:16 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/11 21:01:07 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	char *str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr((char *)set,*s1))
		i++;
	while (s1[j] && ft_strrchr(set, s1[j]))
		j--;
	if (i == 0)
		return(strdup(""));
	str = malloc(sizeof(char) * i - j + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1+i, ft_strlen(s1+i));
	return (str);
}
/*
int main()
{
	char s[]="xxxtestxx";
	char set[]="x";
	printf("%s",ft_strtrim(s, set));
}
*/
