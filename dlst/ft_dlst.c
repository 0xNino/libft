/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:39:58 by 0xNino            #+#    #+#             */
/*   Updated: 2022/02/11 16:41:29 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_dlist	*ft_dlnew(void)
{
	t_dlist	*dl;

	dl = malloc(sizeof(t_dlist));
	if (!dl)
		return (dl);
	dl->size = 0;
	dl->first = NULL;
	dl->last = NULL;
	return (dl);
}

t_dlist	*ft_dladdfirst(t_dlist *dl, void *content)
{
	t_node	*node;

	if (!dl)
		dl = ft_dlnew();
	node = malloc(sizeof(t_node));
	if (!node)
		return (dl);
	node->prev = NULL;
	node->next = dl->first;
	node->content = content;
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
	if (node)
		dl->size++;
	return (dl);
}

t_dlist	*ft_dladdlast(t_dlist *dl, void *content)
{
	t_node	*node;

	if (!dl)
		dl = ft_dlnew();
	node = malloc(sizeof(t_node));
	if (!node || !dl)
		return (dl);
	node->prev = dl->last;
	node->next = NULL;
	node->content = content;
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
	if (node)
		dl->size++;
	return (dl);
}

void	*ft_dlgetcontent(t_dlist *dl, size_t i)
{
	t_node	*node;

	if (!dl || i > dl->size)
		return (NULL);
	node = dl->first;
	while (i--)
		node = node->next;
	return (node->content);
}

void	ft_dlclear(t_dlist **dl)
{
	t_node	*current;
	t_node	*next;

	if (!*dl)
		return ;
	current = (*dl)->first;
	while (current)
	{
		next = current->next;
		free(current->content);
		free(current);
		current = next;
	}
	free(*dl);
	*dl = NULL;
}
