/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:34:29 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/06 12:54:59 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_words_counter(char const *s, char c)
{
	unsigned int i; //in case of long string
	int count;

	i = 0;
	count = 0;
	while(s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t k;
	char **strs;

	i = 0;
	k = 0;
	strs = (char **)malloc(sizeof(char *) * ft_words_counter(s, c) + 1);
	if (strs == NULL)
		return (NULL);
	while(s[i])
	{
		while (s[i] == c) //stop when there's a word
			i++;
		j = i; //point to the word
		while(s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			strs[k] = ft_strndup(&s[j], i - j);
			k++;
		}
	}
	strs[k] = NULL;
	return (strs);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char s[120]="this is a test to split the string xxx";
	char **tabs = ft_split(s,' ');
	for(int i = 0;i<5;i++)
		printf("%s ",tabs[i]);
	free(tabs);
}
*/
