/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstunlink.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <vheran@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 08:45:47 by vheran            #+#    #+#             */
/*   Updated: 2022/04/12 10:12:32 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_dlstunlink(t_node *node, t_dlist *dlst)
{
	t_node	*prev;
	t_node	*next;

	prev = node->prev;
	next = node->next;
	if (prev)
		prev->next = next;
	if (next)
		next->prev = prev;
	if (node)
	{
		dlst->size--;
		free(node->content);
		free(node);
	}
}
