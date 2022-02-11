/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:39:15 by 0xNino            #+#    #+#             */
/*   Updated: 2022/02/11 22:39:59 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_dlstclear(t_dlist **dlst)
{
	t_node	*current;
	t_node	*next;

	if (!*dlst)
		return ;
	current = (*dlst)->first;
	while (current)
	{
		next = current->next;
		free(current->content);
		free(current);
		current = next;
	}
	free(*dlst);
	*dlst = NULL;
}
