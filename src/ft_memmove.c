/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:00:14 by tlee              #+#    #+#             */
/*   Updated: 2020/04/29 22:14:50 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = (int)num;
	if (dest == src)
		return (dest);
	else if (dest < src)
	{
		dest = ft_memcpy(dest, src, num);
		return (dest);
	}
	else
	{
		s = (unsigned char *)src;
		d = (unsigned char *)dest;
		while (--i >= 0)
		{
			d[i] = s[i];
		}
		return (dest);
	}
}
/*
** The Main mechanism is using buffer.
** But, to use memory lessly, make conditions.
** If dest is larger than src, start from last of source
** to avoid memory overlap.
** If dest is smaller than src, start from first of source
** to avoid memory overlap.
*/
