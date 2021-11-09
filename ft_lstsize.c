/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:32:00 by 0xNino            #+#    #+#             */
/*   Updated: 2021/11/09 14:36:30 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	if (lst->next == NULL)
		return (1);
	return (ft_lstsize(lst->next) + 1);
}
/*
int	main(void)
{
	t_list	*lst;
	int		actual;
	int		expected;

	lst = ft_lstnew(strdup("1"));
	lst->next = ft_lstnew(strdup("2"));
	lst->next->next = ft_lstnew(strdup("3"));
	expected = 3;
	actual = ft_lstsize(lst);
	printf("Expected\t: %d\nActual\t\t: %d\n", expected, actual);
}
*/