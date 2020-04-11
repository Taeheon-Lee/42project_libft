/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:46:48 by tlee              #+#    #+#             */
/*   Updated: 2020/02/28 17:02:27 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	const char	*s1;
	const char	*s2;

	if (!*str2)
		return ((char *)str1);
	while (*str1)
	{
		s1 = str1;
		s2 = str2;
		while (*s1 && *s2 && !(*s1 - *s2))
		{
			s1++;
			s2++;
		}
		if (!*s2)
			return ((char *)str1);
		str1++;
	}
	return (NULL);
}
