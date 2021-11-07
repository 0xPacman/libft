/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:18:09 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/07 13:35:34 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr(char const *str)
{
	size_t	i;

	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}
#include <stdio.h>
int main()
{
	ft_putstr("test");
}
