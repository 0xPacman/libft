/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:41:16 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/06 15:23:33 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	char *str;
	
	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (*s1 && ft_strchr((char *)set,*s1))
		s1++;
	i = ft_strlen(s1);
	if (i && ft_strchr(set, s1[i - 1]))
		i--;
	str = ft_substr((char *)s1, 0, i);
	return (ft_substr(s1, i, l));
}
