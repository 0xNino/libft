/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:40:06 by 0xNino            #+#    #+#             */
/*   Updated: 2022/02/11 16:41:19 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_node	*ft_dlpushfirst(t_dlist *dl)
{
	t_node	*dst;

	if (!dl || !dl->first)
		return (NULL);
	dst = dl->first;
	if (dst && dl->first == dl->last)
	{
		dl->first = NULL;
		dl->last = NULL;
	}
	else
	{
		dl->first = dl->first->next;
		dl->first->prev = NULL;
		dst->next = NULL;
	}
	if (dl->size)
		dl->size--;
	return (dst);
}

t_node	*ft_dlpushlast(t_dlist *dl)
{
	t_node	*dst;

	if (!dl || !dl->first)
		return (NULL);
	dst = dl->last;
	if (dst && dl->first == dl->last)
	{
		dl->first = NULL;
		dl->last = NULL;
	}
	else
	{
		dl->last = dl->last->prev;
		dl->last->next = NULL;
		dst->prev = NULL;
	}
	if (dl->size)
		dl->size--;
	return (dst);
}

t_dlist	*ft_dlputfirst(t_dlist *dl, t_node *node)
{
	if (!node)
		return (dl);
	if (!dl)
		dl = ft_dlnew();
	if (!dl)
		return (NULL);
	node->prev = NULL;
	node->next = dl->first;
	if (dl->first)
	{
		dl->first->prev = node;
		dl->first = node;
	}
	else
	{
		dl->first = node;
		dl->last = node;
	}
	dl->size++;
	return (dl);
}

t_dlist	*ft_dlputlast(t_dlist *dl, t_node *node)
{
	if (!node)
		return (dl);
	if (!dl)
		dl = ft_dlnew();
	if (!dl)
		return (dl);
	node->prev = dl->last;
	node->next = NULL;
	if (dl->last)
	{
		dl->last->next = node;
		dl->last = node;
	}
	else
	{
		dl->first = node;
		dl->last = node;
	}
	dl->size++;
	return (dl);
}
