/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:45:23 by tlee              #+#    #+#             */
/*   Updated: 2020/02/28 16:59:58 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	cnt;
	size_t	temp;

	i = 0;
	j = 0;
	temp = ft_strlen(dst);
	if (dstsize == 0 || ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	else
		cnt = dstsize - ft_strlen(dst) - 1;
	while (dst[i])
		i++;
	while (j < cnt)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (temp + ft_strlen(src));
}
