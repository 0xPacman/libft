/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:57:34 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/07 16:03:10 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = malloc(count * size); //calculate actual memory size in bytes and allocate it
	if (!ptr)
		return (NULL);
	ft_bzero(ptr,count*size); //initialize memory block to zero
	return (ptr);
}
