/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:03:04 by tlee              #+#    #+#             */
/*   Updated: 2020/02/28 16:44:01 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	num;
	long	sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		++i;
	if (str[i] == 43)
		++i;
	else if (str[i] == 45)
	{
		sign = -1;
		++i;
	}
	while (str[i++] >= 48 && str[i - 1] <= 57)
		num = num * 10 + str[i - 1] - 48;
	if (sign == -1 && num < 0)
		return (0);
	if (sign == 1 && num < 0)
		return (-1);
	return (sign * num);
}
