/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:35:38 by tlee              #+#    #+#             */
/*   Updated: 2020/03/04 15:53:40 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		len_word;
	int		cnt_arr2;
	char	**arr2;

	i = 0;
	cnt_arr2 = 0;
	if (!s || !(arr2 = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			len_word = 0;
			i = i - 1;
			while (s[++i] != c && s[i])
				len_word++;
			arr2[cnt_arr2++] = ft_make(s, len_word, i - len_word);
		}
		else
			i++;
	}
	arr2[cnt_arr2] = 0;
	return (arr2);
}
