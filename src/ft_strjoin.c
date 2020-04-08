/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:57:28 by tlee              #+#    #+#             */
/*   Updated: 2020/02/28 16:59:49 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*arr;

	if (!s1 || !s2)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		arr[i] = s1[i];
		++i;
	}
	while (s2[j])
	{
		arr[i] = s2[j];
		++i;
		++j;
	}
	arr[i] = '\0';
	return (arr);
}
