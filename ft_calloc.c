/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:02:54 by 0xNino           #+#    #+#             */
/*   Updated: 2021/10/29 16:02:55 by 0xNino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	total;
	size_t	i;

	total = size * count;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (total--)
		ptr[i++] = 0;
	return ((void *)ptr);
}
