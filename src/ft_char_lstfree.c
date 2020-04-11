/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_lstfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:33 by tlee              #+#    #+#             */
/*   Updated: 2020/03/08 22:24:32 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_char_lstfree(t_list_char **list)
{
	t_list_char *temp;

	if (!(*list))
		return ;
	while ((*list))
	{
		temp = (*list)->next;
		free((*list));
		(*list) = temp;
	}
}
