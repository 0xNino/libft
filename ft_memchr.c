/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:00:11 by ngenoud           #+#    #+#             */
/*   Updated: 2021/11/12 18:17:11 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(unsigned const char *)s != (unsigned char)c && n--)
	{
		if (!n)
			return (NULL);
		s++;
	}
	if (n == 0)
		return (NULL);
	return ((void *)s);
}
