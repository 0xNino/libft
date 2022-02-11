/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:36:58 by 0xNino            #+#    #+#             */
/*   Updated: 2022/02/11 22:37:13 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_dlist	*ft_dlstaddlstast(t_dlist *dlst, void *content)
{
	t_node	*node;

	if (!dlst)
		dlst = ft_dlstnew();
	node = malloc(sizeof(t_node));
	if (!node || !dlst)
		return (dlst);
	node->prev = dlst->last;
	node->next = NULL;
	node->content = content;
	if (dlst->last)
	{
		dlst->last->next = node;
		dlst->last = node;
	}
	else
	{
		dlst->first = node;
		dlst->last = node;
	}
	if (node)
		dlst->size++;
	return (dlst);
}
