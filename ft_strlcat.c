/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:20:53 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/07 11:25:22 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t slen;
	size_t dlen;
	size_t i;
	
	slen = ft_strlen(dst);
	dlen = ft_strlen(src);
	i = 0;
	if (size <= dlen)
		return (size + slen)
	while (src[i] && dlen < size - 1)
	{
		dst[dlen] = src[i];
		i++;
		dlen++;
	}
		dst[dlen] = '\0';
		return (ft_strlen(dst) + ft_strlen(src));
}
