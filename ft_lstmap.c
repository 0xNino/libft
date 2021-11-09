/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:01:29 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/09 18:35:40 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	if (!lst)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
		return (NULL);
	if (lst->next)
		newlst->next = ft_lstmap(lst->next, f, del);
	return (newlst);
}
