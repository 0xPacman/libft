/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:33:10 by ahjadani          #+#    #+#             */
/*   Updated: 2021/11/08 21:17:50 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long sum;
	size_t sign;
	size_t i;

	sum = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if(str[i] == '+')
		i++;
	if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
	while (ft_isdigit(str[i]))
	{
		sum = sum * 10 + str[i] - 48;
		i++;
	}
	return ((int)(sum * sign));
}
