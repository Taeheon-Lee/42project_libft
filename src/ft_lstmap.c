/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 22:40:09 by tlee              #+#    #+#             */
/*   Updated: 2020/03/04 15:55:03 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = f(lst);
	new = (t_list *)malloc(sizeof(t_list));
	new->content = temp->content;
	new->content_size = temp->content_size;
	new->next = ft_lstmap(lst->next, f);
	free(temp);
	return (new);
}
/*
** lst is a pointer, so the sizeof(lst) is 8bites.
** If you want to need create 'fresh' list like lst, you have to use
** sizeof(t_list) instead of sizeof(lst), when you use malloc.
*/
