/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:51:38 by ngenoud           #+#    #+#             */
/*   Updated: 2021/11/12 17:12:27 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*src_start;

	src_start = src;
	if (dstsize > 1)
	{
		while (*src && dstsize > 1)
		{
			*dst++ = *src++;
			dstsize--;
		}
	}
	if (dstsize >= 1)
		*dst = '\0';
	while (*src)
		src++;
	return (src - src_start);
}
