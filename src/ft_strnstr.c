/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 22:28:11 by tlee              #+#    #+#             */
/*   Updated: 2020/02/28 17:01:51 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t i;
	size_t j;

	if (!*str2)
		return ((char*)str1);
	i = 0;
	while (str1[i] != '\0' && i < len)
	{
		if (str1[i] == str2[0])
		{
			j = 1;
			while (str2[j] && str1[i + j] == str2[j] && (i + j) < len)
				++j;
			if (str2[j] == '\0')
				return ((char*)&str1[i]);
		}
		++i;
	}
	return (0);
}
