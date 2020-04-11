/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:58:51 by tlee              #+#    #+#             */
/*   Updated: 2020/02/28 17:21:11 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list_char	*ft_char_lstnew(char c)
{
	t_list_char	*new_list;

	if (!(new_list = (t_list_char *)malloc(sizeof(t_list_char))))
		return (NULL);
	if (c)
		new_list->content = c;
	else
		new_list->content = 0;
	new_list->next = NULL;
	return (new_list);
}
