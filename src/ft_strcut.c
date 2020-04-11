/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 03:54:22 by tlee              #+#    #+#             */
/*   Updated: 2020/03/09 04:04:23 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcut(char *str, char c)
{
	char	*rtnstr;
	size_t	str_len;
	size_t	i;

	if (!str)
		return (NULL);
	i = 0;
	str_len = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == c)
		{
			i += 1;
			if (!(rtnstr = ft_strnew(str_len - i)))
				return (NULL);
			rtnstr = ft_strcpy(rtnstr, &(str[i]));
			free(str);
			return (rtnstr);
		}
		i++;
	}
	free(str);
	return (ft_strnew(0));
}
