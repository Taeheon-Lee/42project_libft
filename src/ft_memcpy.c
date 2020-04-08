/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:15:54 by tlee              #+#    #+#             */
/*   Updated: 2020/02/28 16:54:16 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	if (!num || dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
