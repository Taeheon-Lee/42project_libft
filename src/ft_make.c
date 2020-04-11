/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 01:45:08 by tlee              #+#    #+#             */
/*   Updated: 2020/02/28 16:53:07 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_make(char const *s, int len_word, int loc)
{
	char	*arr1;
	int		cnt_arr1;

	arr1 = (char *)malloc(sizeof(char) * (len_word + 1));
	cnt_arr1 = 0;
	while (cnt_arr1 < len_word)
	{
		arr1[cnt_arr1] = s[loc];
		loc++;
		cnt_arr1++;
	}
	arr1[cnt_arr1] = '\0';
	return (arr1);
}
