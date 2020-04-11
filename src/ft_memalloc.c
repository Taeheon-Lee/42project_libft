/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 22:21:54 by tlee              #+#    #+#             */
/*   Updated: 2020/02/28 16:53:25 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	size_t			i;
	unsigned char	*arr;

	i = 0;
	arr = (unsigned char *)malloc(sizeof(unsigned char) * size);
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
