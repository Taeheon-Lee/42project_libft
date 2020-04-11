/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 02:10:14 by tlee              #+#    #+#             */
/*   Updated: 2020/02/28 17:03:00 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strtrim(char const *s)
{
	char	*arr;
	int		i;
	int		temp;
	int		start;
	int		end;

	arr = (char *)malloc(sizeof(char));
	if (!arr)
		return (NULL);
	*arr = 0;
	if (!s)
		return (arr);
	temp = ft_strlen(s);
	start = ft_loc_start(s, temp);
	end = ft_loc_end(s, temp);
	if (start >= end)
		return (arr);
	arr = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!arr)
		return (NULL);
	i = -1;
	while (++start - 1 <= end)
		arr[++i] = s[start - 1];
	arr[++i] = 0;
	return (arr);
}
